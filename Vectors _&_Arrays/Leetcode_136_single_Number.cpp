#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
        for(int val:nums){
            ans=ans ^ val;
        }
        return ans;
    }
};
int main(){
    Solution a;
    int size;
    cout<<"Enter Vector Size : ";
    cin>>size;
    int num;
    vector<int> vec;
    for(int i=0;i<size;i++){
        cout<<"Element Number "<<i<<" : ";
        cin>>num;
        vec.push_back(num);
    }
    cout<<"Vector Elements : "<<endl;
    for(int val:vec){
        cout<<val<<endl;
    }
    int Unique=a.singleNumber(vec);
    cout<<"Single Number : "<<Unique<<endl;
    return 0;
}