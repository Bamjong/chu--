#include <stdio.h>
#include <string.h>
#include <stdlib.h>


struct introduce
{
	char name[10];
	int age;
	double height;

};

int main()
{
	struct introduce jong;

	strcpy(jong.name, "고범종");
	jong.age = 25;
	jong.height = 190.3; // 진짜임 ^^

	printf("%s\n", jong.name);
	printf("%d\n", jong.age);
	printf("%.1lf\n\n", jong.height);

	struct introduce jongg;

	jongg = { "고범종",25,190.2 };

	printf("%s\n", jongg.name);
	printf("%d\n", jongg.age);
	printf("%.1lf\n\n", jongg.height);

	struct introduce jun;

	strcpy(jun.name, "고범준");
	jun.age = 22;
	jun.height = 180.6;

	printf("%s\n", jun.name);
	printf("%d\n", jun.age);
	printf("%.1lf\n\n", jun.height);


	return 0;
}