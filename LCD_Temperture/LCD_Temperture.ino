#include<DHT.h>     //DHT.h 라이브러리 추가
#include <LiquidCrystal_I2C.h>
DHT dht(2, DHT11); //DHT 설정 dht(핀, DHT종류)
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  Serial.begin(9600); //시리얼모니터 시작
  lcd.begin();
}

void loop() {
  int tem = dht.readTemperature();  //온도 값 정수형 변수 tem에 저장
  int hum = dht.readHumidity();     //습도 값 정수형 변수 hum에 저장
  if(()>0){
    lcd.setCursor(0,0);
    lcd.print("Temper : ");
    lcd.print(tem);
    lcd.print("C");  
    lcd.setCursor(0,1);
    lcd.print("Humidity : ");
    lcd.print(hum);
    lcd.print("%");  
    delay(10000);
  }
  else{
    lcd.setCursor(2,0);
    lcd.print("none value");
    delay(3000);
    }
 /* Serial.print("Temperature :");    //Temperature : 글자 출력
  Serial.print(tem);                //측정된 온도 값 출력
  Serial.print("C ");               //온도C로 표현
  Serial.print("Humidity : ");
  Serial.print(hum);
  Serial.println("% ");             //온도와 동일*/
}
