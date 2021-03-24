//sliding window algorihm
//based on video of Sliding Window Technique - Algorithmic Mental Models
#include <bits/stdc++.h>
using namespace std;

int longestSubstr(string s, int k){

  int windowStart = 0, maxLength = 0;
  //to keep a char count prrsent in string
  unordered_map<char, int> m;

  for (int windowEnd = 0; windowEnd < s.length(); windowEnd++)
  {
      m[s[windowEnd]]++;
      while(m.size()>k)
      {
        m[s[windowStart]]--;
        if (m[s[windowStart]]==0)
        {
              m.erase(s[windowStart]);
        }
        windowStart++;
      }
      maxLength = max(maxLength, windowEnd - windowStart + 1);  
  }

  return maxLength;

}

int main(){
  string  s= "aaabbcdde";
  int k = 2;
  int ans = longestSubstr(s,k);
  cout<<ans<<endl;
  return 0;
}