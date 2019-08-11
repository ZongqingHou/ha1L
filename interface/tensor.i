%module tensor
%{
    #define SWIG_FILE_WITH_INIT
    #include "../tensor.hpp"
%}

#include "3rdparty/numpy.i"

class Tensor{
public:
Tensor();
~Tensor();
void test();
};