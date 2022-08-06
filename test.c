#include<stdio.h>
int main()//主函数-程序的入口-main函数有且只有一个
{
	//这里完成任务
	//在屏幕上输出HelloWorld
	//函数-print function - printf - 打印函数
	//库函数-C语言本身提供给我使用的函数
	//别人的东西-要打招呼
	//#include
	// 包含一个叫stdio.h的文件
	// std-标准 standard input output
	// 
	//#include<stdio.h>
	printf("HelloWorid! 新海诚\n");
	return  0;
}

//int是整型的意思
//main前面的int表示main函数调用返回一个整型值
//int main()
//{
//	return 0;//返回 0
//}
// -------------------
//这种写法是过时的写法
//void main()
// ---------------------
//char-字符数据类型-ABCD
//int main()
//{
	//char ch = 'A';//内存
	//printf("%c\n", ch);//%c -- 打印字符格式的数据
//		return 0;
//}
// ----------------
//int-整型-空间中等
//int main()
//{
//	int age = 20;
//		printf("%d\n", age);//%d -- 打印整型十进制数据
//		return 0;
// }
// ----------------
//short-短整型-空间小
//long-长整型-空间大
//long long-更长的整型
//float-单精度浮点型-小数点
//int main()
//}
//  float weight = 90.5;
//  printf("%f\n ", weight);;
//  return 0;
//}
//double-双精度浮点型-小数点后更多位
//int main()
//{
//	double height = 1.74;
//	printf("%lf\n", height);
//	return 0;
//}

//--------------
//%d-打印整型
//%c-打印字符
//%f-打印浮点数字-打印小数
//%p-以地址的形式打印
//%x-打印16进制数字
//%o...
// -----------------
//int main()
//{
//  printf("%d\n", sizeof(char));//=1
//	printf("%d\n", sizeof(short));//=2
//	printf("%d\n", sizeof(int));//=4
//	printf("%d\n", sizeof(long));//=4
//	printf("%d\n", sizeof(long long));//=8
//	printf("%d\n", sizeof(float));//=4
//	printf("%d\n", sizeof(double));//=8
//	return 0;
//}