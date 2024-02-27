//
// Created by Msksim on 14.02.2024.
//

#ifndef OOP_MACH_GANS_H
#define OOP_MACH_GANS
#include <iostream>

using namespace std;

class Mach_guns {
private:
    float weight;
    string name;
    int speed_bullet;
    bool Is_Available;

public:
    Mach_guns() : weight{0}, name{"null"}, speed_bullet{0}{}

    Mach_guns(float weight, string name, int speed_bullet){
        this->weight = weight;
        this->name = name;
        this->speed_bullet = speed_bullet;
    }

    friend ostream& operator<<(ostream& out, const Mach_guns& c) {
        out << "(" << c.weight << ", " << c.speed_bullet << ")";
        return out;
    }
    // Перевантаження унарного оператора "+"
    Mach_guns operator+() const {
        return Mach_guns(+weight, +speed_bullet);
    }
    // Перевантаження бінарного оператора "+"
    Mach_guns operator+(const Mach_guns& other) const {
        return Mach_guns(weight + other.weight, speed_bullet + other.speed_bullet);
    }

    void print() const {
        cout<<"Name: " << name << "\tWeight: " << weight << "\tBarrel length: " << speed_bullet << endl;
        if (Is_Available)
            cout<<"The product is available"<<endl;
        else
            cout<<"This product is currently unavailable"<<endl;
    }
};



#endif //OOP_MACH_GANS_H
