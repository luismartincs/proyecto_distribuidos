#define INS_SIZE 16
#define LED 4
#define DELAY 200

int incomingByte = 0; 
void setup() {
 Serial.begin(9600);
 
 pinMode(LED, OUTPUT);

}

void loop() {
  
  if (Serial.available() > 0) {
      incomingByte = Serial.read();
      parpadea(incomingByte);
  }

}


/*
* Parpadear LED
*/

void parpadea(int maximo){
  
  int inicio = 0;
  
  while(inicio < maximo){
    digitalWrite(LED,HIGH);
    delay(DELAY);
    digitalWrite(LED,LOW);
    delay(DELAY);
    inicio++;
  }
  
}
