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

class Opcode{
	
public:
	Opcode(){
		this->name = "";
		this->value = 0;
		this->bit = false;
		this->branch = false;
	}
	
	Opcode(std::string name, int value, bool bit, bool branch){
		this->name = name;
		this->value = value;
		this->bit = false;
		this->branch = false;
	}
	
	void set_name(std::string name);
	void set_value(int value);
	void set_bit(bool bit);
	void set_branch(bool branch);
	
	std::string get_name();
	int get_value();
	bool get_bit();
	bool get_branch();
	
private:
	
	std::string name;
	int value;
	bool bit;
	bool branch;
	
	
};
#endif /* defined(__MC68HC11Assembler__Opcode__) */
