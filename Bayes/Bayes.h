//
// Created by hoully on 18-1-7.
//

#ifndef ECHIDIDY_BAYES_H
#define ECHIDIDY_BAYES_H

//#include ""


#include "../Util/Util.h"
#include "../Util/Matrix.h"
#include "../Util/Vector.h"

typedef struct {

};

class Bayes {
PointerPropertyBuilderByName(Matrix*, data_matrix, private)
PointerPropertyBuilderByName(int, classification_index, private)
PointerPropertyBuilderByName(Vector*, probility_vec,private)
//PointerPropertyBuilderByName()

public:
    Bayes();
    ~Bayes();
    Bayes(Matrix*, int);
    void cal_prob(void);
};


#endif //ECHIDIDY_BAYES_H
