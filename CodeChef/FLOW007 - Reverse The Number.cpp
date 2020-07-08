#include<iostream>
using namespace std;

int main(){

int T;
cin>>T;
int N[T],temp[T],r[T],sum[T] = {0,0,0};

for(int i=0;i<T;i++){
    cin>>N[i];
    temp[i] = N[i];
}
for(int i=0;i<T;i++){

    while(temp[i]!=0){
        r[i] = temp[i]%10;
        sum[i] = sum[i]*10+r[i];
        temp[i] = temp[i]/10;
    }
}
for(int i=0;i<T;i++){
    cout<<sum[i]<<endl;
}

}
