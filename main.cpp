#include "includes.h"

int width = 80;
int height = 24;

int main_menu(){
    while(true){
        system("cls");
        print_main();
        std::string command = get_string();
        if(command.size() > 1 || (command.at(0)<'1'||command.at(0)>'4')){ 
            std::cerr << "wrong command\n" ; 
            Sleep(1000);
        }
        else  return command.at(0) - '0';
    }
    return -1;
}

int excute_com(int c){
    system("cls");
    switch(c){
        case 1:
            play();
            break;
        case 2:
            print_howto();
            press_anykey();            
            break;
        case 3:
            print_setting();

            break;
        case 4:
            quit_program();
            break;
    }
}

void quit_program(){
    print_quit();
    Sleep(2000);
    system("cls");
    Sleep(500);
    exit(0);
}

int main(){
    while(true){     
        int com = main_menu();
        excute_com(com);
    }
}