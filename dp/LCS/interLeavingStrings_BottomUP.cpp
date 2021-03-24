#include <iostream>
using namespace std;

bool interleaved(string X, string Y, string S)
{
	int M = X.size();
	int N = Y.size();

	if (M + N != S.size())
		return false;

	bool T[M + 1][N + 1];

	// fill the lookup table in bottom-up manner
	for (int i = 0; i <= M; i++)
	{
		for (int j = 0; j <= N; j++)
		{
			if (i == 0 && j == 0) // both strings are empty
				T[i][j] = true;

			// if current char of S matches with the current char of both A and B
			else if (i and j and X[i - 1] == S[i + j - 1] and Y[j - 1] == S[i + j - 1])
				T[i][j] = T[i - 1][j] || T[i][j - 1];

			// if current char of X matches with the current char of S
			else if (i and X[i - 1] == S[i + j - 1])
				T[i][j] = T[i - 1][j];

			// if current char of Y matches with the current char of S
			else if (j and Y[j - 1] == S[i + j - 1])
				T[i][j] = T[i][j - 1];
		}
	}

	// T[M][N] stores the result
	return T[M][N];
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