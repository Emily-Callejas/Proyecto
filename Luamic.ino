#include <SoftwareSerial.h>
SoftwareSerial bluetooth(10,11);

int IN4 = 2;
int IN3 = 3;
int IN2 = 4;
int IN1 = 5;
char dato;

void setup() {
  // put your setup code here, to run once:
  bluetooth.begin(9600);
  pinMode(IN4, OUTPUT);
  pinMode(IN3, OUTPUT); 
  pinMode(IN2, OUTPUT);
  pinMode(IN1, OUTPUT); 
}

void loop() {
  dato = bluetooth.read();
    if(dato == '0')// NEUTRO
    {
       // Mantener los motores apagados 
      digitalWrite(IN4, LOW);
      digitalWrite(IN3, LOW);
      digitalWrite(IN2, LOW);
      digitalWrite(IN1, LOW);      
    }

    if(dato == '1')// AVANZAR
    {
      digitalWrite(IN4, LOW);
      digitalWrite(IN3, HIGH); //Pin 3 encendido 
      digitalWrite(IN2, LOW);
      digitalWrite(IN1, LOW);      
    }

    if(dato == '2')// AVANZAR A LA DERECHA
    {
      digitalWrite(IN4, LOW);
      digitalWrite(IN3, HIGH);//Pin 3 encendido
      digitalWrite(IN2, HIGH);//Pin 2 encendido
      digitalWrite(IN1, LOW);      
    }

    if(dato == '3')// RETROCEDER
    {
      digitalWrite(IN4, HIGH);//Pin 4 encnendido
      digitalWrite(IN3, LOW);
      digitalWrite(IN2, LOW);
      digitalWrite(IN1, LOW);      
    }

    if(dato == '4')// AVANZAR A LA IZQUIERDA
    {
      digitalWrite(IN4, LOW);
      digitalWrite(IN3, HIGH);//Pin 4 encendido
      digitalWrite(IN2, LOW);
      digitalWrite(IN1, HIGH);//Pin 1 encendido      
    }     
}
