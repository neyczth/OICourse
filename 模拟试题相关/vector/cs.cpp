#include <cstdio>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
    freopen("vector.in","w",stdout);
    int T;
    long long A;
    scanf("%d %lld",&T,&A);
    printf("%d\n",T);
    for(int i=1; i<=T; i++){
        printf("%lld ",(long long)(rand()%A+1)*(rand()%2?1:-1));
        printf("%lld ",(long long)(rand()%A+1)*(rand()%2?1:-1));
        printf("%lld ",(long long)(rand()%A+1)*(rand()%2?1:-1));
        printf("%lld\n",(long long)(rand()%A+1)*(rand()%2?1:-1));
    }
    return 0;
}