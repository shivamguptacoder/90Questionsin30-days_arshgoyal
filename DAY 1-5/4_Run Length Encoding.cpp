//Run Length Encoding 

string encode(string s)
{     
  //Your code here 
  string ans="";
 int c=0;
  for(int i=0;i<s.length()-1;i++)
  {
    
    if(s[i]==s[i+1])
    {
        c++;
    }
    else
    {
        ans+=s[i]+to_string(c+1);
        c=0;
    }
  }
  ans+=s[s.length()-1]+to_string(c+1);
  return ans;
  
}     
 
