#include "system.h"

string callName(int name){
    if (name == -1)return "Empty";
    if (name == 0) return "Black Car";
    if (name == 1) return "Black King";
    if (name == 2) return "Black Horse";
    if (name == 3) return "Black Boom";
    if (name == 4) return "Black Scholar";
    if (name == 5) return "Black Minister";
    if (name == 6) return "Black Solider";

    if (name == 7) return "Red Solider";
    if (name == 8) return "Red Car";
    if (name == 9) return "Red King";
    if (name == 10) return "Red Horse";
    if (name == 11) return "Red Boom";
    if (name == 12) return "Red Scholar";
    if (name == 13) return "Red Minister";
    return "Error";
}