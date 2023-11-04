class Solution {
public:
    int lengthOfLongestSubstring(string nums) {
      unordered_map<int,int>mp;
        int i=0,j=0;
        int maxi=INT_MIN;
        
        while(j<nums.size())
        {
            mp[nums[j]]++;
             
            if(mp.size()==j-i+1)
            {
               
                maxi = max(maxi,j-i+1);
               
            }
            if(mp.size()<j-i+1)
            {
                while(mp.size()<j-i+1)
                {
                    mp[nums[i]]--;
                    
                    
                    if(mp[nums[i]]==0)
                        mp.erase(nums[i]);
                    
                    i++;
                }
              
            }
            j++;
        }
        if(maxi==INT_MIN) return 0;
        return maxi;   
    }
};