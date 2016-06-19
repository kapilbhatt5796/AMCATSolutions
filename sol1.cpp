#include <bits/stdc++.h>

using namespace std;

#define X first
#define Y second
#define INPUT freopen("clash.inp","r",stdin)
#define OUTPUT freopen("clash.out","w",stdout)
#define FOR(i,l,r) for(auto i=(l);i<=(r);i++)
#define REP(i,l,r) for(auto i=(l);i<(r);i++)
#define FORD(i,l,r) for(auto i=(l);i>=(r);i--)
#define REPD(i,l,r) for(auto i=(l);i>(r);i--)
#define ENDL printf("\n")
#define debug 1

typedef long long ll;
typedef pair<int,int> ii;

const int inf=1e9;
const int MOD=1e9+7;
const int N=0;

int main(){
    scanf("%d",&test);
        int n;
        scanf("%d",&n);
        int ans=0;
        FOR(i,1,n) {
            ll x,y,val;
            scanf("%lld%lld%lld",&x,&y,&val);
            if (val%2!=(x+y-2)%2) ans++;
        }
        if (ans==0||ans==n) printf("Yes\n");
        else printf("No\n");
}
