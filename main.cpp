#include <iostream>
using namespace std;

#include "Punkt.h"
#include "Linie.h"
#include "Grafik.h"
#include "Abbildung.h"
#include "Rechteck.h"
#include "Kreis.h"
#include "Text.h"

void Tonerverbrauch(double dstrecke)
{
cout << "Tonerverbrauch:"
     << dstrecke /* in  cm  */
        * 10     /* g / m^2 */
        * 0.0001 /* wg. m^2 */
     << endl;
}

int main()
{


return 0;
}
