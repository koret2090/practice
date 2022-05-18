//
// Created by User on 17.05.2022.
//

#include "Target.h"
#include <iostream>

using namespace std;

Target::Target()
{
    cout << "Input Target info" << endl;
    R.Fill();
    V.Fill();
    R = {20, 1050, 5010};
    V = {200, 40, 10};
}