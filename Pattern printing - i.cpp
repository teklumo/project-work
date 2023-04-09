#include <iostream>
using namespace std;

int main()
{
  int n;
a:
  cout << "Enter the size: ";
  cin >> n;
  if (n <= 0)
  {
    goto a;
  }
  for (int i = 0; i < n / 2; i++)
  {
    for (int k = 0; k < i; k++)
    {
      cout << "  ";
    }
    for (int j = ((n / 2) - 1) - i; j >= 0; j--)
    {
      cout << char(j + 65) << " ";
    }
    for (int m = 1; m < (n / 2) - i; m++)
    {
      cout << char(m + 65) << " ";
    }
    cout << endl;
  }
  for (int i = 0; i < ((n / 2) - 1); i++)
  {
    for (int k = ((n / 2) - 2) - i; k > 0; k--)
    {
      cout << "  ";
    }
    for (int j = i + 1; j >= 0; j--)
    {
      cout << char(j + 65) << " ";
    }
    for (int m = 1; m <= i + 1; m++)
    {
      cout << char(m + 65) << " ";
    }
    cout << endl;
  }
  return 0;
}


// Another method of implementation of the program
/*

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int h, h1, h2;
a:
    cout << "Enter the height: ";
    cin >> h; // h- total vertical columns

    if (h >= 1 && h % 2 == 0)
    {
        h1 = h / 2;  // h1 - number of columns the first loop
        h2 = h1 - 1; // h2 - number of columns the second loop
    }
    else if (h >= 1 && h % 2 != 0)
    {
        h1 = h / 2 + 1;
        h2 = h1 - 1;
    }
    else
    {
        cout << "You have entered an invalid size. Please enter a positive integer!" << endl;
        goto a;
    }

    int x = 65;
    for (int i = 1; i <= h1; ++i)
    {
        for (int j = 1; j <= 2 * h1 - 1; ++j)
        {
            if (i <= j && i + j <= 2 * h1)
                cout << " " << (char)(x + abs(h1 - j));
            else
                cout << "  ";
        }
        cout << endl;
    }
    for (int i = 1; i <= h2; ++i)
    {
        for (int j = 1; j <= 2 * h1 - 1; ++j)
        {
            if (i + j >= h1 && j - i <= h1)
                cout << " " << (char)(x + abs(h2 - j + 1));
            else
                cout << "  ";
        }
        cout << endl;
    }
    return 0;
}
*/
