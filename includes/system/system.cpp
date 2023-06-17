#include "system.h"

string callName(int name){
    if (name==0) return "empty" ;

    if (name>=1 && name<=5) return"red soldier" ;
    if (name==6 || name==7) return"red cannon" ;
    if (name==8 || name==9) return"red chariot";
    if (name==10 || name==11) return"red horse" ;
    if (name==12 || name==13) return"red elephant" ;
    if (name==14 || name==15) return"red advisor" ;
    if (name==16) return"red general" ;

    if (name>=21 && name<=25) return"black soldier" ;
    if (name==26 || name==27) return"black cannon" ;
    if (name==28 || name==29) return"black chariot" ;
    if (name==30 || name==31) return"black horse" ;
    if (name==32 || name==33) return"black elephant" ;
    if (name==34 || name==35) return"black advisor" ;
    if (name==36) return"black general" ;
    return "error";
}