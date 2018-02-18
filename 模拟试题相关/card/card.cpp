//card
#include <cstdio>
#define mod 1000000007
using namespace std;
int main(){
    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
    long long a=0,b=1,c,n,N;
    scanf("%lld",&N);
    if(N==1) printf("0");
    else if(N==2) printf("1");
    else{
        for(n=3; n<=N; n++){
            c=(a+b)%mod*(n-1)%mod;
            a=b;
            b=c;
        }
        printf("%lld",b);
    }
    return 0;
}