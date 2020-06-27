#include<iostream>
using namespace std;

int main(){

  int T;
  cin>>T;
  int A[T],B[T],C[T];

  for(int i=0;i<T;i++){
    cin>>A[i]>>B[i]>>C[i];
  }

  for(int i=0;i<T;i++){

            if((A[i] > B[i])&& ( A[i] > C[i]))

                {
                    if(B[i]>C[i]){
                        cout<<B[i]<<endl;
                    }
                    else{
                        cout<<C[i]<<endl;
                    }
                }

            else if((B[i] > A[i])&& ( B[i] > C[i]))
                    {
                        if(A[i]>C[i]){
                        cout<<A[i]<<endl;
                    }
                    else{
                        cout<<C[i]<<endl;
                    }

                    }
               else if(A[i]>B[i]){
                cout<<A[i]<<endl;
               }
               else{
                cout<<B[i]<<endl;
               }


        }



}
