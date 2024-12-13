#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main(){
	float a, b;
	cin >> a >> b;
	float c = pow(a,2) + pow(b,2);
	cout << fixed << setprecision(6) << sqrt(c);

}
