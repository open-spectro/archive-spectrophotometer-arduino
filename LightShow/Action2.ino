#define THR_ACTION2 1

NIL_WORKING_AREA(waThreadAction2, 0);
NIL_THREAD(ThreadAction2, arg) {

  int action2Step=0;

  pinMode(RED1, OUTPUT);   
  pinMode(GREEN1, OUTPUT);  
  pinMode(BLUE1, OUTPUT); 
  pinMode(OUT4, OUTPUT);

  while (TRUE) {

    for (byte i=0; i<255; i++) {
      analogWrite(RED1, i);
      analogWrite(OUT4, 255-i);
      nilThdSleepMilliseconds(1);
    }

    nilThdSleepMilliseconds(1000);

    for (byte i=0; i<255; i++) {
      analogWrite(GREEN1, i);
      analogWrite(RED1, 255-i);
      nilThdSleepMilliseconds(1);
    }

    nilThdSleepMilliseconds(1000);

    for (byte i=0; i<255; i++) {
      analogWrite(BLUE1, i);
      analogWrite(GREEN1, 255-i);
      nilThdSleepMilliseconds(1);
    }

    nilThdSleepMilliseconds(1000);


    for (byte i=0; i<255; i++) {
      analogWrite(OUT4, i);
      analogWrite(BLUE1, 255-i);
      nilThdSleepMilliseconds(1);
    }

   nilThdSleepMilliseconds(3000);

    action2Step++;
    setParameter(PARAM_ACTION2, action2Step);
    nilThdSleepMilliseconds(40);
  }




}

















