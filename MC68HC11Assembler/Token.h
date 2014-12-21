//
//  Token.h
//  MC68HC11Assembler
//
//  Created by Lewis Gavin on 21/12/2014.
//  Copyright (c) 2014 Lewis Gavin. All rights reserved.
//

#ifndef __MC68HC11Assembler__Token__
#define __MC68HC11Assembler__Token__

#include <iostream>
#include <string>

class Token{
	
public:
	
	Token(){
		name = "Token1";
		value = "";
	}
	
	Token(std::string name, std::string value){
		this->name = name;
		this->value = value;
	}
	
	void set_name(std::string name);
	void set_value(std::string value);
	
	std::string get_name();
	std::string get_value();
	
private:
	
	std::string name;
	std::string value;
	
};
#endif /* defined(__MC68HC11Assembler__Token__) */
