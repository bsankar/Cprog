#include<stdio.h>
#include <unistd.h>
#include<signal.h>
#include<sys/time.h>
int alarm_stop=0; 
unsigned int alarm_period=30;

struct itimerval it;


void on_alarm(int signal)
{
it.it_value.tv_sec=10;
it.it_value.tv_usec=0;
it.it_interval.tv_sec=10;
it.it_interval.tv_usec=0;

setitimer(ITIMER_REAL,&it,NULL);
printf("Alarm Recieved");
}

int main()
{
signal(SIGALRM,on_alarm);
it.it_value.tv_sec=10;
it.it_value.tv_usec=0;
it.it_interval.tv_sec=10;
it.it_interval.tv_usec=0;


setitimer(ITIMER_REAL,&it,NULL);
for(;;)
{
}
}
