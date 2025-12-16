//// problem_search.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//#include <string.h>
//#include <stdio.h>
//int main()
//{
//    int i = 0;
//    int j = 0;
//    int findFlag = 0;
//    char x[13];
//    char str[6][13] = { "Pascal","Basic","Fortran", "Java", "Visual C", "Visual Basic" };
//
//    printf("请输入一个字符串:");
//    fgets(x,sizeof(x),stdin);
//    int len = strlen(x);
//    while (i < 6 && !findFlag)
//    {
//        for (j = 0; j < len; j++) {
//            if (x[j] != str[i][j])
//            {
//                break;
//            }
//        }
//        if (j == len) {
//            findFlag = 1;
//
//        }
//        i++;
//    }
//
//    if (findFlag)
//    {
//        printf("%s\n", x);
//    }
//    else
//    {
//        printf("没找到!\n");
//    }
//    return 0;
//}
//你作弊 。。
/*
#include<stdio.h>
#include<string.h>
int main() {
    //先把两个单词存在一个数组里面，数出第一个单词的长度，确定双指针的长度
    //如果前面的指针和后面的指针不同，前面的前移一位，后面的归零，相同则一起前移。
	char str[50] = { 0 };
	int len1 = 0, len2 = 0;
	scanf_s("%s", str, (unsigned)sizeof(str));
	len1 = strlen(str);
	scanf_s("%s", str + len1 + 1, (unsigned)(sizeof(str) - len1 - 1));
	len2 = strlen(str);
	len2 = len2 - len1;
	char* p1 = str;
	char* p2 = str + len1 + 1;
	for (int i = 0; i < len1; i++) {
	if(*p1 != *p2) {
		p1++;
		p2 = str + len1 + 1;
	}
	else {
		p1++;
		p2++;
	}
	
	}
	char* p3 = str + len1 + 1;
	while (p3 <p2) {
		printf("%c", *p3);
		p3++;
	}


    return 0;
}*/

/*
double myswitch(char ch) {
    if (ch >= '0' && ch <= '9') {
        return (double)(ch - '0');
    }
    else if (ch >= 'A' && ch <= 'F') {
        return (double)(ch - 'A' + 10);
    }
    else if (ch >= 'a' && ch <= 'f') {
        return (double)(ch - 'a' + 10);
    }
    return 0.0;
}

double exchange(char* arr, char* arr_result) {
    char arr16[22] = { '0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F','a','b','c','d','e','f' };
    double sum = 0.0;
    int flag = 0;
    int idx = 0;
    for (int i = 0; *(arr + i) != 0; i++) {

        for (int j = 0; j < 22; j++) {
            if ((*(arr + i) == *(arr16 + j)) && (*(arr + i) != 0)) {
                *(arr_result + idx) = *(arr + i);
                idx++;
            }
        }
    }
    *(arr_result + idx) = '\0';
    int len = strlen(arr_result);
    for (int i = 0; *(arr_result + i) != 0; i++) {
        int num = myswitch(*(arr_result + i));
        sum = sum + num * pow(16, len - 1 - i);
    }


    return sum;
}

int main() {

    char arr[80] = { 0 };
    char arr_result[80] = { 0 };
    printf("请输入十六进制字符串：");
    scanf_s("%s", arr, 80);
    double tennum = exchange(arr, arr_result);
    printf("十六进制串%s的值=十进制%.0f", arr_result, tennum);

    return 0;
}*/
/*
#include<stdio.h>
int main() {
    int num[24];
    int min_idx = 0;
    int max_idx = 0;
    float sum=0.0;
    for (int i = 0; i < 24; i++) {
        printf("请输入在%d:00和%d:00之间登录的用户数：", i, i + 1);
        scanf_s("%d", &num[i]);
    }
    for (int i = 0; i < 24; i++) {
        if (*(num + i) < *(num + min_idx)) {
            min_idx = i;
        }
        if (*(num + i) > *(num + max_idx)) {
            max_idx = i;
        }
        sum += (float)(*(num + i));
    }


    printf("   时间                 登录人数                 所占比例\n");
    for (int i = 0; i < 24; i++) {
        float rate = ((float)*(num + i) / sum)*100.0;
        printf(" % 2d:00 - % 2d : 00 % 15d % 25.1f\n", i, i + 1, *(num + i), rate);

    }
    printf("最大登录人数%d发生在%2d：00到%2d：00之间\n", *(num + max_idx),max_idx, max_idx + 1);
    printf("最小登录人数%d发生在%2d：00到%2d：00之间\n", *(num + min_idx), min_idx, min_idx + 1);

    return 0;
}*/

/*
屏幕菜单示例
*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#define N 10//学号位数 


typedef struct candi
{
    int vote1;
    int vote2;
    int idx;
    char name[50];
    struct candi* next;
} candi;

void create_node(candi** head, int idx, char* name);
void show_voters(long long* voters, int count);
void show_candis(candi* head, int flag, int count);
void show_vote1(candi* head, int count);
void show_vote2(candi* head, int count);
void revote(int* count, long long* voters);
void save(int count, long long voters[]);

void vote(int* count, long long voters[]);
void vote_input(int flag, char input[], int* exist);
void find_idx(int idx, int flag, int* exist);
void find_name(char* input, int flag, int* exist);

void showMenu(const char* aMenu[], int n);
void free_list(candi* head);

void create_node(candi** head, int idx, char* name)
{

    //到结尾
    candi* new_node = (candi*)malloc(sizeof(candi));
    new_node->vote1 = 0;
    new_node->vote2 = 0;
    new_node->idx = idx;
    strcpy(new_node->name, name); //?
    new_node->next = NULL;

    if (*head == NULL)
    {
        *head = new_node;
        return;
    }

    candi* p = *head;

    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = new_node;

}

candi* head = NULL;

//以下系列函数请重新命名
void show_voters(long long* voters, int count)
{
    system("cls"); //处理并显示对应结果前清除屏幕
    if (count == 0)
    {
        printf("未投票！\n");
        printf("\n按任意键返回主菜单\n");
        getch();
        return;
    }
    printf("显示投票学生人数和学号清单\n");
    int i = 0;
    for (i = 0; i < count; i++)
    {
        printf("%3d | %25lld\n", i + 1, *(voters + i));
    }
    printf("\n总投票人数：%d\n", count);

    printf("\n\n请按任意键返回主菜单\n");
    getch(); //等待用户按一次键
}
void show_candis(candi* head, int flag, int count)
{
    system("cls");
    if (count == 0 && flag == 0)
    {
        printf("未投票！\n");
        printf("\n按任意键返回主菜单\n");
        getch();
        return;
    }

    candi* p = head;
    printf("候选人得票情况\n");
    p = head;
    while (p != NULL)
    {
        printf("%s（班长得%d票，团支书得%d票）\n", p->name, p->vote1, p->vote2);
        p = p->next;
    }
    printf("共%d人投票\n", count);

    if (flag == 0)
    {
        printf("\n按任意键返回主菜单\n");
        getch();
    }
}
void show_vote1(candi* head, int count)
{
    system("cls");

    if (count == 0)
    {
        printf("未投票！\n");
        printf("\n按任意键返回主菜单\n");
        getch();
        return;
    }

    printf("班长选举结果\n");

    // 找出最高票数
    int max_vote = 0;
    candi* p = head;
    while (p != NULL)
    {
        if (p->vote1 > max_vote) max_vote = p->vote1;
        p = p->next;
    }

    // 从最高票到0票依次显示
    int vote = 0;
    for (vote = max_vote; vote >= 0; vote--)
    {
        p = head;
        while (p != NULL)
        {
            if (p->vote1 == vote)
            {
                printf("%s（%d/%d）\n", p->name, p->vote1, count);
            }
            p = p->next;
        }
    }

    printf("\n按任意键返回主菜单\n");
    getch();
}

void show_vote2(candi* head, int count)
{
    system("cls");

    if (count == 0)
    {
        printf("未投票！\n");
        printf("\n按任意键返回主菜单\n");
        getch();
        return;
    }

    printf("团支书选举结果\n");

    // 找出最高票数
    int max_vote = 0;
    candi* p = head;
    while (p != NULL)
    {
        if (p->vote2 > max_vote) max_vote = p->vote2;
        p = p->next;
    }

    // 从最高票到0票依次显示
    int vote = 0;
    for (vote = max_vote; vote >= 0; vote--)
    {
        p = head;
        while (p != NULL)
        {
            if (p->vote2 == vote)
            {
                printf("%s（%d/%d）\n", p->name, p->vote2, count);
            }
            p = p->next;
        }
    }

    printf("\n按任意键返回主菜单\n");
    getch();
}
void revote(int* count, long long* voters)
{
    system("cls"); //处理并显示对应结果前清除屏幕
    printf("继续投票\n");
    vote(count, voters);
    printf("\n\n请按任意键返回主菜单\n");
    getch(); //等待用户按一次键
}
void save(int count, long long* voters)
{
    system("cls");
    printf("保存投票结果\n");

    FILE* fp = fopen("vote_result.txt", "w");
    if (fp == NULL)
    {
        printf("文件保存失败！\n");
    }
    else
    {
        // 保存投票学号
        fprintf(fp, "=== 投票学号清单 ===\n");
        fprintf(fp, "总投票人数: %d\n", count);
        int i = 0;
        for (i = 0; i < count; i++)
        {
            fprintf(fp, "%lld\n", voters[i]);
        }

        // 保存候选人票数
        fprintf(fp, "\n=== 候选人得票情况 ===\n");
        candi* p = head;
        while (p != NULL)
        {
            fprintf(fp, "%d %s %d %d\n",
                p->idx, p->name, p->vote1, p->vote2);
            p = p->next;
        }

        fclose(fp);
        printf("投票结果已保存到 vote_result.txt\n");
    }

    printf("\n按任意键返回主菜单");
    getch();
}
void vote(int* count, long long voters[])
{

    while (1)
    {
        int skip = 0;

        while (1)
        {
            printf("请输入学号完成投票（输入 -1 结束）：\n");
            char student_id[100];
            fgets(student_id, sizeof(student_id), stdin);

            int valid = 1;
            int i = 0;

            while (student_id[i] != '\n' && student_id[i] != '\0')
            {
                if (student_id[i] < '0' || student_id[i] > '9')
                {
                    valid = 0;
                    break;
                }
                i++;
            }

            if (!valid)
            {
                printf("输入错误，请输入数字！\n");
                continue;
            }

            voters[*count] = atoll(student_id);
            break;
        }


        if (voters[*count] == -1)
        {
            voters[*count] = 0;//实际上没有必要
            return;
        }
        int j = 0;
        for (j = 0; j < *count; j++)
        {
            if (voters[j] == voters[*count])
            {
                printf("该学号已完成投票！\n");
                skip = 1;
                break;
            }
        }
        if (skip)
        {
            continue;
        }
        int exist1 = 0;
        int exist2 = 0;
        int show_candis_flag = 1;
        char input1[50];
        char input2[50];
        show_candis(head, show_candis_flag, *count); //显示
        while (exist1 == 0)
        {
            printf("请输入你选择的班长：\n");

            scanf("%s", input1);
            vote_input(1, input1, &exist1);//投票
            if (exist1 == 0)
            {
                printf("未找到！重新输入！\n");
            }
        }
        while (1)
        {
            while (exist2 == 0)
            {

                printf("请输入你选择的团支书:\n");
                scanf("%s", input2);

                if (strcmp(input1, input2) == 0)
                {
                    printf("你选择的团支书与班长不允许是同一人，请重新输入你选择的团支书：\n");
                    continue;
                }
                vote_input(2, input2, &exist2);//投票
                if (exist2 == 0)
                {
                    printf("未找到！重新输入！\n");

                }

            }
            break;
        }

        printf("你已完成投票，谢谢！\n");

        (*count)++;


    }
    return;
}
void vote_input(int flag, char input[], int* exist)
{

    if (input[0] >= '1' && input[0] <= '8')//说明是编号
    {
        find_idx(input[0] - '0', flag, exist);
    }
    else
    {
        find_name(input, flag, exist);
    }

}
void find_idx(int idx, int flag, int* exist)
{
    candi* p = head;

    while (p != NULL)
    {
        if (p->idx == idx)
        {
            *exist = 1;
            if (flag == 1)
            {
                p->vote1++;
                printf("投票成功；班长\n");
            }
            else if (flag == 2)
            {
                p->vote2++;
                printf("投票成功；团支书\n");
            }
            return;
        }
        p = p->next;
    }

}

void find_name(char* input, int flag, int* exist)
{
    candi* p = head;
    while (p != NULL)
    {
        if (strcmp(p->name, input) == 0)
        {
            *exist = 1;
            if (flag == 1)
            {
                p->vote1++;
                printf("投票成功；班长\n");
            }
            else if (flag == 2)
            {
                p->vote2++;
                printf("投票成功；团支书\n");
            }
            return;
        }
        p = p->next;
    }
}
void showMenu(const char* aMenu[], int n)
{
    int i;
    system("cls"); //显示菜单前清除屏幕
    for (i = 0; i < n; i++)
    {
        printf("%s\n", aMenu[i]);
    }

}

void free_list(candi* head)
{
    candi* p = head;
    while (p != NULL)
    {
        candi* temp = p;
        p = p->next;
        free(temp);
    }
}


int main(int argc, char* argv[])
{
    int nKey;
    const char* aMenu[7] =
    {
        "1、显示投票学生人数和学号清单",
        "2、显示候选人得票情况",
        "3、显示班长选举结果",
        "4、显示团支书选举结果",
        "5、继续投票",
        "6、保存投票结果",
        "Esc 退出"
    };

    printf("输入候选人数目m（3=<m=<8）\n");
    int m = 0;

    while (1)
    {
        if (scanf("%d", &m) != 1)
        {
            printf("请输入数字！\n");
            while (getchar() != '\n');
            continue;
        }

        if (m < 3 || m > 8)
        {
            printf("人数必须在3到8之间！请重新输入：\n");
            continue;
        }
        break;
    }

    int i = 0;
    for (i = 0; i < m; i++)
    {
        printf("请输入第 %d 个候选人姓名：\n", i + 1);
        char name[50];
        scanf("%49s", name);
        if (name[0] >= '0' && name[0] <= '9')
        {
            printf("请输入中文！\n");
            i--;
            continue;
        }
        create_node(&head, i + 1, name);
    }

    int count = 0;
    long long voters[30] = { 0 };
    vote(&count, voters);

    int show_candis_flag = 0;


    while (1)
    {
        showMenu(aMenu, 7);
        nKey = getch();
        switch (nKey)
        {
        case 49:
            show_voters(voters, count);
            break;
        case 50:
            show_candis(head, show_candis_flag, count);
            break;
        case 51:
            show_vote1(head, count);
            break;
        case 52:
            show_vote2(head, count);
            break;
        case 53:
            revote(&count, voters);
            break;
        case 54:
            save(count, voters);
            break;
        case 27:
            free_list(head);
            return 0;
        }
    }

    return 0;
}
