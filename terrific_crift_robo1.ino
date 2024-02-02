int button=12;
int led=7;
int Reading=0;
int x=0;
int orange=8;
int blue=4;
void setup()
{
  pinMode(button,INPUT);
  pinMode(led,OUTPUT);
}

void loop(){
 Reading=digitalRead(button);
  if(Reading==1){
    x++;
    if(x==1){
      digitalWrite(led,1);
      delay(250);
    }
    else if (x==2){
      
      digitalWrite(blue,1);
      delay(250);
    }
    delay(250);
  }
   else if (x==3){
     digitalWrite(orange,1);
     delay(250);
   }
   else if (x==4){
     digitalWrite(orange,0);
     digitalWrite(blue,0);
     digitalWrite(led,0);
     delay(250);
     x=0;
   }
}
 
