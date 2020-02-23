void setup() {
  Serial.begin(9600);
  pinMode(13, HIGH);
  Serial.println("Start");
}

void loop() {
  int Secs = 0;
  for(Secs = 0; Secs <=120; Secs++)
  {
    if(Secs == 0 || Secs <= 120)
    {
      digitalWrite(13,Secs%2);
      delay(1000);
    }
  }
  Serial.println("STOP");
  while(true);

}
