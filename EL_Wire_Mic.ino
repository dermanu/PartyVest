#define A  2
#define B  3
#define C  4

int sensorPin = A6;
int button = 16;
int sensorValue = 0;  
int i = 0;  

void setup(){
  Serial.begin(9600);
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(A6, INPUT);
  pinMode(16, INPUT);
}

void loop(){
  
  Serial.println(i);
  delay(1);   

  if (digitalRead(button) == LOW)
  {
    i++;
    if(i >= 2)
    {
      i = 0;
    }
  }
else 
{
  }

  switch(i){
    
    case 0:
     digitalWrite(B, HIGH);
     digitalWrite(A, HIGH);
     digitalWrite(C, HIGH);

     case 1:
     sensorValue = analogRead(sensorPin);
     if (sensorValue > 400)
    {  
     digitalWrite(B, HIGH);
     digitalWrite(A, LOW);
     digitalWrite(C, LOW);
     delay(1);
    }
    else
    { 
     digitalWrite(B, LOW);
     digitalWrite(A, HIGH);
     digitalWrite(C, HIGH);
     delay(2);
    }



  }
  

 


}

