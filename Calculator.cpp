//
// Created by User on 17.05.2022.
//

#include "Calculator.h"
#include <iostream>
#include <cmath>

using namespace std;

Calculator::Calculator()
{

}

void Calculator::Fill()
{
    cout << "Input Rocket info" << endl;
    cout << "Input Vx: ";
    cin >> rocketV.X;
    cout << "Input Vy: ";
    cin >> rocketV.Y;
    cout << "Input Vz: ";
    cin >> rocketV.Y;

    cout << "Input Target info" << endl;
    cout << "Input Vx: ";
    cin >> targetV.X;
    cout << "Input Vy: ";
    cin >> targetV.Y;
    cout << "Input Vz: ";
    cin >> targetV.Z;
    cout << "Input Length: ";
    cin >> l;
    cout << "Input relative X: ";
    cin >> targetRel.X;
    cout << "Input relative Y: ";
    cin >> targetRel.Y;
    cout << "Input target's Length: ";
    cin >> l;

    cout << "Input Phi angle: ";
    cin >> phi;
}

Vector3 Calculator::FromEarthToVelocity(Vector3 angles, Vector3 vector)
{
    Vector3 result;
    result.X = vector.X * cos(angles.Y) * cos(angles.X) +
            vector.Y * sin(angles.Y)\
            - vector.Z * cos(angles.Y) * sin(angles.X);

    result.Y = - vector.X * cos(angles.Z) * sin(angles.Y) * cos(angles.X)\
                + vector.X * sin(angles.Z) * sin(angles.X) + \
            vector.Y * cos(angles.Z) * cos(angles.Y) + \
            vector.Z * cos(angles.Z) * sin(angles.Y) * sin(angles.X) \
                + vector.Z * sin(angles.Z) * cos(angles.X);

    result.Z = vector.X * sin(angles.Z) * sin(angles.Y) * cos(angles.X)\
                + vector.X * cos(angles.Z) * sin(angles.X) \
            - vector.Y * sin(angles.Z) * cos(angles.Y) \
            - vector.Z * sin(angles.X) * sin(angles.Y) * sin(angles.Z)\
                + vector.Z * cos(angles.X) * cos(angles.Z);

    return result;
}

void Calculator::Calculate()
{
    // V относительное
    targetVRel.X = rocketV.X - targetV.X;
    targetVRel.Y = rocketV.Y - targetV.Y;
    targetVRel.Z = rocketV.Z - targetV.Z;

    // Рыскание, тангаж, крен
    Vector3 targetAngles;
    double absTargetV = sqrt(targetV.X * targetV.X + targetV.Y * targetV.Y + targetV.Z * targetV.Z);
    targetAngles.X = acos(targetV.X / absTargetV);
    targetAngles.Y = acos(targetV.Y / absTargetV);
    targetAngles.Z = acos(targetV.Z / absTargetV);

    // Переход из Земной СК в Скоростную СК
    Vector3 velocityCoords = FromEarthToVelocity(targetAngles, targetV);
}