#include<iostream>
using namespace std;

int main(){

int T,a,b,j=0,k=0;
cin>>T;
int A[T];

for(int i=0;i<T;i++){

     cin>>A[i];

}
for(int i=0;i<T;i++){
    if(A[i]%2==0){
        j++;
        if(j==1){
            a=i+1;
        }
    }
    else{
        k++;
        if(k==1){
            b=i+1;
            

        }
    }
}

if(j==1){
    cout<<a;
}
else{
    cout<<b;
}
}
