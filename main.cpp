#include <iostream>
#include "Pistols.h"
#include "Mach_gans.h"
#include "Sniper.h"
using namespace std;


int main() {

    Pistols PP(1.22, 23, "PP9");
    PP.print();
    Mach_guns AK(23, "AK", 45);
    AK.print();
    Mach_guns AR;
    AR.print();
    Sniper Barett(1.34, "Baret", 32.4);
    Sniper Sniper4 = move(Barett);

    return 0;
}
