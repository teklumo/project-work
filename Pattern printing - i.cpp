#include <iostream>
using namespace std;
int main()
{
  int n;
a:
  cout << "Enter the size of the pattern: ";
  cin >> n;

  cout << "\n*** THE SHAPE OF YOUR PATTERN IS ***\n";
  cout << "-------------------------------------\n\n";

  if (n <= 0)
  {
    cout << "You entered invalid size.Please enter a positive integer!\n";
    goto a;
  }
   if (n % 2 != 0)
  {
  n = n + 2;
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

//Second method of implementation

/*
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int h, h1, h2;
    enterAgain:
    cout << "Enter the height: ";
    cin >> h; // h- total number of rows

    if (h >= 1 && h % 2 == 0)
    {
        h1 = h / 2;  // h1 - number of rows for the upper (upside down) triangle.
        h2 = h1 - 1; // h2 - number of rows for the lower triangle excluding the peak.
    }
    else if (h >= 1 && h % 2 != 0)
    {
        h1 = h / 2 + 1;
        h2 = h1 - 1;
    }
    else
    {
        cout << "You have entered an invalid size. Please enter a positive integer!" << endl;
        goto enterAgain;
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
                cout << " " << (char)(x + abs(h1 - j));
            else
                cout << "  ";
        }
        cout << endl;
    }
    return 0;
}
*/



//thrid method of implementation
/*
#include<iostream>
using namespace std;
int main(){
int i,j,k,n;
cout<<"Enter the number of column of the pattern : ";
cin>>n;
//If n is even number of column and number of row are 'n-1'
//If n is odd number of column and number of row are 'n-2'
cout<<"\n*** THE SHAPE OF YOUR PATTERN IS ***\n";
cout<<"----------------------------------\n\n";
for(i=1;i<n/2;i++)
{
	for(j=1;j<i;j++)
	{
		cout<<"  ";
	}
	char ch='A';
	for(j=1;j<=(n/2)-i;j++)
    {
        ch++;
    }

	for(k=1;k<=(n/2)-i;k++)
	{
		cout<<" "<<ch;
		ch--;
	}
    for(k=0;k<=(n/2)-i;k++)
	{
		cout<<" "<<ch;
		ch++;
	}
	cout<<endl;
}

for(i=1;i<=(n/2);i++)
{
	for(j=1;j<=(n/2)-i;j++)
	{
		cout<<"  ";
	}
	char ch='A';
	for(j=1;j<i;j++)
    {
        ch++;
    }

	for(k=1;k<i;k++)
	{
		cout<<" "<<ch;
		ch--;
	}
	for(k=1;k<=i;k++)
	{
		cout<<" "<<ch;
		ch++;
	}
	cout<<endl;
}
 }
*/
