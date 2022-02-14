#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void menu() {
    printf("******************\n");
    printf("****猜数字游戏****\n");
    printf("*****1. Play******\n");
    printf("*****0. exit******\n");
    printf("******************\n");
}

void game() {
    int guss = 0;
    int ret = rand() % 100 + 1; //随机生成1-100的数字

    while ( 1 )
    {
        printf("请猜数字: ");
        scanf("%d", &guss);

        if (guss < ret)
        {
            printf("猜小了\n");
        } else if (guss > ret)
        {
            printf("猜大了\n");
        } else 
        {
            printf("恭喜你猜对了\n");
            break;
        }
    }
    
}

int main() {

    int input = 0;
    srand((unsigned int)time(NULL));

    do
    {
        menu();
        printf("请选择-> ");
        scanf("%d", &input);

        switch (input)
        {
        case 1:
            game();
            break;
        case 2:
            printf("游戏退出\n");
            break;
        default:
            printf("输入错误,请重新输入\n");
            break;
        }
    } while (input);
    
    return 0;
}
