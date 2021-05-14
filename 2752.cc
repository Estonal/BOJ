#include <bits/stdc++.h>
#include <stdio.h>

using namespace std;



int main() {
    int input;
    int i;
    int arr[3];
    for (i = 0; i < 3; i++) {
        cin >> input;
        arr[i] = input;
    }

        sort(arr, arr + 3);
        for (i = 0; i < 3; i++)
            cout << arr[i] << ' ';
}
