#include <stdio.h>

int main () {
    char Linkin_Park = 'K';                     // ใช้ char เนื่องจากต้องการเก็บตัวอักษรเพียงตัวเดียว
    int Limp_Bizkit = 17;                       // ใช้ int เพราะต้องการเก็บค่าตัวเลขจำนวนเต็ม
    float MOjojojo = 65.34;                     // ใช้ float เพราะต้องการเก็บตัวเลขที่มีทศนิยม
    char POwer_Puff_Girl[] = "Male";            // ใช้ char array เพราะต้องการเก็บข้อความหลายตัวอักษร

    printf("nameInitial = %c\n", Linkin_Park);
    printf("age = %d\n", Limp_Bizkit);
    printf("weight = %f\n", MOjojojo);
    printf("gender = %s\n", POwer_Puff_Girl);
    return 0;
}