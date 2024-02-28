//
// Created by Msksim on 14.02.2024.
//

#ifndef OOP_PISTOLS_H
#define OOP_PISTOLS_H
#include <iostream>

using namespace std;

class Pistols {
private:
    float weight;
    string name;
    float bar_len;
    bool Is_Available(){
        return true;
    }

public:
    Pistols(float weight){
        this->weight = weight;
    }
    Pistols(float weight, string name): Pistols(weight){
        this->name = name;
    }
    Pistols(float bar_len, float weight, string name): Pistols(weight, name){
        this->bar_len = bar_len;
    }

    void print(){
        cout<<"Name: " << name << "\tWeight: " << weight << "\tBarrel length: " << bar_len << endl;
        if (Is_Available())
            cout<<"The product is available"<<endl;
        else
            cout<<"This product is currently unavailable"<<endl;
    }
};


#endif //OOP_PISTOLS_H
