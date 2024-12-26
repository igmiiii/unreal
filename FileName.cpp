#include <iostream>
using namespace std;

float a[5];

float pplus() {

	float sum = 0;
	for (int i = 0; i < 5; i++)
	{
		sum += a[i];
	}
	return sum;
}

float avg(float ssum) {

	return ssum / 5;

}


int main() {
	float sssum = 0;

	cout << "Enter 5 numbers" << endl;

	for (int i = 0; i < 5; i++) {

		cin >> a[i];
	}

	sssum = pplus();


	cout << "sum: " << sssum << endl;
	cout << "avg: " << avg(sssum) << endl;

	return 0;

}