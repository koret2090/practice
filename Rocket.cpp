//
// Created by User on 17.05.2022.
//

#include "Rocket.h"
#include <iostream>

using namespace std;

Rocket::Rocket()
{
    cout << "Input Rocket info" << endl;
    R.Fill();
    V.Fill();
    cout << "Input alpha: ";
    cin >> alpha;
    cout << "Input beta: ";
    cin >> beta;
     
    //R = {0, 10000, 5000};
    V = {500, 20, 30};
    alpha = 10;
    beta = 5;
}