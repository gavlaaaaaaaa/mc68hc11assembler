//
//  Parser.cpp
//  MC68HC11Assembler
//
//  Created by Lewis Gavin on 21/12/2014.
//  Copyright (c) 2014 Lewis Gavin. All rights reserved.
//

#include "Parser.h"


std::vector< std::shared_ptr<Opcode> > Parser::initialise_instruction_set(){
	
	std::vector< std::shared_ptr<Opcode> > instruction_set;
	
	instruction_set.push_back(std::dynamic_pointer_cast<Opcode>(std::make_shared<Inherent_Opcode>("ABA", 0x1B)));
	instruction_set.push_back(std::dynamic_pointer_cast<Opcode>(std::make_shared<Inherent_Opcode>("ABX", 0x3A)));
	instruction_set.push_back(std::dynamic_pointer_cast<Opcode>(std::make_shared<Inherent_Opcode>("ABY", 0x183A)));
	instruction_set.push_back(std::dynamic_pointer_cast<Opcode>(std::make_shared<Immediate_Opcode>("ADCA", 0x89, false)));

	
	
	return instruction_set;
	

}