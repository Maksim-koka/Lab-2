//
// Created by Msksim on 14.02.2024.
//

#ifndef OOP_SNIPER_H
#define OOP_SNIPER_H
#include <iostream>

using namespace std;

class Snipers {
private:
    static float weight;
    string name;
    float calibr;
    bool Is_Available(){
        return true;
    }
public:
    Snipers(float Vweight = 0, string Vname = "Tomson"){
        cout<<"Name: " << Vname << "\tWeight: " << Vweight << endl;
    };

    Snipers(float Vweight, string Vname, float Vcalibr){
        weight = Vweight;
        name = Vname;
        calibr = Vcalibr;
        cout<<"Name: " << name << "\tWeight: " << weight << "\tBarrel length: " << calibr << endl;
        if (Is_Available())
            cout<<"The product is available"<<endl;
        else
            cout<<"This product is currently unavailable"<<endl;
        cout<< "called Konstruktor" <<endl;
    }
    ~Snipers(){
        cout<< "called Distruktor" <<endl;
    }
};

#endif //OOP_SNIPER_H
