// Aggressive Cows
// Difficulty: MediumAccuracy: 59.57%Submissions: 138K+Points: 4Average Time: 30m
// You are given an array with unique elements of stalls[], which denote the position of a stall. You are also given an integer k which denotes the number of aggressive cows. Your task is to assign stalls to k cows such that the minimum distance between any two of them is the maximum possible.

// Examples :

// Input: stalls[] = [1, 2, 4, 8, 9], k = 3
// Output: 3
// Explanation: The first cow can be placed at stalls[0], 
// the second cow can be placed at stalls[2] and 
// the third cow can be placed at stalls[3]. 
// The minimum distance between cows, in this case, is 3, which also is the largest among all possible ways.
// Input: stalls[] = [10, 1, 2, 7, 5], k = 3
// Output: 4
// Explanation: The first cow can be placed at stalls[0],
// the second cow can be placed at stalls[1] and
// the third cow can be placed at stalls[4].
// The minimum distance between cows, in this case, is 4, which also is the largest among all possible ways.
// Input: stalls[] = [2, 12, 11, 3, 26, 7], k = 5
// Output: 1
// Explanation: Each cow can be placed in any of the stalls, as the no. of stalls are exactly equal to the number of cows.
// The minimum distance between cows, in this case, is 1, which also is the largest among all possible ways.
// Constraints:
// 2 <= stalls.size() <= 106
// 0 <= stalls[i] <= 108
// 2 <= k <= stalls.size()

// Expected Complexities
// Topic Tags
// Related Articles
// If you are facing any issue on this page.

// BRUTE FORCE APPROCH ***

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int aggressiveCows(vector<int> &stalls, int k) {
        sort(stalls.begin(),stalls.end());
        int n=stalls.size();
        int max_dis=stalls[n-1]-stalls[0];
        int ans=0;
        
        for(int d=1;d<=max_dis;d++){
            int cows=1;
            int prev_stall=stalls[0];
            for(int i=1;i<n;i++){
                if(stalls[i]-prev_stall>=d){
                    cows++;
                    prev_stall=stalls[i];
                    
                }
            }
            if (cows >= k) {
                ans = d; // update max distance
            }
            
        }
        return ans;
        
    }

    int main(){
        vector<int>stalls={10,1,2,7,5};
        int cows=3;
        cout<<aggressiveCows(stalls,cows);
    }