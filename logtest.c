/*************************************************************************
	> File Name: logtest.c
	> Author: likeyi
	> Mail: likeyi@sina.com 
	> Created Time: Wed 15 Jul 2015 07:33:24 PM CST
 ************************************************************************/

#include <stdio.h>
#include <pthread.h>
#include "llog.h"


void * logit(void *arg)
{
    int index = *(int *)arg;
    int number = 1;
    while(1)
    {
        LOG_ERROR("[Index]:%d,number:%d",index,number);
        number++;
    }
}

int main(int argc, char ** argv)
{
    llog_init(LL_NOTICE,stdout);
    pthread_t tid;
    int i = 1;
    int arg[100];
    for(i = 0; i < 10; i++)
    {
        arg[i] = i;
        pthread_create(&tid,NULL,logit,&arg[i]);
    }
    while(1)
    {
        sleep(5);
    }
}
