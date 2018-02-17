// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(9, OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(7,INPUT);
  
}

// the loop function runs over and over again forever
void loop() {
  int estadoBotao;
  estadoBotao = digitalRead(7);
  //delay(1000);
  digitalWrite(10,estadoBotao);
  digitalWrite(9,!estadoBotao);
}
