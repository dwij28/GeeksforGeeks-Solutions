/*input
1
5
3 3 1 2 4
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

int main() {
	int t, n, x;
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &n);
		int ans = 0;
		bool check[1010];
		memset(check, false, sizeof(check));
		for (int i = 0; i < n; i++) {
			scanf("%d", &x);
			if (!check[x]) ans++;
			check[x] = true;
		}
		printf("%d\n", ans);
	}
	return 0;
}