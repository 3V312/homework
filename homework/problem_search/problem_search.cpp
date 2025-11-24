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