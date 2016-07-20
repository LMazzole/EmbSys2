static void prvTask1 (void *pvParameters);        /* Prototypes of the two tasks main() */
static void prvTask2 (void *pvParameters);
static TaskHandle_txTask1 = NULL, xTask2 = NULL;  /* Handles for the created tasks */
void main (void)                                  /* Create two tasks, startRTOS scheduler. */
{
	xTaskCreate (prvTask1, "Task1", 200, NULL, tskIDLE_PRIORITY, &xTask1);
	xTaskCreate (prvTask2, "Task2", 200, NULL, tskIDLE_PRIORITY, &xTask2);
	vTaskStartScheduler();
}
static void prvTask1 (void *pvParameters)         /* First Task */
{
	for(;;)
	{
		/* do something inside the task, do not leave this loop */
	}
}
static void prvTask2 (void *pvParameters)         /* Second Task */
{
	for(;;)
	{
		/* do something inside the task, do not leave this loop */
	}
}