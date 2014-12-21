//
//  Opcode.h
//  MC68HC11Assembler
//
//  Created by Lewis Gavin on 20/12/2014.
//  Copyright (c) 2014 Lewis Gavin. All rights reserved.
//

#ifndef __MC68HC11Assembler__Opcode__
#define __MC68HC11Assembler__Opcode__

#include <iostream>
#include <vector>
#include <string>
//#include "utils.h"
#include "Token.h"


class Opcode: public Token{
	
public:
	Opcode() : Token(){
		this->value = 0;
		this->bit = false;
		this->branch = false;
	}
	
	Opcode(std::string name, int value, bool bit, bool branch): Token(name, ""){
		this->value = value;
		this->bit = false;
		this->branch = false;
	}
	
	void set_value(int value);
	void set_bit(bool bit);
	void set_branch(bool branch);
	
	int get_value();
	bool get_bit();
	bool get_branch();
	
	
private:
	
	int value;
	bool bit;
	bool branch;
	
	
	
	
};
#endif /* defined(__MC68HC11Assembler__Opcode__) */
