#include <iostream>
#include <string>
#define endl '\n'
using namespace std;

/*
 █████╗ ██╗  ██╗███╗   ██╗ █████╗ ███████╗ █████╗  ██████╗██████╗
██╔══██╗██║  ██║████╗  ██║██╔══██╗██╔════╝██╔══██╗██╔════╝██╔══██╗
███████║███████║██╔██╗ ██║███████║███████╗███████║██║     ██████╔╝
██╔══██║██╔══██║██║╚██╗██║██╔══██║╚════██║██╔══██║██║     ██╔═══╝
██║  ██║██║  ██║██║ ╚████║██║  ██║███████║██║  ██║╚██████╗██║
╚═╝  ╚═╝╚═╝  ╚═╝╚═╝  ╚═══╝╚═╝  ╚═╝╚══════╝╚═╝  ╚═╝ ╚═════╝╚═╝
------------------------------------------------------------------
Problem  : A. Magnets
Link     : https://codeforces.com/problemset/problem/344/A
Submit   : https://codeforces.com/problemset/submit/344/A
Date     : 19/02/2025
Author   : ahnaf_cp
------------------------------------------------------------------
*/
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n , cnt = 1;
	cin >> n;
	string c , p;
	cin >> p;
	for(int i = 1; i < n; ++i)
	{
		cin >> c;
		if(c != p)
		{
			++cnt;
		}
		p = c;
	}
	cout << cnt << endl;
	return 0;
}
