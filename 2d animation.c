//Pin Selection
int LED1 =13 ;
int LED2 =12 ;
int LED3 =11 ;
int LED4 =8 ;
int LED5 =5 ;
int LED6 =7 ;
int LED7 =6 ;
int LED8 =10 ;
int LED9 =9 ; 


// the setup function runs once when you press reset or power the board
void setup() {
// declare the ledPin as OUTPUT:
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(LED5, OUTPUT);
  pinMode(LED6, OUTPUT);
  pinMode(LED7, OUTPUT);
  pinMode(LED8, OUTPUT);
  pinMode(LED9, OUTPUT);

}

// the loop function runs over and over again forever
void loop() {
  
  //LOOP 1 FWD
  //LED1
  digitalWrite(LED1, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);                       // wait for a delay
  //LED2
  digitalWrite(LED2,HIGH);    
  delay(500); 
  //LED3 
  digitalWrite(LED3, HIGH);   
  delay(500);
  //LED4                       
  digitalWrite(LED4, HIGH);
  delay(500);
  //LED5
  digitalWrite(LED5,HIGH);    
  delay(500);  
  //LED6
  digitalWrite(LED6,HIGH);    
  delay(500); 
  //LED7 
  digitalWrite(LED7, HIGH);   
  delay(500);
  //LED8                       
  digitalWrite(LED8, HIGH);
  delay(500);
  //LED9
  digitalWrite(LED9,HIGH);    
  delay(1000); 

 
 //LOOP 2 SHUT
  digitalWrite(LED1, LOW);
  digitalWrite(LED2,LOW);    
  digitalWrite(LED3, LOW);   
  digitalWrite(LED4, LOW);
  digitalWrite(LED5,LOW);    
  digitalWrite(LED6,LOW);    
  digitalWrite(LED7, LOW);   
  digitalWrite(LED8, LOW);
  digitalWrite(LED9,LOW);    
  delay(500);

  
 //LOOP 3 REV
//LED9
  digitalWrite(LED9, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);                       // wait for a delay
  //LED8
  digitalWrite(LED8,HIGH);    
  delay(500); 
  //LED7 
  digitalWrite(LED7, HIGH);   
  delay(500);
  //LED6                       
  digitalWrite(LED6, HIGH);
  delay(500);
  //LED5
  digitalWrite(LED5,HIGH);    
  delay(500);  
  //LED4
  digitalWrite(LED4,HIGH);    
  delay(500); 
  //LED3 
  digitalWrite(LED3, HIGH);   
  delay(500);
  //LED2                       
  digitalWrite(LED2, HIGH);
  delay(500);
  //LED1
  digitalWrite(LED1,HIGH);    
  delay(2000);
  
  
  //LOOP 4 SHUT
  digitalWrite(LED1, LOW);
  digitalWrite(LED2,LOW);    
  digitalWrite(LED3, LOW);   
  digitalWrite(LED4, LOW);
  digitalWrite(LED5,LOW);    
  digitalWrite(LED6,LOW);    
  digitalWrite(LED7, LOW);   
  digitalWrite(LED8, LOW);
  digitalWrite(LED9,LOW);    
  delay(1000);                   
}
