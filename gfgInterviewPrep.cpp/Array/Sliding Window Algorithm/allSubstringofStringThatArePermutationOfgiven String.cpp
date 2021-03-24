//sliding window algorihm

#include <bits/stdc++.h>
using namespace std;

int countSubstr(string s1,string s2){

    int k = s2.length(); //to make this size of window in s1.
    int sumNeeded = int('x') + int('y') + int('z');
    int sum = 0;
    int count = 0;
    for (int i = 0; i < s1.length(); i++)
    {
      sum = sum + int(s1[i]);  //adding the ascii value
      if(i>=k-1){
        if (sumNeeded==sum) //if sum gets equal to sumNeeded that means we have all x,y,z.
            {
              count++;  //increase the count of no. of permutaions.
              for (int p = i-(k-1); p <= i; p++)
                cout<<s1[p];  //printing the permutations.
              
              cout<<endl;
            }
        sum = sum - int(s1[i-(k-1)]); //substracting the leftmost character.
      }
    }

  return count;
}

int main(){
  string s1= "xyyzxzyzxxyz";
  string s2= "xyz";
  int ans = countSubstr(s1,s2);
  cout<<ans<<endl;
  return 0;
}