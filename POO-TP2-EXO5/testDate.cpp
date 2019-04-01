#include <iostream>

#include "Date.h"

using namespace std;
using namespace nsUtil;

namespace
{
    void testDate (void)
    {
        // Date invalide

        date d1;
        d1.display ();
        cout << '\n';
        d1.display (/* Textuel = */ true);
        cout << '\n';
        cout << "Quantième : " << d1.GetQuantieme() << '\n';
        cout << "La veille : ";
        d1.GetLaVeille ().display ();
        cout << " ou ";
        d1.GetLaVeille ().display (/* Textuel = */ true);
        cout << "\n\n";

        // Date valide

        date d2 (6, 11, 2007);
        d2.display ();
        cout << '\n';
        d2.display (/* Textuel = */ true);
        cout << '\n';
        cout << "Quantième : " << d2.GetQuantieme() << '\n';
        cout << "La veille : ";
        d2.GetLaVeille ().display ();
        cout << " ou ";
        d2.GetLaVeille ().display (/* Textuel = */ true);
        cout << '\n';
        cout << "Reset() => ";
        d2.Reset ();
        d2.display ();
        cout << "\n\n";

        // Annee bissextile

        date d3 (1, 3, 2004);
        d3.display ();
        cout << '\n';
        d3.display (/* Textuel = */ true);
        cout << '\n';
        cout << "Quantieme : " << d3.GetQuantieme() << '\n';
        cout << "La veille : ";
        d3.GetLaVeille ().display ();
        cout << " ou ";
        d3.GetLaVeille ().display (/* Textuel = */ true);
        cout << '\n';
        cout << "Reset() => ";
        d3.Reset ();
        d3.display ();
        cout << "\n\n";

        // 1er janvier

        date d4 (1, 1, 2004);
        d4.display ();
        cout << '\n';
        d4.display (/* Textuel = */ true);
        cout << '\n';
        cout << "Quantième : " << d4.GetQuantieme() << '\n';
        cout << "La veille : ";
        d4.GetLaVeille ().display ();
        cout << " ou ";
        d4.GetLaVeille ().display (/* Textuel = */ true);
        cout << '\n';
        cout << "Reset() => ";
        d4.Reset ();
        d4.display ();
        cout << "\n\n";

    } // testDate()

} // namespace anonyme

int main (void)
{
    testDate ();

    return 0;

} // main()
