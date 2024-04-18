#include <iostream>

int main(){
    std::string your_font_name;
    std::string your_font_location;
    system("echo Enter your font location | lolcat");
    std::cin >> your_font_location;
    system("echo Enter your font name | lolcat");
    std::cin >> your_font_name;
    std::string font_downloader = "sudo cp ~/" + your_font_location + "/" + your_font_name + ".ttf" + " " + "/usr/share/fonts";
    system(font_downloader.c_str());

    return 0;

}