int redPin = 10;
int yellowPin = 9;
int greenPin = 8;
int buttonPin = 7;

int estadoBotao;
int estadoSemaforo;
void setup() {
  // put your setup code here, to run once:
  pinMode(redPin,OUTPUT);
  pinMode(yellowPin,OUTPUT);
  pinMode(greenPin,OUTPUT);
  pinMode(buttonPin,INPUT);

  estadoSemaforo = 1;
}

void loop() {
  // put your main code here, to run repeatedly:

  estadoBotao = digitalRead(buttonPin);
  if(estadoBotao == HIGH) {
    estadoSemaforo = (estadoSemaforo % 3)+1;
    delay(300);
  }
  if(estadoSemaforo == 1) {
    digitalWrite(greenPin,HIGH);
    digitalWrite(yellowPin,LOW);
    digitalWrite(redPin,LOW);
    //delay(3000);
    //estadoSemaforo = 2;
    
  }

  if(estadoSemaforo == 2) {
    digitalWrite(greenPin,LOW);
    digitalWrite(yellowPin,HIGH);
    digitalWrite(redPin,LOW);
    //delay(1000);
    //estadoSemaforo = 3;
  }

  if(estadoSemaforo == 3) {
    digitalWrite(greenPin,LOW);
    digitalWrite(yellowPin,LOW);
    digitalWrite(redPin,HIGH);
    //delay(4000);
    //estadoSemaforo = 1;
  }

}
