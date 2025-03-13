#include <stdio.h>

int main() {
	printf("欢迎使用加减计算器\n");
	int a, b, sum;
	char c;
	// 输入 a
	printf("请输入你要加减的数 a：\n");
	scanf("%d", &a);
	// 输入 b
	printf("请输入你要加减的数 b：\n");
	scanf("%d", &b);
	// 输入加或减
	printf("请输入 + 或 - ：\n");
	scanf(" %c", &c);  // 注意前面的空格，防止换行符影响
	// 进行加减运算
	if (c == '+') {
		sum = a + b;
		printf("结果为：%d\n", sum);
	} else if (c == '-') {
		sum = a - b;
		printf("结果为：%d\n", sum);
	} else {
		printf("输入错误！请输入 + 或 - \n");
	}
	return 0;
}

