#include<iostream>
using namespace std;

void print1(int n){
int num=1;
for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
       cout<<num<<" ";
       num=num+1; 
    }
    cout<<endl;
}

}


void print2(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void print3(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void print4(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

void print5(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i;

        }
        cout<<endl;
    }
}

void print6(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout<<"*";

        }
        cout<<endl;
    }
}
void print7(int n){
     for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout<<j<<" ";

        }
        cout<<endl;
    }
}
void print8(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<(n-i-1);j++){
            cout<<" ";
            
        }
        for(int K=0;K<(2*i+1);K++){
            cout<<"*";

        }
         for(int j=0;j<(n-i-1);j++){
            cout<<" ";
            
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter a number?";
    cin>>n;
    print8(n);
  return 0;
}