#include <iostream>
using namespace std;

int main(){
	int a, b;
	cin >> a >> b;

	int r_0 = a;
	int r_1 = b;
	int temp = 0;

	while(r_1 != 0){
		temp = r_0 % r_1;
		r_0 = r_1;
		r_1 = temp;
	}
	cout << r_0 << endl;

	return 0;
}