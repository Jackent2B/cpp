// CPP implementation to  return 
// an array of its anti-diagonals 
// when an N*N square matrix is given 
  
#include <iostream> 
using namespace std; 
  
// function to print the diagonals 
void diagonal(int A[3][3]) 
{ 
  
    int m = 3;
    int n = 3;
    int row,col;
    
  
    // For each column start row is 0 
      for(int k =0 ; k<= n-1 ; k++){
        row = 0;
        col = k;
        while(col>=0 && col<=n-1){
            cout<<A[row][col];
            row=row+1;
            col=col-1;
        }
        cout<<endl;
    }
    
    for(int k =1 ; k<= m-1 ; k++){
        row = k;
        col = n-1;
        while(row<=m-1 && col>=0){
            cout<<A[row][col];
            row=row+1;
            col=col-1;
        }
        cout<<endl;
    } 
} 
  
// Driver code 
int main() 
{ 
  
    // matrix iniliasation 
    int A[3][3] = { { 1, 2, 3 }, 
                    { 4, 5, 6 }, 
                    { 7, 8, 9 } }; 
  
    diagonal(A); 
  
    return 0; 
} 