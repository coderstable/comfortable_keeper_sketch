#include<Servo.h>

Servo servo1;

void setup() {
    servo1.attach(4);
}

void loop() {
    servo1.write(0);
    delay(1000);
    servo1.write(90); //モーターを90度回転させる
    //servo1.write(180); //モーターを180度回転させる
    delay(1000);
}
