//
// Created by hoully on 18-1-7.
//

#include "Bayes.h"

Bayes::Bayes(Matrix * data_matrix, int classification_index) {
    this->classification_index = classification_index;
    this->data_matrix = data_matrix;
}

void Bayes::cal_prob() {
    int index;
    int class_count = 0;
    float* classifation_vec = this->data_matrix->get_column(this->classification_index); // error mark befor complieing
    float* temp = (float*)malloc(sizeof(float)*10);
    float* temp_count = (float*)malloc(sizeof(float)*10);
    for(index = 0; index < 1; index++){
        if(search_node(classifation_vec, index)){
            
        }

    }
}