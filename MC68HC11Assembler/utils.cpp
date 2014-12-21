//
//  utils.cpp
//  MC68HC11Assembler
//
//  Created by Lewis Gavin on 21/12/2014.
//  Copyright (c) 2014 Lewis Gavin. All rights reserved.
//

#include "utils.h"

template< typename T >
std::string utils::int2hex( T i ){
	std::stringstream stream;
	stream << std::showbase
	<< std::setfill ('0') << std::setw(sizeof(T)*2)
	<< std::hex << i;
	return stream.str();
}


