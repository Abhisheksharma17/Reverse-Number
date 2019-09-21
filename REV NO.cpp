#include <stdio.h>
 
long long int reverse(long long int n){
    long long int rem=0;
    while(n != 0){
        rem = rem * 10;
        rem= rem + n%10;
        n= n/10;
    }
	return rem;
}
int main(void)
{
	int n;
    scanf("%d",&n);
 
    while(n--){
    	long long int a,b;
    	scanf("%lld%lld",&a,&b);
    	a =reverse(a);
    	b =reverse(b);
    	long long int sum_rev =reverse(a+b);
    	printf("%lld\n",sum_rev);
    }
    return 0;
}
