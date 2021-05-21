#include <stdio.h>
int main(){
    int numTestCase;
    scanf("%d", &numTestCase);
    while (numTestCase > 0){
        long long int num;
        scanf("%lld", &num);
        if (num % 2050 == 0){
            long long int k = num / 2050;
            int sum = 0;
            while (k > 0){
                int r = k % 10;
                k = k / 10;
                sum += r;
            }
            printf("%d\n", sum);
        }else{
            printf("-1\n");
        }
        numTestCase--;
    }
}