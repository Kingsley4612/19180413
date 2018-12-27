#include "header.h"
#include <stdio.h>
int main() {

    title();
    Node *head;
    head=create();


    int choice;
    while (1) {
        choice = Menu();
        if (choice == 7)break;

        switch (choice) {
            case 1:
                search(head);
                break;
            case 2:
                head = add(head);
                break;
            case 3:
                head = modify(head);
                break;
            case 4:
                head = delete(head);
                break;
            case 5:
                show(head);
                break;
            case 6:
                information(head);
                break;
            default:
                printf("\t\t\t请输入正确命令！\n");
        }
    }
    rewrite(head);
    return 0;
}
