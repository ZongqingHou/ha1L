//
// Created by hoully on 18-1-9.
//

#include "Vector.h"

Vector::Vector(int length, float *input_list) {
    this->size = length;
    this->members = (float *) malloc(sizeof(float) * this->size);
    memcpy(this->members, input_list, sizeof(float *) * this->size);
}

Vector *Vector::operator+(Vector *input_list) {
    int index;

    if (this->size != input_list->size) {
        return NULL;
    }

    float *return_list = (float *) malloc(sizeof(float) * this->size);

    for (index = 0; index < this->size; index++) {
        return_list[index] = this->members[index] + input_list->members[index];
    }

    return new Vector(this->size, return_list);
}

Vector *Vector::operator-(Vector *input_list) {
    int index;

    if (this->size != input_list->size) {
        return NULL;
    }

    float *return_list = (float *) malloc(sizeof(float) * this->size);

    for (index = 0; index < this->size; index++) {
        return_list[index] = this->members[index] - input_list->members[index];
    }

    return new Vector(this->size, return_list);
}

Vector *Vector::operator+(float input_data) {
    int index;

    float *return_list = (float *) malloc(sizeof(float) * this->size);

    for (index = 0; index < this->size; index++) {
        return_list[index] = this->members[index] + input_data;
    }

    return new Vector(this->size, return_list);
}

Vector *Vector::operator-(float input_data) {
    int index;

    float *return_list = (float *) malloc(sizeof(float) * this->size);

    for (index = 0; index < this->size; index++) {
        return_list[index] = this->members[index] - input_data;
    }

    return new Vector(this->size, return_list);
}

Vector *Vector::operator*(float input_data) {
    int index;

    float *return_list = (float *) malloc(sizeof(float) * this->size);

    for (index = 0; index < this->size; index++) {
        return_list[index] = this->members[index] * input_data;
    }

    return new Vector(this->size, return_list);
}

Vector *Vector::operator/(float input_data) {
    int index;

    float *return_list = (float *) malloc(sizeof(float) * this->size);

    for (index = 0; index < this->size; index++) {
        return_list[index] = this->members[index] / input_data;
    }

    return new Vector(this->size, return_list);
}

void Vector::print() {
    int index;

    for (index = 0; index < this->size; index++) {
        std::cout << this->members[index] << std::endl;
    }
}