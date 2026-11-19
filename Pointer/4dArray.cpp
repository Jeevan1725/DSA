#include<iostream>
using namespace std;

int main(){
    int c,b,h,l;
    cin>>c>>b>>h>>l;

    int ****ptr=new int ***[c];
    for(int i=0;i<c;i++){
        ptr[i]=new int **[b];
        for(int j=0;j<b;j++){
            ptr[i][j]=new int * [h];
            for(int k=0;k<h;k++){
                ptr[i][j][k]=new int  [l];

            }
        }  
    }
   
    for(int i=0;i<c;i++){       
        for(int j=0;j<b;j++){            
            for(int k=0;k<h;k++){
                for(int q=0;q<l;q++){
                    int temp;
                   
                    ptr[i][j][k][q]=i+j+k+q;

                }               

            }
        }  
    }

    
    cout<<endl;

    for(int i=0;i<c;i++){ 
        cout<<"---------------"<<endl;      
        cout<<i+1 <<" cube"<<endl; 
        for(int j=0;j<b;j++){            
            for(int k=0;k<h;k++){
                for(int q=0;q<l;q++){                   
                    cout<<ptr[i][j][k][q]<<" ";
                }
                cout<<endl;  
            }
            cout<<endl;  
                      
        }  
        
        cout<<"---------------"<<endl;  
    }
    
    
}