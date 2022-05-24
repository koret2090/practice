//
// Created by User on 17.05.2022.
//

#ifndef PRACTICE_CALCULATOR_H
#define PRACTICE_CALCULATOR_H


#include "Vector3.h"

class Calculator {
public:
    Calculator();
    void Fill();
    void Calculate();

private:
    Vector3 rocketV;
    Vector3 targetV;
    Vector3 targetRel;
    Vector3 targetVRel;
    double l;
    double phi;

    Vector3 FromEarthToVelocity(Vector3 angles, Vector3 vector);

};


#endif //PRACTICE_CALCULATOR_H
