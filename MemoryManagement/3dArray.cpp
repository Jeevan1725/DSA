#include<iostream>
using namespace std;

int main(){

    int b,row,col;
    cin>>b>>row>>col;

    int***ptr= new int**[b];

    for(int i=0;i<b;i++){
        *(ptr+i)=new int*[row];

        for(int j=0;j<row;j++){
            *(*(ptr+i)+j)=new int [col];
        }
    }

    for(int i=0;i<b;i++){
        for(int j=0;j<row;j++){
            for(int k=0;k<col;k++){
                cin>>*(*(*(ptr+i)+j)+k);
            }
        }
    }

     for(int i=0;i<b;i++){
        for(int j=0;j<row;j++){
            for(int k=0;k<col;k++){
                cout<<*(*(*(ptr+i)+j)+k)<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
        cout<<"-----------------------------------------"<<endl;
    }

}