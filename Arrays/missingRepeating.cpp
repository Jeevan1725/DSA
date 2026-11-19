#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// vector<int>missingrepeating(vector<int>arr){
//     int n=arr.size();
//     int missing=0,repeating=0;
//     vector<int>op;

//     for(int i=0;i<n;i++){
//         int ans=0;
//         for(int j=0;j<n;j++){
//             if(i+1==arr[j]) ans++;
//         }
//         if(ans>1) repeating=i+1;
//         else if(ans==0) missing=i+1;
//     }
//     op.push_back(missing);
//     op.push_back(repeating);
//     return op;

// }

// vector<int>missingrepeating(vector<int>&arr){
//     int n=arr.size();
//     int repeating=0,missing=0;
//     vector<int>op;
//     sort(arr.begin(),arr.end());
//     for(int i=0;i<n;i++){
//         if(arr[i]!=i+1) {
           
//             missing=i+1;
//         }

//     }
//     op.push_back(missing);
//     op.push_back(repeating);
//     return op;
// }

// vector<int>missingrepeating(vector<int>&arr){
//     int n=arr.size();
//     vector<int>ans(n+1,0);
//     int repeating=0,missing=0;
   
//     for(int i=0;i<n;i++){
//         ans[arr[i]]++;
//     }
//     for(int i=1;i<=n;i++){
//         if(ans[i]==0)missing=i;
//         else if (ans[i]>1)repeating=i;
//     }
   
//     return {missing,repeating};
// }

// vector<int>missingrepeating(vector<int>&arr){
//     int n=arr.size();
//     vector<int>ans(n,0);
//     int repeating=0,missing=0;
   
//     for(int i=0;i<n;i++){
//         ans[arr[i]-1]++;
//     }
//     for(int i=0;i<n;i++){
//         if(ans[i]==0)missing=i+1;
//         else if (ans[i]>1)repeating=i+1;
//     }
   
//     return {missing,repeating};
// }

vector<int>missingrepeating(vector<int>&arr){
    int n=arr.size();
    int repeating=0,missing=0;

    for(int i=0;i<n;i++)arr[i]=arr[i]-1;

    for(int i=0;i<n;i++){
        int temp=arr[i]%n;
        arr[temp]+=7;

    }
    for(int i=0;i<n;i++){
        if((arr[i]/n)==0)missing=i+1;
        else if ((arr[i]/n)>1)repeating=i+1;
    }
   
    return {missing,repeating};
}

int main(){
    vector<int>arr={4,6,5,7,3,1,5};
    vector<int>op=missingrepeating(arr);
    cout<<"Missing: "<<op[0]<<endl;
    cout<<"Repeating: "<<op[1];
}