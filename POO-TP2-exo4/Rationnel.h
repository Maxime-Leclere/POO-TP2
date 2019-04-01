#ifndef RATIONNEL_H
#define RATIONNEL_H

namespace nsMath {
    class Rationnel
    {
    private:
        int myNum;
        int myDenom;
        void simplifier(void);
    public:
        Rationnel(const int& num = 0, const int& denom = 1 );
        Rationnel(const Rationnel &rationnel_local);

        void display (void) const;

        int PGCD (const int& n1, const int& n2);

        Rationnel operator + (const Rationnel r) const;
        Rationnel operator - (const Rationnel r) const;
        Rationnel operator * (const Rationnel r) const;
        Rationnel operator / (const Rationnel r) const;

        bool operator < (const Rationnel r) const;
        bool operator > (const Rationnel r) const;

        bool operator == (const Rationnel r) const;
        bool operator != (const Rationnel r) const;
    };


}

#endif // RATIONNEL_H
