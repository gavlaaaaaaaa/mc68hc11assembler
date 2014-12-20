//
//  Indirect_Opcode.cpp
//  MC68HC11Assembler
//
//  Created by Lewis Gavin on 20/12/2014.
//  Copyright (c) 2014 Lewis Gavin. All rights reserved.
//

#include "Indirect_Opcode.h"

void Indirect_Opcode::set_two_bytes(bool two_bytes){
	this->two_bytes = two_bytes;
}

bool Indirect_Opcode::get_two_bytes(){
	return two_bytes;
}