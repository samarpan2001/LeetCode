//Leet Code Daily Problem Solution : 2025-05-11 : 
🔍 Approach:
We use a simple linear scan through the array while maintaining a counter cnt that keeps track of the number of consecutive odd numbers seen so far.

If the current number is odd (arr[i] % 2 != 0), we increment cnt.

If it's even, we reset cnt to 0 since the streak of odd numbers is broken.

If at any point cnt becomes 3, it means we've found three consecutive odd numbers, so we return true.

If we finish the loop without hitting 3 consecutive odds, we return false.

🧠 Why This Works:
We only need a single pass through the array: O(n) time complexity.

We use constant extra space.

This greedy approach is optimal because we stop the moment we find a valid sequence.

🧪 Example:
For arr = [1, 2, 34, 3, 4, 5, 7, 23, 12]:

The segment [5, 7, 23] contains three odd numbers in a row, so the function returns true.

  
class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int cnt  = 0 ; 
        for(int i= 0 ; i<arr.size() ; i++){
            if(arr[i]%2!=0) cnt ++ ; 
            else cnt = 0 ; 
            if(cnt == 3) return true ; 
        }

        return false ; 
    }
};
