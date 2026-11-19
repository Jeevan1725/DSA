// Move all negative elements to end

#include<iostream>
#include<vector>
using namespace std;
vector<int> changer(vector<int> arr){
    vector<int>temp;
    for(int i:arr){
        if(i>=0){
            temp.push_back(i);
        }
    }
    for(int i:arr){
        if(i<0){
            temp.push_back(i);
        }
    }
   
    return temp;

}

int main(){
    vector<int>arr={1, -1, 3, 2, -7, -5, 11, 6};
    vector<int>op=changer(arr);
    for(int i:op){
        cout<<i<<" ";
    }
    

}

