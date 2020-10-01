#include <stdio.h>
 
long long int reverse(long long int n){
    long long int rem=0;	//rem stands for reminder
    while(n != 0){		//as long as number is not equal to 0 we traverse
        rem = rem * 10;
        rem= rem + n%10;
        n= n/10;
    }
	return rem;		//returning reminder
}
int main(void)
{
	int n;
    scanf("%d",&n);
 
    while(n--){
    	long long int a,b;		//a=number1 //b=number2
    	scanf("%lld%lld",&a,&b);
    	a =reverse(a);			//a number pass to function
    	b =reverse(b);			//a number pass to function
    	long long int sum_rev =reverse(a+b); //calling reverse function
    	printf("%lld\n",sum_rev);
    }
    return 0;
}
