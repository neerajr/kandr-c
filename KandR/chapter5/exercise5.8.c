nclude<stdio.h>
main()
{
	int ch,year,month,day,yearday;
	printf("1 : To day of the year\n2 : to month and day\nEnter your choice\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1: printf("Enter the year\n");
			scanf("%d",&year);
			printf("Enter the month\n");
			scanf("%d",&month);
			printf("Enter day\n");
			scanf("%d",&day);
			printf("Day is %d\n",day_of_year(year,month,day));
			break;
		case 2: printf("Enter the year\n");
			scanf("%d",&year);
			printf("Enter the day\n");
			scanf("%d",&yearday);
			month_day(year,yearday,&month,&day);
			printf("%d: month  %d: day\n",month,day);
			break;
	}
			
}

static char daytab[2][13] = {
	{0,31,28,31,30,31,30,31,31,30,31,30,31},
	{0,31,29,31,30,31,30,31,31,30,31,30,31}
};

int day_of_year(int year, int month, int day)
{
	int i, leap;
	leap = year%4 == 0 && year%100 != 0 || year%400 == 0;
	if(month <1 || month >12)
		return -1;
	if(day<1 || day > daytab[leap][month])
		return -1;
	for(i = 1; i < month; i++)
		day += daytab[leap][i];
	return day;
}

void month_day(int year, int yearday, int *pmonth, int *pday)
{
	int i, leap;
	if(year < 1){
		*pmonth = -1;
		*pday = -1;
		return;
	}
	leap = year%4 == 0 && year%100 != 0 || year%400 == 0;
	for(i = 1; i < 12 && yearday > daytab[leap][i]; i++)
		yearday -= daytab[leap][i];
	if(i >12 && yearday > daytab[leap][12]){
		*pmonth = -1;
		*pday = -1;
	}
	else {
		*pmonth = i;
		*pday = yearday;
	}
}


