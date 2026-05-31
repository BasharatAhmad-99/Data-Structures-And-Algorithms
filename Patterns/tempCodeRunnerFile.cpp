#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a=1;
    int c=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<"*";
        }
        for(int k=0;k<a;k++){
            cout<<" ";
        }
        for(int l=0;l<c;l++){
            cout<<"*";
        }
        a+=2;
        c++;
        cout<<endl;
    }
    a=2*n-3;
    int b=2;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<b;j++){
            cout<<"*";
        }
        for(int k=0;k<a;k++){
            cout<<" ";
        }
        for(int l=n;l>0;l){
            cout<<"*";
        }
        a-=2;
        b++;
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