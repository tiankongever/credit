#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<iostream>
#include<string>
#include<queue>
#include<map>
#include<cmath>
#include<stack>
#include<algorithm>
#include<functional>
#include<stdarg.h>
using namespace std;
#ifdef __int64
typedef __int64 LL;
#else
typedef long long LL;
#endif

int main() {
	freopen("score.in","r",stdin);
	double sum,a;
	sum = 0;
	while(~scanf("%lf",&a)){
		sum += a;
	}
	printf("%lf\n",sum);
    return 0;
}
