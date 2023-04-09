#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int h, w1, w2;
    enterAgain:
    cout << "Enter the number of row of the pattern: ";
    cin >> h;   // h - total horizontal row
    
    cout<<"*** THE SHAPE OF YOUR PATTERN IS ***\n";
    cout<<"---------------------------------\n\n";
    
    if (h >= 1 && h % 2 == 0)
    {
        w1 = h / 2;  // w1 - number of column of first inner loop (left side triangle)
        w2 = w1 - 1; // w2 - number of column of second inner loop (right side triangle excluding the initial point)
    }
    else if ((h >= 1) && (h % 2 != 0))
    {
        w1 = (h / 2) + 1;
        w2 = w1 - 1;
    }
    else
    {
        cout << "You have entered an invalid size. Please enter a positive integer!" << endl;
        goto enterAgain;
    }

    int x = 65;
    for (int i = 1; i <= h; ++i)
    {
        for (int j = 1; j <= w1; ++j)
        {
            if ((i >= j) && (i + j <= 2 * w1))
            {
                if ((i == w1) && (j == w1))
                {
                    cout << " " << (char)(x + 1);
                }
                else
                    cout << " " << (char)(x);
            }

            else
                cout << "  ";
            ++x;
        }
        x = 65 + w2 - 1;
        for (int j = 1; j <= w2; ++j)
        {
            if (i + j >= w1 && i - j <= w1)
                cout << " " << (char)(x);
            else
                cout << "  ";
            --x;
        }

        x = 65;
        cout << endl;
    }
    return 0;
}
