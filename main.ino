const int irSensor = 2;
const int buzzer = 25;
const int vibra = 4;

int irReading;
int contador = 0;

void setup() {
  Serial.begin(115200);

  pinMode(irSensor, INPUT);
  pinMode(vibra, OUTPUT);
  pinMode(buzzer, OUTPUT);
  
}

void loop() {
  irReading = digitalRead(irSensor);

  
    if (irReading == LOW) {
      contador++; 
      delay(3000);

    if (contador >= 3) {
      digitalWrite(vibra, HIGH);
      digitalWrite(buzzer, HIGH);
      String mensagem = "o funcionário dormiu";
       Serial.println(mensagem);
    }
  } else {
    digitalWrite(vibra, LOW);
    digitalWrite(buzzer, LOW);
  }
}