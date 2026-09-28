//iterative fibonacci
 #include <stdio.h>

int main() {
    int n, a = 0, b = 1, c;

    printf("Enter n: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }

    return 0;
}

//recurcive fibonacci
#include <stdio.h>

int fib(int n) {
    if(n <= 1)
        return n;
    return fib(n-1) + fib(n-2);
}

int main() {
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        printf("%d ", fib(i));

    return 0;
}