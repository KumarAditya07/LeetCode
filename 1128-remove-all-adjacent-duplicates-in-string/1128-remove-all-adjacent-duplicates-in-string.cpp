class Solution {
public:
    string removeDuplicates(string s) {
      stack<char> st ;
      for(auto i : s){
         if(st.empty()){
           st.push(i);
         }
         else if(st.top()!=i){
            st.push(i);
         }
         else{
           st.pop();
         }
      }
      
      s="";
       while(!st.empty()){
         s+=st.top();
         st.pop();

       }
           reverse(s.begin(), s.end());

        
       return s;

       //using only string

        // int i=0;
        // string ans;
        // ans.push_back(s[i]);
        // for(i=1;i<s.size();i++)
        // {
        //     if(s[i] == ans.back())
        //         ans.pop_back();
        //     else
        //     ans.push_back(s[i]);
        // }
        // return ans;

        
    }
};