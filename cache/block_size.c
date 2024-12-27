#include "FreeRTOS.h"
#include "task.h"

#define BS_TASK_PRIO 1                   /* ÈÎÎñÓÅÏÈ¼¶ */
#define BS_STK_SIZE  128                 /* ÈÎÎñ¶ÑÕ»´óÐ¡ */
TaskHandle_t            BS_Task_Handler;  /* ÈÎÎñ¾ä±ú */
int is_compact_bs(int m0, int T, int A, int C, int N);
void get_block_size(void *pvParameters);

#define BOUND 6 //change by your hardware

void freertos_task_block_size(void){
	xTaskCreate((TaskFunction_t )get_block_size,            /* ÈÎÎñº¯Êý */
                (const char*    )"hit_latency",          /* ÈÎÎñÃû³Æ */
                (uint16_t       )BS_STK_SIZE,        /* ÈÎÎñ¶ÑÕ»´óÐ¡ */
                (void*          )NULL,                  /* ´«Èë¸øÈÎÎñº¯ÊýµÄ²ÎÊý */
                (UBaseType_t    )BS_TASK_PRIO,       /* ÈÎÎñÓÅÏÈ¼¶ */
                (TaskHandle_t*  )&BS_Task_Handler);   /* ÈÎÎñ¾ä±ú */
    vTaskStartScheduler();
}

void get_block_size(void *pvParameters){
	(void)pvParameters;
	int m0 = 0;
	
	// N = 5, S = 2048
	// A = N - 1 = 4
	// C = S / 2 * A = 4096
	// T = S / 2 = 1024
	const int C = 4096, A = 4, T = 1024;
	
	int theta = 1;
	while(!is_compact_bs(m0, T, A, C + theta, 2)){
		theta = 2 * theta;
	}
	
	printf("theta is %d\n", theta);
	
	vTaskDelete(BS_Task_Handler);
}


int is_compact_bs(int m0, int T, int A, int C, int N){
	void** array = (void**)pvPortMalloc((m0 + A * T + C) * sizeof(void*));
	
	for(int i = 0; i < m0 + A * T + C; i++){
        array[i] = &array[i];
	}
	for(int i = 0; i < N; i += 1){
			for(int j = 0; j < A; j++){
				array[m0 + j * T + i * C] = &(array[m0 + (j + 1) * T+ i * C]); 
			}
	}
	
	// N == 2
	array[m0 + (A-1)*T] = array[m0 + C];
  array[m0 + (A-1)*T + C] = array[m0];
	
	//warm-up
	void *q = array[m0];
	for(int i = 0; i < 10; i++){
			for(int i = 0; i < 2 * N; i++){
					q = *(void **)q;
			}
	}
	
	static TickType_t start_time_val, stop_time_val;
	start_time_val = xTaskGetTickCount();
	long long R = 10000000, Round = R;
	register void* p = array[m0];
	while(--R){
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
		p = *(void **)p;
	}
	stop_time_val = xTaskGetTickCount();
	TickType_t elapsed = (stop_time_val - start_time_val);
	
	double timePerAccess = (double)elapsed * 1000000 / (Round * 256) ;
	
	printf("with m0:%d T:%d A:%d C: %d N:%d, avg time per access is %f\n", m0, T, A, C, N, timePerAccess);
	
	printf("", p);
	vPortFree(array);
	return timePerAccess <= BOUND;
}
