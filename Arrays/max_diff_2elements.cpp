    // Given an array of integers, the task is to find the maximum difference between any two elements such that larger element appears after the smaller number.  We mainly need to find maximum difference in an inversion (larger before smaller)

    // Note: If no such pair exists, return -1.

    // Input : arr = [2, 3, 10, 6, 4, 8, 1]
    // Output : 8
    // Explanation : The maximum difference is between 10 and 2.

    // Input : arr = [7, 9, 5, 6, 3, 2]
    // Output : 2
    // Explanation : The maximum difference is between 9 and 7.

    // Input: arr = [4, 3, 3, 2, 1]
    // Output: -1
    // Explanation: No such pair exists such that i < j and arr[i] < arr[j].

    #include<iostream>
    #include<vector>
    #include<climits>
    using namespace std;

    //Brute force approach
    int maxdiff(vector<int>arr){
        int n=arr.size();
        int maxdiff=-1;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(arr[j]>arr[i]) 
                maxdiff=max(maxdiff,arr[j]-arr[i]);
            }
        }
        return maxdiff;
    } //Time compelxity o(n^2)


    // //approach using suffix with using an extra array
    // int maxdiff(vector<int>arr){
    //     int n=arr.size();
    //     vector<int>suffixmax(n);
    //     suffixmax[n-1]=arr[n-1];   
        
    //     for(int i=n-2;i>=0;i--){
    //         suffixmax[i]=max(arr[i], suffixmax[i+1]);
    //     }

    //     int maxval=INT_MIN;
     
    //     for(int i=0;i<n-1;i++){
    //         if(suffixmax[i+1]>arr[i])
    //         maxval=max(maxval,suffixmax[i+1]-arr[i]);      
    //     }     
    //     if(maxval==INT_MIN)return -1;
    //     return maxval;      
    // }  //Time compelxity o(n)
    //    //space compelxity o(n)

    int maxdiff(vector<int>arr){
        int n=arr.size(),suffix=INT_MIN,maxval=INT_MIN;        

        for(int i=n-2;i>=0;i--){
            suffix=max(arr[i+1],suffix);
            if(arr[i]<suffix){
                maxval=max(maxval,suffix-arr[i]);
            }
        }

        if(maxval==INT_MIN) return -1;
        return maxval;
    }   //Time compelxity o(n)
        //space compelxity o(1)

    int main(){
        vector<int>arr={4, 3, 3, 2, 1};
        cout<<maxdiff(arr)<<endl;;
        return 0;
    }
