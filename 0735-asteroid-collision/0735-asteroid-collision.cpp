class Solution {
public:
    vector<int> asteroidCollision(vector<int>& ast) {
        stack<int>st;
        vector<int>ans;
        for(int i =0;i<ast.size();i++){
            if(!st.empty() && ast[i]<0  && st.top()>0 && ast[i]<0){
              while(!st.empty() && abs(st.top())<abs(ast[i]) && st.top()>0 && ast[i]<0){
                  st.pop();
          } 
            }
            if(!st.empty() && ast[i]<0 && abs(st.top())==abs(ast[i]) && st.top()>0 && ast[i]<0 ){
              st.pop();
              continue;
            }
             else if(!st.empty() && ast[i]<0 && abs(st.top())>abs(ast[i])  && st.top()>0 && ast[i]<0 ){
              continue;
            }
            st.push(ast[i]);
        }
        while(!st.empty()){
          ans.push_back(st.top());
          st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};