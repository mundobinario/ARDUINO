int LED = 3;
int BUTTON = 8;
int BUTTON_STATUS = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
  pinMode(BUTTON, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  BUTTON_STATUS = digitalRead(BUTTON);

  Serial.println(BUTTON_STATUS);
  
  if(BUTTON_STATUS == HIGH){
    // True
    digitalWrite(LED, HIGH);
    Serial.println("Push the button");
  }
  else{
    //False
    digitalWrite(LED, LOW);
    Serial.println("NO Push");
  }
}
