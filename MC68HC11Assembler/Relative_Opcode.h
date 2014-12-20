//
//  Relative_Opcode.h
//  MC68HC11Assembler
//
//  Created by Lewis Gavin on 20/12/2014.
//  Copyright (c) 2014 Lewis Gavin. All rights reserved.
//

#ifndef __MC68HC11Assembler__Relative_Opcode__
#define __MC68HC11Assembler__Relative_Opcode__

#include <iostream>
#include "Opcode.h"

class Relative_Opcode : public Opcode{
	
public:
	
	Relative_Opcode() : Opcode(){}
	
	Relative_Opcode(std::string name, int value) : Opcode(name, value, false, true){}
	
};

#endif /* defined(__MC68HC11Assembler__Relative_Opcode__) */
