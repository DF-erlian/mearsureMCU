#include "FreeRTOS.h"
#include "task.h"

#define CAP_TASK_PRIO 1                   /* ÈÎÎñÓÅÏÈ¼¶ */
#define CAP_STK_SIZE  128                 /* ÈÎÎñ¶ÑÕ»´óÐ¡ */
TaskHandle_t            CAP_Task_Handler;  /* ÈÎÎñ¾ä±ú */
int is_compact_cap(int m0, int S, int N);
void get_capacity(void *pvParameters);

#define BOUND 6 //change by your hardware

void freertos_task_capacity(void){
	xTaskCreate((TaskFunction_t )get_capacity,            /* ÈÎÎñº¯Êý */
                (const char*    )"hit_latency",          /* ÈÎÎñÃû³Æ */
                (uint16_t       )CAP_STK_SIZE,        /* ÈÎÎñ¶ÑÕ»´óÐ¡ */
                (void*          )NULL,                  /* ´«Èë¸øÈÎÎñº¯ÊýµÄ²ÎÊý */
                (UBaseType_t    )CAP_TASK_PRIO,       /* ÈÎÎñÓÅÏÈ¼¶ */
                (TaskHandle_t*  )&CAP_Task_Handler);   /* ÈÎÎñ¾ä±ú */
    vTaskStartScheduler();
}

void get_capacity(void *pvParameters){
	(void)pvParameters;
	int m0 = 0, S = 1, N = 1024;
	
	//while(is_compact_cap(m0, S, N)){
	//	N *= 2;
	//}
	//is_compact_cap(0, 1024, 32);
	
	N = 8192;
	
	while(1){
		S = 2 * S;
		int N_old = N;
		
		int l = 0, r = N_old;
		while(l < r){
			int mid = (l + r) >> 1;
			if(is_compact_cap(m0, S, mid)){
				l = mid + 1;
			}
			else{
				r = mid - 1;
			}
		}
		N = l;
		printf("%d %d %d\n", l, r, N_old);
		if(N == N_old){
			break;
		}
	}
	
	// assoc = N - 1
	// cap = S / 2 * A
	
	printf("N is %d, S is %d\n", N, S);
	
	vTaskDelete(CAP_Task_Handler);
}


int is_compact_cap(int m0, int S, int N){
	void** array = (void**)pvPortMalloc((m0 + N * S) * sizeof(void*));
	
	// void* array[m0 + N * S];
	for(int i = 0; i <= m0 + (N-1) * S; i++){
        array[i] = &array[i];
	}
	for(int i = 0; i < N; i += 1){
			array[m0 + i * S] = &(array[m0 + (i + 1) * S]);
	}
	array[m0 + (N - 1) * S] = &(array[m0]);
	
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
	
	printf("with %d, %d, %d :avg time per access is %f\n", m0, S, N, timePerAccess);
	
	printf("", p);
	vPortFree(array);
	return timePerAccess <= BOUND;
}
