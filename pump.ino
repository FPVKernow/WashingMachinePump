int missile = 2;
int button = 3;

int switch_relay = 4;
int button_relay = 5;

void setup() {
  Serial.begin(9600);

  pinMode(missile, INPUT_PULLUP);
  pinMode(button, INPUT_PULLUP);

  pinMode(switch_relay, OUTPUT);
  pinMode(button_relay, OUTPUT);
  
}

void loop() {
  delay(500);

  int missileState = digitalRead(missile);
  int buttonState = digitalRead(button);
  
  if (missileState == LOW && buttonState == HIGH){
    automatic();
  } else if (missileState == HIGH && buttonState == LOW){
    manual();
  } else if (missileState == LOW && buttonState == LOW){
    manual();
  } else if (missileState == HIGH && buttonState == HIGH){
    relaysOff();
  }

  
}

void relaysOff(){
  digitalWrite(switch_relay, LOW);
  digitalWrite(button_relay, LOW);
  Serial.print("relays off\n");
  }

void automatic(){
  digitalWrite(switch_relay, HIGH);
  digitalWrite(button_relay, LOW);
  Serial.print("automatic pumping\n");
}

void manual(){
  digitalWrite(switch_relay, LOW);
  digitalWrite(button_relay, HIGH);
  Serial.print("manual pumping triggered\n");
}
