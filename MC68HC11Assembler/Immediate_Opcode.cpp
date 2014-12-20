//
//  Immediate_Opcode.cpp
//  MC68HC11Assembler
//
//  Created by Lewis Gavin on 20/12/2014.
//  Copyright (c) 2014 Lewis Gavin. All rights reserved.
//

#include "Immediate_Opcode.h"

void Immediate_Opcode::set_two_bytes(bool two_bytes){
	this->two_bytes = two_bytes;
}

bool Immediate_Opcode::get_two_bytes(){
	return two_bytes;
}