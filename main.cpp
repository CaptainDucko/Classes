#include <iostream>
#include <string>
#include "words.h"
#include "numbers.h"

int returnANumber(){
    return 420;
}


int main() {

    std::cout << words::returnString();
    std::cout << numbers::returnANumber();
}