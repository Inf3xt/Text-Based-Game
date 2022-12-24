#include <iostream>
#include <Windows.h>

#include "include/something.h" // when including own file, it has to be in "" and not <>
#include "include/text.h"

// initialising this fantastic structure
Text text;

// global vars to change later in the code
int evil = 0;
int good = 5;
std::string name = "Johnathon";

void chapter_1() {
    char choice;
    std::cout << text.chapter_1 << std::endl;
    std::cin >> choice;
    if (choice == 'a' || choice == 'A') {
        std::cout << "You go to feed your fish and realise that your food box is empty. You reach and get more from the top shelf. Upon opening the box, you find a dead rat inside it and you wonder 'How did that get in there?'" << std::endl;
    } else if (choice == 'b' || choice == 'B') {
        std::cout << "You let your fish starve for today. +1 Evil." << std::endl;
    } else {
        std::cout << "Please enter (A) feed the goldfish or (B) 'forget about it'" << std::endl;
        chapter_1();
    }
}

int main(int argc, char* argv[]) {
    std::string a;
    std::cout << text.welcome_screen << std::endl;
    Sleep(3000);
    chapter_1();
    

}