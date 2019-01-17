#include <stdio.h>
char arr[1024];
int index = 0;
int main()
{

    printf("进入敏感词管理系统\n");
    while (1)
    {
        printf("1 -- 输入敏感词\n");
        printf("2 -- 删除最后一个敏感字符\n");
        printf("3 -- 显示全部敏感词\n");
        printf("4 -- 替换敏感词\n");
        printf("5 -- 退出程序\n");

        printf("请输入功能编号\n");
        int code;
        scanf("%d", &code);
        if (code == 1)
        {
            printf("请输入一个敏感词\n");
            char a;
            scanf("%c", &a);
            scanf("%c", &a);
            arr[index] = a;
            index++;
            printf("添加成功，点击回车继续\n");
            char x;
            scanf("%c", &x);
            scanf("%c", &x);
        }
        if (code == 2)
        {
            printf("删除最后一个敏感词\n");
            index--;
            printf("删除成功，点击回车继续\n");
            char x;
            scanf("%c", &x);
            scanf("%c", &x);

        }
        if (code == 3)
        {
        }
        if (code == 4)
        {
        }
        if (code == 5)
        {
            break;
        }
    }

    return 0;
}