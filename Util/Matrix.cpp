//
// Created by hoully on 18-1-8.
//

#include "Matrix.h"

Matrix::Matrix(int row, int column, float* input_list) {
    this->row = row;
    this->column = column;
    this->members = (float*)malloc(sizeof(input_list));
    memcpy(this->members, input_list, sizeof(input_list));
}

float* Matrix::get_column(int column_index) {
    int index;
    float* return_list = (float*)malloc(sizeof(float) * this->row);

    for(index = 0; index < this->row; index++){
        return_list[index] = this->members[column_index + index * this->row];
    }
    return return_list;
}

float* Matrix::get_row(int row_index) {
    int index;
    float* return_list = (float*)malloc(sizeof(float) * this->column);

    for(index = 0; index < this->column; index++){
        return_list[index] = this->members[row_index + index * this->column];
    }
    return  return_list;
}

Matrix* Matrix::operator+(Matrix* input_matrix) {
    int index;
    int list_length = this->column * this->row;

    if(this->row != input_matrix->row || this->column != input_matrix->column){
        return NULL;
    }

    float* return_list = (float*)malloc(sizeof(this->members));

    for(index=0; index < list_length; index++){
        return_list[index] = this->members[index] + input_matrix->members[index];
    }

    return new Matrix(this->row, this->column, return_list);
}

Matrix* Matrix::operator-(Matrix* input_matrix) {
    int index;
    int list_length = this->column * this->row;

    if(this->row != input_matrix->row || this->column != input_matrix->column){
        return NULL;
    }

    float* return_list = (float*)malloc(sizeof(this->members));

    for(index=0; index < list_length; index++){
        return_list[index] = this->members[index] - input_matrix->members[index];
    }

    return new Matrix(this->row, this->column, return_list);
}

Matrix* Matrix::operator*(Matrix * input_matrix) {
    int index1, index2;
    float acc_number = 0;

    if(this->column != input_matrix->row){
        return NULL;
    }

    float* return_list = (float*)malloc(sizeof(float*) * this->row * input_matrix->column);
    float* temp_list = (float*)malloc(sizeof(float*) * input_matrix->column);
    float* temp_ptr = return_list;
    float* temp;

    for(index1 = 0; index1 < this->row; index1++){
        for(index2 = 0; index2 < input_matrix->column; index2++){
            temp = this->members + index1 * this->column;
            temp_list = (*input_matrix).get_column(index2);
            inner_product(temp, temp + this->row, temp_list, acc_number);
            *return_list = acc_number;
            return_list++;
            acc_number = 0;
        }
    }

    return new Matrix(this->row, input_matrix->column, temp_ptr);
}

Matrix* Matrix::T(){
    int index1, index2;
    if(this->column == 1){
        return new Matrix(this->column, this->row, this->members);
    }

    float* temp_list = (float*)malloc(sizeof(this->members));
    float* temp_ptr = temp_list;

    for(index1 = 0; index1 < this->column; index1++){
        for(index2 = 0; index2 < this->row; index2++){
            *temp_list = this->members[index1 + this->column * index2];
            temp_list++;
        }
    }
    return new Matrix(this->column, this->row, temp_ptr);
}
