#include <stdio.h>

int main() {
    int intscore = 90.5;
    float floatscore = 90.5;

    printf("Value = %c\n",intscore);
    printf("Value= %f\n", floatscore);
    
    return 0;
}

// ตัวแปรชนิด int ใช้เก็บข้อมูลตัวเลขแบบจำนวนเต็มเท่านั้น
// ส่วน float เหมาะสำหรับเก็บค่าที่มีจุดทศนิยม และแสดงผลได้ละเอียดถึง 6 ตำแหน่ง
// ถ้าใช้ int แทน float จะทำให้ค่าทศนิยมถูกตัดทิ้ง และผลลัพธ์ไม่ตรงกับค่าที่ตั้งใจไว้