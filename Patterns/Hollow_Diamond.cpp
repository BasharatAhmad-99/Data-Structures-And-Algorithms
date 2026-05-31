#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<" ";
        }
        for(int k=0;k<a;k++){
            if(k==0 || k==a-1) cout<<"*";
            else cout<<" ";
        }
        a+=2;
        cout<<endl;
    }
    a=2*n-3;
    int b=2;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<b;j++){
            cout<<" ";
        }
        for(int k=0;k<a;k++){
            if(k==0 || k==a-1) cout<<"*";
            else cout<<" ";
        }
        a-=2;
        b++;
        cout<<endl;
    }
    
}
