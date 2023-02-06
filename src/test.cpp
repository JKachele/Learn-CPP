/*Project-------Learn_CPP
 *File----------test.cpp
 *Author--------Justin Kachele
 *Date----------11/10/2022
 *License-------Mozilla Public License Version 2.0
 ******************************************/
#include <iostream>

int main() {

    int* a = new int();
    *a = 4;
    int* b = new int();
    *b = 255;

    std::cout << "A: " << *a << " at location: " << a << std::endl;
    std::cout << "B: " << *b << " at location: " << b << std::endl;

    int* tmp = a;
    a = b;
    b = tmp;

    std::cout << "A: " << *a << " at location: " << a << std::endl;
    std::cout << "B: " << *b << " at location: " << b << std::endl;

    delete a;
    delete b;

    return 0;
}