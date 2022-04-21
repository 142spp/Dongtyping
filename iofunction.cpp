#include "includes.h"

std::string blank_width = 
                "                              ";

std::string get_string(){
    /**
     * @brief function that get string and return that
     * 
     */
    std::cout << "\nEnter the command : " ;
    std::string in_str;
    std::cin >> in_str;
    std::cout << "\n";
    return in_str;
}

void print_remain(){
    for(int i=0; i<height; i++) std::cout << "\n";
}

void print_line(){
    /**
     * @brief function that print line depends on width
     * 
     */
    for(int i=0; i<width; i++) std::cout << "=";
}  

void print_main(){
    /**
     * @brief function that print main menu when program start , end , etc
     * 
     */
    print_line();
    std::cout << "\n\n\n";
    std::cout << "         1. play              \n"; // width = 30;
    std::cout << "         2. how to play       \n"; // width = 30;
    std::cout << "         3. setting           \n"; // width = 30;
    std::cout << "         4. quit              "; // width = 30;
    std::cout << "\n\n\n";
    print_line();
}

void print_menu(){
    /**
     * @brief function that print menu when player stop temporary when player press 'q'
     * 
     */

}

void print_quit(){
    /**
     * @brief fuction that clear and print quit message
     * 
     */
    print_line();
    std::cout << "\n\n\n\n\n";
    std::cout << " Quit the program...";
    std::cout << "\n\n\n\n";
    print_line();
}

void print_howto(){
    /**
     * @brief function that print message that how to play this program
     * 
     */
    print_line();
    std::cout << "\n\n";
    std::cout << "  this is simple typing game. \n";
    std::cout << "  when you type some sentence,\n";
    std::cout << "  this program will tell your \n";
    std::cout << "  typing speed and accuracy   \n";
    std::cout << "  good luck to your score     \n";
    std::cout << "\n\n";
    print_line();
}

void print_setting(){

}

void press_anykey(){
    /**
     * @brief function that print message for user to get anykey input
     * 
     */

    std::cout << "\n\n Press any key to back \n" ;
    getch();
}