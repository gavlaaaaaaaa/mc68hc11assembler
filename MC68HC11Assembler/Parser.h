//
//  Parser.h
//  MC68HC11Assembler
//
//  Created by Lewis Gavin on 21/12/2014.
//  Copyright (c) 2014 Lewis Gavin. All rights reserved.
//

#ifndef __MC68HC11Assembler__Parser__
#define __MC68HC11Assembler__Parser__

#include <iostream>
#include <fstream>
#include "Token.h"
#include "Opcode.h"
#include "Immediate_Opcode.h"
#include "Indirect_Opcode.h"
#include "Direct_Opcode.h"
#include "Extended_Opcode.h"
#include "Inherent_Opcode.h"
#include "Relative_Opcode.h"


class Parser{
	
public:
	
	Parser(){ initialise_instruction_set(); }
	
	void parse_file(std::ifstream &file);
private:
	
	std::vector< std::shared_ptr<Opcode> > instruction_set;
	std::vector< std::shared_ptr<Token> > tokens;
	
	
	void parse_line(std::string line);
	void initialise_instruction_set();
};

#endif /* defined(__MC68HC11Assembler__Parser__) */
