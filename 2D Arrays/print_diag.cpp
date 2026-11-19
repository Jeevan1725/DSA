// Print Diagonally
// Difficulty: EasyAccuracy: 66.11%Submissions: 40K+Points: 2Average Time: 10m
// Give a N * N square matrix A, return all the elements of its anti-diagonals from top to bottom.

// Example 1:

// Input: 
// N = 2
// A = [[1, 2],
//      [3, 4]]
// Output:
// 1 2 3 4
// Explanation: 

// Hence, elements will be returned in the 
// order {1, 2, 3, 4}.
// Example 2:

// Input: 
// N = 3 
// A = [[1, 2, 3],
//      [4, 5, 6],
//      [7, 8, 9]]
// Output: 
// 1 2 4 3 5 7 6 8 9
// Explanation: 

// Hence, elements will be returned in 
// the order {1, 2, 4, 3, 5, 7, 6, 8, 9}

#include<iostream>
#include<vector>
using namespace std;

vector<int> downwardDiagonal(int N, vector<vector<int>> a) {
        vector<int>ans;
        for(int i=0;i<N;i++){
            int st=0 ,end=i;
            while(st<N && end >=0){
                ans.push_back(a[st][end]);
                st++;
                end--;
            }
        }
        
        
        for (int i = 1; i < N; i++) {
            int st = i, end = N - 1;
            while (st < N && end >= 0) {
                ans.push_back(a[st][end]);
                st++;
                end--;
            }
        }

        
        
        
        return ans;
    }


    int main(){
        vector<vector<int>> arr={ {1,2,3},{4,5,6},{7,8,9}};
        int n=arr.size();        
        vector<int> ans=downwardDiagonal(n,arr);
        
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;

        for(int i:ans){            
                cout<<i<<" ";           
          
        }
        }