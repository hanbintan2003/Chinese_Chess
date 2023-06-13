#include "system.h"

string callName(int name){
    if (name==0) cout << "empty" << endl;

    if (name>=1 && name<=5) cout << "red soldier" << endl;
    if (name==6 || name==7) cout << "red cannon" << endl;
    if (name==8 || name==9) cout << "red chariot" << endl;
    if (name==10 || name==11) cout << "red horse" << endl;
    if (name==12 || name==13) cout << "red elephant" << endl;
    if (name==14 || name==15) cout << "red advisor" << endl;
    if (name==16) cout << "red general" << endl;

    if (name>=21 && name<=25) cout << "black soldier" << endl;
    if (name==26 || name==27) cout << "black cannon" << endl;
    if (name==28 || name==29) cout << "black chariot" << endl;
    if (name==30 || name==31) cout << "black horse" << endl;
    if (name==32 || name==33) cout << "black elephant" << endl;
    if (name==34 || name==35) cout << "black advisor" << endl;
    if (name==36) cout << "black general" << endl;

    return "Error";
}