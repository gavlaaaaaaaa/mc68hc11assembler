//
//  Indirect_Opcode.h
//  MC68HC11Assembler
//
//  Created by Lewis Gavin on 20/12/2014.
//  Copyright (c) 2014 Lewis Gavin. All rights reserved.
//

#ifndef __MC68HC11Assembler__Indirect_Opcode__
#define __MC68HC11Assembler__Indirect_Opcode__

#include <iostream>

#include "Opcode.h"

class Indirect_Opcode : public Opcode{
	
public:
	
	Indirect_Opcode() : Opcode(){
		two_bytes = false;
	}
	
	Indirect_Opcode(std::string name, int value, bool bit, bool branch, bool two_bytes) : Opcode(name, value, bit, branch){
		two_bytes = false;
	}
	
	void set_two_bytes(bool two_bytes);
	bool get_two_bytes();
	
private:
	
	bool two_bytes;
};

#endif /* defined(__MC68HC11Assembler__Indirect_Opcode__) */
