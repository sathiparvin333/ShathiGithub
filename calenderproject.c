
#include<stdio.h>
int getFirstDayOfTheYear(year){
    int day =(year*365 + ((year - 1) /4)- ((year - 1) /100) + ((year-1) /400))% 7;
    return day;
}
int main(){

    char *months[]={"January", "February", "March", "April", "May","June", "July", "August", "September", "October","November", "December"};
    int daysInMonth[]={31,28,31,30,31,30,31,31,30,31,30,31};
    int i, j,totalDays, weekday=0,spaceCounter =0, year;

    printf("Enter your favourite year:\n");
    scanf("%d", &year);
    printf("\n\n*************** Welcome To %d ***************\n\n", year);

    if((year % 4 == 0 && year % 100 != 0) || (year % 400 ==0)){
        daysInMonth[1]= 29;
    }

    weekday = getFirstDayOfTheYear(year);

    for(i =0; i <12; i++){
        printf("\n--------------- %s ---------------\n", months[i]);
        printf("\n\n\n   Sun   Mon   Tue   Wed   Thu   Fri   Sat\n\n");


   for(spaceCounter = 1; spaceCounter <=  weekday; spaceCounter++){
            printf("      ");
   }
// for(j = i; j <= totalDays; j++){
            totalDays = daysInMonth[i];
            for(j = 1; j <= totalDays; j++){
            printf("%6d",j);
            weekday++;
            if(weekday > 6){
                weekday = 0;
                printf("\n");
            }
        }
    }
    return 0;
}
