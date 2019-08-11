#Makefile
_tensor.so : tensor.cpp tensor.hpp tensor_wrap.cxx
	g++ -shared -fPIC -I/usr/include/python3.5m -lpython3.5m -o ./build/_tensor.so tensor.cpp ./interface/tensor_wrap.cxx
tensor_wrap.cxx : ./interface/tensor.i
	swig -c++ -python -py3 ./interface/tensor.i
clean :
	rm ./build/_tensor.so ./interface/tensor_wrap.cxx ./interface/tensor.py