//
// Created by hoully on 18-1-8.
//

#include "ML.h"

ML::ML(Matrix *const prob, Vector * const theta) {
    int prob_size = prob->mat_size();
    int theta_size = theta->vec_size();
    this->parameter_list = (Matrix*)malloc(prob_size);
    memcpy(this->parameter_list, prob, prob_size);
    this->r_theta = (Vector*)malloc(theta_size);
    memcpy(this->r_theta, theta, theta_size);
}

ML_set ML::return_theta() {
    int index = 0;
    ML_set return_value;

    float* after_cal = (float*)malloc(sizeof(float)*this->parameter_list->get_row());
    float* temp_list = (float*)malloc(sizeof(float)*this->parameter_list->get_column());

    while(index < this->parameter_list->get_row()){
        temp_list = this->parameter_list->get_row(index);
        after_cal[index] = pi(temp_list, this->parameter_list->get_column());
        index++;
    }
    free(temp_list);

    return_value.index = max_element(after_cal, this->parameter_list->get_row());
    return_value.return_value = this->r_theta->get_members()[return_value.index];

    return return_value;
}
