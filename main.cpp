#include <iostream>

#include "Util/Matrix.h"
#include "Util/Vector.h"

int main() {
    std::cout << "Hello, World!" << std::endl;

    float test_list[] = {1,2,3,4,5,6,7,8,9,0};
    float aa[] = {1,2,3,4,5,6,7,8,9,0,1,2,3,4,5,6,7,8,9,0,1,2,3,4,5,6,7,8,9,0,1,2,3,4,5,6,7,8,9,0,1,2,3,4,5,6,7,8,9,0};
    Matrix* matrix_test1 = new Matrix(1,10,test_list);
    Matrix* matrix_test2 = new Matrix(10,5,aa);

    Matrix* test = (*matrix_test1)*matrix_test2;
//    test->print();
    std::cout << test->mat_size() << std::endl;

    Vector* test_vec = new Vector(50, aa);

//    test_vec->print();

    float * aaaaa;
    aaaaa = test_list;
    std::cout << aaaaa << std::endl;
    std::cout << *(aaaaa+1) << std::endl;
    return 0;
}