/*input
2
6 6
ABCDGH
ACDGHR
3 2
ABC
AC
*/

/*~~~~~~~~~~~~~~~~~~~~dwij28 == Abhinav Jha~~~~~~~~~~~~~~~~~~~~*/

#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define MAX(a, b) ((a > b) ? a : b)
#define MIN(a, b) ((a < b) ? a : b)
#define set_bit(n, x, i) (n ^ ((-x ^ n) & (1 << i)))
#define get_bit(n, i) ((n >> i) & 1) 
using namespace std;

template<typename T>void scan(T&x){bool n=false;register T c=getchar();x=0;if(c=='-'){n=true;c=getchar();}for(;(c>47&&c<58);c=getchar()){x=(x<<1)+(x<<3)+c-48;}if(n){x*=-1;}}
template<typename T>void allocate(T **x,T n){*x=(T*)malloc(sizeof(T)*n);}

int dp[110][110];
char a[110], b[110];

void solve(int x, int y) {
	if (x < 0 || y < 0 || dp[x][y] != -1) return;
	solve(x-1, y-1); solve(x, y-1); solve(x-1, y);
	dp[x][y] = (a[x] == b[y]) ? 1 + dp[x-1][y-1] : 0;
}

int main() {
	int t, m, n;
	scanf("%d", &t);
	while (t--) {
		int ans = 0;
		scanf("%d%d%s%s", &m, &n, a, b);
		memset(dp, -1, sizeof(dp));
		solve(m, n);
		for (int i = 0; i < m; i++)
			for (int j = 0; j < n; j++)
				ans = MAX(ans, dp[i][j]);
		printf("%d\n", ans);
	}
	return 0;
}