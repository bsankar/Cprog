#include<stdio.h>
#include <unistd.h>
#include<signal.h>

int alarm_stop=0; 
unsigned int alarm_period=30;

void on_alarm(int signal)
{
alarm(alarm_period);
printf("Alarm Recieved");
}

int main()
{
signal(SIGALRM,on_alarm);
alarm(alarm_period);
for(;;)
{
}
}
