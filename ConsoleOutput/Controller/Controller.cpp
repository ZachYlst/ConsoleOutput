//
//  Controller.cpp
//  ConsoleOutput
//
//  Created by Ylst, Zachary on 1/25/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#include "Controller.hpp"

using namespace std;

Controller :: Controller()
{
    
}

void Controller :: start()
{
    string myName = "Zachary Ylst";
    cout << "My name is " << myName << endl;
    
    for (int index = 12; index < 31; index++)
    {
        cout << index + 1 << endl;
    }
    
    cout << &myName << endl;
    
    int age = 17;
    int siblingAges[3] = {19, 22, 25};
    string siblingNames[3] = {"Jared", "Melissa", "Josh"};
    cout << "I am " << age << " years old. My sibings' names are " << siblingNames[0] << ", " << siblingNames[1] << " and " << siblingNames[2] << " and their ages are " << siblingAges[0] << ", " << siblingAges[1] << " and " << siblingAges[2] << endl;
    
}
