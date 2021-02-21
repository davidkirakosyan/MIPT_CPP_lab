#include <iostream>
using namespace std;

int do_some_awesome_work(int* a, int* b);

int main(){
	int va, vb;
	cin >> va >> vb;

	cout << do_some_awesome_work(&va, &vb) << endl;
	return 0;
}

// Don't upload
int do_some_awesome_work(int* a, int* b){
	return min(*a, *b);
}