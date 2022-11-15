/*Project-------Learn_CPP
 *File----------Vector.h
 *Author--------Justin Kachele
 *Date----------11/14/2022
 *License-------GNU GENERAL PUBLIC LICENSE
******************************************/
#ifndef Vector_H
#define Vector_H

struct Vector2 {
    float x;
    float y;
};

struct Vector3 {
    float x;
    float y;
    float z;
};

struct Vector4 {
    float x;
    float y;
    float z;
    float w;
};

namespace Math {
    void initialize(Vector2* vector);
    Vector2 add(Vector2 a, Vector2 b);
    float dot(Vector2 a, Vector2 b);
    Vector2 scale(Vector2 vector, float scale);
    void print(Vector2 vector);

    void initialize(Vector3* vector);
    Vector3 add(Vector3 a, Vector3 b);
    float dot(Vector3 a, Vector3 b);
    Vector3 scale(Vector3 vector, float scale);
    void print(Vector3 vector);
    std::string toString(Vector3 vector);

    void initialize(Vector4* vector);
    Vector4 add(Vector4 a, Vector4 b);
    float dot(Vector3 a, Vector3 b);
    Vector4 scale(Vector4 vector, float scale);
    void print(Vector4 vector);
}

#endif //Vector_H
