#include <stdio.h>           

void countCall() {              
    static int counter = 0;
    counter++;
    printf("Call Function: Counter = %d\n", counter); 
}

int main(){
    printf("Starting function calls...\n");
    countCall();
    printf("After first call:\n");
    countCall();
    return 0;
}

// ความแตกต่างระหว่าง static และ non-static
// ถ้าใช้ตัวแปรแบบ static ค่าเริ่มต้นจะถูกตั้งครั้งเดียวเมื่อโปรแกรมเรียกฟังก์ชันครั้งแรก
// จากนั้นค่าจะถูกเก็บไว้และนำมาใช้งานต่อในการเรียกฟังก์ชันครั้งถัดไป
// ทำให้ค่าของตัวแปรไม่ถูกรีเซ็ต และเพิ่มขึ้นเรื่อย ๆ ตามจำนวนครั้งที่เรียกใช้