// Print Matrix in snake Pattern
// Difficulty: EasyAccuracy: 68.08%Submissions: 78K+Points: 2Average Time: 15m
// Given a matrix of size N x N. Print the elements of the matrix in the snake like pattern depicted below.


// Examples :

// Input: N = 3, matrix[][] = [[45, 48, 54], [21, 89, 87], [70, 78, 15]]
// Output: 45 48 54 87 89 21 70 78 15 
// Explanation: Printing it in snake pattern will lead to the output as 45 48 54 87 89 21 70 78 15.
// Input: N = 2, matrix[][] = [[1, 2], [3, 4]]
// Output: 1 2 4 3 
// Explanation: Printing it in snake pattern will give output as 1 2 4 3.
// Constraints:
// 1 <= N <= 103
// 1 <= mat[i][j] <= 109


#include<iostream>
#include<vector>
using namespace std;

vector<int> snakePattern(vector<vector<int> > matrix) {
        int n=matrix.size();
        vector<int>ans;
        for(int i=0;i<n;i++){
            if(i%2==0){
                int st=0,end=n-1;
                while(st<=end){
                    ans.push_back(matrix[i][st]);
                    st++;
                }
            }
            
            else{
                int st=n-1,end=0;
                while(st>=end){
                    ans.push_back(matrix[i][st]);
                    st--;
                }
            }
                
        }
        
        return ans;
        
        
        
    }
int main(){
        vector<vector<int>> arr={ {1,2,3},{4,5,6},{7,8,9}};
        int n=arr.size();        
        vector<int> ans=snakePattern(arr);
        
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