/*input
2
1 3
4 3
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

bool sieve[2510];

void pre() {
	memset(sieve, true, sizeof(sieve));
	sieve[0] = sieve[1] = false;
	for (int i = 2; i <= 50; i++) {
		if (sieve[i]) {
			for (int j = i+i; j <= 2500; j += i)
				sieve[j] = false;
		}
	}
}

int main() {
	pre();
	int t, a, b, n;
	scanf("%d", &t);
	while (t--) {
		scanf("%d%d", &a, &b);
		n = a+b+1;
		while (!sieve[n]) n++;
		printf("%d\n", n-a-b);
	}
	return 0;
}