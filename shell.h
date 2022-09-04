#ifndef _SHELL_H_
#define _SHELL_H_

#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <signal.h>
extern char **environ;
extern int dircount;
#define DELIM " \n\t"
