#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	float hight,weight;
	printf("請輸入身高(m)");
	scanf("%f",&hight);
	printf("請輸入體重(kg)");
	scanf("%f",&weight);
	printf("你的BMI值=%f\n",weight/(hight*hight));
	system("PAUSE");
	return 0;
}
