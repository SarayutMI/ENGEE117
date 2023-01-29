//Doing test Take Home Subject : ENGEE117
//Onwer sarayut mipanya : 65543206080-5
//Thai ver. : นาย ศรายุทธ มีปัญญา : รหัสนักศึกษา 65543206080-5
//Day Completed : 28/01/2023

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;                           // data เก็บค่าเป็นตัวเลขเท่านั้น
    struct Node* next;                  // structure Next เพื่อทำเป็น node
};

void AddNode(struct Node** head, int data) {                                    // structure node เป็น pointer 2 ชั้น
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));               // คำสั่ง malloc คำสั่งจองพื้นที่หน่วยความจำ 
    newNode->data = data;                                                       // คำสั่งดำเนินการ Node
    newNode->next = (*head);
    (*head) = newNode;                                                              // pointer head มีค่าเดียวกับ newNode
}

void UpdateNode(struct Node* head, int oldData, int newData) {
    struct Node* temp = head;                                                   // temp มีค่าเดียวกับ node เพื่อทำการ อัพเดท node
    while (temp != NULL) {                                                      // กำหนดการวนลูปโดยมีขอบเขตจน Node ถึง null
        if (temp->data == oldData) {                                           
            temp->data = newData;
            break;                                                              // หยุดการทำงาน ของเงื่อนไข if
        }
        temp = temp->next;                                                      // node temp ทำการเดินไป Node ต่อไป
    }
}

void ShowAll(struct Node* head) {
    struct Node* temp = head;                                                   // structure Node ค่า head เดียวกับ temp
    while (temp != NULL) {                                                      // กำหนดการวนลูปโดยมีขอบเขตจน Node ถึง null
        printf("%d ", temp->data);                                              // แสดง Node temp ถึง Node data
        temp = temp->next;
    }
    printf("\n");
}

void ShowBack(struct Node* head) {
    if (head == NULL) return;                                                   // เงื่อนไข node head ถึงสิ้นสุดข้อมูล ให้ทำการ ส่งค่ากลับ
    ShowBack(head->next);
    printf("%d ", head->data);                                                  // แสดงค่า ตั้งแต่ node head จนถึง node data
}

void SwapNode(struct Node** head, int data1, int data2) {
    struct Node* temp1 = *head, *prev1 = NULL, *prev2 = NULL, *temp2 = *head;   // (prev : ข้อมูลล่าสุด)

    while (temp1 && temp1->data != data1) {                                     // เงื่อนไขวนลูป while โดยมีเงื่อนไข temp1 และ temp1 จนถึง data โดยที่ไม่เท่ากับ data1
        prev1 = temp1;                                                          // ข้อมูลล่าสุดที่ 1(prev1) มีค่าเดียวกับ temp1
        temp1 = temp1->next;                                                    // ค่า tempp1 มีค่าเดียวกับ temp ไป node ต่อไป
    }

    while (temp2 && temp2->data != data2) {                                     // เงื่อนไขวนลูป while โดยมีเงื่อนไข temp2 และ temp2 จนถึง data โดยที่ไม่เท่ากับ data2
        prev2 = temp2;                                                          // ค่า prev2 มีค่าเดียวกับ temp2 
        temp2 = temp2->next;                                                    // ค่า temp2 มีค่าเดียวกับ temp2 ไป node ต่อไป
    }

    if (!temp1 || !temp2)                                                       // เงื่อนไขถ้าค่า temp1ไม่มี หรือ temp2ไม่มี ให้ส่งค่ากลับ 
        return;

    if (prev1 == NULL)                                                          // ถ้าค่า prev1 มีค่าจนถึง ไม่มี node ต่อไป
        *head = temp2;
    else
        prev1->next = temp2;                                                    // temp2 ให้ ค่า prev1 ไป node ต่อไป 

    if (prev2 == NULL)                                                          // ถ้าค่า prev2 มีค่าจนถึง ไม่มี Node ต่อไป
        *head = temp1;
    else
        prev2->next = temp1;                                                    // ถ้าค่า prev1 มีค่าจนถึงสิ้นสุด

    struct Node* temp = temp1->next;                                            // structure Node ค่า temp กำหนดให้ temp ไปยัง node ต่อไป
    temp1->next = temp2->next;                                                  // กำหนดให้ ค่า temp1 ไปยัง Node ต่อไป ้ช่นเดียวกับ temp2
    temp2->next = temp;
}

int main() {
    struct Node* start = NULL;
    printf("\n");
    AddNode(&start, 40);
    AddNode(&start, 30);                                //ฟังก์ชั่นเพิ่มค่า Node เริ่มต้น data base โดยมีค่า 40-30-20-10 ตามลำดับ โดยดำสารสร้าง node
    AddNode(&start, 20);
    AddNode(&start, 10);
    printf("Add Node : ");

    ShowAll(start);                                     //ฟังก์ชั่น แสดงค่า node ทั้งหมด
    printf("\n");
    
    UpdateNode(start, 10, 99);                          // ฟังก์ชั่น แทนที่ค่า Node โดยแทนที่ ไปยัง Node ที่มีค่า 10 แทนเป็น 99
    printf("Update : ");
    
    ShowAll(start);                                     //ฟังก์ชั่นแสดงค่าที่โดนอัพเดท Node 
    printf("\n");
    
    printf("ShowBack : ");
    ShowBack(start);                                    //ฟังก์ชั่นแสดงค่าเรียกลำดับย้อนกลับ
    printf("\n");
    
    SwapNode(&start, 20, 30);                           //ฟังก์ชั่น สลับลำดับ Node เฉพาะจุด โดยสลับ Node ที่มีค่า 30 และ Node ที่มีค่า 20
    printf("\n");
    printf("SwapNode1 : ");
    
    ShowAll(start);                                     //ฟังก์ชั่นแสดง ค่าใน Node
    printf("\n");
    
    SwapNode(&start, 40, 99);                           //ฟังก์ชั่น สลับลำดับ Node เฉพาะจุด โดยสลับ Node ที่มีค่า 40 และ Node ที่มีค่า 99           
    printf("SwapNode2 : ");
    ShowAll(start);

    return 0;
}
