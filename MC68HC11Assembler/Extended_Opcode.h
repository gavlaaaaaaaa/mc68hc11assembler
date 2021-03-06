//
//  Extended_Opcode.h
//  MC68HC11Assembler
//
//  Created by Lewis Gavin on 20/12/2014.
//  Copyright (c) 2014 Lewis Gavin. All rights reserved.
//

#ifndef __MC68HC11Assembler__Extended_Opcode__
#define __MC68HC11Assembler__Extended_Opcode__

#include <iostream>
#include "Opcode.h"

class Extended_Opcode : public Opcode{
	
public:
	
	Extended_Opcode() : Opcode(){}
	
	Extended_Opcode(std::string name, int value) : Opcode(name, value, false, false){}
	
};

#endif /* defined(__MC68HC11Assembler__Extended_Opcode__) */
