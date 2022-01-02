
//Given an array of strings, return all groups of strings that are anagrams. 
 vector<vector<string> > Anagrams(vector<string>& s) {
      vector<vector<string>> v;
      unordered_map<string,vector<string>> m;
      for(auto x:s)
      {
          string temp=x;
          sort(x.begin(),x.end());
          m[x].push_back(temp);
      }
      for(auto x:m)
      {
          vector<string> ans=x.second;
          v.push_back(ans);
      }
      
     return v;
    }
