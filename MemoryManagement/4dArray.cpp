// PS J:\R JEEVAN\B.TECH CYS\DSA\MemoryManagement> g++ .\4dArray.cpp
// PS J:\R JEEVAN\B.TECH CYS\DSA\MemoryManagement> ./a

// cube 1
// layer 1
// 1 2 
// 3 4 
// 5 6 
// layer 2
// 7 8 
// 9 1 
// 2 3 
// cube 2
// layer 1
// 4 5 
// 6 7 
// 8 9 
// layer 2
// 1 2 
// 3 4 
// 5 6 
// cube 3
// layer 1
// 7 8 
// 9 1 
// 2 3 
// layer 2
// 4 5 
// 6 7 
// 8 9 
// PS J:\R JEEVAN\B.TECH CYS\DSA\MemoryManagement> 


#include<iostream>
using namespace std;


int main(){

    int c,b,row,col;
    cin>>c>>b>>row>>col;
    
    int****ptr=new int***[c];

    for(int i=0;i<c;i++){
        *(ptr+i)=new int **[b];

        for(int j=0;j<b;j++){
            *(*(ptr+i)+j)=new int*[row];

            for(int k=0;k<row;k++){
                *(*(*(ptr+i)+j)+k)= new int[col];
            }
        }
    }

    for(int i=0;i<c;i++){
        for(int j=0;j<b;j++){
            for(int k=0;k<row;k++){
                for(int l=0;l<col;l++){
                    cin>>*(*(*(*(ptr+i)+j)+k)+l);
                }
            }
        }
    }


    for(int i=0;i<c;i++){
        cout<<"cube "<<i+1<<endl;
        for(int j=0;j<b;j++){
            cout<<"layer "<<j+1<<endl;
            for(int k=0;k<row;k++){
                for(int l=0;l<col;l++){
                    cout<<*(*(*(*(ptr+i)+j)+k)+l)<<" ";
                }
                cout<<endl;
            }
        }
    }

        // ---- Deallocation (reverse order of allocation) ----
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < b; j++) {
            for (int k = 0; k < row; k++)
                delete[] ptr[i][j][k];
            delete[] ptr[i][j];
        }
        delete[] ptr[i];
    }
    delete[] ptr;

}