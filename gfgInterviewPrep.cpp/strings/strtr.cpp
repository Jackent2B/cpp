
//Your code here
int strstr(string s, string x)
    {
     //Your code here
     int m=s.length();
     int n=x.length();
     string s2;
     for(int i=0;i<m;i++)
    // more optimised: for(int i=0;i<=m-n;i++)
     {
         s2=s.substr(i,n);
         if(s2.compare(x)==0)
             return i;
     }
     return -1;
}