#include <iostream>
using namespace std;

int main(){
	int N;
	cin >> N;

	string ans = "";

	int r;
	while(N != 0){
		r = N % 60;

		ans.insert(0, 1, '.');
		ans.insert(0, r % 10, 'v');
		ans.insert(0, r / 10, '<');

		N /= 60;
	}

	ans.pop_back(); // remove last dot.
	cout << ans << endl;

	return 0;
}