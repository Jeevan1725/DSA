// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;

// void substring(string s){
//     int n=s.size();
   
//     vector<string>ans;
//     for(int i=0;i<n;i++){
//         for(int j=i;j<n;j++){
//             string temp;
//             for(int k=i;k<=j;k++){
//                 temp+=s[k];
                
//             }
//             ans.push_back(temp);
//             temp.clear();
            
//         }       
//     }
//     for(auto i:ans){
//         cout<<i<<" ";
//     }

//     int maxLen = 0;

//     for(int i = 0; i < ans.size(); i++){
//         int freq[256] = {0};
//         bool unique = true;

//         // Check uniqueness of ans[i]
//         for(int j = 0; j < ans[i].size(); j++){
//             unsigned char c = ans[i][j];
//             freq[c]++;
//             if(freq[c] > 1){
//                 unique = false;
//                 break;
//             }
//         }

//         if(unique) {
//             int len = ans[i].size();
//             if(len > maxLen)
//                 maxLen = len;
//         }
//     }
//     cout<<maxLen;

    

// }

void substring(string s){
    int first=0, second=0,maxlen=0;;
    while(second<s.size()){
       
        int freq[256]={0};
         second=first;
        if(freq[s[second]]==1){

           
            break;            

        }
        else {
            freq[s[second]]++;
            maxlen=max(maxlen,first-second+1);
            second++;
            
        }
        first++;
    }
    cout<<maxlen;
}

int main() {
    string str="abcdeecbeadf";
    substring(str);   
    

    return 0;
}