#include <stdio.h>

void countCall() {
    static int counter = 0; // ตัวแปร static จะถูกสร้างและกำหนดค่าเริ่มต้นเพียงครั้งเดียวตลอดอายุของโปรแกรม
    counter++; // ค่าของ counter จะเพิ่มขึ้นทุกครั้งที่ฟังก์ชันนี้ถูกเรียก
    printf("Call function: counter = %d\n", counter);
}

int main() {
    printf("Starting function calls...\n");
    countCall(); // เรียกใช้ครั้งที่ 1
    printf("After first call:\n");
    countCall(); // เรียกใช้ครั้งที่ 2
    return 0;
}

// ผลลัพธ์ที่ได้:
// Starting function calls...
// Call function: counter = 1
// After first call:
// Call function: counter = 2
// เหตุผล: ตัวแปร 'counter' ที่ประกาศเป็น 'static' จะคงค่าของมันไว้ระหว่างการเรียกใช้ฟังก์ชันแต่ละครั้ง ไม่ได้เริ่มต้นใหม่เป็น 0 ในทุกๆ การเรียก ทำให้มันสามารถนับค่าสะสมต่อไปได้
//
// ความแตกต่างกับตัวแปร Non-static (หรือ 'automatic'):
// ตัวแปร 'static' จะถูกสร้างและมีอยู่ตลอดอายุการทำงานของโปรแกรม และจะ 'จดจำ' ค่าล่าสุดของมันไว้ แม้ฟังก์ชันจะทำงานจบลงแล้วก็ตาม
// ในทางตรงกันข้าม ตัวแปร 'Non-static' (เช่น int x = 0; ในฟังก์ชัน) จะถูกสร้างขึ้นใหม่ทุกครั้งที่ฟังก์ชันถูกเรียก และจะถูกทำลายไปทันทีเมื่อฟังก์ชันทำงานเสร็จ ทำให้ไม่สามารถเก็บค่าไว้ได้
//
// อภิปรายและสรุปประโยชน์จากการใช้ 'static':
// การใช้ 'static' เป็นวิธีที่ยอดเยี่ยมในการทำให้ฟังก์ชันมีความ "ทรงจำ" หรือ "รักษาสถานะ" ของตัวเองได้
// มันมีประโยชน์มากในสถานการณ์ที่เราต้องการให้ตัวแปรภายในฟังก์ชันเก็บค่าล่าสุดที่เคยมีการเปลี่ยนแปลงไว้ เช่น การนับจำนวนครั้งที่ฟังก์ชันถูกเรียกใช้, การจัดการ ID เฉพาะ, หรือการเก็บค่าสถานะบางอย่างที่ต้องการให้ต่อเนื่องระหว่างการทำงาน