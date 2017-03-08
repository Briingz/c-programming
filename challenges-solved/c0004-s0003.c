// code c0004
// by @Briingz


#include <stdio.h>
main()
{
	printf("What do you want to find?\n");
	printf("Wanna find : ");
	char input , slash ;float s1 , s2 ,f;
	scanf("%c",&input);
	if (input=='f')
	{
		printf("Inuput s = ");
		scanf("%f",&s1);
		printf("Input S = ");
		scanf("%f",&s2);
		f=((s1*s2)/(s1+s2));
		printf("f = %.1f",f);
	}
	else if (input=='s')
	{
		printf("Inuput f = ");
		scanf("%f",&f);
		printf("Input S = ");
		scanf("%f",&s2);
		s1=((f*s2)/(s2-f));
		printf("s = %.1f",s1);
	}
	else if (input=='S')
	{
		printf("Inuput f = ");
		scanf("%f",&f);
		printf("Input s = ");
		scanf("%f",&s1);
		s2=((f*s1)/(s1-f));
		printf("S = %.1f",s2);

	}
}
