class Solution {
public:
    int largestRectangleArea(vector<int>& h){
        // // naive approch  this will give u TLE for some Test case so we need to optimise the code 
        // int res = 0;
        // int n = h.size();

        // for(int i=0;i<n;i++){
        //    int curr =  h[i];
        //   //for iterating right -> left
        //   for(int j = i-1;j>=0;j--){
        //     if(h[j]>=h[i])
        //        curr += h[i];      //we are adding up same value till we found any smalller value 
        //     else
        //        break;
        //   }
        //     //for iterating left -> right
        //   for(int j=i+1;j<n;j++){
        //     if(h[j]>=h[i])
        //        curr += h[i];      //we are adding up same value till we found any smalller value 
        //     else
        //        break;

        //   }

        //   res = max(res,curr);
        // }
        // return res;

        //.............................Optimise solution...............................
      stack<pair<int,int>>st;
      int n = h.size();
      vector<int>prevSmall(n,-1);
      for(int i=n-1;i>=0;i--){
        while(!st.empty() && st.top().first>h[i]){
              prevSmall[st.top().second] = i;
              st.pop();
            
        }
        if(st.empty())st.push({h[i],i});
        else{
           st.push({h[i],i});
        }
      }

       vector<int>nextSmall(n,n);
       stack<pair<int,int>>st2;
       for(int i=0;i<n;i++){
        while(!st2.empty() && st2.top().first>h[i]){
              nextSmall[st2.top().second] = i;
              st2.pop();
            
        }
        if(st2.empty())st2.push({h[i],i});
        else{
           st2.push({h[i],i});
        }
      }


        int res = 0;
        // for(auto i : prevSmall) cout<<i<<" ";
        //      cout<<endl;
        // for(auto i : nextSmall) cout<<i<<" ";

          for(auto i =0;i<n;i++){
            int area = (nextSmall[i] - prevSmall[i] - 1)*h[i];
            res = max(res,area);
          }
              





              return res;


















    }
};