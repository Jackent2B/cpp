#include <bits/stdc++.h>
using namespace std;
#define R 3 
#define C 6

void spiralPrint(int r, int c, int a[R][C]) {
	//initialsing top,right,bottom and left
	int top = 0;
	int bottom = r-1;
	int left = 0;
	int right = c-1;

	int dir = 0;
	while(left <= right && top <= bottom){

		//from left to right keeping top constant
		if (dir==0)
		{
			for (int i = left; i <= right; i++)
				cout << a[top][i]<<" ";
			top++;
		}


		//from top to bottom keeping right constant
		else if (dir==1)
		{
			for (int i = top; i <= bottom; i++)
				cout << a[i][right] << " ";
			right--;
		}


		//from right to left keeping bottom constant
		else if (dir==2)
		{
			for (int i = right; i >=left ; i--)
				cout << a[bottom][i] << " ";
			bottom--;
		}


		//from bottom to top keeping left constant
		else if (dir==3)
		{
			for (int i = bottom; i >=top; i--)
				cout << a[i][left] << " ";
			left++;
		}

		//Increasing the value for 'dir' after every if condition.
		dir = (dir+1)%4;
	}
}

int main() 
{ 
	int r=3;
	int c=6;
    int a[R][C] = { { 1, 2, 3, 4, 5, 6 }, 
                    { 7, 8, 9, 10, 11, 12 }, 
                    { 13, 14, 15, 16, 17, 18 } }; 
  
    spiralPrint(r, c, a); 
    return 0; 
}