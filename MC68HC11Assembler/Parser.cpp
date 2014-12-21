//
//  Parser.cpp
//  MC68HC11Assembler
//
//  Created by Lewis Gavin on 21/12/2014.
//  Copyright (c) 2014 Lewis Gavin. All rights reserved.
//

#include "Parser.h"


void Parser::initialise_instruction_set(){

	instruction_set.push_back(std::dynamic_pointer_cast<Opcode>(std::make_shared<Inherent_Opcode>("ABA", 0x1B)));
	instruction_set.push_back(std::dynamic_pointer_cast<Opcode>(std::make_shared<Inherent_Opcode>("ABX", 0x3A)));
	instruction_set.push_back(std::dynamic_pointer_cast<Opcode>(std::make_shared<Inherent_Opcode>("ABY", 0x183A)));
	instruction_set.push_back(std::dynamic_pointer_cast<Opcode>(std::make_shared<Immediate_Opcode>("ADCA", 0x89, false)));
	instruction_set.push_back(std::dynamic_pointer_cast<Opcode>(std::make_shared<Direct_Opcode>("ADCA", 0x99, false, false)));
	instruction_set.push_back(std::dynamic_pointer_cast<Opcode>(std::make_shared<Extended_Opcode>("ADCA", 0xB9)));
	instruction_set.push_back(std::dynamic_pointer_cast<Opcode>(std::make_shared<Indirect_Opcode>("ADCA", 0xA9, false, false, false)));
	instruction_set.push_back(std::dynamic_pointer_cast<Opcode>(std::make_shared<Indirect_Opcode>("ADCA", 0x18A9, false, false, true)));
	


}

void Parser::parse_line(std::string line){
	
	if (line.empty()){
		std::cout << "parse_line: line parameter empty" << std::endl;
		return;
	}
	/* remove leading and trailing space */
	line = utils::trim(line);
	
	if (line[0] == ';'){
		/* comment */
		return;
	}
	
	/* split the line by whitespace */
	std::vector<std::string> line_tokens;
	utils::split(line, ' ', line_tokens);
	
	size_t length = line_tokens.size();
	
	if(length == 1){
		/* Inherent Opcode or Branch Label */
		auto it = std::find(instruction_set.begin(), instruction_set.end(), std::make_shared<Inherent_Opcode>("ABA", 0));
		if(it != instruction_set.end()){
			/* Inherent Opcode found, add to tokens and continue */
			std::cout << *it << std::endl;
		}
	}
	
	
	
}

void Parser::parse_file(std::ifstream &file){
	
	if(!file.good()){
		std::cout << "parse_file: bad file" << std::endl;
		exit(1);
	}
	
	std::string line;
	while(std::getline(file, line)){
		parse_line(line);
	}
	
	std::cout << "Parsing complete" << std::endl;
}