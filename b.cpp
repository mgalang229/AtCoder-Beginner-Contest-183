#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;

#define ll long long
#define ar array

typedef tree<int, null_type, less<int>, rb_tree_tag,
tree_order_statistics_node_update> indexed_set;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	if(x1==x2) {
		cout << x1 << "\n";
		return 0;
	}
	y1=-y1;
	double m=1.0*(y2-y1)/(x2-x1);
	double x=(m*x1-y1)/m;
	cout << fixed << setprecision(10) << x << "\n";
}
