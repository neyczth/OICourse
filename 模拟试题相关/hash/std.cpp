//T1 哈希函数
#include <cstdio>
#include <cstring>
using namespace std;
int prime[10005]={0};
bool check[10005]={0};
int tail=0;
void get_prime(){
    for(int i=2; i<=10000; i++){
        if(!check[i]) prime[tail++]=i;
        for(int j=0; j<tail && i*prime[j]<=10000; j++){
            check[i*prime[j]]=1;
            if(i%prime[j]==0) break;
        }
    }
    return;
}
int main(){
    //freopen("hash.in","r",stdin);
    //freopen("hash.out","w",stdout);
    int T,h,ans,num;
    get_prime();
    scanf("%d",&T);
    while(T--){
        ans=1;
        scanf("%d",&h);
        h++;
        for(int i=0; i<tail; i++){
            num=0;
            while(h%prime[i]==0){
                num++;
                h/=prime[i];
            }
            ans*=(num+1);
        }
        if(h>1) ans*=2;
        printf("%d\n",ans);
    }
    return 0;
}