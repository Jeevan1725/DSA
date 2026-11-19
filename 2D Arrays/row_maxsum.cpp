#include<iostream>
using namespace std;

int main(){
    int arr[3][3]={1000,2,3,4,5,6,7,8,9};
    int maxsum=-1;
    int idx=-1;
    for(int i=0;i<3;i++){
        int sum=0;
        for(int j=0;j<3;j++){            
            sum+=arr[i][j];
            if(sum>maxsum){
                idx=i;
                maxsum=sum; 
            }
            
        }
        
    }
    cout<<idx;

}