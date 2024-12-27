#include "FreeRTOS.h"
#include "task.h"

#define TASK_PRIO 1                   /* ÈÎÎñÓÅÏÈ¼¶ */
#define STK_SIZE  128                 /* ÈÎÎñ¶ÑÕ»´óÐ¡ */
TaskHandle_t            Task_Handler;  /* ÈÎÎñ¾ä±ú */
int is_compact(int m0, int S, int N);
void get_hitLatency(void *pvParameters);


void freertos_task_hitLatncy(void){
	xTaskCreate((TaskFunction_t )get_hitLatency,            /* ÈÎÎñº¯Êý */
                (const char*    )"hit_latency",          /* ÈÎÎñÃû³Æ */
                (uint16_t       )STK_SIZE,        /* ÈÎÎñ¶ÑÕ»´óÐ¡ */
                (void*          )NULL,                  /* ´«Èë¸øÈÎÎñº¯ÊýµÄ²ÎÊý */
                (UBaseType_t    )TASK_PRIO,       /* ÈÎÎñÓÅÏÈ¼¶ */
                (TaskHandle_t*  )&Task_Handler);   /* ÈÎÎñ¾ä±ú */
    vTaskStartScheduler();
}

void get_hitLatency(void *pvParameters){
	(void)pvParameters;
	is_compact(0, 1, 1);
	
	is_compact(0, 1, 1);
	
	vTaskDelete(Task_Handler);
}


int is_compact(int m0, int S, int N){
	void* array[N];
	for(int i = m0; i < N; i += S){
       array[i] = &(array[i + S - 1]);
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
	
	double timePerAccess = (double)elapsed / (Round * 256) * 1000000;
	
	printf("avg time per access is %f\n", timePerAccess);
	
	printf("", p);
	return 1;
}
