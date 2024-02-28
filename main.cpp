#include <iostream>
#include "Pistols.h"
#include "Mach_gans.h"
#include "Sniper.h"
using namespace std;


int main() {
    int type;

    cout<<"Welcome to our shop!\n Choose Type of rifle:\n1)Sniper Rifles\n2)Machine guns\n3)Pistols"<<endl;
    cin>>type;
    if(type == 1) {
        Sniper Barett(1.34, "Baret", 32.4);
        Sniper rifle = move(Barett);
        cout<<rifle.print()<<endl;
    }else if (type == 2) {
        Mach_guns AK(23, "AK", 45);
        AK.print();
        Mach_guns AR;
        AR.print();
    }else if(type == 3) {
        Pistols PP(1.22, 23, "PP9");
        PP.print();
    }else{
            cout<<"Error";
    }




    return 0;
}
