//
// Created by hoully on 18-1-8.
//

#ifndef ECHIDIDY_MATRIX_H
#define ECHIDIDY_MATRIX_H

#include "Tensor.h"

#define MATRIX_ELEMENTS

class Matrix : public Tensor {
PointerPropertyBuilderByName(int, row, private)

PointerPropertyBuilderByName(int, column, private)

PointerPropertyBuilderByName(int, size, private)

PointerPropertyBuilderByName(float*, members, private)

public:
    Matrix() {};

    ~Matrix() {};

    Matrix(int, int, float *const);

    float *get_row(int);

    float *get_column(int);

    Matrix *operator+(Matrix *);

    Matrix *operator-(Matrix *);

    Matrix *operator*(Matrix *);

    Matrix *T();

    void print();

    int mat_size(void);
};


#endif //ECHIDIDY_MATRIX_H
