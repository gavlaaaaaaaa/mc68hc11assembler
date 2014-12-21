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
#include "Opcode.h"
#include "Immediate_Opcode.h"
#include "Indirect_Opcode.h"
#include "Direct_Opcode.h"
#include "Extended_Opcode.h"
#include "Inherent_Opcode.h"
#include "Relative_Opcode.h"

class Parser{
	
public:
	
	Parser(){}
	
private:
	
	void parse_line(std::string line);
	
	std::vector< std::shared_ptr<Opcode> > initialise_instruction_set();
};

#endif /* defined(__MC68HC11Assembler__Parser__) */
