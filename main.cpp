#include <iostream>
#include "Mechanic.h"
#include "Membrane.h"
#include "Optical.h"

int main() {
    Mechanic Varmila("Rhx", 1.3, "plastic");
    Varmila.printInfo();
    Membrane Toxix("5.vo", 2.1, "Aluminim", "true");
    Toxix.printInfo();
    Optical bosch("huesos", 2, "metal", true);
    bosch.printInfo();
    return 0;
}
