//
//  Inherent_Opcode.h
//  MC68HC11Assembler
//
//  Created by Lewis Gavin on 20/12/2014.
//  Copyright (c) 2014 Lewis Gavin. All rights reserved.
//

#ifndef __MC68HC11Assembler__Inherent_Opcode__
#define __MC68HC11Assembler__Inherent_Opcode__

#include <iostream>

#include "Opcode.h"

class Inherent_Opcode : public Opcode{
	
public:
	
	Inherent_Opcode() : Opcode(){}
	
	Inherent_Opcode(std::string name, int value) : Opcode(name, value, false, false){}
	
	bool operator==(Opcode& rhs){
		if(this->get_name() == rhs.get_name()){
			return true;
		}
		else{
			return false;
		}
	}
	
};

#endif /* defined(__MC68HC11Assembler__Inherent_Opcode__) */
