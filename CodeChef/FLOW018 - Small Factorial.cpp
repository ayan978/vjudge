#include<iostream>
using namespace std;

int main(){

   int T;
   cin>>T;
   int x[T],fact[T];

   for(int i=0;i<T;i++){

    cin>>x[i];
   }

   for(int i=0;i<T;i++){

       fact[i] = 1;
    for(int j=x[i];j>=1;j--){


       fact[i] = fact[i]*j;
    }
   }
   for(int i=0;i<T;i++){

    cout<<fact[i]<<endl;
   }


}
