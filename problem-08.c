// Cho mảng số nguyên A[] gồm N phần tử, hãy liệt kê các giá trị khác nhau trong mảng theo thứ tự xuất hiện, mỗi giá trị chỉ liệt kê 1 lần. Ở thời điểm hiện tại các bạn có thể duyệt trâu để giải bài này, sau này sẽ dùng cách tối ưu hơn.
#include <stdio.h>

int main() {
    int n; 
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for(int i = 0; i < n; i++){
        int same = 0;
        for(int j = 0; j < i; j++){
            if(a[i] == a[j]){
                same = 1;
                break;
            }
        }
        if(!same){
            printf("%d ", a[i]);
        }
    }
    return 0;
}
