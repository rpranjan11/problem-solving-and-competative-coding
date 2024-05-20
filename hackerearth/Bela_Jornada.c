#include <stdio.h>

int main()
{
    int i, n;
    long long int a[100000], m, s, t, aux;

    scanf("%d", &n);

    for(i = t = 0; i < n; i++){
        scanf("%lld", &a[i]);
        t += a[i];
    }
    for(i = m = s = 0; i < n - 1; i++){
        s += a[i];
        aux = s * (t - s);
        if(aux > m) m = aux;
    }

    printf("%lld", m);

    return 0;
}

/*#include <stdio.h>

int main(){
	long n;
	scanf("%ld", &n);
	long temp;
	if(n%2 == 0)
	    temp = n/2-1;
	else
	    temp = n/2;
	long arr[n];
	long long int sum1 = 0, sum2 = 0;
	for(long i = 0; i<n; i++) {
	    scanf("%ld", &arr[i]);
	    if(i <= temp)
	        sum1 += arr[i];
	    else
	        sum2 += arr[i];
	}
	printf("%lld", sum1*sum2);
}*/