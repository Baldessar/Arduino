
bool ligado = true;
int pinos[4] = {8,9,10,11};


float minimo = 85;
float maximo = 1020;
float valorLDR;
float luminosidade;

void setup() {
 
 
 for(int i = 0; i < 4; i++){
    pinMode(pinos[i],OUTPUT);
  }
 Serial.begin(9600);
 pinMode(A0,INPUT);
}


void loop() {

  valorLDR = analogRead(A0);
  Serial.println(valorLDR);
  luminosidade = (valorLDR/1023)*10;
  //Serial.println(luminosidade);
  luminosidade = (luminosidade - 10) *-1;
  //Serial.println(luminosidade);
  
  for (int pinLED = 0; pinLED <= 4; pinLED++) {
    if(pinLED < luminosidade) {
      digitalWrite(pinos[pinLED],LOW);
    } else {
      digitalWrite(pinos[pinLED],HIGH);
    }
  }
  delay(500);

}

//Using 3 LEDS, 4 resistors and 1 LDR
