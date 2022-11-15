/*Project-------Learn_CPP
 *File----------Main.cpp
 *Author--------Justin Kachele
 *Date----------11/10/2022
 *License-------Mozilla Public License Version 2.0
 ******************************************/
#include <iostream>

#include "Math.h"
#include "Log.h"
#include "Vector.h"

int main() {
    std::cout << "Add 1 and 2: " << add(1, 2) << std::endl;

    Log("This is a Log!!! %d", 123);

    Vector3 vector{1.0f, 1.0f, 1.0f};

    Math::initialize(&vector);

    std::cout << "Vector: " << Math::toString(vector) << std::endl;

    Vector3 vec = nullptr;


	return 0;
}
