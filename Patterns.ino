const int z2 = PC_6;
const int z3 = PC_5;
const int z1 = PC_7;

const int x1y1 = PB_5;
const int x2y1 = PB_0;
const int x3y1 = PB_1;

const int x1y2 = PA_5;
const int x2y2 = PA_6;
const int x3y2 = PA_7;

const int x1y3 = PA_4;
const int x2y3 = PA_3;
const int x3y3 = PA_2;

void setup() {
 // initialize serial:
 Serial.begin(9600);
 // make the pins outputs:
 Serial.print("Your pattern is:- ");
 pinMode(z1, OUTPUT); 
 pinMode(z2, OUTPUT); 
 pinMode(z3, OUTPUT);

 pinMode(x1y1, OUTPUT);
 pinMode(x2y1, OUTPUT);
 pinMode(x3y1, OUTPUT);
 pinMode(x1y2, OUTPUT);
 pinMode(x2y2, OUTPUT);
 pinMode(x3y2, OUTPUT);
 pinMode(x1y3, OUTPUT);
 pinMode(x2y3, OUTPUT);
 pinMode(x3y3, OUTPUT); 

}
void loop() {
  
  digitalWrite(x1y1,LOW);
  digitalWrite(x2y1,LOW);
  digitalWrite(x3y1,LOW);
  digitalWrite(x1y2,LOW);
  digitalWrite(x2y2,LOW);
  digitalWrite(x3y2,LOW);
  digitalWrite(x1y3,LOW);
  digitalWrite(x2y3,LOW);
  digitalWrite(x3y3,LOW);
  
  
  
  while (Serial.available() > 0) {
  char a = Serial.read();
  Serial.print(a);
  
  if(a=='a'){
    huha();
  }
  if(a=='b')
  {
    amp();
  }
  if(a=='c'){
    for(int i=0;i<10;i++)
    {
    nun_special();
    }
  }
  if(a=='d')
  {
   sourabh_special();
  }

  if(a=='e')
  {
      for(int i=0;i<5;i++)
      {
          ushnish_special();
      }
   }
   
   if(a=='f')
   {
     for(int i=0;i<5;i++){
       ushnish_special2();
       
     }
   }
   
   if(a=='g')
   {
     for(int i=0;i<40;i++){nun2();}
   }
  }
}
  void nun_special()
{
 digitalWrite(x1y1,LOW);
  digitalWrite(x2y1,LOW);
  digitalWrite(x3y1,LOW);
  digitalWrite(x1y2,LOW);
  digitalWrite(x2y2,LOW);
  digitalWrite(x3y2,LOW);
  digitalWrite(x1y3,LOW);
  digitalWrite(x2y3,LOW);
  digitalWrite(x3y3,LOW); 
  
  
  
digitalWrite(z1,LOW);
digitalWrite(z2,LOW);
digitalWrite(z3,LOW);
 
digitalWrite(x1y1,HIGH);
digitalWrite(x2y1,HIGH);
digitalWrite(x3y1,HIGH);
digitalWrite(x1y2,LOW);
digitalWrite(x2y2,LOW);
digitalWrite(x3y2,LOW);
digitalWrite(x1y3,HIGH);
digitalWrite(x2y3,HIGH);
digitalWrite(x3y3,HIGH);
delay(100);
digitalWrite(x1y1,LOW);
digitalWrite(x2y1,LOW);
digitalWrite(x3y1,LOW);
digitalWrite(x1y2,HIGH);
digitalWrite(x2y2,HIGH);
digitalWrite(x3y2,HIGH);
digitalWrite(x1y3,LOW);
digitalWrite(x2y3,LOW);
digitalWrite(x3y3,LOW);
delay(100);
} 
  
  void huha()
  {
    
   digitalWrite(x1y1,LOW);
  digitalWrite(x2y1,LOW);
  digitalWrite(x3y1,LOW);
  digitalWrite(x1y2,LOW);
  digitalWrite(x2y2,LOW);
  digitalWrite(x3y2,LOW);
  digitalWrite(x1y3,LOW);
  digitalWrite(x2y3,LOW);
  digitalWrite(x3y3,LOW);
  
  
  digitalWrite(x1y1,HIGH);
  digitalWrite(x2y1,HIGH);
  digitalWrite(x3y1,HIGH);
  digitalWrite(x1y2,HIGH);
  digitalWrite(x2y2,HIGH);
  digitalWrite(x3y2,HIGH);
  digitalWrite(x1y3,HIGH);
  digitalWrite(x2y3,HIGH);
  digitalWrite(x3y3,HIGH);
  
  for(int x = 0; x<20; x++){
  digitalWrite(z1,LOW);
  digitalWrite(z2,HIGH);
  digitalWrite(z3,HIGH);
  delay(50);
  digitalWrite(z1,HIGH);
  digitalWrite(z2,LOW);
  digitalWrite(z3,HIGH);
  delay(50);
  digitalWrite(z1,HIGH);
  digitalWrite(z2,HIGH);
  digitalWrite(z3,LOW);
  delay(50);
 digitalWrite(z1,HIGH);
 digitalWrite(z2,LOW);
 digitalWrite(z3,HIGH);
 delay(50);
 digitalWrite(z1,LOW);
 digitalWrite(z2,HIGH);
 digitalWrite(z3,HIGH);
 delay(50);
  }
}

void amp()
{
  
  digitalWrite(x1y1,LOW);
  digitalWrite(x2y1,LOW);
  digitalWrite(x3y1,LOW);
  digitalWrite(x1y2,LOW);
  digitalWrite(x2y2,LOW);
  digitalWrite(x3y2,LOW);
  digitalWrite(x1y3,LOW);
  digitalWrite(x2y3,LOW);
  digitalWrite(x3y3,LOW);
  
digitalWrite(z1,LOW);
digitalWrite(z2,LOW);
digitalWrite(z3,LOW);

for(int a=0;a<20;a++)
{
digitalWrite(x1y1,HIGH);
digitalWrite(x2y1,HIGH);
digitalWrite(x3y1,HIGH);
digitalWrite(x1y2,LOW);
digitalWrite(x2y2,LOW);
digitalWrite(x3y2,LOW);
digitalWrite(x1y3,LOW);
digitalWrite(x2y3,LOW);
digitalWrite(x3y3,LOW);
delay(50);

digitalWrite(x1y1,LOW);
digitalWrite(x2y1,LOW);
digitalWrite(x3y1,LOW);
digitalWrite(x1y2,LOW);
digitalWrite(x2y2,LOW);
digitalWrite(x3y2,LOW);
digitalWrite(x1y3,LOW);
digitalWrite(x2y3,LOW);
digitalWrite(x3y3,LOW);
delay(50);

digitalWrite(x1y1,LOW);
digitalWrite(x2y1,LOW);
digitalWrite(x3y1,LOW);
digitalWrite(x1y2,HIGH);
digitalWrite(x2y2,HIGH);
digitalWrite(x3y2,HIGH);
digitalWrite(x1y3,LOW);
digitalWrite(x2y3,LOW);
digitalWrite(x3y3,LOW);
delay(50);

digitalWrite(x1y1,LOW);
digitalWrite(x2y1,LOW);
digitalWrite(x3y1,LOW);
digitalWrite(x1y2,LOW);
digitalWrite(x2y2,LOW);
digitalWrite(x3y2,LOW);
digitalWrite(x1y3,HIGH);
digitalWrite(x2y3,HIGH);
digitalWrite(x3y3,HIGH);
delay(50);

digitalWrite(x1y1,LOW);
digitalWrite(x2y1,LOW);
digitalWrite(x3y1,LOW);
digitalWrite(x1y2,LOW);
digitalWrite(x2y2,LOW);
digitalWrite(x3y2,LOW);
digitalWrite(x1y3,LOW);
digitalWrite(x2y3,LOW);
digitalWrite(x3y3,LOW);
delay(50);

digitalWrite(x1y1,LOW);
digitalWrite(x2y1,LOW);
digitalWrite(x3y1,LOW);
digitalWrite(x1y2,HIGH);
digitalWrite(x2y2,HIGH);
digitalWrite(x3y2,HIGH);
digitalWrite(x1y3,LOW);
digitalWrite(x2y3,LOW);
digitalWrite(x3y3,LOW);
delay(50);


digitalWrite(x1y1,LOW);
digitalWrite(x2y1,LOW);
digitalWrite(x3y1,LOW);
digitalWrite(x1y2,LOW);
digitalWrite(x2y2,LOW);
digitalWrite(x3y2,LOW);
digitalWrite(x1y3,LOW);
digitalWrite(x2y3,LOW);
digitalWrite(x3y3,LOW);
delay(50);

digitalWrite(x1y1,HIGH);
digitalWrite(x2y1,HIGH);
digitalWrite(x3y1,HIGH);
digitalWrite(x1y2,LOW);
digitalWrite(x2y2,LOW);
digitalWrite(x3y2,LOW);
digitalWrite(x1y3,LOW);
digitalWrite(x2y3,LOW);
digitalWrite(x3y3,LOW);
delay(50);

}
}
void nun2()
{
  digitalWrite(x1y1,LOW);
  digitalWrite(x2y1,LOW);
  digitalWrite(x3y1,LOW);
  digitalWrite(x1y2,LOW);
  digitalWrite(x2y2,LOW);
  digitalWrite(x3y2,LOW);
  digitalWrite(x1y3,LOW);
  digitalWrite(x2y3,LOW);
  digitalWrite(x3y3,LOW);
  
  
digitalWrite(z1,LOW);
digitalWrite(z2,LOW);
digitalWrite(z3,LOW);
digitalWrite(x1y1,HIGH);
digitalWrite(x1y2,HIGH);
digitalWrite(x1y3,HIGH);
digitalWrite(x2y1,LOW);
digitalWrite(x2y2,LOW);
digitalWrite(x2y3,LOW);
digitalWrite(x3y1,HIGH);
digitalWrite(x3y2,HIGH);
digitalWrite(x3y3,HIGH);
delay(50);   
digitalWrite(x1y1,LOW);
digitalWrite(x1y2,LOW);
digitalWrite(x1y3,LOW);
digitalWrite(x2y1,HIGH);
digitalWrite(x2y2,HIGH);
digitalWrite(x2y3,HIGH);
digitalWrite(x3y1,LOW);
digitalWrite(x3y2,LOW);
digitalWrite(x3y3,LOW);
delay(50);   
}
void sourabh_special()
{
  
  digitalWrite(x1y1,LOW);
  digitalWrite(x2y1,LOW);
  digitalWrite(x3y1,LOW);
  digitalWrite(x1y2,LOW);
  digitalWrite(x2y2,LOW);
  digitalWrite(x3y2,LOW);
  digitalWrite(x1y3,LOW);
  digitalWrite(x2y3,LOW);
  digitalWrite(x3y3,LOW);
  digitalWrite(z1,HIGH);
  digitalWrite(z2,HIGH);
  digitalWrite(z3,HIGH);
 int z[3]; 
 z[0] = z1;
 z[1] = z2;
 z[2] = z3;


for(int t = 50; t > 0; t=t-10){
  for(int j = 0; j<5; j++){
for(int i = 0; i<3; i++)
{ 
 digitalWrite(z[i],LOW);
 digitalWrite(x1y1,HIGH);
 delay(t); 
 digitalWrite(x1y1,LOW);
 digitalWrite(x1y2,HIGH);
 delay(t); 
 digitalWrite(x1y2,LOW);
 digitalWrite(x1y3,HIGH);
 delay(t);
 digitalWrite(x1y3,LOW); 
 digitalWrite(x2y3,HIGH);
 delay(t);
digitalWrite(x2y3,LOW); 
digitalWrite(x3y3,HIGH);
delay(t);
digitalWrite(x3y3,LOW);
digitalWrite(x3y2,HIGH);
delay(t); 
digitalWrite(x3y2,LOW);
digitalWrite(x3y1,HIGH);
delay(t);

digitalWrite(x3y1,LOW);
digitalWrite(x2y1,HIGH);
delay(t);
digitalWrite(x2y1,LOW);
digitalWrite(x1y1,HIGH);
delay(t);
digitalWrite(z[i],HIGH);
}
}
}
}

void ushnish_special(){

  digitalWrite(x1y1,LOW);
  digitalWrite(x2y1,LOW);
  digitalWrite(x3y1,LOW);
  digitalWrite(x1y2,LOW);
  digitalWrite(x2y2,LOW);
  digitalWrite(x3y2,LOW);
  digitalWrite(x1y3,LOW);
  digitalWrite(x2y3,LOW);
  digitalWrite(x3y3,LOW);

 int n = 450; 
digitalWrite(z3,LOW);
digitalWrite(z2,LOW);
digitalWrite(z1,HIGH);
digitalWrite(x1y2,HIGH);
digitalWrite(x1y3,HIGH);
digitalWrite(x2y2,HIGH);
digitalWrite(x2y3,HIGH);
delay(n);
digitalWrite(z3,HIGH);
digitalWrite(z2,LOW);
digitalWrite(z1,LOW);
delay(n);
digitalWrite(x1y2,LOW);
digitalWrite(x1y3,LOW);
digitalWrite(x3y2,HIGH);
digitalWrite(x3y3,HIGH);
delay(n);
digitalWrite(z1,HIGH);
digitalWrite(z2,LOW);
digitalWrite(z3,LOW);
delay(n);
digitalWrite(x2y3,LOW);
digitalWrite(x3y3,LOW);
digitalWrite(x2y1,HIGH);
digitalWrite(x3y1,HIGH);
delay(n);
digitalWrite(z1,LOW);
digitalWrite(z3,HIGH);
delay(n);
digitalWrite(x3y1,LOW);
digitalWrite(x3y2,LOW);
digitalWrite(x1y1,HIGH);
digitalWrite(x1y2,HIGH);
delay(n);
digitalWrite(z3,LOW);
digitalWrite(z1,HIGH);
delay(n);
digitalWrite(x1y1,LOW);
digitalWrite(x2y1,LOW);
}

void ushnish_special2(){
  
  int n = 550;
  
  digitalWrite(z2,LOW);
  digitalWrite(z3,LOW);
  digitalWrite(z1,HIGH);
  digitalWrite(x3y1,HIGH);
  digitalWrite(x2y1,HIGH);
  digitalWrite(x3y2,HIGH);
  digitalWrite(x2y2,HIGH);
  digitalWrite(x1y2,HIGH);
  digitalWrite(x1y3,HIGH);
  digitalWrite(x2y3,HIGH);
  delay(n);
  digitalWrite(x3y3,HIGH);
  digitalWrite(x1y3,LOW);
  digitalWrite(x1y1,HIGH);
  digitalWrite(x3y1,LOW);
  delay(n);
  digitalWrite(z1,LOW);
  digitalWrite(z3,HIGH);
  delay(n);
  digitalWrite(x3y3,LOW);
  digitalWrite(x1y3,HIGH);
  digitalWrite(x1y1,LOW);
  digitalWrite(x3y1,HIGH);
  delay(n);
  digitalWrite(z1,HIGH);
  digitalWrite(z3,LOW);
  
}


