/*
 * proj1.h
 *
 *  Created on: Apr 5, 2014
 *      Author: daniel
 */

#ifndef PROJ1_H_
#define PROJ1_H_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>
#include <string.h>
#include <signal.h>
#include <time.h>
#include <sys/wait.h>


#define __USE_GNU
#include <ucontext.h>

#define DEBUG 1
#define READ 0
#define WRITE 1
#define MAX_SIZE 2048
#define TIME_BEFORE_LAUNCH 3


void intHandler(int sign);

void sigusr1Handler();

void monitorExistence(char *filenames[], __pid_t *pgrid, int files_nr);

void monitorWord(char *word, char *filename);

void killAll(__pid_t *pgids, int *size, __pid_t file_checker);

void waitForChildren(__pid_t *pgids, int status, size_t size);

void whoAmI(char *filename, char *whatIDo);

void sig_handler(int signo);

void doNotFollow(__pid_t pgrid, __pid_t *pgrids, int size);

int checkFileExistence(char *filename);

void killOneProcessGroup(__pid_t pgid);

#endif /* PROJ1_H_ */
