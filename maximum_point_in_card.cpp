#include<bits/stdc++.h>
using namespace std;

void maximumpoint(vector<int>&arr, int k ){
    int lsum =0,rsum =0,maxsum = 0;
    for(int i =0;i<k-1;i++){
        lsum = lsum+arr[i];
    }
    maxsum = lsum;
    int rindex = arr.size()-1;
    for(int i = k-1;i>=0;i--){
        lsum = lsum - arr[i];
        rsum = rsum + arr[rindex];
        rindex -= 1;
        
        maxsum = max(maxsum, lsum + rsum);
    }
    cout<<"The maximum of points is: "<<maxsum;
}
int main(){
    int n,k;
    cout<<"Enter the size of array";
    cin>>n;
    cout<<"Enter numbe of cards";
    cin>>k;
    vector<int>arr(n);
    for(int i =0;i<n;i++){
        cin>>arr[i];
        cout<<'\n';
    }
    maximumpoint(arr,k);
}