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
	std::string int2hex( int i);
	
	/* removes leading and trailing whitespace from string */
	std::string trim(const std::string& str, const std::string& whitespace = " \t");
	
	/* splits string up by whitespace into vector */
	std::vector<std::string> split(const std::string &s, char delim, std::vector<std::string> &elems);
	
}

#endif /* defined(__MC68HC11Assembler__utils__) */
