// Online C compiler to run C program online
#include <stdio.h>
#define long long int


void factorial(int n){
    int ar[1000] = {0};
    ar[0] = 1;
    int len = 1;
    for(int i = 2; i <= n; i++){
        int carry = 0;
        for(int j = 0; j < len; j++){
            int temp = ar[j] * i + carry;
            ar[j] = temp % 10;
            carry = temp / 10;
        }
        while(carry > 0){
            ar[len] = carry % 10;
            carry = carry / 10;
            len++;
        }
    }
    for(int i = len - 1; i >= 0; i--){
        printf("%d",ar[i]);
    }printf("\n");

}

int main() {
    int n;
    scanf("%d", &n);
    factorial(n);

    return 0;
}
