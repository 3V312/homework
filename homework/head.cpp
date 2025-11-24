/*#include<stdio.h>
int main()
{
    double a, b;


    printf("please input:");
    scanf("%lf,%lf", &a, &b);
    double result = （a + b） / 2。0;
    printf("The average is %lf", &result);

    return 0;
}
#include<stdio.h>
#include<ctype.h>
int main() {
    printf("Press a key and then press Enter:");
    char ch;
    scanf_s("%c", &ch);
    if (isdigit(ch)) {
        printf("It is a digit character!\n");
    }
    else if (isalpha(ch)) {
        printf("It is an English character!\n");
    }
    else if (isspace(ch)) {
        printf("It is a space character!\n");
    }
    else {
        printf("It is other character!\n");
    }
    return 0;
}
#include<stdio.h>
int main()
{
    printf("Please enter a positive integer: ");
    int i;
    scanf_s("%d", &i);
    int j;
    int data = i;

    j = data % 10;
    data = data / 10;
    j = j * 10 + data %10;
    data = data / 10;
    j = j * 10 + data %10;
    printf("%d-->%d\n", i, j);
    return 0;
}
#include<stdio.h>
int main() {
    printf("Input a single numeral:");
    int a;
    scanf_s("%d", &a);
    if (a == 0){
        printf("Sunday\n");
    }
    else if(a == 1){
        printf("Monday\n");
    }
    else if(a == 2){
        printf("Tuesday\n");
    }
    else if(a == 3){
        printf("Wednesday\n");
    }
    else if(a == 4){
        printf("Thursday\n");
    }
    else if(a == 5){
        printf("Friday\n");
    }
    else if(a == 6){
        printf("Saturday\n");
    }
    else{
        printf("%d\n", a);
    }
    return 0;

}


#include<stdio.h>
int main() {
    printf("Enter x:");
    double x;
    scanf_s("%lf", &x);
    double y;
    if (x < 0) {
        y = 0;
    }
    else if (0 <= x <= 15) {
        y = (4.0 * x) / 3.0;
    }
    else(x > 15){
        y =2.5*x-10.5;
    }

    printf("f(%.2f)=%.2f\n", x, y);


    return 0;

}else if(score<60){
          
            printf("score=%d-->E\n",score);
        }
#include<stdio.h>
int main() {
    float high = 100;
    float all_high = 100;
    int i = 0;
    while (i <= 10) {
        high = high / 2;
        all_high = all_high + high * 2;
        i++;
    }
    printf("the total of road is %f\n" "the tenth is %f meter\n", all_high, high);
    return 0;
}

#include<stdio.h>
int main() {
    
    int x, y;
    x = 1;
    y = 1;
    while (1) {
        y = 98 - x;
        if (2 * x + 4 * y ==386) {
            printf("x=%d,y=%d\n", x, y); 
            break;
       }
        x++;
    }
    return 0;
}

#include<stdio.h>
int main() {
    int x, y, z;
    for (x = 0; x <= 20; x++) {
        for(y = 0; y <= 33; y++) {
            z = 100 - x - y;
            if (z % 3 == 0 && 5 * x + 3 * y + z / 3 == 100) {
                printf("x=%d,y=%d,z=%d\n", x, y, z);
            }
        }
    }

    return 0;
}

#include<stdio.h>
int main() {
    long int I;
    printf("请输入利润：");
    scanf_s("%ld", &I);
    double J = 0;
    int level = 0;
    if (I > 1000000) {
        level = 1;
    }
    else if (I > 600000) {
        level = 2;
    }
    else if (I > 400000) {
        level = 3;
    }
    else if (I > 200000) {
        level = 4;
    }
    else if (I > 100000) {
        level = 5;
    }
    else {
        level = 6;
    }
    switch (level) {
    case 1 :
        J = 100000 + 7500 + 10000 + 6000 + 6000 + (I - 1000000) / 100;
        break;
    case 2:
        J = 100000 + 7500 + 10000 + 6000 + ((I - 600000) * 3) / 200;
        break;
    case 3:
        J = 100000 + 7500 + 10000 + ((I - 400000) * 3) / 100;
        break;
    case 4:
        J = 100000 + 7500 + (I - 200000) / 20;
        break;
    case 5:
        J = 100000 + ((I - 100000) * 3) / 40;
        break;
    default:
        printf("error!");
        break;
    }
    printf("奖金是%10.2f", J);

    return 0;
}

#include<stdio.h>
int main() {
    long long fib[20];
    fib[0] = 2;
    fib[1] = 3;
    for (int i = 2; i < 20; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
   double up = 1;
    double  down = 1;

    for (int i = 0; i < 20; i++) {
        up *= (double)fib[i];
    }
    for (int i = 0; i < 19; i++) {
        down *=(double) fib[i];
    }
    double sum;
    sum = up / down;
    printf("sum is %9.6lf\n", sum);
    printf("%lld", fib[19]);
    return 0;
}
#include<stdio.h>
int main() {
    long long fib[20];
    fib[0] = 2;
    fib[1] = 3;
    for (int i = 2; i < 20; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    double fra[20] ;
    fra[0] = 2;
    for (int i = 1; i < 20; i++) {
        fra[i] = (double)fib[i] / fib[i - 1];
    }
    double result=0;
    for (int i = 0; i < 20; i++) {
        result += fra[i];
    }
    printf("sum is %9.6lf\n", result);

    return 0;
}
//球反弹问题
#include<stdio.h>
int main() {
    float high = 100.0;
    double t_high = 0;
    for (int i = 0; i < 10; i++) {
        high /= 2.0;
    }
   
    int flag=0;
    double i = 50.0;
         while ( flag<9) {
             t_high += i;
             i /= 2.0;
            flag += 1;
        }
         t_high = t_high * 2.0 + 100.0;
    
    printf("the total of road is %f\n",t_high);
    printf("the tenth is % f meter\n", high);
    return 0;
}
#include<stdio.h>
void swap(int* a, int* b, int size) {
    for (int i = 0; i < size; i++) {
        int temp;
        temp = *(a + i);
        *(a + i) = *(b + i);
        *(b + i) = temp;
    }
}

int main() {
    int a[5] = { 1,2,3,4,5, };
    int b[5] = { 10,20,30,40,50, };
    swap(a, b, 5);
    for (int j=0; j < 5; j++) {
        printf("a[%d]=%2d, ", j, a[j]);
      
    }
    for (int j = 0; j < 5; j++) {
        printf("b[%d]=%2d, ", j, b[j]);

    }
}

#include<stdio.h>
#include<stdlib.h>
void fun(int n, int* k, int arr[]) {
    //计算素数并计数 
    int count = 0;
   
    for (int i = 2; i < n; i++) {
        int flag = 1;
        for (int j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                flag = 0;
                break;
            }
            
        }
        if (flag == 1) {
            arr[count] = i;
            count++;
        }
    }
    *k = count;
} 
int main() {
    printf("Please enter an integer number between 10 and 100:\n");
    int n;
    int k = 0;
    scanf_s("%d", &n);

    if (n < 10 || n>100) {
        printf("erorr!");
        return -1;
    }
    int* arr = (int*)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("arr erorr!");
        return -1;
    }
    fun(n, &k, arr);
        printf("There are %d prime numbers less than %d:\n", k, n);
    int i = 0;
    for (i; i < k; i++) {
        printf("%4d", arr[i]);
    }
    free (arr);
    return 0;
}*/
/*
#include<stdio.h>
#include<string.h>
struct Student {
    unsigned int student_id;
    char name[20];
    int score;
};
int main() {
    struct Student student[4];
    struct Student temp;
    for (int k = 0; k < 4; k++) {
        printf("输入第%d个学生的信息：学号、姓名、成绩\n", k + 1);
        scanf_s("%u %s %d", &student[k].student_id, student[k].name, (unsigned)sizeof(student[k].name), &student[k].score);
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3 - i; j++) {
            if (student[j + 1].score > student[j].score) {
                temp = student[j];
                student[j] = student[j + 1];
                student[j + 1] = temp;
            }
        }
    }
    for (int y = 0; y < 4; y++) {
        printf("%u %s %d\n", student[y].student_id, student[y].name, student[y].score);
    }
    return 0;
}
*/
/*
#include <stdio.h>
#include <string.h>

#define ARR_SIZE  80

int main()
{
    char str[ARR_SIZE];
    int  len, i;
    int  letter=0,digit=0,space=0,other=0;

    printf("请输入一个字符串:");

    fgets(str, sizeof(str), stdin);

    len = (int)strlen(str);

    for (i=0; i<len; i++)
    {
        if (str[i]>='a' &&str[i] <= 'z' || str[i]>='A' &&str[i] <= 'Z')
        {
            letter ++;
        }
        else if (str[i]>=0||str[i]<=9)
        {
            digit ++;
        }
        else if (str[i]=' ' )
        {
            space ++;
        }
        else
            other ++;
    }

    printf("英文字符数:%d\n", letter);
    printf("数字字符数:%d\n", digit);
    printf("空格数:%d\n", space);
    printf("其他字符数:%d\n", other);
}
*/
/*
#include<stdio.h>
int main() {
    long int ID[40] = { 0 };
    int score[40] = { 0 };
    int i = 0;
    do {
        printf("Input student’s ID and score:");
        scanf_s("%ld%d", &ID[i], &score[i]);
        i++;
    } while (!(ID[i] < 0 || score[i] < 0));
    printf("Total students are %d", i);
    printf("Input the searching ID:");
    long int search;
    scanf_s("%ld", &search);
    for (int j = 0; j < 40; j++) {
        if (ID[j] == search) {
            printf("score =  %d", score[j]);
            return 0;
        }
    }
    printf("Not found!");
    return 0;
}
#include<stdio.h>
#include<string.h>

int main() {
    char str[5][100];
    char min[100] ;
    for (int i = 0; i < 5; i++) {
        scanf_s("%s", str[i], (unsigned)sizeof(str[i]));
    }
    strcpy_s(min, str[0]);
    for (int i = 0; i < 5; i++) {
        if (strcmp(str[i], min) < 0) {
            strcpy_s(min, sizeof(min), str[i]);
        }
    }

    printf("min is %s", min);
    return 0;
}
#include<Stdio.h>
#include<string.h>
struct candidate {
    char name[20];
    int vote;
};
typedef struct candidate candidate;

int main() {
    candidate can1 = { "li", 0 };
    candidate can2 = { "zhang", 0 };
    candidate can3 = { "wang", 0 };
    int we = 0;
    char temp[20];

    for (int i = 0; i < 10; i++) {
        printf("Input vote %d:", i + 1);
        scanf_s("%s", temp, (unsigned)sizeof(temp));
        if (strcmp(temp, "li") == 0) {
            can1.vote++;
        }
        else if (strcmp(temp, "zhang") == 0) {
            can2.vote++;
        }
        else if (strcmp(temp, "wang") == 0) {
            can3.vote++;
        }
        else {
            we++;
        }
    }
    printf("Election results:\n");
    printf("%8s:%d\n", can1.name, can1.vote);
    printf("%8s:%d\n", can2.name, can2.vote);
    printf("%8s:%d\n", can3.name, can3.vote);
    printf("Wrong election:%d\n", we);
    return 0;
}*/

//#include<stdio.h>
//#include <malloc.h>
//
////int count3(int arr[], int size) {
////    int* arr_temp = (int*)malloc(size * sizeof(int));
////    int flag = 0;
////    if (size ==1) {
////        return arr[0];
////    }
////    else {
////        for (int i = 0; i < size; i++) {
////
////            if ((i+1) % 3 != 0) {
////                arr_temp[flag] = arr[i];
////                flag++;
////
////            }
////            
////        }
////        free(arr_temp);
////        return count3(arr_temp, flag);
////    }
////
////        
////}
////循环解法：比较
//int count3(int n) {
//    int* arr = (int*)malloc(n * sizeof(int));
//    for (int k = 0; k < n; k++) {
//        arr[k] = 0;
//    }
//    int k = 0;
//    int out = 0;
//    int i = 0;
//    while (out < n - 1) {

//        if (arr[i] == 0) {
//            k++;
//
//            if (k == 3) {
//                arr[i] = 1;
//                out++;
//                k = 0;
//            }
//
//        }
//        i = (i + 1) % n;
//    }
//    int j = 0;
//    for(j;j<n;j++){
//       if(arr[j]==0){
//           break;
//        }
//	}
//    free(arr);
//    return j+1;
//}
//    int main() {
//        printf("请输入人数：");
//        int n = 0;
//        scanf_s("%d", &n);
//       ///* int* arr = (int*)malloc(n * sizeof(int));*/
//       // for (int i = 0; i < n; i++) {
//       //     arr[i] = i + 1;
//       // }
//        int result = count3(n);
//        printf("30个人中最后留下的是第%d号。", result);
//        /*free(arr);*/
//        return 0;
 /*
#include<stdio.h>
#include<stdlib.h>
double odd(int n) {
    double* arr = (double*)malloc((n / 2) * sizeof(*arr));
    int j = 1;
    for (int i = 0; j < n + 1; i++) {
        arr[i] = (double)j;
        j += 2;
    }
    double result = 0;
    for (int i = 0; i < (n + 1) / 2; i++) {
        result += 1.0 / arr[i];
    }

    free(arr);
    return result;
}
double even(int n) {

    double* arr = (double*)malloc((n / 2) * sizeof(*arr));
    int j = 2;
    for (int i = 0; j < n + 1; i++) {
        arr[i] = (double)j;
        j += 2;
    }
    double result = 0;
    for (int i = 0; i < (n) / 2; i++) {
        result += 1.0 / arr[i];
    }


    free(arr);
    return result;
}
int main() {
    double(*func_pr)(int n) = even;
    double(*func_pr_o)(int n) = odd;
    int n = 0;
    scanf_s("%d", &n);
    if (n % 2 == 0) {
        double result = func_pr(n);
        printf("Even=%f",result);
    }
    else {
        double result = func_pr_o(n);
        printf("Odd=%f",result);
    }
    return 0;
}*/
/*
#include <stdio.h>
int main()
{
    int  up = 9, low = 0, mid, found=0, find=0;
    int  a[10] = { 1, 5, 6, 9, 11, 17, 25, 34, 38, 41 };

    scanf_s("%d", &find);
    printf("\n");

    while (up >= low )
    {
        mid = (up + low) / 2;
        if (a[mid] == find)
        {
            found = 1;
            break;
        }
        else  if (a[mid] > find)
        {
            up = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    if (found) { printf("found  number  is  %dth", mid); }
    else   { printf("no  found");}
    return 0;
}*/
/*
#include<stdio.h>
#include<string>
int Judger(char* a) {
    if (a = NULL) {
        return 0;
    }
    int len = strlen(str);
    int left = 0;
    int right = len - 1;
    else if (str[left] != str[right]) {
        return 0

    }
    else {
        return 1;
    }


}

int main() {
    char str[20];

    fgets(str);
    int len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    if (Judger(str)) {
        printf("%s", str);
    }
    else {
        printf("No!");
    }


    return 0;
}
*/
/*
#include <stdio.h>
#define n 10
int FindMax(int num[], int size, int* pMaxPos);
int main()
{
    int num[n], maxValue, maxPos, minValue, minPos, i;
    printf("Input %d numbers:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf_s("%d", &num[i]);
    }
    maxValue = FindMax(num, n, &maxPos);
    printf("Max=%d, Position=%d\n", maxValue, maxPos);
}
int FindMax(int num[], int size, int* pMaxPos)
{
    *pMaxPos = 0;
    int i, max = num[0];
    for (i = 1; i < size; i++)
    {
        if (num[i] > max)
        {
            max = num[i];
            *pMaxPos = i;
        }
    }
    return max;

}*/


//#include<stdio.h>
//#define N 80
//void  MyStrcpy(char* dstStr, char* srcStr);                            /*  函数声明   */
//int main()
//{
//    char  a[N], b[N];
//    printf("Input a string:");
//    fgets(a,N,stdin); /* 输入字符串 */
//    MyStrcpy(a, b);   /* 调用函数将字符数组a中的字符串拷贝到b中 */
//        printf("The copy is:");
//    puts(b);               /* 输出复制后的字符串 */
//    return 0;
//}
//
///* 函数功能：用字符指针作为函数参数，实现字符串拷贝 */
//void  MyStrcpy(char* dstStr, char* srcStr)
//{
//	int i = 0;
//    while (dstStr[i]!='\0')	           /* 若当前srcStr所指字符不是字符串结束标志 */
//    {
//        srcStr[i] = dstStr[i];  /* 复制字符 */
//        i++;  	/* 使srcStr指向下一个字符 */
//             /* 使dstStr指向下一个存储单元 */
//    }
//    srcStr[i] = '\0';/* 在字符串dstStr的末尾添加字符串结束标志 */
//}
//
//#include<stdio.h>
//#include<string.h>
//#include <vector>
//bool isMatch(char* s, char* p) {
//    //S要满足P的要求 *不会单独出现   *复制0次时，等于a*消失，而不是a
//    if(s==NULL||p==NULL){
//        return false;
//	}
//    int m = strlen(s), n = strlen(p);
//    std::vector<std::vector<bool>> dp(m + 1, std::vector<bool>(n + 1, false));
//    //初始化为false
//    for (int i = 0; i < m + 1; i++) {
//        for (int j = 0; j < n + 1; j++) {
//            dp[i][j] = false;
//        }
//    }
//
//    //处理 空字符串相匹配  引入true
//    dp[0][0] = true;
//
//    for (int j = 2; j < n + 1; j++) {
//        if (p[j - 1] == '*') {
//            dp[0][j] = dp[0][j - 2];
//        }
//    }
//
//    for (int i = 1; i < m + 1; i++) {
//        for (int j = 1; j < n + 1; j++) {
//            if (p[j - 1] == '*' && j >= 2) {  //dp要加一
//                dp[i][j] = ((dp[i][j - 2]) || ((dp[i - 1][j]) && (s[i - 1] == p[j - 2] || p[j - 2] == '.')));
//                //确认忽略a*前面的都相匹配   确认不忽略的前面的也相互匹配，并且项项相匹配     
//            }
//
//            else {
//                dp[i][j] = dp[i - 1][j - 1] && (s[i - 1] == p[j - 1] || (p[j - 1] == '.'));
//            }//也是前面的相匹配，这一项也匹配。
//        }
//    }
//	return dp[m][n];
//}
//
//
//int main() {
//    char s[20];
//    char p[20];
//    printf("请输入字符串s：");
//    scanf_s("%s", s, (unsigned)sizeof(s));
//    printf("请输入字符串p：");
//    scanf_s("%s", p, (unsigned)sizeof(p));
//    bool result = isMatch(s, p);
//    if (result) {
//        printf("匹配成功！");
//    }
//    else {
//        printf("匹配失败！");
//    }
//    return 0;
//}
/*
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct ListNode {
    int val;
    struct ListNode* next;
};

void addNode(struct ListNode** head, int value) {
    struct ListNode* newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
    newNode->val = value;
    newNode->next = NULL;
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    struct ListNode* temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

void showNode(struct ListNode* head) {
    while (head != NULL) {
        printf("%d\n", head->val);
        head = head->next;
    }
}


void init(struct ListNode** headA,int a[],int size){
    
    for (int i = 0; i < size; i++) {
        struct ListNode** current = headA;
        while (*current != NULL && (*current)->val <= a[i]) {
            current = &(*current)->next;
        }
			struct ListNode* newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
            newNode->val = a[i];
            newNode->next = *current;
            (*current) = newNode;
          
  }
	
    showNode(*headA);
	
}
struct ListNode* mergeLists(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode dummy;
    struct ListNode* tail = &dummy;

    while (l1 && l2) {
        if (l1->val < l2->val) {
            tail->next = l1;
            l1 = l1->next;
        }
        else {
            tail->next = l2;
            l2 = l2->next;
        }
        tail = tail->next;
    }
    tail->next = l1 ? l1 : l2;
    return dummy.next;
}

int main() {
    int a[5] = { 9,78,33,12,23 };
    int b[8] = { 1,34,63,10,5,94,39,27 };

    //处理a
    struct ListNode* headA = NULL;
    init(&headA, a,5);
    
    //处理b
    struct ListNode* headB = NULL;
    init(&headB, b,8);
    
    //合并，并且升序输出，最小堆？把B改了
    struct ListNode* merged = mergeLists(headA, headB);
    while (merged != NULL) {
        printf("%4d", merged->val);
        merged = merged->next;
    }
    return 0;
}
*/
/*2500年前数学大师毕达哥拉斯就发现，220与284两数之间存在着奇妙的联系：
220的真因数之和为：1+2+4+5+10+11+20+22+44+55+110=284
284的真因数之和为：1+2+4+71+142=220
毕达哥拉斯吧这样的数对A,B称为相亲数：A的真因数之和为B，而B的真因数之和为A。设计程序求4位以内的相亲数。
**输出格式要求："相亲数：%d,%d\n"  "%d 的真因数之和为：%d"  "+%d"  "=%d\n"
程序运行示例如下：
相亲数：220,284
220 的真因数之和为：1+2+4+5+10+11+20+22+44+55+110=284
284 的真因数之和为：1+2+4+71+142=220
相亲数：1184,1210
1184 的真因数之和为：1+2+4+8+16+32+37+74+148+296+592=1210
1210 的真因数之和为：1+2+5+10+11+22+55+110+121+242+605=1184
相亲数：2620,2924
2620 的真因数之和为：1+2+4+5+10+20+131+262+524+655+1310=2924
2924 的真因数之和为：1+2+4+17+34+43+68+86+172+731+1462=2620
相亲数：5020,5564
5020 的真因数之和为：1+2+4+5+10+20+251+502+1004+1255+2510=5564
5564 的真因数之和为：1+2+4+13+26+52+107+214+428+1391+2782=5020
相亲数：6232,6368
6232 的真因数之和为：1+2+4+8+19+38+41+76+82+152+164+328+779+1558+3116=6368
6368 的真因数之和为：1+2+4+8+16+32+199+398+796+1592+3184=6232

*/
//找到四位数以内的相亲数
/*
#include<stdio.h>
int Find_sum(int a,int*arrsum1) {
    int sum = 0;
    int count = 0;
    for (int i = 0; i < a / 2; i++) {
        if(a % (i + 1) == 0){
			arrsum1[count] = i + 1;
            sum += (i + 1);
			count++;
		}
    }
	arrsum1[count] = sum;
	arrsum1[count + 1] = -1; //标记结束
    return sum;
}

void show_sum(int a,int*arrsuma) {
    printf("%d 的真因数之和为：%d", a,arrsuma[0]);
    int i = 1;
        for (i; arrsuma[i] != -1; i++) {
            printf("+%d", arrsuma[i]);
        
	} 
    printf("=%d\n", arrsuma[i-1]);

}

int main() {
    
    for (int i = 100; i < 10000; i++) {
        int arrsum1[100] = { 0 };
        int arrsum2[100] = { 0 };
        int sum1 = Find_sum(i,arrsum1);
        int sum2 = Find_sum(sum1,arrsum2);
        if (sum2 == i && sum1 != i) {
            printf("相亲数：%d,%d\n", i, sum1);
            show_sum(i, arrsum1);
            show_sum(sum1, arrsum2);
            i = sum1;
        }

        
    }
    return 0;
}
//预处理快速计算
// #include<stdio.h>

// 快速计算真因数和（不存储具体因数）
int QuickFind_sum(int a) {
    int sum = 0;
    for (int i = 1; i <= a / 2; i++) {
        if (a % i == 0) {
            sum += i;
        }
    }
    return sum;
}

// 详细计算并存储真因数（用于显示）
int DetailedFind_sum(int a, int* arrsum1) {
    int sum = 0;
    int count = 0;
    for (int i = 1; i <= a / 2; i++) {
        if (a % i == 0) {
            arrsum1[count] = i;
            sum += i;
            count++;
        }
    }
    arrsum1[count] = sum;
    arrsum1[count + 1] = -1;
    return sum;
}

void show_sum(int a, int* arrsuma) {
    printf("%d 的真因数之和为：%d", a, arrsuma[0]);
    for (int i = 1; arrsuma[i] != -1; i++) {
        printf("+%d", arrsuma[i]);
    }
    printf("=%d\n", arrsuma[i - 1]);
}

int main() {
    for (int i = 100; i < 10000; i++) {
        int sum1 = QuickFind_sum(i);  // 快速判断

        if (sum1 > i && sum1 < 10000) {
            int sum2 = QuickFind_sum(sum1);  // 快速判断
            if (sum2 == i) {
                // 确认是相亲数后，再详细计算用于显示
                int arrsum1[100] = { 0 };
                int arrsum2[100] = { 0 };
                DetailedFind_sum(i, arrsum1);
                DetailedFind_sum(sum1, arrsum2);

                printf("相亲数：%d,%d\n", i, sum1);
                show_sum(i, arrsum1);
                show_sum(sum1, arrsum2);
                i = sum1;
            }
        }
    }
    return 0;
}
*/

//有序数组插入数据有序。在一个按升序排序的数组中查找x应插入的位置，将x插入数组中，使数组元素仍按升序排列。
//注意：定义的数组大小不超过20。例如升序数组里面有5个元素（1  3  5  7  9），待插入数据4，插入后的数组（1   3   4   5   7   9）仍然有序。
//* *输入格式要求："%d"
//* *输出格式要求： "%4d"
//程序运行示例如下：
//输入 : 5
//输入 : 1  3  5  7  9
//输入 : 4
//输出 : 1   3   4   5   7   9
//留21个位置即可
/*
#include<stdio.h>
int main() {
    //输入
    int arr[21] = { 0 };
    int size = 0;
    scanf_s("%d", &size);
    for (int i = 0; i < size; i++) {
        scanf_s("%d", &arr[i]);
    }
    int addnum = 0;
    scanf_s("%d", &addnum);
    //插入
    int i = 0;
    for (i; i < size; i++) {
        if (addnum < arr[i]) {
            break;
        }
    }
    for (int j = size; j >i; j--) {
        arr[j] = arr[j - 1];
    }
	arr[i] = addnum;
    for (int i = 0; i < size+1; i++) {
		printf("%4d", arr[i]);
    }
    return 0;
}
*/
/*
#include<stdio.h>
int main() {
    char sex, sports, diet;
    float faHeight, moHeight, result;
    printf("Are you a boy(M) or a girl(F)?");
    scanf("%c", &sex);
    printf("Please input your father's height(cm):");
    scanf("%f", &faHeight);
    printf("Please input your mother's height(cm):");
    scanf("%f", &moHeight);
    printf("Do you like sports(Y/N)?");
    scanf("%c", &sports);
    printf("Do you have a good habit of diet(Y/N)?");
    scanf("%c", &diet);

    if (sex == 'F') {
        result = (faHeight * 0.923 + moHeight) / 2.0;
    }
    else {
        result = (faHeight + moHeight) * 0.54;
    }

    if (sports == 'Y') {
        result *= 0.02;
    }
    else if (diet == 'Y') {
        result *= 0.015;
    }
    int result2 = 0;
    result2 = (int)result;
    printf("Your future height will be %d(cm)", result2);


    return 0;
}
*/
/**汉诺塔问题是一个著名的问题，初始模型如图所示。其来源据说是在约19世纪末欧洲的商店中出售一种智力玩具，在一块铜板上有三根杆，最左边的杆自上而下、由小到大顺序串着64个圆盘构成的塔，游戏的目的是将最左边A杆上的圆盘，借助最右边的C杆，全部移动到中间的B杆上，条件是一次仅能移动一个盘，且不允许大盘放在小盘的上面。



**输入格式要求："%d" 提示信息："Please enter the number of discs:"

**输出格式要求："\tTotal:%d\n"    "%2d-(%2d):%c==>%c\n" 

程序运行示例如下： 

Please enter the number of discs: 

Please enter the number of discs: 5 
 1-( 1):a==>b 
 2-( 2):a==>c 
 3-( 1):b==>c 
 4-( 3):a==>b 
 5-( 1):c==>a 
 6-( 2):c==>b 
 7-( 1):a==>b 
 8-( 4):a==>c 
 9-( 1):b==>c 
10-( 2):b==>a 
11-( 1):c==>a 
12-( 3):b==>c 
13-( 1):a==>b 
14-( 2):a==>c 
15-( 1):b==>c 
16-( 5):a==>b 
17-( 1):c==>a 
18-( 2):c==>b 
19-( 1):a==>b 
20-( 3):c==>a 
21-( 1):b==>c 
22-( 2):b==>a 
23-( 1):c==>a 
24-( 4):c==>b 
25-( 1):a==>b 
26-( 2):a==>c 
27-( 1):b==>c 
28-( 3):a==>b 
29-( 1):c==>a 
30-( 2):c==>b 
31-( 1):a==>b 
    Total:31*/
//递归我发现了移动的数字的规律。核心是把前N-1个盘子看做一个盘子。最小组合为三个。121.然后挪动第三个作为底座，再次挪动121，所以是1213121，这样一直到4，到5.最后的最佳步数是2的N次方-1，因为它是，3+1+（3）+1+（3+1+（3）），每到2的N次方-1，会完成一个小组盒子的顺序。
//#include<stdio.h>
//#include<stdlib.h>
//#include<math.h>
//
//void honoi(int discs, char from, char to, char aux, int* count) {
//   
//    if (discs == 1) {
//        printf("%2d-(%2d):%c==>%c\n", *count, 1,from,to);
//        (*count)++;
//        return;
//    }
//	honoi(discs - 1, from, aux, to, count);
//    printf("%2d-(%2d):%c==>%c\n", *count, discs, from, to);
//    (*count)++;
//	honoi(discs - 1, aux, to, from, count);
//   
//}
//int main() {
//    printf("Please enter the number of discs:");
//    int discs = 0;
//    scanf_s("%d", &discs);
//   
//    int count = 1;
//    honoi(discs, 'a', 'b', 'c', &count);
//    printf("\tTotal:%d\n", count-1);
//    
//    return 0;
//}
//注意C89要重复初始化！
//#include<stdio.h>
//void judge(int n) {
//    n = n * 10;
//    int i = 0, j = 0, k = 0;
//    for (i = 0; i < n / 5+1; i++) {
//        for(j=0;j<n/2+1;j++){
//            for(k=0;k<n+1;k++){
//                if((i*5+j*2+k*1)==n){
//                    printf("一角：%d，二角：%d，五角：%d\n", k, j, i);
//                }
//            }
//		}
//    }
//}
//int main() {
//	printf("plese enter a number:(一元两元五元十元）");
//    int n = 0;
//	scanf_s("%d", &n);
//	judge(n);
//
//
//
//    return 0;
//}
//
//
//取火柴小游戏
/*
#include<stdio.h>
void init(int  current , int flag) {
    //可以初始化来重启游戏，或者改变火柴数量，移动限制等等，但其实这里没必要
    current = 23, flag = 0;
    printf("这里是23根火柴游戏！！\n");
    printf("注意：最大移动火柴数目为三根\n");
    printf("请输入您移动的火柴数目：\n");
}

void judge(int flag) {
    if (flag % 2 == 0) {
        printf("恭喜您！您赢了！ \n");
    }
    else {
        printf("对不起！您输了！\n");
    }
}
    void computer_move(int *current, int* flag) {
        //将剩余的火柴根数对3求余后再加1来作为计算机每次取走的火柴数。
        //如果计算机打算移走的火柴数等于剩下的火柴数，则将计算机打算移走的火柴数减1。
        //但是计算机不可以不取，
        //剩下的火柴数为1时，必须取走1根火柴。
        int computer_num = ((*current) % 3) + 1;
        if (computer_num == (*current)) {
            computer_num--;
        }
        if ((*current) == 1) {
            computer_num = 1;
        }
        (*current) = (*current) - computer_num;
        printf("计算机移动的火柴数目为：%d\n", computer_num);
        printf("计算机移动后剩下的火柴数目为：%d\n", (*current));
        (*flag)++;
    }



    void player_move(int *current, int *flag) {
        int player_num = 0;
        scanf_s(" %d", &player_num);
        if (player_num > 3 || player_num < 1) {
            printf("对不起！您输入了不合适的数目，请点击任意键重新输入！\n");
			player_move(current, flag);
        }
        if ((*current) == 1) {
            player_num = 1;
        }
        (*current) = (*current) - player_num;
        printf("您移动的火柴数目为：%d\n", player_num);
        printf("您移动后剩下的火柴数目为：%d\n", *current);
        (*flag)++;
    }


    int main() {

        
        int  current = 23, flag = 0;
        init(current,flag);
        while (1) {
            player_move(&current,&flag);
            if (current == 0) {
                judge(flag);
                return 0;
            }
            computer_move(&current,&flag);
            if (current == 0) {
                judge(flag);
                return 0;
            }
        }
        return 0;
    }*/
/*
#include<stdio.h>
int Length(char p[]) {
    int i = 0;
    while (p[i] != '\0') {
        i++;
    }
    return i;
}
int IsAllDigit(char p[]) {
    if (p == NULL || *p == '\0') {
        return 0;
    }

    for (int i = 0; p[i] != '\0'; i++) {
        if (p[i] < '0' || p[i] > '9') {
            return 0;
        }
    }
    return 1;
}

int main() {
    printf("Please input a string:");
    char str[50];
    scanf_s("%s", str, (unsigned)sizeof(str));
    int len = Length(str);
    printf("The string has %d characters.\n", len);
    if (IsAllDigit(str)) {
        printf("The string is digit string.");
    }
    else {
        printf("The string is not digit string.");
    }
    return 0;
}*/
/*输入格式和提示信息：
"\n输入学生%4d的5个成绩：\n"
"%f"
输出格式和提示信息：
"\n 序号     课程1     2     3     4     5     平均分\n"
"\n NO%2d"
"%8.2f"
"\n课平均"
"%8.2f"
"\n\n最高分%8.2f是%d号学生的第%d门课\n"
"\n方差 %8.2f"                                 */
/*
#include<stdio.h>
#include <math.h>

typedef struct {
    float score[5];
    int  studentid;
    float student_ave;
}student;
student students[2];

void countave(student* stu) {
    float sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += stu->score[i];
    }
    stu->student_ave = sum / 5.0;

}

float calculate_variance(float ave1, float ave2) {
    float sum = ave1 + ave2;
    float sum_square = ave1 * ave1 + ave2 * ave2;

    float variance = (sum_square / 2) - (sum / 2) * (sum / 2);

    return variance;
}

int main() {

    float max = 0;
    int maxaux = 0, maxid = 0;
    for (int i = 0; i < 2; i++) {
        printf("\n输入学生%4d的5个成绩：\n", i);
        students[i].studentid = i + 1;
        for (int j = 0; j < 5; j++) {
            scanf_s("%f", &students[i].score[j]);
            if (max < students[i].score[j]) {
                max = students[i].score[j];
                maxid = i;
                maxaux = j;
            }
        }

        countave(&students[i]);
    }
    printf("\n 序号     课程1     2     3     4     5     平均分\n");
    for (int i = 0; i < 2; i++) {
        printf("\n NO%2d", students[i].studentid);
        for (int j = 0; j < 5; j++) {
            printf("%8.2f", students[i].score[j]);
        }
        printf("%8.2f", students[i].student_ave);
    }

    printf("\n课平均");
    for (int i = 0; i < 5; i++) {
        printf("%8.2f", (students[0].score[i] + students[1].score[i]) / 2.0);
    }


    printf("\n\n最高分%8.2f是%d号学生的第%d门课\n", max, maxid + 1, maxaux + 1);

    printf("\n方差 %8.2f", calculate_variance(students[0].student_ave, students[1].student_ave));
    return 0;
}*/
/*
#include<stdio.h>
void swap(int* p1, int* p2) {
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;

}
int main() {
    printf("please input 3 number x,y,z");
    int arr[3];
    for(int i = 0; i < 3; i++){
        scanf_s("%d", &arr[i]);
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<2-i;j++){
            if (j + 1 != 3&& arr[j] > arr[j + 1]) {
                swap(&arr[j],&arr[j+1]);
            }
        }
	}

    printf("the sorted numbers are:%d,%d,%d\n", arr[0], arr[1],arr[2]);
    return 0;
}
*/
/*
#include<stdio.h>
void init(int  current)
{
    //可以初始化来重启游戏，或者改变火柴数量，移动限制等等，但其实这里没必要//
    current = 21;
    printf("Game begin:\n");
}


void computer_move(int* current)
{
    int computer_num;

    // 必胜策略：让对手面对5的倍数
    // 关键数字：1, 6, 11, 16, 21
    if (*current == 1)
    {
        computer_num = 1;  // 最后一根，必输
        return;
    }
    else
    {
        // 计算需要取多少根才能让剩余火柴数是5的倍数+1
        int target = (*current - 1) % 5;
        if (target == 0)
        {
            // 如果当前已经是必胜位置，取1根保持优势
            computer_num = 1;
        }
        else
        {
            computer_num = target;
        }

        // 确保不会取超过剩余火柴数
        if (computer_num > *current)
        {
            computer_num = (*current) - 1;
        }

    }

    (*current) = (*current) - computer_num;
    printf("Computer take %d sticks.\n", computer_num);
    printf(" %d sticks left in the pile.\n", (*current));
  
}

void player_move(int* current)
{
    int player_num = 0;
    int max_take = (*current > 4) ? 4 : *current;
    if ((*current) == 1) {
		(*current) = (*current) - 1;
        return;
    }
    while (1)
    {
        printf("How many sticks do you wish to take (1~%d)?", max_take);
        scanf_s("%d", &player_num);

        if (player_num >= 1 && player_num <= max_take)
        {
            break;  // 输入合法，退出循环
        }
        else
        {
            printf("How many sticks do you wish to take (1~%d)?", max_take);
            scanf_s(" %d", &player_num);
        }

    }

    (*current) = (*current) - player_num;
    printf(" %d sticks left in the pile.\n", *current);
    
}

int main()
{
    int current = 21, flag = 0;
    init(current);

    while (1)
    {
        player_move(&current);
        if (current == 0)
        {
            printf(" You have taken the last sticks.\n");
            printf(" ***You lose!\nGame Over.\n");
            return 0;
        }

        computer_move(&current);
        if (current == 0)
        {
            printf(" You have taken the last sticks.\n");
            printf(" ***You lose!\nGame Over.\n");
            return 0;
        }
    }
    return 0;
}
*/
/*
#include<stdio.h>
int judge_year(int year)
{
    if ((year % 4 == 0 && year % 4 != 0) || (year % 400 == 0))
    {
        return 1;
    }
    else
    {
        return 0;
    }

}
int sum_year(int year)
{
    int sum = 0;
    for (int i = 1990; i < year; i++)
    {
        if (judge_year(i))
        {
            sum += 366;
        }
        else
        {
            sum += 365;
        }
    }

    return sum;
}
int sum_month(int month, int judge)
{
    int sum = 0;
    int arr0[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    int arr1[12] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    if (judge == 1)
    {
        for (int i = 0; i < month + 1; i++)
        {
            sum += arr1[i];
        }
    }
    else
    {
        for (int i = 0; i < month + 1; i++)
        {
            sum += arr0[i];
        }
    }
    return sum;
}
int judge_monthmax(int month, int judge)
{
    int arr0[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    int arr1[12] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 }; //run
    if (judge == 1)
    {
        return arr1[month];
    }
    else
    {
        return arr0[month];
    }
}
int main()
{
    int year, month, day;

    while (1)
    {
        scanf_s("%4d-%2d-%2d", &year, &month, &day);
        if (month < 1 || month > 12 || day < 1 || day > judge_monthmax(month, judge_year(year)))
        {
            printf("Invalid input.");
            return 0;
        }

        int year_data = sum_year(year);
        int month_data = sum_month(month, judge_year(year));
        int sum = year_data + month_data + day;
        if ((sum % 5) >= 0 && (sum % 5) <= 3)
        {
            printf("He is working.");
        }
        else
        {
            printf("He is having a rest.");
        }

        return 0;
    }
}
*/
//下面程序用于从键盘输入3 * 4矩阵的元素，通过调用函数FindMax，
// 求出这3 * 4矩阵元素中的最大值及其所在行列位置，然后输出这个最大值及其所在行列位置。
// （找出其中的4处错误，并改正之）
/*
#include <stdio.h>
int FindMax(int x[3][4], int* pRow, int* pCol);
int main()
{
    int a[3][4], max, i, j, row, col;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            scanf_s("%d", &a[i][j]);
        }
    }
    max = FindMax(a, &row, &col);
    printf("max=%d,row=%d,col=%d\n", max, row, col);
}
int FindMax(int x[3][4], int* pRow, int* pCol)
{
    int max, i, j;
    max = x[0][0];
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            if (x[i][j] > max)
            {
                max = x[i][j];
                *pRow = i+1;
                *pCol = j+1;
            }
        }
    }
    return max;
}
*/
/*
#include <stdio.h>
unsigned long Factorial(unsigned int n)
{
    if (n < 0)
    {
        printf("data error!");
        return 0;
    }
    else if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * Factorial(n - 1);
    }
}
int main()
{
    int n;
    unsigned long x;
    printf("Input n:\n");
    scanf_s("%d", &n);
    x = Factorial(n);
    printf("%d!=%ld\n", n, x);
}
*/
/*
#include<stdio.h>
#include<string.h>

int main() {
    char temp[20];
    char arr[5][20];
    printf("Input five countries' names:\n");
    for (int i = 0; i < 5; i++) {
        fgets(arr[i],20,stdin);
    }
   
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j<4-i; j++) {
            if (strcmp(arr[i], arr[j]) >0) {
                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[i]);
                strcpy(arr[i], temp);
            }
        }
    }

    printf("The minimum is:%s\n", arr[0]);
    return 0;
}
*/


#include <stdio.h>
#define n=10
int FindMax(int num[], int n, int* pMaxPos);
int main()
{
    int num[n] = { 0 };
    int maxValue, maxPos, minValue, minPos, i;
    printf("Input %d numbers:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }
    maxValue = FindMax(num, n, &maxPos);
    printf("Max=%d, Position=%d\n", maxValue, maxPos);
    return 0;
}
int FindMax(int num[], int n, int* pMaxPos)
{
    int i, max = num[0];
    for (i = 1; i < n; i++)
    {
        if (num[i] > max)
        {
            max = num[i];
            *pMaxPos = i;
        }
    }
    return max;
}