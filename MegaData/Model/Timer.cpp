//
//  Timer.cpp

//  FirstCPlusPlus
//
//  Created by Carter, Jackson on 1/31/17.
//  Copyright © 2017 CTEC. All rights reserved.
//

#include "Timer.hpp"
#include <iostream>

using namespace std;

Timer :: Timer()
{
    executionTime = 0;
}

void Timer :: resetTimer()
{
    executionTime = 0;
}

void Timer :: startTimer()
{
    executionTime = clock();
}

void Timer :: stopTimer()
{
    executionTime = clock() - executionTime;
}

long Timer :: getExecutionTimeInMicroseconds()
{
    return executionTime;
}
void Timer :: displayTimerInformation()
{
    cout << "It took this long to execute: " << executionTime << endl;
    cout << "That is this man seconds: " << executionTime/CLOCKS_PER_SEC << endl;
}

