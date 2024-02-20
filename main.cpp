#include <iostream>
#include "Pistols.h"
#include "Mach_gans.h"
#include "Sniper.h"
using namespace std;

int main() {

    Pistols PP(1.22, "PP9", 23);
    PP.Print();
    Mach_guns AK(23, "AK", 45);
    AK.Print();
    Mach_guns AR;
    AR.Print();
    Snipers AWM(0);
    Snipers Barret(12.3, "Barret", 32);
    return 0;
}
