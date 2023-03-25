
//signal 是一个函数声明
//signal 的函数参数有两个，第一个是int，第二个是函数指针，该函数指针指向的函数的参数是int，返回值是void
//signal 的函数的返回类型也是一个指针函数，该指针函数指向的函数的参数是int，返回值是void

//void (*     signal(int, void(*)(int))    )(int);
//
////
////简化
//typedef void(*ifuc)(int);
//ifuc signal(int, ifuc);
//typedef unsigned int uint;



//int Add(int x, int y) {
//	return x + y;
//}
//
//int main() {
//
//	int a = 10;
//	int b = 20;
//	int (*pm)(int, int) = Add;  //指向函数的指针--用来存放函数的地址的
//	printf("%d\n", (pm)(3, 5));
//	printf("%d\n", (Add)(3, 5));
//	printf("%d\n", (*pm)(3, 5));  //这五种都是可以的
//	/*printf("%d\n", (**pm)(3, 5));
//	printf("%d\n", (***pm)(3, 5));*/
//	return 0;
//}

int Add(int x, int y) {
	return x + y;
}
int Mul(int x, int y) {
	return x * y;
}
int Sub(int x, int y) {
	return x - y;
}
int Div(int x, int y) {
	return x / y;
}

//int main() {
//	//需要一个可以存放四个函数的地址的数组---函数指针数组
//	int(*parr[4])(int, int) = { Add,Sub,Mul,Div };
//	int i = 0;
//	for (i = 0; i < 4;i++) {
//		printf("%d\n", parr[i](3, 3));
//	}
//	return 0;
//}

char* MyStrcpy(char* dest, const char* src) {

}

int main()
{
	char* (*p)(char*, const char*) = MyStrcpy;
	char* (*parr[4])(char*, const char*) = { MyStrcpy,MyStrcpy,MyStrcpy,MyStrcpy };
	return 0;
}
