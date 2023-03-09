// *************************************************************************
// ****************************** 2023.03.09 *******************************
// ****************** linux pkg installer By Naser Rezayi ******************
// ********* READ AND WRITE MULTIPLE LINES FROM AND TO A TXT FILE **********
// *************************************************************************

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

int main()
{
	std::fstream file;
	// READ OPERATION
	file.open("all-pkgs.txt", std::ios::in);
	std::vector<std::string> in_data_container;
    if (file.is_open()) {
        std::string text;
        while (std::getline(file, text)) {
	    const std::string command = "sudo pacman -S " + text + " -y";
            system(command.c_str());
        }
        file.close();
    }
	return 0;
}
