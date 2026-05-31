#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a=1;
    int b=2*n-2;
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<"*";
        }
        for(int k=0;k<b;k++){
            cout<<" ";
        }
        for(int l=0;l<a;l++){
            cout<<"*";
        }
        b-=2;
        a++;
        cout<<endl;
    }
    b=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<"*";
        }
        for(int k=0;k<b;k++){
            cout<<" ";
        }
        for(int l=0;l<n-i;l++){
            cout<<"*";
        }
        b+=2;
        cout<<endl;
    }
    
}

//   j
// i 0 1 2 3 4 5 6 7 8 9        
// 0       *
// 1     *   *
// 2   *       *
// 3 *           * 
// 4   *       *
// 5     *   *
// 6       *
// 7