//
//  utils.h
//  MC68HC11Assembler
//
//  Created by Lewis Gavin on 21/12/2014.
//  Copyright (c) 2014 Lewis Gavin. All rights reserved.
//

#ifndef __MC68HC11Assembler__utils__
#define __MC68HC11Assembler__utils__


#include <iostream>
#include <sstream>
#include <string>
#include <iomanip>
#include <vector>



namespace utils{
	

	/* Converts an integer into a hex string */
	template< typename T>
	std::string int2hex( T i);
	
	
}

#endif /* defined(__MC68HC11Assembler__utils__) */
