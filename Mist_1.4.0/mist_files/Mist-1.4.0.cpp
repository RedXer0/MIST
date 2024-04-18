#include <iostream>
#include <cstdlib>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string>
#include "mist_installation.cpp"
#include <thread>
#include <chrono>


#define TIME  150
using namespace std::chrono;
using namespace std::this_thread;

int main(){
    int color = 36;
    std::string name;
    std::string m = "m";
    std::string num = "\033";
    std::string ansi = "\033[";
    system("clear");
    std::cout << ansi << color << m << "Please wait" << num << std::endl;
    system("~/Mist_1.4.0/mist_bash_files/./installing.sh | lolcat");
    system("clear");
    system("~/Mist_1.4.0/mist_bash_files/./bar.sh | lolcat");
    installation();
    system("clear");
    system("echo Mist 1.4.0 has been installed succesfully | lolcat -a -d 50");
    printf("\n");

    return 0;
}