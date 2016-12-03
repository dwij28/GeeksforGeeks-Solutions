/*input
3
{([])}
()
()[]
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

bool isPair(char a, char b) {
	if ((a == '{' && b == '}') || (a == '}' && b == '{')) return true;
	if ((a == '(' && b == ')') || (a == ')' && b == '(')) return true;
	if ((a == '[' && b == ']') || (a == ']' && b == '[')) return true;
	return false;
}

int main() {
	int t;
	char a, b, s[110];
	scanf("%d", &t);
	while (t--) {
		scanf("%s", s);
		std::stack<char> data;
		for (int i = 0; s[i] != '\0'; i++) {
			if (!data.empty() && isPair(s[i], data.top())) data.pop();
			else data.push(s[i]);
		}
		while (data.size() >= 2) {
			a = data.top(); data.pop();
			b = data.top(); data.pop();
			if (!isPair(a, b)) {
				data.push(a);
				data.push(b);
				break;
			}
		}
		printf("%s\n", data.empty() ? "balanced" : "not balanced");
	}
	return 0;
}