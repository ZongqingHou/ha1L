//
// Created by hoully on 18-1-8.
//

#ifndef ECHIDIDY_MATRIX_H
#define ECHIDIDY_MATRIX_H



#include "Tensor.h"

class Matrix: public Tensor{
private:
    int row;
    int column;
    int size;
    float* members;
public:
    Matrix(){};
    ~Matrix(){};

    Matrix(int, int, float*);
    float* get_row(int);
    float* get_column(int);
    Matrix* operator+(Matrix*);
    Matrix* operator-(Matrix*);
    Matrix* operator*(Matrix*);
    Matrix* T();
    void print();
};


#endif //ECHIDIDY_MATRIX_H
