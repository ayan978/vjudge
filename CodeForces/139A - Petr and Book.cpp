#include<iostream>
using namespace std;

int main(){

int total;
cin>>total;
int days[7];

for(int i=0;i<7;i++){
   cin>>days[i];
}

for(int i=0;i<7;i=(i+1)%7){

        total -= days[i];

        if(total<=0){
        cout<<i+1;
        break;

    }
}
}
