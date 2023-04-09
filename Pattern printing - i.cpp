#include<iostream>
using namespace std;

int main(){
	int n;
	a:
  cout << "Enter the size: ";
	cin>>n;
	if(n<=0){
		goto a;
	}
  for(int i=0;i<n/2;i++){
    for(int k=0;k<i;k++){
      cout<<"  ";
    }
    for(int j=((n/2)-1)-i;j>=0;j--){
      cout<<char(j+65)<<" ";
    }
    for(int m=1;m<(n/2)-i;m++){
      cout<<char(m+65)<<" ";
    }
    cout<<endl;
  }
  for(int i=0;i<((n/2)-1);i++){
    for(int k=((n/2)-2)-i;k>0;k--){
      cout<<"  ";
    }
    for(int j=i+1;j>=0;j--){
      cout<<char(j+65)<<" ";
    }
    for(int m=1;m<=i+1;m++){
      cout<<char(m+65)<<" ";
    }
    cout<<endl;
  }
  return 0;
}
