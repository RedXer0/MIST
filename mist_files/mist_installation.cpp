#include <iostream>
#include <string>
#include <cstdlib>
#include <fstream>
#include <sstream>

#define SIZE 100

int installation(){
    std::string alias_commands = "/home/xero/Mist/mists_commands/mist_aliases.txt";
    std::string lines_of_commands;
    std::string alias_commands_array[SIZE];
    int x = 0;
    int count = 0;

    std::ifstream alias_file(alias_commands);
    if (!alias_file.is_open()) {
        std::cout << "Error opening files" << std::endl;
        return 1;
    }

    while (std::getline(alias_file, lines_of_commands)) {
        alias_commands_array[count] = lines_of_commands;
        count++;
    }
    alias_file.close();

    if (count == 0) {
        std::cout << "No commands found in the file." << std::endl;
        return 1;
    }

    FILE* bash_aliases;
    bash_aliases = fopen("/home/xero/.bash_aliases", "w");

    if (bash_aliases == nullptr) {
        std::cout << "Error opening .bash_aliases file." << std::endl;
        return 1;
    }

    for (int i = 0; i < count; i++){
        fprintf(bash_aliases, "%s\n", alias_commands_array[i].c_str());
    }
    fclose(bash_aliases);
    return 0;
}