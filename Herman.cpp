#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main(){
	int radius;
	cin >> radius;
	double cost1,cost2;
	cost1 = radius * radius * M_PI;
	cost2 = radius * (radius + radius);
	cout << fixed << setprecision(6) << cost1 << endl << cost2;
	

	
}
