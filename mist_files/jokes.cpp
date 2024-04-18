#include <iostream>
#include <fstream>
#include <string>
#include <random>
#include <cstdlib>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <stdexcept>

#define SIZE 90000



int main(){
    srand(time(NULL));
    std::string reactions[] = {"~/Mist/mist_bash_files/./haha.sh | lolcat", "~/Mist_1.4.0/mist_bash_files/./lmfao.sh | lolcat", "~/Mist_1.4.0/mist_bash_files/./lol.sh | lolcat",};
    std::string jokes = "/home/xero/Mist/jokes/jokes.txt";
    std::string punchlines = "/home/xero/Mist/jokes/punchlines.txt";
    std::string lines_of_text1;
    std::string lines_of_text2;
    int i = 0;
    std::string jokes_array[SIZE];
    std::string punchlines_array[SIZE];
    int count = 0;


//-----------------------------------------------------------------------------



    std::ifstream jokes_file(jokes);
    std::ifstream punchlines_file(punchlines);
    if ((jokes_file, punchlines_file).is_open()){
        while(!(jokes_file, punchlines_file).eof()){
            getline(jokes_file, lines_of_text1);
            getline(punchlines_file, lines_of_text2);
            jokes_array[i] = lines_of_text1;
            punchlines_array[i] = lines_of_text2;
            count++;
            i++;
    }
    jokes_file.close();
    punchlines_file.close();
    }
    else{
        std::cout << "Error opening files" << std::endl;
    }

    int random = rand() % count;
    int random_ = rand() % 2;

    if (jokes[random] == jokes[2]){
        std::cout << jokes_array[random] << std::endl;
        std::string response_that_does_nothing;
        std::cin >> response_that_does_nothing;
        sleep(5);
        std::cout << punchlines_array[random] << std::endl;
        system(reactions[random_].c_str());
        system("clear");
    }
    else{
        std::cout << jokes_array[random] << std::endl;
        sleep(2);
        std::cout << punchlines_array[random] << std::endl;
        system(reactions[random_].c_str());
        system("clear");
    }

    return 0;
}