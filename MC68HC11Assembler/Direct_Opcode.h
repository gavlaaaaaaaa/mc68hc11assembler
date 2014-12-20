//
//  Direct_Opcode.h
//  MC68HC11Assembler
//
//  Created by Lewis Gavin on 20/12/2014.
//  Copyright (c) 2014 Lewis Gavin. All rights reserved.
//

#ifndef __MC68HC11Assembler__Direct_Opcode__
#define __MC68HC11Assembler__Direct_Opcode__

#include <iostream>
#include "Opcode.h"

class Direct_Opcode : public Opcode{
	
public:
	
	Direct_Opcode() : Opcode(){}
	
	Direct_Opcode(std::string name, int value, bool bit, bool branch) : Opcode(name, value, bit, branch){}
	
};

#endif /* defined(__MC68HC11Assembler__Direct_Opcode__) */
