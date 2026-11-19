#include<iostream>
using namespace std;

int main(){
    int m,n;
    cin>>m>>n;
    int **ptr= new int*[m];

    for(int i=0;i<m;i++){
        ptr[i]= new int [n];
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            int temp;
            cin>>temp;

            ptr[i][j]=temp;
        }
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<ptr[i][j]<<" ";
        }
        cout<<endl;
    }

}