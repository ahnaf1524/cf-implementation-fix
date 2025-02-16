/*
 █████╗ ██╗  ██╗███╗   ██╗ █████╗ ███████╗ █████╗  ██████╗██████╗
██╔══██╗██║  ██║████╗  ██║██╔══██╗██╔════╝██╔══██╗██╔════╝██╔══██╗
███████║███████║██╔██╗ ██║███████║███████╗███████║██║     ██████╔╝
██╔══██║██╔══██║██║╚██╗██║██╔══██║╚════██║██╔══██║██║     ██╔═══╝
██║  ██║██║  ██║██║ ╚████║██║  ██║███████║██║  ██║╚██████╗██║
╚═╝  ╚═╝╚═╝  ╚═╝╚═╝  ╚═══╝╚═╝  ╚═╝╚══════╝╚═╝  ╚═╝ ╚═════╝╚═╝
------------------------------------------------------------------
Problem  : A. George and Accommodation
Link     : https://codeforces.com/problemset/problem/467/A
Submit   : https://codeforces.com/problemset/submit/467/A
Date     : 11/02/2025
Author   : ahnaf_cp
------------------------------------------------------------------
*/
#include <array>
#include <cmath>
#include <cstdio>
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

#define endl '\n'
using namespace std;
typedef long long ll;
typedef unsigned long long ull; 
typedef long double ld;

int ans = 0;
void runner(void) {
  int p, q;
  cin >> p >> q;
  if(q - p >= 2)
  {
    ++ans;
  }
}
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n;
  cin >> n;
  while (n--) {
    runner();
  }
  cout << ans << endl;
  return 0;
}