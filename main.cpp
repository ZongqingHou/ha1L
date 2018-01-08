#include <iostream>

#include "Bayes.h"
#include "NN/CNN.h"
#include "Probility/ML.h"
#include "Util/Matrix.h"

int main() {
    std::cout << "Hello, World!" << std::endl;

    float test_list[] = {1,2,3};
    Matrix* matrix_test1 = new Matrix(1,2,test_list);
    Matrix* matrix_test2 = new Matrix(2,3,test_list);

    Matrix* test = *matrix_test1 + matrix_test2;
    return 0;
}