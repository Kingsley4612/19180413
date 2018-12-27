//
// Created by Kingsley on 2018-12-20.
//
#include <stdio.h>

int Menu() {
    int choice;
    printf("\t\t\t*=========================================* \n");
    printf("\t\t\t| * - * - * - * - * --- * - * - * - * - * |\n");
    printf("\t\t\t| |        [1]   查询图书条目.          | |\n");
    printf("\t\t\t| *        [2]   添加图书条目.          * |\n");
    printf("\t\t\t| |        [3]   修改图书条目.          | |\n");
    printf("\t\t\t| *        [4]   删除图书条目.          * |\n");
    printf("\t\t\t| |        [5]   显示图书条目.          | |\n");
    printf("\t\t\t| *        [6]   图书统计信息.          * |\n");
    printf("\t\t\t| |        [7]   退出这个界面.          | |\n");
    printf("\t\t\t| * - * - * - * - * --- * - * - * - * - * |\n");
    printf("\t\t\t*=========================================*\n");
    printf("\t\t\t\t请输入您所需的功能前的数字:");
    scanf("%d", &choice);
    return choice;
}