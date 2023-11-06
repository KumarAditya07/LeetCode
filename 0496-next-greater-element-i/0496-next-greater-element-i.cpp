class Solution {
  public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector < int >& nums2) {
  stack < pair < int, int >> st;
  vector<int> ans;
         auto pair = -1;
  unordered_map < int, int > mp;

  for (int i = nums2.size() - 1; i >= 0; i--)
  {
    while (!st.empty() && st.top().first < nums2[i]) {
      st.pop();
    }
    if (st.empty()) {
      st.push({ nums2[i], -1 });
      mp.insert(make_pair(st.top().first, -1));
    }
    else  {
      pair = st.top().first;
      st.push({ nums2[i], pair });
      mp.insert(make_pair(st.top().first, st.top().second));
    }
  }


  // for (auto i :mp) cout << i.first << "->" << i.second << endl;

   for(auto i : nums1){
       if(mp.find(i)!=mp.end()){
            ans.push_back(mp[i]);
       }
   }

   return ans;

}
  };