// 3 6 4 2      input
// 7 8 11 5
// 9 3 2 1
// 17 8 5 9


//output
// 3 7 9 17 8 3 8 6 4 11 2 5 9 1 5 2

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<vector<int>>matrix={{3,6,4,2},{7,8,11,5},{9,3,2,1},{17,8,5,9}};
    int row=matrix.size(),col=matrix[0].size(); 

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){            
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;

    }
    cout<<endl;

    for(int i=0;i<row;i++){
        if(i%2==0){
            for(int j=0;j<col;j++){  
                cout<<matrix[j][i]<<" ";          

            } 
            cout<<endl;      
        }
        else{
            for(int j=col-1;j>=0;j--){  
                cout<<matrix[j][i]<<" ";          

            } 
            cout<<endl;    
        }
    }
}