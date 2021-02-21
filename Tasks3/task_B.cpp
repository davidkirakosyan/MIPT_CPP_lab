#include <iostream>
using namespace std;

int main()
{
	int N, M, K;
	cin >> N >> M >> K;

	int **field = new int* [N];
	for(int i = 0; i < N; i++){
		field[i] = new int [M];
	}

	int i, j;
	for(int k = 0; k < K; k++){
		cin >> i >> j;
		i -= 1; j -= 1;
		field[i][j] = -1;

		for (int x = max(i-1, 0); x < i + 2 && x < N; x++)
		{
			for (int y = max(j-1, 0); y < j + 2 && y < M; y++)
			{
				if(field[x][y] != -1)
					field[x][y] += 1;
			}
		}
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cout << field[i][j] << ' ';
		}
		cout << endl;
	}

	for(int i = 0; i < N; i++){
		delete[] field[i];
	}
	delete[] field;

	return 0;
}