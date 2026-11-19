#include<iostream>
#include<vector>
using namespace std;

//90 degree rotated array

// //Time complexity o(n^2) space complexity o(n*n)

// vector<vector<int>> rotateImage(vector<vector<int>>& arr){
//       int n=arr.size();
//       vector<vector <int>> ans(n,vector<int> (n)) ;

//       for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             ans[i][j]=arr[n-1-j][i];
//         }
//       }
//       return ans;
// }

vector< vector<int>> rotateImage(vector<vector<int>> arr,int k){
    int n=arr.size();

 

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            swap(arr[i][j],arr[j][i]);

        }
    }


    for(int i=0;i<n;i++){
        int st=0,end=n-1;
        while(st<end){
            swap(arr[i][st],arr[i][end]);
            st++;
            end--;
        }
    }

    return arr;


}

int main(){
    vector<vector<int>> arr={ {1,2,3},{4,5,6},{7,8,9}};
    vector<vector<int>> ans=rotateImage(arr,2);
     int n=arr.size();
     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
      }
      cout<<endl;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
      }


}