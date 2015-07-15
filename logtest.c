/*************************************************************************
	> File Name: logtest.c
	> Author: likeyi
	> Mail: likeyi@sina.com 
	> Created Time: Wed 15 Jul 2015 07:33:24 PM CST
 ************************************************************************/

#include <stdio.h>
#include "llog.h"

int main(int argc, char ** argv)
{
    llog_init(LL_NOTICE,stdout);
    LOG_ERROR("helloworld");
}
