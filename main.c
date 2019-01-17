#include <stdio.h>
char arr[1024];
int index = 0;
int MG(char x)
{
    int count = 0;
    for (int i; i < index; i++)
    {
        if (x == arr[i])
        {
            count++;
        }
    }
    if (count == 0)
    {
        return 0;
    }
    else

    {
        return 1;
    }
}
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
            printf("显示全部敏感词\n");
            for (int i = 0; i < index; i++)
            {
                printf("所有敏感字符为%c\n", arr[i]);
            }
            printf("显示成功，点击回车继续\n");
            char x;
            scanf("%c", &x);
            scanf("%c", &x);
        }
        if (code == 4)
        {
            printf("请输入一段英文:\n");
            char nr[1024];
            scanf("%s", nr);
            for (int i = 0; 1; i++)
            {
                if (nr[i] == '\0')
                {
                    break;
                }
                char x = nr[i];
                int r = MG(x);
                if (r == 1)
                {
                    nr[i] = '*';
                }
                printf("%c", nr[i]);
            }
            printf("\n");

            printf("替换完成，点击回车继续\n");
            char x;
            scanf("%c", &x);
            scanf("%c", &x);
        }
        if (code == 5)
        {
            break;
        }
    }

    return 0;
}