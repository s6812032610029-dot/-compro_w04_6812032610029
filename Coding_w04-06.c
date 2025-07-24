#include <stdio.h>

const int GLOBAL_RATE = 10;

void calculate() {
    const int LOCAL_BONUS = 50;
    printf("GLOBAL_RATE = %d\n", GLOBAL_RATE);
    printf("LOCAL_BONUS = %d\n", LOCAL_BONUS);
}

int main() {
    calculate();
    printf("GLOBAL_RATE = %d\n", GLOBAL_RATE);
    return 0;
}

// ความแตกต่างระหว่าง GLOBAL_RATE และ LOCAL_BONUS:
// GLOBAL_RATE คือค่าคงที่ที่กำหนดไว้ในระดับ global ซึ่งสามารถใช้งานได้จากทุกฟังก์ชันในไฟล์นี้
// ในขณะที่ LOCAL_BONUS เป็นค่าคงที่ที่ประกาศไว้ภายในฟังก์ชัน calculate() เท่านั้น
// จึงสามารถเข้าถึงได้เฉพาะภายในฟังก์ชันนั้น

// ถ้าทำการเปลี่ยนค่า GLOBAL_RATE เป็น 20 และ LOCAL_BONUS เป็น 8 แล้วทำการคอมไพล์
// โปรแกรมจะทำงานได้ตามปกติ แต่ค่าที่แสดงผลใน terminal ก็จะเปลี่ยนไปตามค่าที่แก้ไขไว้

// เหตุผลที่ไม่สามารถใช้ LOCAL_BONUS ใน main() ได้:
// เนื่องจาก LOCAL_BONUS ถูกประกาศอยู่ภายในฟังก์ชัน calculate()
// จึงมีขอบเขตการใช้งานเฉพาะในฟังก์ชันนั้น และไม่สามารถนำไปใช้ภายนอกได้