//
// Created by hoully on 18-1-8.
//

#include "Matrix.h"

Matrix::Matrix(int row, int column, float *const input_list) {
    this->row = row;
    this->column = column;
    this->size = this->row * this->column;
    this->members = (float *) malloc(sizeof(float) * this->size);
    memcpy(this->members, input_list, sizeof(float) * this->size);
}

float *Matrix::get_column(int column_index) {
    int index;
    float *return_list = (float *) malloc(sizeof(float) * this->row);

    for (index = 0; index < this->row; index++) {
        return_list[index] = this->members[column_index + index * this->row];
    }
    return return_list;
}

float *Matrix::get_row(int row_index) {
    int index;
    float *return_list = (float *) malloc(sizeof(float) * this->column);
    memcpy(return_list, this->members + row_index * this->column, sizeof(float) * this->column);

    return return_list;
}

Matrix *Matrix::operator+(Matrix * const input_matrix) {
    int index;

    if (this->row != input_matrix->row || this->column != input_matrix->column) {
        return NULL;
    }

    float *return_list = (float *) malloc(sizeof(float) * this->row * this->column);

    for (index = 0; index < this->size; index++) {
        return_list[index] = this->members[index] + input_matrix->members[index];
    }

    return new Matrix(this->row, this->column, return_list);
}

Matrix *Matrix::operator-(Matrix * const input_matrix) {
    int index;

    if (this->row != input_matrix->row || this->column != input_matrix->column) {
        return NULL;
    }

    float *return_list = (float *) malloc(sizeof(float) * this->row * this->column);

    for (index = 0; index < this->size; index++) {
        return_list[index] = this->members[index] - input_matrix->members[index];
    }

    return new Matrix(this->row, this->column, return_list);
}

Matrix *Matrix::operator*(Matrix *const input_matrix) {
    int index1, index2;

    if (this->column != input_matrix->row) {
        return NULL;
    }

    float *return_list = (float *) malloc(sizeof(float) * this->row * input_matrix->column);
    float *temp_ptr = return_list;

    for (index1 = 0; index1 < this->row; index1++) {
        for (index2 = 0; index2 < input_matrix->column; index2++) {
            *return_list = inner_product(matrix_addr(this->members, index1, index2, this->column), this->column,
                                         input_matrix->get_column(index2));
            return_list++;
        }
    }

    return new Matrix(this->row, input_matrix->column, temp_ptr);
}

Matrix *Matrix::T() {
    int index1, index2;
    if (this->column == 1) {
        return new Matrix(this->column, this->row, this->members);
    }

    float *temp_list = (float *) malloc(sizeof(float) * this->row * this->column);
    float *temp_ptr = temp_list;

    for (index1 = 0; index1 < this->column; index1++) {
        for (index2 = 0; index2 < this->row; index2++) {
            *temp_list = this->members[index1 + this->column * index2];
            temp_list++;
        }
    }
    return new Matrix(this->column, this->row, temp_ptr);
}

void Matrix::print() {
    int index;

    for (index = 0; index < this->size; index++) {
        std::cout << this->members[index] << std::endl;
    }
}

int Matrix::mat_size(void) {
    return sizeof(int) * MATRIX_ELEMENTS + sizeof(float) * this->size;
}