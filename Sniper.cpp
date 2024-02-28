//
// Created by Msksim on 14.02.2024.
//
#include <iostream>
#include "Sniper.h"
using namespace std;

Sniper::Sniper(Sniper&& rifle) : weight(rifle.weight), name(rifle.name), calibr(rifle.calibr) {
    rifle.weight = 3.4;
    rifle.name = "AMV";
    rifle.calibr = 7.2;


}

#include "Sniper.h"
