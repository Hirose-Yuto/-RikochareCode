void setup(){
 pinMode(11,OUTPUT);
 pinMode(12,OUTPUT);
 pinMode(7,OUTPUT);
 pinMode(8,OUTPUT);
 Serial.begin(9600);
}
void loop(){
     analogWrite(3,200);
//    モーターの回転速度を中間にする
//    analogWrite(PIN_VREF,125);
//    analogWrite(PIN_VREF2,125);
   int ans1 ;
   ans1=analogRead(0);
   Serial.print(ans1/25);
   Serial.print(", ");
   int ans2 ;
   ans2=analogRead(3);
   Serial.print(ans2/25);
   Serial.println();
//   if (ans1/25 >= 10 && ans2/25 >= 10){
       digitalWrite(11,LOW);
       digitalWrite(12,HIGH);
       digitalWrite(7,LOW);
       digitalWrite(8,HIGH);
  }
   
/*    if (ans1/25 < 24 && ans2/25 >= 24){
        digitalWrite(11,HIGH);
        digitalWrite(12,HIGH);
        digitalWrite(7,HIGH);
        digitalWrite(8,HIGH);

        digitalWrite(12,HIGH);
        digitalWrite(11,HIGH);
        digitalWrite(8,LOW);
        digitalWrite(7,HIGH);
    }

    if (ans1/25 < 24 && ans2/25 < 24){
        digitalWrite(11,HIGH);
        digitalWrite(12,HIGH);
        digitalWrite(7, HIGH);
        digitalWrite(8,HIGH);

        digitalWrite(11,LOW);
        digitalWrite(12,HIGH);
        digitalWrite(8, LOW);
        digitalWrite(7,HIGH);
        delay(1500);

        digitalWrite(11, HIGH);
        digitalWrite(12,HIGH);
        digitalWrite(8, LOW);
        digitalWrite(7,HIGH);
        delay(1500);
    }

    if (ans1/25 >= 24 && ans2/25 < 24){
        digitalWrite(11,HIGH);
        digitalWrite(12,HIGH);
        digitalWrite(7,HIGH);
        digitalWrite(8,HIGH);

        digitalWrite(11,LOW);
        digitalWrite(612,HIGH);
        digitalWrite(7,HIGH);
        digitalWrite(8,HIGH);
    }
*/
