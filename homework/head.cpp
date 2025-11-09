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









