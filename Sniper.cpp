//
// Created by Msksim on 14.02.2024.
//
#include <iostream>
#include "Sniper.h"
using namespace std;

Sniper::Sniper(Sniper&& rifle) {
    this->weight = rifle.weight;
    this->name = rifle.name;
    this->calibr = rifle.calibr;

    rifle.weight = 0;
    rifle.name = nullptr;
    rifle.calibr = 0;

    cout<<"Name: " << name << "\tWeight: " << weight << "\tBarrel length: " << calibr << endl;
    cout<< "called move constructor" <<endl;
}

#include "Sniper.h"
