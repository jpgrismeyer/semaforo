#define rojo1 0
#define amarillo1 1
#define verde1 2
#define rojo2 3
#define amarillo2 4
#define verde2 5
#define rojo3 6
#define amarillo3 7
#define verde3 8
#define rojo4 9
#define amarillo4 10
#define verde4 11

void setup() {
  // put your setup code here, to run once:
pinMode(rojo1, OUTPUT);
pinMode(amarillo1, OUTPUT);
pinMode(verde1, OUTPUT);
pinMode(rojo2, OUTPUT);
pinMode(amarillo2, OUTPUT);
pinMode(verde2, OUTPUT);
pinMode(rojo3, OUTPUT);
pinMode(amarillo3, OUTPUT);
pinMode(verde3, OUTPUT);
pinMode(rojo4, OUTPUT);
pinMode(amarillo4, OUTPUT);
pinMode(verde4, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  //Semaforo 1 verde:
  digitalWrite(verde1, HIGH);
  digitalWrite(rojo2, HIGH);
  digitalWrite(rojo3, HIGH);
  digitalWrite(rojo4, HIGH);
  

  digitalWrite(rojo1, LOW);
  digitalWrite(amarillo1, LOW);

  digitalWrite(amarillo2, LOW);
  digitalWrite(verde2, LOW);
  digitalWrite(amarillo3, LOW);
  digitalWrite(verde3, LOW);
  digitalWrite(amarillo4, LOW);
  digitalWrite(verde4, LOW);
  delay(5000);

  //amarillo
  digitalWrite(verde1,LOW);
  digitalWrite(amarillo1,HIGH);
  delay(1000);

  //Semaforo 2 verde:
  digitalWrite(verde2, HIGH);
  digitalWrite(rojo1, HIGH);
  digitalWrite(rojo3, HIGH);
  digitalWrite(rojo4, HIGH);
  

  digitalWrite(rojo2, LOW);
  digitalWrite(amarillo2, LOW);

  digitalWrite(amarillo1, LOW);
  digitalWrite(verde1, LOW);
  digitalWrite(amarillo3, LOW);
  digitalWrite(verde3, LOW);
  digitalWrite(amarillo4, LOW);
  digitalWrite(verde4, LOW);
  delay(5000);

  //amarillo
  digitalWrite(verde2,LOW);
  digitalWrite(amarillo2,HIGH);
  delay(1000);

  //Semaforo 3 verde:
  digitalWrite(verde3, HIGH);
  digitalWrite(rojo2, HIGH);
  digitalWrite(rojo1, HIGH);
  digitalWrite(rojo4, HIGH);
  

  digitalWrite(rojo3, LOW);
  digitalWrite(amarillo3, LOW);

  digitalWrite(amarillo2, LOW);
  digitalWrite(verde2, LOW);
  digitalWrite(amarillo1, LOW);
  digitalWrite(verde1, LOW);
  digitalWrite(amarillo4, LOW);
  digitalWrite(verde4, LOW);
  delay(5000);

  //amarillo
  digitalWrite(verde3,LOW);
  digitalWrite(amarillo3,HIGH);
  delay(1000);

//Semaforo 4 verde:
  digitalWrite(verde4, HIGH);
  digitalWrite(rojo2, HIGH);
  digitalWrite(rojo3, HIGH);
  digitalWrite(rojo1, HIGH);
  

  digitalWrite(rojo4, LOW);
  digitalWrite(amarillo4, LOW);

  digitalWrite(amarillo2, LOW);
  digitalWrite(verde2, LOW);
  digitalWrite(amarillo3, LOW);
  digitalWrite(verde3, LOW);
  digitalWrite(amarillo1, LOW);
  digitalWrite(verde1, LOW);
  delay(5000);

  //amarillo
  digitalWrite(verde4,LOW);
  digitalWrite(amarillo4,HIGH);
  delay(1000);
  }
