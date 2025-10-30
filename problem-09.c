// Cho mảng số nguyên A[] gồm N phần tử, hãy liệt kê các giá trị xuất hiện trong mảng kèm theo tần suất tương ứng, mỗi giá trị chỉ liệt kê một lần theo thứ tự xuất hiện.
#include <stdio.h>

int count(int a[], int n, int x){
    int count = 0;
    for(int i = 0; i < n; i++){
        if(a[i] == x){
            count++;
        }
    }
    return count;
}

int main() {
    int n; 
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);
        
    for(int i = 0; i < n; i++){
        int isDuplicate = 0;
        // Kiểm tra xem a[i] đã xuất hiện trước đó chưa
        for(int j = 0; j < i; j++){
            if(a[i] == a[j]) {
                isDuplicate = 1;
                break;
            }
        }
        // Nếu chưa xuất hiện thì in ra kèm số lần xuất hiện
        if(!isDuplicate){
            int freq = count(a, n, a[i]);
            printf("%d %d\n", a[i], freq);
        }
    }
    return 0;
}
