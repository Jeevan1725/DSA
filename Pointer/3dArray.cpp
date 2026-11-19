#include<iostream>
using namespace std;

int main(){
    int b,h,l;
    cin>>b>>h>>l;

    int ***ptr=new int **[b];
    for(int i=0;i<b;i++){
        ptr[i]=new int *[h];
        for(int j=0;j<h;j++){
            ptr[i][j]=new int [l];
        }  
    }

    for(int i=0;i<b;i++){
        for(int j=0;j<h;j++){
            for(int k=0;k<l;k++){
                int temp;
                cin>>temp;
                ptr[i][j][k]=temp;
            }
        }
    }
    cout<<endl;

    for(int i=0;i<b;i++){
        for(int j=0;j<h;j++){
            for(int k=0;k<l;k++){
                
                cout<<ptr[i][j][k]<<" ";
            }
            cout<<endl;   
        }
        cout<<endl;
    }
    
}