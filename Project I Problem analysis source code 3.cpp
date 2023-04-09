#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    cout << "Side1" << '\t' << "Side2" << '\t' << "Hypot" << endl;
    int coun = 0;
    int i, j, k;
    int *side1, *side2, *hyp; // side 1 - i
    side1 = &i;               // side 2 - j
    side2 = &j;               // hypotenuse - k
    hyp = &k;

    for (i = 1; i <= 100; ++i)
    {
        for (j = 1; j <= 100; ++j)
        {
            for (k = 1; k <= 100; ++k)
            {
                if (pow(*side1, 2) + pow(*side2, 2) == pow(*hyp, 2))
                {
                    cout << setw(5) << *side1 << '\t' << setw(5) << *side2 << '\t' << setw(5) << *hyp;  //setw()- used this function to get formatted output from the oimanip library
                    cout << endl;
                }
            }
        }
    }
    return 0;
}
