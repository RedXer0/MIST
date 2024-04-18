#include <iostream>
#include <fstream>
#include <string>
#include <random>
#include <cstdlib>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <algorithm>
#include <cctype>


#define SIZE 90000

void Mists_Playlist();
int music(){
    printf("Wanna add your own music? (y/n)\n");
    char your_input;
    std::cin >> your_input;
    if (your_input == 'y' || your_input == 'Y') {
        system("~/Mist/Mists_Out_Files/./add_music.out");
    }
    else{
    }
    Mists_Playlist();
    return 0;
}

void Mists_Playlist(){
    int ansi_colors = 34;
    std::string colors = "\033[";
    std::string Mists_Music_Playlist = "/home/xero/Mist/Mists_Music/music_playlist.txt";
    std::string Playlist_Pics = "/home/xero/Mist/mist_media/mists_music_pics.txt";
    std::cout << colors << ansi_colors << "m" << "Mists Music Player" << std::endl;
    sleep(1);
    std::cout << colors << ansi_colors << "m" << "All Music is non copyrighted music in the Mists_Music[Music] folder" << std::endl;
    sleep(1);
    int i = 0;
    int counter;

    std::string Mists_Music_array[SIZE];
    std::string Playlist_Pics_array[SIZE];

    std::ifstream Mists_Music_File(Mists_Music_Playlist);
    std::ifstream Playlist_Pics_File(Playlist_Pics);
    if ((Mists_Music_File, Playlist_Pics_File).is_open()){
        while(!(Mists_Music_File, Playlist_Pics_File).eof()){
            std::string lines_of_text;
            std::string lines_of_text2;
            getline(Mists_Music_File, lines_of_text);
            getline(Playlist_Pics_File, lines_of_text2);
            Mists_Music_array[i] = lines_of_text;
            Playlist_Pics_array[i] = lines_of_text2;
            counter++;
            i++;
        }
        Mists_Music_File.close();
        Playlist_Pics_File.close();
    }
    else{
        std::cout << "Error opening files" << std::endl;
    }


    int random;
    srand(time(NULL));
    while(true){
        random = rand() % counter;
        system(Playlist_Pics_array[random].c_str());
        system(Mists_Music_array[random].c_str());
        printf("\nlike it?\n");
    }
}