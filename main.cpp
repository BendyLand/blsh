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
        string command = extractCommand(input);
        int action = -2;
        if (command == "exit") { 
            action = -1;
        }
        else if (command == "echo") {
            action = 0;
        }
        string args = extractArgs(input);
        switch (action) {
        case -1:
            goto End;
            break;
        case 0:
            cout << args << endl;
            break;
        default:
            cout << "Invalid command.\nTo see a list of commands, please type `help`." << endl;
            break;
        }
    }
    End:
    cout << "Exiting shell...\nGoodbye!" << endl;
}