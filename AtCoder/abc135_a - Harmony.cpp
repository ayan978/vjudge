#include<iostream>
#include<cmath>
using namespace std;

int main(){


  int A,B,K=0,minimum,maximum,found=0;
  cin>>A>>B;

  if(A<B){
    minimum = A;
    maximum = B;
  }
  else{
    minimum = B;
    maximum = A;
  }
    for(int i=0;i<=maximum;i++){

        if(abs(minimum-i)==abs(maximum-i)){
            K = i;
            found++;
            break;
        }
        K++;
    }
        if(found==0){
            cout<<"IMPOSSIBLE"<<endl;
        }
        else
            cout<<K<<endl;

}
