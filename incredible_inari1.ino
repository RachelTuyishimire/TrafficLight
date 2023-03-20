int RED = 2;//This is the initialization of the first side red LED, that is connected to pin 2
int YELLOW = 5;//This is the initialization of the first side yellow LED, that is connected to pin 5
int GREEN = 3;//This is the initialization of the first side green LED, that is connected to pin 3
int Button = 7;//This is the initialization of the first side Button, that is connected to pin 7


int red = 8;//This is the initialization of the second side red LED, that is connected to pin 8
int green = 11;//This is the initialization of the second side green LED, that is connected to pin 11
int yellow = 13;//This is the initialization of the second side yellow LED, that is connected to pin 13
int button = 7;// This is the initialization of the second side button, that is connected to pin 7

void setup(){ pinMode(RED,OUTPUT);// Declaration of the first Red LED
              pinMode(YELLOW,OUTPUT);//Declaration of the first Yellow LED
              pinMode(GREEN,OUTPUT);//Declaration of the first Green LED
              pinMode(Button,INPUT_PULLUP);//Declaration of the first button
             pinMode(red,OUTPUT);//Declaration of the second red LED
             pinMode(yellow,OUTPUT);//Declaration of the second yellow LED
             pinMode(green,OUTPUT); //Declaration of the second green LED
             pinMode(button,INPUT_PULLUP);//Declaration of the second button
            }

void loop(){
  
         
  
            if(digitalRead(Button)==LOW)// The declaration of the condition to react to 
                 {
                    digitalWrite(RED,HIGH);//The output expected initially
                    delay(10000);//The amount of time required to delay for the next action to occur
                    digitalWrite(RED,LOW);//The output expected after the delay time 
                 }
             else // Instructions to follow if the first condition is already executed
                 {
                    digitalWrite(RED,HIGH);//the first Red LED will ligth to stop one side from moving
               digitalWrite(green,HIGH);// as the second green LED will also be blinking to allow the other side to move
                    delay(3000);// then there will be a delay of 3000sec
                    digitalWrite(green,LOW);//then the second green LED will go off
                    digitalWrite(yellow,HIGH);// while the second yellow LED will be informing the other side to get ready
                    delay(2000);// after that there will be a delay of 2000 sec 
                    digitalWrite(RED,LOW);//when the first side Red LED will be off
                    digitalWrite(yellow,LOW);// as well as the second yellow LED on the other side 
                    digitalWrite(GREEN,HIGH);// then the first side Green LED will go high to allow that side to move
               digitalWrite(red,HIGH);// while the other side is on hold
                    delay(3000);// after that there will be a delay of 3000sec
                    digitalWrite(GREEN,LOW);// then the first side will go off
                    digitalWrite(YELLOW,HIGH);// while the yellow LED will be high to prepare that same side to stop
                    delay(2000);// after that there will be a delay of 2000 where after that 
                    digitalWrite(YELLOW,LOW);// the Yellow LED of the first side will go off 
                    digitalWrite(red,LOW);// and the second side will be given a go ahead
             
               
                    }
             
                
 
}