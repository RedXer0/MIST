#include <iostream>

void add_music();

int main(){
    add_music();
    return 0;
}

void add_music(){
    std::string directory;
    std::string song_name;
    std::string song_pic;
    std:: string adding_img;
    std::string song_dir;
    std::string adding_song;
    FILE *add;
    FILE *add_pic;
    add = fopen("/home/xero/Mist_1.4.0/Mists_Music/music_playlist.txt", "a+");
    add_pic = fopen("/home/xero/Mist_1.4.0/mist_media/mists_music_pics.txt", "a+");

    if (add == nullptr){
        std::cout << "Could not open file" << std::endl;
        exit(0);
    }
    system("echo enter your song directory | lolcat");
    std::cin >> directory;
    system("echo enter your song name | lolcat");
    std::cin >> song_name;
    system("echo Add your song picture and directory | lolcat");
    printf("if you don't have a pic type in(na) for both inputs\n");
    printf("pic: ");
    std::cin >> song_pic;
    printf("dir: ");
    std::cin >> song_dir;
    if (song_pic == "na" && song_dir == "na"){
        adding_img = "\ntiv -w 25 -h 25 ~/Mist_1.4.0/mist_media/Null.png";
    }
    else{
        adding_img = "\ntiv -w 25 -h 25 ~/" + song_dir + "/" + song_pic;
    }
    adding_song = "\nmpv ~/" + directory + "/" + song_name + ".mp3";
    fprintf(add, "%s", adding_song.c_str());
    fprintf(add_pic, "%s", adding_img.c_str());
}