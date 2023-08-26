/*
    เมื่อผู้ใช้กรอกตัวเลข ให้โปรแกรมแสดงผลรวมของชุดอนุกรม ที่มีตัวเลข 2 ลำดับก่อนหน้าบวกกัน (อนุกรมฟีโบนัชชี)
    
    Test case:
        8
    Output:
        Series = 1 + 1 + 2 + 3 + 5 + 8 + 13 + 21
        Sum = 54

*/

#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int a = 1, b = 1; // ค่าเริ่มต้นสองค่าแรกในอนุกรม
    int sum = a + b; // ผลรวมเริ่มต้นเป็นผลรวมของสองค่าแรก

    printf("Series = %d + %d", a, b);

    for (int i = 3; i <= n; ++i) {
        int c = a + b; // คำนวณค่าต่อไปในอนุกรม
        sum += c; // เพิ่มค่า c เข้าไปในผลรวม
        printf(" + %d", c);

        a = b;
        b = c;
    }

    printf("\nSum = %d\n", sum);

    return 0;
}
