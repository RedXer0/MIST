#include <iostream>
#include <fstream>
#include <string>
#include <random>
#include <cstdlib>
#include <time.h>
#include<stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "mist_music_player.cpp"
#include "/home/xero/Mist_1.3.0/mists_gimmicks/alphahex.cpp"

#define SIZE 100000

int main(){
    int random_number = rand() % 36;
    int ansi_colors = 36;
    std::string colors = "\033[";
    std::string your_input;


    std::cout << colors << ansi_colors << "m" << "Hey how are you?" << std::endl;
    std::cin >> your_input;
    printf("thats nice\n");
    sleep(1);



    srand(time(NULL));
    std::string chat = "Mist_1.3.0/mist_responses/mist_chat.txt";
    std::string response = "Mist_1.3.0/mist_responses/mist_responses.txt";
    std::string lines_of_text1;
    std::string lines_of_text2;
    int i = 0;
    std::string chat_array[SIZE];
    std::string response_array[SIZE];


//-----------------------------------------------------------------------------



    std::ifstream chat_file(chat);
    std::ifstream response_file(response);
    if ((chat_file, response_file).is_open()){
        while(!(chat_file, response_file).eof()){
            getline(chat_file, lines_of_text1);
            getline(response_file, lines_of_text2);
            chat_array[i] = lines_of_text1;
            response_array[i] = lines_of_text2;
            i++;
    }
    chat_file.close();
    response_file.close();
    }
    else{
        std::cout << "Error opening files" << std::endl;
    }


//------------------------------------------------------------------------


    switch(random_number){
        case 5: 
            std::cout << chat_array[random_number] << std::endl;
            std::cin >> your_input;
            std::cout << response_array[random_number] << std::endl;
            std::cin >> your_input;
            if (your_input != "NO" || your_input != "no"){
            sleep(3);
            printf("THE DOOR!!\n");
            }
            else{
                printf("ok fine\n");
            }
            break;


        case 7:
            std::cout << chat_array[random_number] << std::endl;
            std::cin >> your_input;
            std::cout << response_array[random_number] << std::endl;
            sleep(3);
            system("neofetch");
            break;


        case 12:
            std::cout << chat_array[random_number] << std::endl;
            std::cin >> your_input;
            if (your_input == "yes" || your_input == "YES"){
                std::cout << response_array[random_number] << std::endl;
                sleep(3);
                system("mpv Mist_1.3.0/mist_media/Video.mp4");
            }
            else{
                printf("YOU SHOULD WATCH PANTHEON!!!!\n");
            }
            break;


        case 14:
            std::cout << chat_array[random_number] << std::endl;
            std::cin >> your_input;
            if (your_input == "yes"){
                std::cout << response_array[random_number] << std::endl;
                sleep(3);
                printf("Sorry but its copyrighted lol.\n");
                
            }
            else if (your_input != "yes"){
                printf("ok thats cool.\n");
            }
            break;


        case 25:
            std::cout << chat_array[random_number] << std::endl;
            std::cin >> your_input;
            std::cout << response_array[random_number] << std::endl;
            system(response_array[random_number].c_str());
            break;


        case 27:
            std::cout << chat_array[random_number] << std::endl;
            std::cin >> your_input;
            std::cout << response_array[random_number] << std::endl;
            sleep(3);
            alphahex();
            break;

        
        case 33:
            std::cout << chat_array[random_number] << std::endl;
            std::cin >> your_input;
            std::cout << response_array[random_number] << std::endl;
            system("hostname -i");
            printf("I TOLD YOU I HAD YOUR IP ADDRESS\n");
            break;

        default:
            std::cout << chat_array[random_number] << std::endl;
            std::cin >> your_input;
            std::cout << response_array[random_number] << std::endl;
            break;
    }
    return 0;
    
}