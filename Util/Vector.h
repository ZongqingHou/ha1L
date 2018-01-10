//
// Created by hoully on 18-1-9.
//

#ifndef ECHIDIDY_VECTOR_H
#define ECHIDIDY_VECTOR_H

#include "Tensor.h"

class Vector: public Tensor{
PointerPropertyBuilderByName(int, size, private)

PointerPropertyBuilderByName(float*, members, private)
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
    float pi(void);
    float sigma(void);

    int vec_size(void);
};


#endif //ECHIDIDY_VECTOR_H
