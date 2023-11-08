class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
         stack<pair<int,int>>st;
         vector<int>res(temp.size());
         for(int i =0;i<temp.size();i++){
            while(!st.empty() && st.top().first<temp[i]){
               res[st.top().second] = abs(st.top().second-i);
                st.pop();
            }
            if(st.empty()){
              st.push({temp[i],i});
            }
             else{
                st.push({temp[i],i});
             }
         }

         return res;
    }
};