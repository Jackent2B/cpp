#include <iostream>
using namespace std;

// Function to check if string X and Y are interleaving of
// string S or not
int isInterleave(string X, string Y, string S)
{
	   // return true if we have reached end of all strings
	if (!X.length() && !Y.length() && !S.length())
		return 1;

	// return false if we have reached the end of string S
	// but string X or Y are not empty

	if (!S.length())
		return 0;

	// if string X is not empty and its first character matches with
	// first character of S, recur for remaining substring

	bool x = (X.length() && S[0] == X[0]) &&
			isInterleave(X.substr(1), Y, S.substr(1));

	// if string Y is not empty and its first character matches with
	// first character of S, recur for remaining substring

	bool y = (Y.length() && S[0] == Y[0]) &&
			isInterleave(X, Y.substr(1), S.substr(1));

	return x || y;
}

int main()
{
	string X = "ABC";
	string Y = "DEF";
	string S = "ADEBCF";

	if (interleaved(X, Y, S))
		cout << "Given string is interleaving of X and Y";
	else
		cout << "Given string is not an interleaving of X and Y";

	return 0;
}