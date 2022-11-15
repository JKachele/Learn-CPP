/*Project-------Learn_CPP
 *File----------Vector.cpp
 *Author--------Justin Kachele
 *Date----------11/14/2022
 *License-------GNU GENERAL PUBLIC LICENSE
******************************************/
#include <iostream>
#include <sstream>
#include "Vector.h"

namespace Math {
    void initialize(Vector2* vector) {
        vector->x = 0;
        vector->y = 0;
    }

    Vector2 add(Vector2 a, Vector2 b) {
        Vector2 result;
        result.x = a.x + b.x;
        result.y = a.y + b.y;

        return result;
    }

    float dot(Vector2 a, Vector2 b) {
        return a.x * b.x + a.y * b.y;
    }

    Vector2 scale(Vector2 vector, float scale) {
        Vector2 result;
        result.x = vector.x * scale;
        result.y = vector.y * scale;

        return result;
    }

    void print(Vector2 vector) {
        std::cout << "(" << vector.x << ", " << vector.y << ")" << std::endl;
    }

    void initialize(Vector3* vector) {
        vector->x = 0;
        vector->y = 0;
        vector->z = 0;
    }

    Vector3 add(Vector3 a, Vector3 b) {
        Vector3 result;
        result.x = a.x + b.x;
        result.y = a.y + b.y;
        result.z = a.z + b.z;

        return result;
    }

    float dot(Vector3 a, Vector3 b) {
        return a.x * b.x + a.y * b.y + a.z * b.z;
    }

    Vector3 scale(Vector3 vector, float scale) {
        Vector3 result;
        result.x = vector.x * scale;
        result.y = vector.y * scale;
        result.z = vector.z * scale;

        return result;
    }

    void print(Vector3 vector) {
        std::cout << "(" << vector.x << ", " << vector.y << ", " << vector.z << ")" << std::endl;
    }

    std::string toString(Vector3 vector) {
        std::ostringstream oss;
        oss << "(" << vector.x << ", " << vector.y << ", " << vector.z << ")";
        return oss.str();
    }

    void initialize(Vector4* vector) {
        vector->x = 0;
        vector->y = 0;
        vector->z = 0;
        vector->w = 0;
    }

    Vector4 add(Vector4 a, Vector4 b) {
        Vector4 result;
        result.x = a.x + b.x;
        result.y = a.y + b.y;
        result.z = a.z + b.z;
        result.w = a.w + b.w;

        return result;
    }

    float dot(Vector4 a, Vector4 b) {
        return a.x * b.x + a.y * b.y + a.z * b.z + a.w * b.w;
    }

    Vector4 scale(Vector4 vector, float scale) {
        Vector4 result;
        result.x = vector.x * scale;
        result.y = vector.y * scale;
        result.z = vector.z * scale;
        result.w = vector.w * scale;

        return result;
    }

    void print(Vector4 vector) {
        std::cout << "(" << vector.x << ", " << vector.y << ", " << vector.z << ", " << vector.w << ")" << std::endl;
    }
}
