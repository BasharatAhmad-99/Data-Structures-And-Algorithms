#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a=1;
    int num=1;
    int i;
    for(i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<" ";
        }
        for(int k=0;k<a;k++){
            if(num<i+1) cout<<num++;
            else{
                for(int l=k;l<a;l++){
                    cout<<num--;
                }
                break;
            }
        }
        num=1;
        a+=2;
        cout<<endl;
    }
    return 0;
} 
