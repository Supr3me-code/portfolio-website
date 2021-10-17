// Given an array of positive and negative numbers. Find if 
// there is a subarray (of size at-least one) with 0 sum.

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    bool subArrayExists(int arr[], int n){
        set<int> s;
        int sum = 0;
        for(int i=0;i<n;i++){
            sum += arr[i];
            if(arr[i]==0 || sum==0){
                return true;
            }
            // a1 + a2 + a3 + subarray with sum zero = a1 + a2 + a3
            else if(s.find(sum)!=s.end()){
                return true;
            }else{
                s.insert(sum);
            }
        }

        return false;
    }
};

int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        Solution ob;
        if(ob.subArrayExists(arr,n)){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}