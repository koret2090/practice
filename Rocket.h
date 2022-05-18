//
// Created by User on 17.05.2022.
//

#ifndef PRACTICE_ROCKET_H
#define PRACTICE_ROCKET_H


#include "Vector3.h"

class Rocket {
public:
    Rocket();


private:
    Vector3 R;
    Vector3 V;

    double alpha;
    double beta;
};


#endif //PRACTICE_ROCKET_H
