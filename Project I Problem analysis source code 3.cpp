#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    cout << "Side1" << '\t' << "Side2" << '\t' << "Hypot" << endl;
    int coun = 0;
    int i, j, k;
    int *side1, *side2, *hyp; // i- the value of side 1
    side1 = &i;               // j- the value of side 2
    side2 = &j;               // k- the value of hypotenuse
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
// without pointer we can do it like this
/*
#include <iostream>
#include<cmath>
using namespace std;

int main() {
  cout<<"side1"<<'\t'<<"side2"<<'\t'<<"hypotnenuse"<<endl;
      for(int i=1;i<=100;i++){
        for(int j=1;j<=100;j++){
          for(int k=1;k<=100;k++){
            if(pow(i,2)+pow(j,2)==pow(k,2)){
              cout<<" "<<i<<'\t'<<" "<<j<<'\t'<<" "<<k<<endl;
            }
          }
        }
      }
  return 0;
}*/
