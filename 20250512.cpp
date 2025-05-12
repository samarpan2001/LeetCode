


class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        vector<int> ans ; 
        vector<int>mp(10,0) ; 
        vector<int>temp ; 
        for(int x : digits){
            mp[x]++ ; 
        }
        for(int i=100;i<1000;i=i+2){
            int num = i ;
            temp = mp ;
            bool f = true ;
            while(num){
                int x = num%10 ;
                temp[x]-- ; 
                if(temp[x]<0)f = false ; 
                num = num/10 ;  
            }
            if(f) ans.push_back(i);
        }
        return ans ;
    }
};
