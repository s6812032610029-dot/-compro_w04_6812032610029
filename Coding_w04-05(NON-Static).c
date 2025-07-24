#include <stdio.h>           

void countCall() {              
    int counter = 0;
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

// ความแตกต่างระหว่างการใช้ตัวแปรแบบปกติ (Non-static) และ static
// ตัวแปรที่ไม่เป็น static จะถูกกำหนดค่าเริ่มต้นใหม่ทุกครั้งที่ฟังก์ชันถูกเรียก
// ในที่นี้ ตัวแปร counter จะเริ่มต้นที่ 0 เสมอ และเพิ่มค่าเป็น 1 จากนั้นแสดงผล
// ดังนั้นไม่ว่าจะเรียกฟังก์ชันกี่ครั้ง ตัวแปรก็จะไม่เก็บค่าครั้งก่อนหน้าไว้