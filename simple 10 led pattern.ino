
//A simple pattern program for 10 LEDs in a row 
//connect all cathodes to ground pin in aurduino and all anodes to each respective slots (i.e from 13 to 4)


int LED1 = 13;
int LED2 = 12;
int LED3 = 11;
int LED4 = 10;
int LED5 = 9;
int LED6 = 8;
int LED7 = 7;
int LED8 = 6;
int LED9 = 5;
int LED10 = 4;

void setup() {
   pinMode(LED1, OUTPUT);
   pinMode(LED2, OUTPUT);
   pinMode(LED3, OUTPUT);
   pinMode(LED4, OUTPUT);
   pinMode(LED5, OUTPUT);
   pinMode(LED6, OUTPUT);
   pinMode(LED7, OUTPUT);
   pinMode(LED8, OUTPUT);
   pinMode(LED9, OUTPUT);
   pinMode(LED10, OUTPUT);
}


void loop() {
  digitalWrite(LED1, HIGH);    
  delay(30);                  
  digitalWrite(LED2, HIGH);    
  delay(30);                       
  digitalWrite(LED3, HIGH);    
  delay(30);                  
  digitalWrite(LED4, HIGH);    
  delay(30);                  
  digitalWrite(LED5, HIGH);   
  delay(30);                 
  digitalWrite(LED6, HIGH);    
  delay(30);                  
  digitalWrite(LED7, HIGH);    
  delay(30);                  
  digitalWrite(LED8, HIGH);    
  delay(30);                  
  digitalWrite(LED9, HIGH);    
  delay(30);                 
  digitalWrite(LED10, HIGH);    
  delay(30);                  


  digitalWrite(LED1, LOW);     
  delay(40);                  
  digitalWrite(LED2, LOW);     
  delay(40);                  
  digitalWrite(LED3, LOW);    
  delay(40);                  
  digitalWrite(LED4, LOW);     
  delay(40);                 
  digitalWrite(LED5, LOW);   
  delay(40);                  
  digitalWrite(LED6, LOW);   
  delay(40);                  
  digitalWrite(LED7, LOW);    
  delay(40);                 
  digitalWrite(LED8, LOW);     
  delay(40);                  
  digitalWrite(LED9, LOW);     
  delay(40);                  
  digitalWrite(LED10, LOW);   
  delay(40);                   

}
