#include<iostream>
using namespace std;

int main(){

  int T;
  cin>>T;
  char X[T];

  for(int i=0;i<T;i++){

      cin>>X[i];
  }
  for(int i=0;i<T;i++){

    if(X[i]=='B' || X[i]=='b')
        cout<<"BattleShip"<<endl;
    else if(X[i]=='C' || X[i]=='c')
        cout<<"Cruiser"<<endl;
    else if(X[i]=='D' || X[i]=='d')
        cout<<"Destroyer"<<endl;
    else if(X[i]=='F' || X[i]=='f')
        cout<<"Frigate"<<endl;
  }

}
