/*
 * talking voltmeter
 * Created: 24/04/2020
 *  Author: moty22.co.uk
*/


void setup() {
  Serial.begin(9600);

  pinMode(2, INPUT_PULLUP); //switch
  pinMode(A0, INPUT);     //analogue input
}

void loop() {
  unsigned char  sw=1, voltL, voltH;
  int volt;

  volt=analogRead(A0);
  if(digitalRead(2)){sw=1;}else{sw=0;}
  
  Serial.write(sw);
  Serial.write(lowByte(volt));
  Serial.write(highByte(volt));
delay(500);
}
