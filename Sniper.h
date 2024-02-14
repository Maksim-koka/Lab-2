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
    bool There_is(){
        return true;
    }
public:
    Sniper(float Vweight, string Vname, float Vcalibr){
        weight = Vweight;
        name = Vname;
        calibr = Vcalibr;
        cout<<"Name: " << name << "\tWeight: " << weight << "\tBarrel length: " << calibr << endl;
        if (There_is())
            cout<<"The product is available"<<endl;
        else
            cout<<"This product is currently unavailable"<<endl;
        cout<< "called Konstruktor" <<endl;
    }
    ~Sniper(){
        cout<< "called Distruktor" <<endl;
    }
};


#endif //OOP_SNIPER_H
