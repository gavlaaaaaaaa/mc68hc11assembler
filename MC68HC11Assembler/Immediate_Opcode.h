//
//  Immediate_Opcode.h
//  MC68HC11Assembler
//
//  Created by Lewis Gavin on 20/12/2014.
//  Copyright (c) 2014 Lewis Gavin. All rights reserved.
//

#ifndef __MC68HC11Assembler__Immediate_Opcode__
#define __MC68HC11Assembler__Immediate_Opcode__

#include <iostream>
#include "Opcode.h"

class Immediate_Opcode : public Opcode{
	
public:
	
	Immediate_Opcode() : Opcode(){
		two_bytes = false;
	}
	
	Immediate_Opcode(std::string name, int value, bool two_bytes) : Opcode(name, value, false, false){
		two_bytes = false;
	}
	
	
	void set_two_bytes(bool two_bytes);
	bool get_two_bytes();
	
private:
	
	bool two_bytes;
};


#endif /* defined(__MC68HC11Assembler__Immediate_Opcode__) */
