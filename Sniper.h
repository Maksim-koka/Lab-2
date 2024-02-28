//
// Created by Msksim on 14.02.2024.
//

#ifndef OOP_SNIPER_H
#define OOP_SNIPER_H
#include <iostream>

using namespace std;

class Sniper {
private:
    float weight;
    string name;
    float calibr;
    bool Is_Available(){
        return true;
    }
public:

    Sniper(Sniper&& rifle);

    Sniper(float weight, string name, float calibr){
        this->weight = weight;
        this->name = name;
        this->calibr = calibr;
        cout<<"Name: " << name << "\tWeight: " << weight << "\tBarrel length: " << calibr << endl;
        if (Is_Available())
            cout<<"The product is available"<<endl;
        else
            cout<<"This product is currently unavailable"<<endl;
        cout<< "called Konstruktor" <<endl;
    }
    ~Sniper(){
        cout<< "called Distruktor" <<endl;
    }
    string print() const {
        return name + to_string(weight) + to_string(calibr) ;
    }
};

#endif //OOP_SNIPER_H
