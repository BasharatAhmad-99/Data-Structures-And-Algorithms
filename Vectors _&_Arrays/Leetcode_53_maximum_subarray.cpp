#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int current =0;
        int max_Sum=INT_MIN;
        for(int val:nums){
            current += val;
            max_Sum=max(current,max_Sum);
            if(current < 0){
                current=0;
            }
        }
        return max_Sum;
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
    int max=a.maxSubArray(vec);
    cout<<"Maximum Sub Array : "<<max<<endl;
    return 0;
}