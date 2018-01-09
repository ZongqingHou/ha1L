//
// Created by hoully on 18-1-9.
//

#ifndef ECHIDIDY_VECTOR_H
#define ECHIDIDY_VECTOR_H

#include "Tensor.h"

class Vector: public Tensor{
private:
    int size;
    float* members;
public:
    Vector(){};
    ~Vector(){};

    Vector(int, float*);
    Vector* operator+(Vector*);
    Vector* operator-(Vector*);
    Vector* operator+(float);
    Vector* operator-(float);
    Vector* operator*(float);
    Vector* operator/(float);
    void print();
};


#endif //ECHIDIDY_VECTOR_H
