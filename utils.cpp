#include "utils.hpp" // string

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