//
//  Opcode.cpp
//  MC68HC11Assembler
//
//  Created by Lewis Gavin on 20/12/2014.
//  Copyright (c) 2014 Lewis Gavin. All rights reserved.
//

#include "Opcode.h"

void Opcode::set_value(int value){
	this->value = value;
}

void Opcode::set_bit(bool bit){
	this->bit = bit;
}

void Opcode::set_branch(bool branch){
	this->branch = branch;
}

int Opcode::get_value(){
	return this->value;
}

bool Opcode::get_bit(){
	return this->bit;
}

bool Opcode::get_branch(){
	return this->branch;
}




