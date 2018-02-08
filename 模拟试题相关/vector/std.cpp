//vector
#include <cstdio>
using namespace std;
long long read(){
    char ch=' ',sgn;
    long long ans=0;
    for(; ch<'0'||ch>'9'; sgn=ch,ch=getchar());
    for(; ch>='0'&&ch<='9'; ch=getchar()) ans=ans*10+ch-'0';
    if(sgn=='-') ans=-ans;
    return ans;
}
long long gcd(long long a,long long b){
    if(b==0) return a;
    return gcd(b,a%b);
}
bool chk(long long x,long long y,long long g){
    if(x%g==0&&y%g==0) return 1;
    return 0;
}
int main(){
    int T;
    long long a,b,x,y,g;
    scanf("%d",&T);
    while(T--){
        a=read(),b=read(),x=read(),y=read();
        g=2*gcd(a,b);
        if(!chk(x,y,g)&&!chk(x-a,y-b,g)&&!chk(x-b,y-a,g)&&!chk(x-a-b,y-a-b,g)) printf("N\n");
        else printf("Y\n");
    }
    return 0;
}