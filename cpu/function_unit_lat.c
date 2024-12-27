#include "FreeRTOS.h"
#include "task.h"

extern void intadd(void);
extern void intsub(void);
extern void intmul(void);
extern void vaddf32(void);
extern void vsubf32(void);
extern void vmulf32(void);
extern void vdivf32(void);
extern void vaddf64(void);
extern void vsubf64(void);
extern void vmulf64(void);
extern void vdivf64(void);

extern void intadd_dep(void);
extern void intsub_dep(void);
extern void intmul_dep(void);
extern void vaddf32_dep(void);
extern void vsubf32_dep(void);
extern void vmulf32_dep(void);
extern void vdivf32_dep(void);
extern void vaddf64_dep(void);
extern void vsubf64_dep(void);
extern void vmulf64_dep(void);
extern void vdivf64_dep(void);

#define TASK_PRIO 1                   /* ÈÎÎñÓÅÏÈ¼¶ */
#define STK_SIZE  128                 /* ÈÎÎñ¶ÑÕ»´óÐ¡ */
TaskHandle_t            Task_Handler_Instlatency;  /* ÈÎÎñ¾ä±ú */

typedef void (*TestFunc)(void);       /* 定义函数指针类型 */
/* 测试函数数组 */
TestFunc test_functions[] = {
    intadd, intsub, intmul,
    vaddf32, vsubf32, vmulf32, vdivf32,
    vaddf64, vsubf64, vmulf64, vdivf64,
    intadd_dep, intsub_dep, intmul_dep,
    vaddf32_dep, vsubf32_dep, vmulf32_dep, vdivf32_dep,
    vaddf64_dep, vsubf64_dep, vmulf64_dep, vdivf64_dep
};

/* 测试函数名称数组 */
const char* function_names[] = {
    "intadd", "intsub", "intmul",
    "vaddf32", "vsubf32", "vmulf32", "vdivf32",
    "vaddf64", "vsubf64", "vmulf64", "vdivf64",
    "intadd_dep", "intsub_dep", "intmul_dep",
    "vaddf32_dep", "vsubf32_dep", "vmulf32_dep", "vdivf32_dep",
    "vaddf64_dep", "vsubf64_dep", "vmulf64_dep", "vdivf64_dep"
};

/* 定义任务函数 */
void get_latency(void *pvParameters);

void freertos_task_intAdd(void){
	xTaskCreate((TaskFunction_t )get_latency,           
                (const char*    )"get_latency",          
                (uint16_t       )STK_SIZE,        
                (void*          )NULL,                 
                (UBaseType_t    )TASK_PRIO,      
                (TaskHandle_t*  )&Task_Handler_Instlatency);  
    vTaskStartScheduler();
}

void get_latency(void *pvParameters){
	(void)pvParameters;
	
	static TickType_t start_time_val, stop_time_val;

    long long R = 10000000;   /* 循环次数 */
    double timePerAccess;

    for (int i = 0; i < sizeof(test_functions) / sizeof(test_functions[0]); i++) {
        const char* func_name = function_names[i];
        
        /* 测量时间 */
        start_time_val = xTaskGetTickCount();
        for (long long round = 0; round < R; round++) {
            test_functions[i](); 
        }
        stop_time_val = xTaskGetTickCount();
        
        /* 计算平均延迟 */
        TickType_t elapsed = (stop_time_val - start_time_val);
        timePerAccess = (double)elapsed / (R * 256) * 1000000;  /* 纳秒单位 */
        
        /* 打印结果 */
        printf("Avg time per %s is %f ns\n", func_name, timePerAccess);
    }

}
