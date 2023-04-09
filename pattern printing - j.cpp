#include<iostream>
using namespace std;

int main(){
	int n;
	a:
  cout << "Enter the size: ";   // you can try with 8 
	cin>>n;
	if(n<=0){
		goto a;
	}
  for(int i=0;i<(n/2);i++){
    for(int j=0;j<=i;j++){
      cout<<char(j+65);
    }
    for(int k=(n/2);k>i;k--){
      cout<<"  "; 
    }
    for(int m=i;m>=0;m--){
      cout<<char(m+65);
    }
    cout<<endl;
    if(i==(n/2)-1){

    for(int k=0;k<(n/2);k++){
      cout<<char(k+65);
    }
    for(int k=(n/2)+1;k>=0;k--){
    	if(k==((n/2))){
			continue;
		}
      cout<<char(k+65);
    }
    cout<<endl;
	}
  }
  
  for(int i=0;i<(n/2);i++){
    for(int j=0;j<(n/2)-i;j++){
      cout<<char(j+65);
    }
    for(int k=0;k<=i;k++){
      cout<<"  ";
    }
    for(int m=((n/2)-1)-i;m>=0;m--){
      cout<<char(m+65);
    }
    cout<<endl;
  }
  return 0;
}
