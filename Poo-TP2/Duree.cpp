#include <iostream>
#include <iomanip>   // setw()
#include "Duree.h"

using namespace nsUtil;
using namespace std;

#define DUREE nsUtil::Duree

DUREE::Duree  (const ULLong_t duree) : myDuree (duree)
{
    normaliser ();

} // Duree()

void DUREE::normaliser (void)
{
    myDays    =  myDuree / 86400;
    myHours   = (myDuree % 86400) / 3600;
    myMinutes  = (myDuree % 3600) / 60;
    mySeconds =  myDuree % 60;

} // normaliser()

ULLong_t DUREE::getDuree (void) const { return myDuree; }

void DUREE::display (void) const
{
    cout << setw (10) << myDays    << " jour(s)"
             << setw (3)  << myHours   << " heure(s)"
         << setw (3)  << myMinutes << " minute(s)"
         << setw (3)  << mySeconds << " seconde(s)";

} // display()

void DUREE::incr (const ULLong_t delta /* = ULLong_t (0) */)
{
    myDuree += delta;
    normaliser ();

} // incr()

void DUREE::decr (const ULLong_t delta /* = ULLong_t (0) */)
{
    myDuree -= (delta > myDuree) ? myDuree : delta;

} // decr()

Duree DUREE::operator + (const Duree d1)const
{
    return Duree(d1.getDuree()+myDuree);
} // operator +()

Duree DUREE::operator - (const Duree d1)const
{
    if (myDuree < d1.getDuree())return Duree (0);
    else return Duree(myDuree - d1.getDuree());
} // operator -()

bool DUREE::operator < (const Duree d1)const
{
    return myDuree < d1.getDuree();
}

bool DUREE::operator > (const Duree d1)const
{
    return myDuree > d1.getDuree();
}

bool DUREE::operator == (const Duree d1)const
{
    return myDuree == d1.getDuree();
}

bool DUREE::operator != (const Duree d1)const
{
    return myDuree != d1.getDuree();
}

#undef DUREE
