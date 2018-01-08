//
// Created by hoully on 18-1-8.
//

#ifndef ECHIDIDY_TENSOR_H
#define ECHIDIDY_TENSOR_H


class Tensor {
public:
    Tensor(){};
    ~Tensor(){};
    virtual Tensor* operator+(Tensor){};
    virtual Tensor* operator-(Tensor){};
    virtual Tensor* operator*(Tensor){};

    virtual Tensor* T(){};
};


#endif //ECHIDIDY_TENSOR_H
