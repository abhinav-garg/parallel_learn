#include <stdio.h>	// printf, scanf
#include <stdlib.h>	// rand, malloc
#include <time.h>	// Timing
#include <omp.h>

int main()	{
	#pragma omp parallel
	{
		#pragma omp sections
		{
			#pragma omp section
			{
				printf("id = %d, \n", omp_get_thread_num());
			}
			#pragma omp section
			{
				printf("id = %d, \n", omp_get_thread_num());
			}
			#pragma omp section
			{
				printf("id = %d, \n", omp_get_thread_num());
			}
			#pragma omp section
			{
				printf("id = %d, \n", omp_get_thread_num());
			}
		}
	}
}