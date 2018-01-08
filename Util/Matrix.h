//
// Created by hoully on 18-1-8.
//

#ifndef ECHIDIDY_MATRIX_H
#define ECHIDIDY_MATRIX_H

#include <malloc.h>
#include <cstring>
#include "Tensor.h"
#include "Util.h"

class Matrix: public Tensor{
private:
    int row;
    int column;
    float* members;
public:
    Matrix(int, int, float*);
    float* get_row(int);
    float* get_column(int);
    Matrix* operator+(Matrix*);
    Matrix* operator-(Matrix*);
    Matrix* operator*(Matrix*);
    Matrix* T();
};


#endif //ECHIDIDY_MATRIX_H
