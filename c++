// C++ code
// Evellyn 

int ledVerde =2;
int ledAmarela =3;
int ledAzul=4;
int portaPotenciometro = A0;
int valorPotenciometro = 0;

void setup(){
	pinMode (ledVerde, OUTPUT);
    pinMode (ledAmarela, OUTPUT);
    pinMode (ledAzul, OUTPUT);
    Serial.begin (9600);
}

void loop(){
 	valorPotenciometro = analogRead(portaPotenciometro);
  	Serial.print("Valor do potenciometro:");
  	Serial.println(valorPotenciometro);
  
    if (valorPotenciometro > 100){
      digitalWrite (ledVerde, HIGH);
      Serial.println("Acendeu Led Verd");
    }else{
      digitalWrite(ledVerde, LOW);
      Serial.println("Apagou Led Verde");
    }
  
  	delay(100);
  	
}
