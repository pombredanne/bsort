#ifndef BSORT_H
#define BSORT_H

#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/mman.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <time.h>
#include <unistd.h>


#define SWITCH_TO_SHELL 20

#define BSORT_FAILURE -1
#define BSORT_SUCCESS 0


int verbosity;


struct sort {
  int fd;
  off_t size;
  void *buffer;
};

#ifdef __cplusplus
extern "C" {
#endif

// Calls bsort
int call_bsort
	(char *p_file_name,
	 int p_key_size,
	 int p_record_size,
	 int p_stack_size,
	 int p_cut_off,
	 char p_file_not_binary);


#ifdef __cplusplus
}
#endif

#endif
