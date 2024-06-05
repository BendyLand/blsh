#include <iostream>
#include "utils.hpp"

using namespace std;

void listenForCommands();

int main() 
{
    cout << "Hello blsh!" << endl;
    listenForCommands();
}

void listenForCommands()
{
    while (true) {
        string input = "";
        getline(cin, input);
        strToLower(input);
        int action;
        if (input == "exit") { 
            action = -1;
        }
        switch (action) {
        case -1:
            goto End;
            break;
        }
    }
    End:
    cout << "Exiting shell...\nGoodbye!" << endl;
}