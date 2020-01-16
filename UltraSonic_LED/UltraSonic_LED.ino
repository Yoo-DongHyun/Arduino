#include <HCSR04.h>
int LED1 = 2;
int LED2 = 4;
UltraSonicDistanceSensor distanceSensor(7, 8);  //센서 핀을 미리 입력시켜 줌

void setup () {
    Serial.begin(9600);  // We initialize serial connection so that we could print values from sensor.
    pinMode(LED1, OUTPUT);
    pinMode(LED2, OUTPUT);
}

void loop () {
    // Every 500 miliseconds, do a measurement using the sensor and print the distance in centimeters.
    Serial.println(distanceSensor.measureDistanceCm());
    delay(500);
    int dis = distanceSensor.measureDistanceCm();
    int tm;
    if(dis<=30){
      if(dis >0 && dis <=10) tm =10;
      else if (dis >10 && dis<=20) tm = 200;
      else if (dis > 20 && dis<=30) tm = 400;}
    else tm = 600;
    digitalWrite(LED1, 1);
    digitalWrite(LED2, 0);
    delay(tm);
    digitalWrite(LED1,0);
    digitalWrite(LED2,1);
    delay(tm);

}
