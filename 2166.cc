#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

double solve(double x1, double x2, double x3, double y1, double y2, double y3) {
	double tmp;

	tmp = x1 * y2 + x2 * y3 + x3 * y1; // 세 꼭짓점의 벡터외적(면적)
	tmp += -1.0 * (y1 * x2 + y2 * x3 + y3 * x1);

	return tmp / 2;
}

int main() {

	int n;
	double res;
	int i;

	scanf("%d", &n);

	vector<pair<double, double>> arr(n);

	for (i = 0; i < n; i++)
		scanf("%lf %lf", &arr[i].first, &arr[i].second);

    res = 0;

	for (i = 1; i < n; i++)
		res += solve(arr[0].first, arr[i - 1].first, arr[i].first, arr[0].second, arr[i - 1].second, arr[i].second);

	printf("%.1lf", res >= 0 ? res : -1.0 * res);

	return 0;
}
