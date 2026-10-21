/*
Function: main()
Description: Blink Green LED 1 time
Note: Hardware indepdent
Returns: Contains infinite loop
*/

void
main(void)
{
  while (1)
    {
      toggleLed(LED_GREEN);  // Change State of LED
      delay(500);            // Pause for 500 miliseconds
    }
}
