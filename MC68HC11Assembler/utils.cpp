//
//  utils.cpp
//  MC68HC11Assembler
//
//  Created by Lewis Gavin on 21/12/2014.
//  Copyright (c) 2014 Lewis Gavin. All rights reserved.
//

#include "utils.h"


std::string utils::int2hex( int i ){
	std::stringstream stream;
	stream << std::showbase
	<< std::setfill ('0') << std::setw(sizeof(int)*2)
	<< std::hex << i;
	return stream.str();
}

std::string utils::trim(const std::string& str, const std::string& whitespace){
    const auto strBegin = str.find_first_not_of(whitespace);
    if (strBegin == std::string::npos)
        return ""; // no content
	
    const auto strEnd = str.find_last_not_of(whitespace);
    const auto strRange = strEnd - strBegin + 1;
	
    return str.substr(strBegin, strRange);
}

std::vector<std::string> utils::split(const std::string &s, char delim, std::vector<std::string> &elems) {
    std::stringstream ss(s);
    std::string item;
    while (std::getline(ss, item, delim)) {
        elems.push_back(item);
    }
    return elems;
}