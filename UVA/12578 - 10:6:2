#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main(){

 int T;
 cin>>T;
 int L[T];
 double W[T],R[T], AreaG[T],AreaR[T];

 for(int i=0;i<T;i++){

    cin>>L[i];
    W[i] = L[i]*0.6;
    R[i] = L[i]*0.2;

}

for(int i=0;i<T;i++){

    AreaR[i] = acos(-1)*R[i]*R[i];
    AreaG[i] = ((L[i]*W[i])- AreaR[i]);
}

for(int i=0;i<T;i++){

        cout<<std::fixed<<std::setprecision(2)<<AreaR[i]<<" "<<AreaG[i]<<endl;

}

}
