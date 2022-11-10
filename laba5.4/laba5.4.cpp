// Лабораторна робота № 5.4
#include <iostream>
#include <cmath>
using namespace std;
double S0(const int K, const int N)
{
	double S = 0;
	for (int k=1; k <= N; k++)
		S += 1.0/( (2 * k + 1)*(2 * k + 1));
	return S;
}
double S1( const int N, const int k)
{
	if (k > N)
		return 0;
	else
		return 1.0 / ((2 * k + 1) * (2 * k + 1)) + S1( k+1,N);
}
double S2(const int K, const int N, const int k)
{
	if (k < 1)
		return 0;
	else
		return  1.0 / ((2 * k + 1) * (2 * k+ 1)) + S2(k - 1,N,K);
}
double S3(const int k, const int N, const int K, double t)
{
	t = t + 1.0 / ((2 * k + 1) * (2 * k + 1));
	if (k>= N)
		return t;
	else
		return S3( N, k + 1, t,K);
}
double S4(const int k, const int N, const int K,  double t)
{
	t = t + 1.0 / ((2 * k + 1) * (2 * k + 1));
	if (k <= 1)
		return t;
	else
		return S4( N, k - 1, t,K);
}

int main()
{	int K, N;
	cout << "K= "; cin >> K;
	cout << "N = "; cin >> N;
	cout << "(iter) S0 = " << S0(K, N) << endl;
	cout << "(rec up ++) S1 = " << S1(K,N) << endl;
	cout << "(rec up --) S2 = " << S2(K, N,K) << endl;
	cout << "(rec down ++) S3 = " << S3(K, N,K, 0) << endl;
	cout << "(rec down --) S4 = " << S4(K, N,K, 0) << endl;
	return 0;
}