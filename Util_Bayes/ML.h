//
// Created by hoully on 18-1-8.
//

#ifndef ECHIDIDY_ML_H
#define ECHIDIDY_ML_H

#include "../Util/Vector.h"
#include "../Util/Matrix.h"

class ML {
    PointerPropertyBuilderByName(Matrix*, parameter_list, private)
    PointerPropertyBuilderByName(Vector*, r_theta, private)
public:
    ML(){}
    ~ML(){}
    ML(Matrix*, Vector*);
    ML_set return_theta();
};

#endif //ECHIDIDY_ML_H
