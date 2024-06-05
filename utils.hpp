#ifndef UTILS_HPP
#define UTILS_HPP

#include <string>

std::vector<std::string> splitBy(std::string, char);
std::string extractArgs(std::string);
std::string extractCommand(std::string);
void strToLower(std::string&);
bool strContains(std::string, std::string);

#endif