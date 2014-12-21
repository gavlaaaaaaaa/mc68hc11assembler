//
//  Token.cpp
//  MC68HC11Assembler
//
//  Created by Lewis Gavin on 21/12/2014.
//  Copyright (c) 2014 Lewis Gavin. All rights reserved.
//

#include "Token.h"

void Token::set_name(std::string name){
	this->name = name;
}

void Token::set_value(std::string value){
	this->value = value;
}

std::string Token::get_name(){
	return this->name;
}

std::string Token::get_value(){
	return this->value;
}
