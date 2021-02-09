#include <iostream>
using namespace std;

int main(){
	int N;
	cin >> N;

	string is_leap;

	if (N % 400 == 0)
		is_leap = "YES";
	else if (N % 100 == 0)
		is_leap = "NO";
	else if (N % 4 == 0)
		is_leap = "YES";
	else
		is_leap = "NO";

	cout << is_leap << endl;

	return 0;
}