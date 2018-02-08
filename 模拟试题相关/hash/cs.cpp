#include <cstdio>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
    freopen("hash.in","w",stdout);
    int T,H;
    scanf("%d %d",&T,&H);
    printf("%d\n",T);
    for(int i=1; i<T; i++) printf("%d\n",rand()%H+1);
    printf("%d",rand()%H+1);
    return 0;
}