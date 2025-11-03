// Cho mảng số nguyên A[] gồm N phần tử và số nguyên X, nhiệm vụ của bạn là tìm kiếm xem X có xuất hiện trong mảng hay không, nếu X xuất hiện trong mảng thì thực hiện xóa vị trí xuất hiện đầu tiên của X trong mảng, ngược lại in ra "NOT FOUND" nếu X không xuất hiện.
#include <stdio.h>
int main() {
    int n, x;
    scanf("%d%d", &n, &x);
    int a[n];
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);
    
    int k = -1; // Đánh dấu trạng thái “chưa tìm thấy”
    for(int i = 0; i < n; i++){
        if(a[i] == x){
            k = i; // Lưu vị trí của phần tử cần xóa
            break; // Tìm vị trí xuất hiện đầu tiên của X và dừng vòng lặp
        } 
    }
    if(k == -1){  
        printf("NOT FOUND\n"); // X không xuất hiện trong mảng
    }else{
        for(int i = k; i < n - 1; i++){ // Dịch chuyển các phần tử sau vị trí k sang trái
            a[i] = a[i + 1]; // Ghi đè phần tử tại vị trí k
        }
        n--; // Giảm kích thước mảng sau khi xóa
        for(int i = 0; i < n; i++){
            printf("%d ", a[i]);
        }
    }
    // int found = 0;
    // for(int i = 0; i < n; i++){
    //     if(a[i] == x){
    //         found = 1;
    //         for(int j = i; j < n - 1; j++){
    //             a[j] = a[j + 1];
    //         }
    //         n--;
    //         break;
    //     }
    // }
    // if(!found){
    //     printf("NOT FOUND");
    // }else{
    //     for(int i = 0; i < n; i++){
    //         printf("%d ", a[i]);
    //     }
    // }
    return 0;
}
