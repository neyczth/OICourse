//honourguard
#include <cstdio>
using namespace std;
int prime[40000005]={0};
int tail=0;
bool check[40000005]={0};
int phi[40000005]={0};
int N;
void get_phi(){
    phi[1]=1;
    for(int i=2; i<=N; i++){
        if(!check[i]){
            prime[tail++]=i;
            phi[i]=i-1;
        }
        for(int j=0; j<tail && i*prime[j]<=N; j++){
            check[i*prime[j]]=1;
            if(i%prime[j]==0){
                phi[i*prime[j]]=phi[i]*prime[j];
                break;
            }
            else phi[i*prime[j]]=phi[i]*(prime[j]-1);
        }
    }
    return;
}
int main(){
    scanf("%d",&N);
    get_phi();
    long long ans=0;
    for(int i=1; i<N; i++) ans+=phi[i];
    ans=2*ans+1;
    printf("%lld",ans);
    return 0;
}
