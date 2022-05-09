#include "includes.h"

std::string blank_width = 
                "                                                                                ";

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

void print_remain(int n){
    for(int i=0; i<n; i++) std::cout << "\n";
}

void print_line(){
    /**
     * @brief function that print line depends on width
     * 
     */
    for(int i=0; i<width; i++) std::cout << "=";
}

void print_line(int n){
    /**
     * @brief function that print line depends on width
     * 
     */
    for(int i=0; i<n; i++) std::cout << "=";
}  

void print_blank(int n){
    /**
     * @brief 
     * 
     */
    for(int i=0; i<n; i++) std::cout << " ";
}

void print_main(){
    /**
     * @brief function that print main menu when program start , end , etc
     * 
     */
    print_line();
    print_remain((height-4)/2);
    std::cout << "                                1. play                                         \n"; 
    std::cout << "                                2. how to play                                  \n"; 
    std::cout << "                                3. setting                                      \n"; 
    std::cout << "                                4. quit                                         "; 
    print_remain((height-4)/2);
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
    print_remain(height/2);
    std::cout << " Quit the program...";
    print_remain(height/2);
    print_line();
}

void print_howto(){
    /**
     * @brief function that print message that how to play this program
     * 
     */
    print_line();
    print_remain((height-5)/2);
    std::cout << "  this is simple typing game. \n";
    std::cout << "  when you type some sentence,\n";
    std::cout << "  this program will tell your \n";
    std::cout << "  typing speed and accuracy   \n";
    std::cout << "  good luck to your score     \n";
    print_remain((height-5)/2);
    print_line();
}

void print_setting(){

}

void press_anykey(){
    /**
     * @brief function that print message for user to get anykey input
     * 
     */

    std::cout << "\nPress any key to back \n" ;
    getch();
}

void print_layout(){
    
}