#include <bits/stdc++.h>
using namespace std;

int arr[101][101];

void floodfill(int n, int m,int x, int y,int newColor){
    
   int oldColor = arr[x][y];
    
  if( x<0 || y<0 || x>=n || y>=m)
    return;

  if(arr[x][y] == newColor)
    return;

  if(arr[x][y] != oldColor)
    return;

  //replace color
  arr[x][y] = newColor;

  floodfill(n,m,x-1,y,newColor);
  floodfill(n,m,x,y-1,newColor);
  floodfill(n,m,x+1,y,newColor);
  floodfill(n,m,x,y+1,newColor);
}

int main(){

  int t;
  cin>>t;

  while(t--){
    int n,m;
    cin>>n; //rows
    cin>>m; //cols
    //int arr[n][m];
    memset(arr,0,sizeof(arr));
    //taking input
    for (int i = 0; i < n; ++i)
    {
      for (int j = 0; j < m; ++j)
      {
        cin>>arr[i][j];
      }
    }
    int x,y,newColor;
    cin>>x;
    cin>>y;
    cin>>newColor;

    floodfill(n,m,x,y,newColor);

    //printing array
    for (int i = 0; i < n; ++i)
    {
      for (int j = 0; j < m; ++j)
      {
        cout<<arr[i][j]<<" ";
      }
    }
    
    cout<<endl;
  }


  return 0;
}