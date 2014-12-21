//
//  main.cpp
//  MC68HC11Assembler
//
//  Created by Lewis Gavin on 19/12/2014.
//  Copyright (c) 2014 Lewis Gavin. All rights reserved.
//

#include <iostream>
#include <fstream>
#include "Parser.h"

int main(int argc, const char * argv[])
{
	std::ifstream file("/Users/Gav/Documents/Programming/MC68HC11Assembler/exampleprog.txt");
	Parser parser;
	parser.parse_file(file);
    
}

