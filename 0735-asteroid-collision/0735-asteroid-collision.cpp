class Solution {
public:
    vector<int> asteroidCollision(vector<int>& ast) {
        stack<int>s;
        vector<int>ans;
        // for(int i =0;i<ast.size();i++){
        //     if(!s.empty() && ast[i]<0  && s.top()>0 && ast[i]<0){
        //       while(!s.empty() && abs(s.top())<abs(ast[i]) && s.top()>0 && ast[i]<0){
        //           s.pop();
        //   } 
        //     }
        //     if(!s.empty() && ast[i]<0 && abs(s.top())==abs(ast[i]) && s.top()>0 && ast[i]<0 ){
        //       s.pop();
        //       continue;
        //     }
        //      else if(!s.empty() && ast[i]<0 && abs(s.top())>abs(ast[i])  && s.top()>0 && ast[i]<0 ){
        //       continue;
        //     }
        //     s.push(ast[i]);
        // }

                                                     //or
           for(int i = 0; i < ast.size(); i++) {
            if(ast[i] > 0 || s.empty()) {
                s.push(ast[i]);
            }
            else {
                while(!s.empty() and s.top() > 0 and s.top() < abs(ast[i])) {
                    s.pop();
                }
                if(!s.empty() and s.top() == abs(ast[i])) {
                    s.pop();
                }
                else {
                    if(s.empty() || s.top() < 0) {
                        s.push(ast[i]);
                    }
                }
            }
        }
        while(!s.empty()){
          ans.push_back(s.top());
          s.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};