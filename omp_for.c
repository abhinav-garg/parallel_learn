#include <stdio.h>	// printf, scanf
#include <stdlib.h>	// rand, malloc
#include <time.h>	// Timing
#include <omp.h>

int main()	{
	#pragma omp parallel for
	for (int i = 0; i < 10; i++)	{
		printf("iter = %d, proc_id = %d, \n", i, omp_get_thread_num());
	}
}