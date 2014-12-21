//
//  Label.h
//  MC68HC11Assembler
//
//  Created by Lewis Gavin on 20/12/2014.
//  Copyright (c) 2014 Lewis Gavin. All rights reserved.
//

#ifndef __MC68HC11Assembler__Label__
#define __MC68HC11Assembler__Label__

#include <iostream>
#include <string>
#include "Token.h"

class Label : public Token{

public:
	
	Label(): Token(){}
	
	Label(std::string name, std::string value): Token(name, value){}

};
#endif /* defined(__MC68HC11Assembler__Label__) */
