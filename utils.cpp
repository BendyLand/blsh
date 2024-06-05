#include <vector>
#include "utils.hpp" // string

std::string extractArgs(std::string input)
{
    size_t length = input.size();
    return input.substr(input.find_first_of(" ")+1, length);
}

std::string extractCommand(std::string input)
{
   return input.substr(0, input.find_first_of(" "));
}

std::vector<std::string> splitBy(std::string src, char delim) 
{
    std::vector<std::string> result;
    std::string current = "";
    for (char c : src) {
        if (c != delim) {
            current += c;
        }
        else {
            result.push_back(current);
            current = "";
        }
    }
    return result;
}

bool strContains(std::string source, std::string substr)
{
    if (source.find(substr) != std::string::npos) {
        return true;
    }
    return false;
}

void strToLower(std::string& str)
{
    for (size_t i = 0; i < str.size(); i++) {
        str[i] = tolower(str[i]);
    }
}