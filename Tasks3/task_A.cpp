#include <iostream>
using namespace std;

int main(){
	int N;
	cin >> N;

	int * numbers = new int [N];

	double average = 0;
	for (int i = 0; i < N; ++i)
	{
		cin >> numbers[i];
		average += numbers[i];
	}
	average /= N;

	int res = 0;
	for (int i = 0; i < N; ++i)
	{
		if (numbers[i] > average)
			res += numbers[i];
	}
	cout << res << endl;

	delete[] numbers;
	return 0;
}