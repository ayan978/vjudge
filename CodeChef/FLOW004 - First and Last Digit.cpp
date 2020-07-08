#include<iostream>
using namespace std;

int main(){


    int T;
    cin>>T;
    int x[T],first[T],last[T],sum[T];

    for(int i=0;i<T;i++){

        cin>>x[i];
    }

    for(int i=0;i<T;i++){

        sum[i] = 0;
        last[i] = x[i]%10;

        while(x[i]>=10){

            x[i] = x[i]/10;
        }
        first[i] = x[i];
        sum[i] = first[i] + last[i];
    }

    for(int i=0;i<T;i++){

        cout<<sum[i]<<endl;
    }

}
