#include<iostream>
#include<vector>
using namespace std;

// bool subarrayequall(vector<int>arr){
//     int n=arr.size();
//     for(int i=0;i<n-1;i++){
//         int sum1=0,sum2=0;

//         for(int j=0;j<i;j++){
//             sum1+=arr[j];
//         }
//         for(int k=i;k<n;k++){
//             sum2+=arr[k];
//         }
//         if(sum1==sum2) return true;

//     }
//     return false;
// }

bool subarrayequall(vector<int>arr){
    int n=arr.size();
    int tsum=0;
    for(int i:arr)tsum+=i;

    int prefix=0;
    for(int i=0;i<n;i++){
        prefix+=arr[i];
        int suffix=tsum-prefix;
        if(prefix==suffix) return true;
    }
    return false;
}



int main(){
    vector<int>arr={3,4,-2,5,8 ,20,-10,8};
    cout<<subarrayequall(arr);
}
