// Cho mảng số nguyên A[] gồm N phần tử, hãy đếm số lượng các phần tử thỏa mãn các yêu cầu sau
// 1.Số lượng số nguyên tố trong dãy
// 2.Số lượng số thuận nghịch trong dãy
// 3.Số lượng số chính phương trong dãy
// 4.Số lượng số có tổng chữ số của nó là số nguyên tố.
#include <stdio.h>
#include <math.h>
#define ll long long 

int isPrime(int n){
    if(n < 2) return 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return 0;
    }
    return 1;
}

int isPalindrome(int n){
    int rev = 0, tmp = n;
    while(n){
        rev = rev * 10 + (n % 10);
        n /= 10;
    }
    return tmp == rev;
}

int isPerfectSquare(int n){
    int root = sqrt(n);
    return root * root == n;
}

int sumOfDigits(int n){
    int sum = 0;
    while(n){
        sum += n % 10;
        n /= 10;
    }
    return isPrime(sum);
}

int main() {
    int n; 
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    int primeCount = 0, palindrome = 0, perfectSquare = 0, sumPrime = 0;
    for(int i = 0; i < n; i++) {
        if(isPrime(a[i])) primeCount++;
        if(isPalindrome(a[i])) palindrome++;
        if(isPerfectSquare(a[i])) perfectSquare++;
        if(sumOfDigits(a[i])) sumPrime++;
    }
    printf("%d\n%d\n%d\n%d\n", primeCount, palindrome, perfectSquare, sumPrime);
    return 0;
}


