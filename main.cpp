#include <iostream>

#include "Bayes.h"
#include "NN/CNN.h"
#include "Probility/ML.h"
#include "Util/Matrix.h"

int main() {
    std::cout << "Hello, World!" << std::endl;

    float test_list[] = {1,2,3};
    float aa[] = {1,2,3,4,5,6,7,8,9};
    Matrix* matrix_test1 = new Matrix(1,3,test_list);
    Matrix* matrix_test2 = new Matrix(3,3,aa);

    Matrix* test = (*matrix_test1)*matrix_test2;
    return 0;
}