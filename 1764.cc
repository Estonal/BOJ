#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, m;
  int i, cnt;
  string str;
  vector<string> ns, tmp;
  vector<string>::iterator it;

  scanf("%d", &n);
  scanf("%d", &m);

  for (i = 0; i < n + m; i++){
    cin >> str;
    ns.push_back(str);
  }

  sort(ns.begin(), ns.end());

  cnt = 0;
  for(i = 0; i < n + m; i++){
    if (!ns[i].compare(ns[i+1])) {
      tmp.push_back(ns[i]);
      i++;
      cnt++;
    }
  }

  printf("%d\n", cnt);
  for(it = tmp.begin(); it != tmp.end(); it++){
    cout << *it << endl;
  }
  return 0;
}
