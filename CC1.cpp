#include<iostream>
using namespace std;
int main()
{
	int i;
	double n,f[100], sum=0;
	cin >> n;
	for(i=1;i<n;i++) {
		cin >> f[i];
		sum += f[i];
	}
	double tbc = sum/n, var = 0;
	for(i = 1;i <= n;i++)
	var += (f[i]-tbc)*(f[i]-tbc)/(n-1);
	cout << "Average: " << tbc << endl;
	cout << "Variance: " << var;
	return 0;
}
