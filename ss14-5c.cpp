#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "HelloWorld"; // Khai báo và gán giá trị cho chuỗi
    char ch;
    int count = 0;

    printf("Chuỗi đã khai báo: %s\n", str);

    // Nhập ký tự từ người dùng
    printf("Nhập một ký tự: ");
    scanf(" %c", &ch);

    // Đếm số lần xuất hiện của ký tự
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            count++;
        }
    }

    printf("Ký tự '%c' xuất hiện %d lần trong chuỗi.\n", ch, count);

    return 0;
}
