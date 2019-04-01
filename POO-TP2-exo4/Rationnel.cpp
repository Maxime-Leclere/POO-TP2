#include <iostream>
#include "Rationnel.h"


using namespace std;
using namespace nsMath;
#define RATIONNEL nsMath::Rationnel

void RATIONNEL::simplifier()
{
    if(myNum < 0 && myDenom < 0)
    {
        myNum*=-1;
        myDenom*=-1;
    }
    else if (myNum > 0 && myDenom < 0)
    {
        myNum*=-1;
        myDenom*=-1;
    }
}

RATIONNEL::Rationnel(const int& num, const int& denom)
{
    myNum = num;
    myDenom = denom;
    simplifier();
}

RATIONNEL::Rationnel(const Rationnel &rationnel_local)
{
    myNum= rationnel_local.myNum;
    myDenom = rationnel_local.myDenom;
    simplifier();
}

void RATIONNEL::display(void)const
{
    cout << myNum << "/" << myDenom;
}

int RATIONNEL::PGCD(const int& n1, const int& n2)
{
    int a (n1);
    int b (n2);

    while (a != b)
    {
        if(a<b)b-=a;
        else a-=b;
    }
    return b;
}

Rationnel RATIONNEL::operator + (const Rationnel ra)const
{
    if (myDenom == ra.myDenom)return Rationnel(myNum+ra.myNum, myDenom);
    else if (myDenom != ra.myDenom)
        return Rationnel((myNum*ra.myDenom)+(ra.myNum*myDenom),
                         ra.myDenom*myDenom);
} // operator +()

Rationnel RATIONNEL::operator - (const Rationnel ra)const
{
    if (myDenom == ra.myDenom)return Rationnel(myNum-ra.myNum, myDenom);
    else if (myDenom != ra.myDenom)
        return Rationnel((myNum*ra.myDenom)-(ra.myNum*myDenom),
                         ra.myDenom*myDenom);
} // operator -()

Rationnel RATIONNEL::operator * (const Rationnel ra)const
{
    return Rationnel(myNum*ra.myNum, myDenom*ra.myDenom);
} // operator *()

Rationnel RATIONNEL::operator / (const Rationnel ra)const
{
    return Rationnel(myNum*ra.myDenom, myDenom*ra.myNum);
} // operator /()

bool RATIONNEL::operator == (const Rationnel ra)const
{
    if (myNum == ra.myNum && myDenom == ra.myDenom)return true;
    else return false;
}

bool RATIONNEL::operator != (const Rationnel ra)const
{
    if (myNum != ra.myNum && myDenom != ra.myDenom)return true;
    else return false;
}















