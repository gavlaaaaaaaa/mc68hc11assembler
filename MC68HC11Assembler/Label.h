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

class Label{

public:
	
	Label(){
#warning TODO: Global counter variable to be used when setting default label name
		name = "Label1";
		value = "";
	}
	
	Label(std::string name, std::string value){
		this->name = name;
		this->value = value;
	}
	
	void set_name(std::string name);
	void set_value(int value);
	
	std::string get_name();
	int get_value();

private:
	
	std::string name;
	std::string value;
};
#endif /* defined(__MC68HC11Assembler__Label__) */
