int col11 = 23;
int col12 = 24;
int col13 = 25;
int col14 = 26;
int col15 = 27;
int col16 = 28;
int col17 = 29;
int col18 = 10;
int col19 = 38;
int col20 = 19;
int col21 = 33;
int col22 = 32;
int col23 = 5;
int col24 = 4;
int col25 = 3;

int ledCol[25];

void setup()
{
  // put your setup code here, to run once:
  pinMode (col11,OUTPUT);
  pinMode (col12,OUTPUT);
  pinMode (col13,OUTPUT);
  pinMode (col14,OUTPUT);
  pinMode (col15,OUTPUT);
  pinMode (col16,OUTPUT);
  pinMode (col17,OUTPUT);
  pinMode (col18,OUTPUT);
  pinMode (col19,OUTPUT);
  pinMode (col20,OUTPUT);
  pinMode (col21,OUTPUT);
  pinMode (col22,OUTPUT);
  pinMode (col23,OUTPUT);
  pinMode (col24,OUTPUT);
  pinMode (col25,OUTPUT);
}

void loop()
{ 
 int t = 200;
  
 digitalWrite(col11,HIGH);
 digitalWrite(col12,HIGH);
 digitalWrite(col13,HIGH);
 digitalWrite(col14,HIGH);
 digitalWrite(col15,HIGH);
 digitalWrite(col16,HIGH);
 digitalWrite(col17,HIGH);
 digitalWrite(col18,HIGH);
 digitalWrite(col19,HIGH);
 digitalWrite(col20,HIGH);
 digitalWrite(col21,HIGH);
 digitalWrite(col22,HIGH);
 digitalWrite(col23,HIGH);
 digitalWrite(col24,HIGH);
 digitalWrite(col25,HIGH); 
  
 
delay(t);
 for(int a=0;a<2;a++)
 {
   climbingAladder();
 }
 delay(t);
 for(int a = 0;a<2;a++)
 {
   verticalClimbing();
 }
 delay(t);
 for(int a = 0;a<2;a++)
 {
   verticalClimbing_two();
 }
 delay(t);
 for(int a = 0;a<2;a++)
 {
   verticalClimbing_three();
 }
 delay(t);
 for(int a = 0;a<2;a++)
 {
   verticalClimbing_four();
 }
 delay(t);
 for(int a = 0;a<25;a++)
 {
   jumpingBeans();
 }
 delay(t);
 for(int a = 0;a<10;a++)
 {
   zigzag_one();
 }
 delay(t);
 
 tornado();
 delay(t);
 for(int a = 0;a<5;a++)
 {
   zigzag_two();
   zigzag_three();
 }
 delay(t);
 tornado_2();
 delay(t);
 for(int a=0;a<5;a++)
 {
   random_spark_one();
 }
 delay(t);
 for(int a=0;a<2;a++)
 {
   boxPattern();
   boxPattern_2();
 }
 delay(t);
 for(int a=0;a<3;a++)
 {
   waterDrop();

    umbrella();
 }
 delay(t);
 
for(int a=0;a<25;a++)
{
  fountain();
}
delay(t);

for(int a=0;a<5;a++)
{
  random_spark_two();
}
delay(t);

for(int a=0;a<3;a++)
{
  firework();
}
delay(t);

for(int a=0;a<3;a++)
{
  lightning();
}
delay(t);

for(int a=0;a<2;a++)
{
  rain();
}
delay(t);

rays();

delay(t);

heart();

delay(t);
for(int a=0;a<10;a++)
{
  wheel();
}
delay(t);

for(int a=0;a<10;a++)
{
  anti_wheel();
}
delay(t);

for(int a=0;a<10;a++)
{
  wheel_four();
}
delay(t);


for(int a=0;a<10;a++)
{
  wheel_four_reverse();
}
delay(t);

for(int a=0;a<5;a++)
{
all_spark();
}
delay(t);

bigbang();

delay(t);

for(int a=0;a<10;a++)
{
fireflies();
}
delay(t);

for(int a=0;a<5;a++)
{
boxPattern_3();
boxPattern_4();
}
delay(t);

for(int a=0;a<3;a++)
{
zigzag_four();
}
delay(t);
for(int a=0;a<5;a++)
{
  breeze();
}
delay(t);
for(int a=0;a<10;a++)
{
  pendulum();
}
delay(t);
for(int a=0;a<10;a++)
{
  rainbow();
}
delay(t);
for(int a=0;a<10;a++)
{
  pendulum_2();
}
delay(t);
for(int a=0;a<5;a++)
{
  zigzag_five();
}
delay(t);

for(int a=0;a<3;a++)
{
  berlin_wall();
}
delay(t);
for(int a=0;a<10;a++)
{
  pendulum();
}
delay(t);
for(int a=0;a<5;a++)
{
  triangle_1();
  triangle_2();
}
delay(t);
for(int a=0;a<5;a++)
{
  all_spark_two();
}
delay(t);
for(int a=0;a<5;a++)
{
  all_spark_three();
}
delay(t);
for(int a=0;a<5;a++)
{
  allSpark_four();
}
delay(t);
for(int a=0;a<5;a++)
{
  allSpark_five();
}
delay(t); 
u();
s();
s();
d();
l();
e();
d();
c();
u();
b();
e(); 
}

void climbingAladder()
{
  int n = 40;
  ledCol[0] = col11;
  ledCol[1] = col12;
  ledCol[2] = col13;
  ledCol[3] = col14;
  ledCol[4] = col15;
  ledCol[5] = col16;
  ledCol[6] = col17;
  ledCol[7] = col18;
  ledCol[8] = col19;
  ledCol[9] = col20;
  ledCol[10] = col21;
  ledCol[11] = col22;
  ledCol[12] = col23;
  ledCol[13] = col24;
  ledCol[14] = col25;
  
  digitalWrite (ledCol[0],LOW);
  digitalWrite (ledCol[1],LOW);
  digitalWrite (ledCol[2],LOW);
  digitalWrite (ledCol[3],LOW);
  digitalWrite (ledCol[4],LOW);
  digitalWrite (ledCol[5],LOW);
  digitalWrite (ledCol[6],LOW);
  digitalWrite (ledCol[7],LOW);
  digitalWrite (ledCol[8],LOW);
  digitalWrite (ledCol[9],LOW);
  digitalWrite (ledCol[10],LOW);
  digitalWrite (ledCol[11],LOW);
  digitalWrite (ledCol[12],LOW);
  digitalWrite (ledCol[13],LOW);
  digitalWrite (ledCol[14],LOW);
  
  delay(18*n+1600);
  
  digitalWrite (ledCol[0],HIGH);
  digitalWrite (ledCol[1],HIGH);
  digitalWrite (ledCol[2],HIGH);
  digitalWrite (ledCol[3],HIGH);
  digitalWrite (ledCol[4],HIGH);
  digitalWrite (ledCol[5],HIGH);
  digitalWrite (ledCol[6],HIGH);
  digitalWrite (ledCol[7],HIGH);
  digitalWrite (ledCol[8],HIGH);
  digitalWrite (ledCol[9],HIGH);
  digitalWrite (ledCol[10],HIGH);
  digitalWrite (ledCol[11],HIGH);
  digitalWrite (ledCol[12],HIGH);
  digitalWrite (ledCol[13],HIGH);
  digitalWrite (ledCol[14],HIGH);
}

void verticalClimbing()
{
  int n = 40;
  
  ledCol[0] = col11;
  ledCol[1] = col12;
  ledCol[2] = col13;
  ledCol[3] = col14;
  ledCol[4] = col15;
  ledCol[5] = col16;
  ledCol[6] = col17;
  ledCol[7] = col18;
  ledCol[8] = col19;
  ledCol[9] = col20;
  ledCol[10] = col21;
  ledCol[11] = col22;
  ledCol[12] = col23;
  ledCol[13] = col24;
  ledCol[14] = col25;
  
  digitalWrite (ledCol[0],LOW);
  digitalWrite (ledCol[5],LOW);
  digitalWrite (ledCol[10],LOW);
  delay(n);
  digitalWrite (ledCol[0],HIGH);
  digitalWrite (ledCol[5],HIGH);
  digitalWrite (ledCol[10],HIGH);
  delay(n);
  
  digitalWrite (ledCol[1],LOW);
  digitalWrite (ledCol[6],LOW);
  digitalWrite (ledCol[11],LOW);
  delay(n);
  digitalWrite (ledCol[1],HIGH);
  digitalWrite (ledCol[6],HIGH);
  digitalWrite (ledCol[11],HIGH);
  delay(n);
  
  digitalWrite (ledCol[2],LOW);
  digitalWrite (ledCol[7],LOW);
  digitalWrite (ledCol[12],LOW);
  delay(n);
  digitalWrite (ledCol[2],HIGH);
  digitalWrite (ledCol[7],HIGH);
  digitalWrite (ledCol[12],HIGH);
  delay(n);
  
  digitalWrite (ledCol[3],LOW);
  digitalWrite (ledCol[8],LOW);
  digitalWrite (ledCol[13],LOW);
  delay(n);
  digitalWrite (ledCol[3],HIGH);
  digitalWrite (ledCol[8],HIGH);
  digitalWrite (ledCol[13],HIGH);
  delay(n);
  
  digitalWrite (ledCol[4],LOW);
  digitalWrite (ledCol[9],LOW);
  digitalWrite (ledCol[14],LOW);
  delay(n+800);
  digitalWrite (ledCol[4],HIGH);
  digitalWrite (ledCol[9],HIGH);
  digitalWrite (ledCol[14],HIGH);
  delay(n);
  
  digitalWrite (ledCol[3],LOW);
  digitalWrite (ledCol[8],LOW);
  digitalWrite (ledCol[13],LOW);
  delay(n);
  digitalWrite (ledCol[3],HIGH);
  digitalWrite (ledCol[8],HIGH);
  digitalWrite (ledCol[13],HIGH);
  delay(n);
  
  digitalWrite (ledCol[2],LOW);
  digitalWrite (ledCol[7],LOW);
  digitalWrite (ledCol[12],LOW);
  delay(n);
  digitalWrite (ledCol[2],HIGH);
  digitalWrite (ledCol[7],HIGH);
  digitalWrite (ledCol[12],HIGH);
  delay(n);
  
  digitalWrite (ledCol[1],LOW);
  digitalWrite (ledCol[6],LOW);
  digitalWrite (ledCol[11],LOW);
  delay(n);
  digitalWrite (ledCol[1],HIGH);
  digitalWrite (ledCol[6],HIGH);
  digitalWrite (ledCol[11],HIGH);
  delay(n);
  
  digitalWrite (ledCol[0],LOW);
  digitalWrite (ledCol[5],LOW);
  digitalWrite (ledCol[10],LOW);
  delay(n+800);
  
  digitalWrite (ledCol[0],HIGH);
  digitalWrite (ledCol[1],HIGH);
  digitalWrite (ledCol[2],HIGH);
  digitalWrite (ledCol[3],HIGH);
  digitalWrite (ledCol[4],HIGH);
  digitalWrite (ledCol[5],HIGH);
  digitalWrite (ledCol[6],HIGH);
  digitalWrite (ledCol[7],HIGH);
  digitalWrite (ledCol[8],HIGH);
  digitalWrite (ledCol[9],HIGH);

  digitalWrite (ledCol[10],HIGH);
  digitalWrite (ledCol[11],HIGH);
  digitalWrite (ledCol[12],HIGH);
  digitalWrite (ledCol[13],HIGH);
  digitalWrite (ledCol[14],HIGH);

}  

void verticalClimbing_two()
{
  int n = 40;
  
  ledCol[0] = col11;
  ledCol[1] = col12;
  ledCol[2] = col13;
  ledCol[3] = col14;
  ledCol[4] = col15;
  ledCol[5] = col16;
  ledCol[6] = col17;
  ledCol[7] = col18;
  ledCol[8] = col19;
  ledCol[9] = col20;
  ledCol[10] = col21;
  ledCol[11] = col22;
  ledCol[12] = col23;
  ledCol[13] = col24;
  ledCol[14] = col25;
 
  delay(4*n+800);
  
  digitalWrite(ledCol[0],LOW);
  digitalWrite(ledCol[1],LOW);
  digitalWrite(ledCol[2],LOW);
  digitalWrite(ledCol[3],LOW);
  digitalWrite(ledCol[4],LOW);
  delay(n);
  digitalWrite(ledCol[0],HIGH);
  digitalWrite(ledCol[1],HIGH);
  digitalWrite(ledCol[2],HIGH);
  digitalWrite(ledCol[3],HIGH);
  digitalWrite(ledCol[4],HIGH);
  delay(n);
  
  digitalWrite(ledCol[5],LOW);
  digitalWrite(ledCol[6],LOW);
  digitalWrite(ledCol[7],LOW);
  digitalWrite(ledCol[8],LOW);
  digitalWrite(ledCol[9],LOW);
  delay(n);
  digitalWrite(ledCol[5],HIGH);
  digitalWrite(ledCol[6],HIGH);
  digitalWrite(ledCol[7],HIGH);
  digitalWrite(ledCol[8],HIGH);
  digitalWrite(ledCol[9],HIGH);
  delay(n);
  
  digitalWrite(ledCol[10],LOW);
  digitalWrite(ledCol[11],LOW);
  digitalWrite(ledCol[12],LOW);
  digitalWrite(ledCol[13],LOW);
  digitalWrite(ledCol[14],LOW);
  delay(n+800);
  digitalWrite(ledCol[10],HIGH);
  digitalWrite(ledCol[11],HIGH);
  digitalWrite(ledCol[12],HIGH);
  digitalWrite(ledCol[13],HIGH);
  digitalWrite(ledCol[14],HIGH);
  delay(n);
  
  digitalWrite(ledCol[5],LOW);
  digitalWrite(ledCol[6],LOW);
  digitalWrite(ledCol[7],LOW);
  digitalWrite(ledCol[8],LOW);
  digitalWrite(ledCol[9],LOW);
  delay(n);
  digitalWrite(ledCol[5],HIGH);
  digitalWrite(ledCol[6],HIGH);
  digitalWrite(ledCol[7],HIGH);
  digitalWrite(ledCol[8],HIGH);
  digitalWrite(ledCol[9],HIGH);
  delay(n); 
  
  digitalWrite(ledCol[0],LOW);
  digitalWrite(ledCol[1],LOW);
  digitalWrite(ledCol[2],LOW);
  digitalWrite(ledCol[3],LOW);
  digitalWrite(ledCol[4],LOW);
  delay(n);
  digitalWrite(ledCol[0],HIGH);
  digitalWrite(ledCol[1],HIGH);
  digitalWrite(ledCol[2],HIGH);
  digitalWrite(ledCol[3],HIGH);
  digitalWrite(ledCol[4],HIGH);
  delay(n);
  
  delay(4*n+800);
  
  digitalWrite (ledCol[0],HIGH);
  digitalWrite (ledCol[1],HIGH);
  digitalWrite (ledCol[2],HIGH);
  digitalWrite (ledCol[3],HIGH);
  digitalWrite (ledCol[4],HIGH);
  digitalWrite (ledCol[5],HIGH);
  digitalWrite (ledCol[6],HIGH);
  digitalWrite (ledCol[7],HIGH);
  digitalWrite (ledCol[8],HIGH);
  digitalWrite (ledCol[9],HIGH);

  digitalWrite (ledCol[10],HIGH);
  digitalWrite (ledCol[11],HIGH);
  digitalWrite (ledCol[12],HIGH);
  digitalWrite (ledCol[13],HIGH);
  digitalWrite (ledCol[14],HIGH);

}

void verticalClimbing_three()
{
  int n = 40;
  
  ledCol[0] = col11;
  ledCol[1] = col12;
  ledCol[2] = col13;
  ledCol[3] = col14;
  ledCol[4] = col15;
  ledCol[5] = col16;
  ledCol[6] = col17;
  ledCol[7] = col18;
  ledCol[8] = col19;
  ledCol[9] = col20;
  ledCol[10] = col21;
  ledCol[11] = col22;
  ledCol[12] = col23;
  ledCol[13] = col24;
  ledCol[14] = col25;
  
  digitalWrite (ledCol[4],LOW);
  digitalWrite (ledCol[0],LOW);
  digitalWrite (ledCol[1],LOW);
  digitalWrite (ledCol[2],LOW);
  digitalWrite (ledCol[3],LOW);  
  
  digitalWrite (ledCol[9],LOW);
  digitalWrite (ledCol[14],LOW);
  delay(n);
  
  digitalWrite (ledCol[9],HIGH);
  digitalWrite (ledCol[14],HIGH);
  delay(n);
  
  
  digitalWrite (ledCol[8],LOW);
  digitalWrite (ledCol[13],LOW);
  delay(n);
  
  digitalWrite (ledCol[8],HIGH);
  digitalWrite (ledCol[13],HIGH);
  delay(n);
  
  
  digitalWrite (ledCol[7],LOW);
  digitalWrite (ledCol[12],LOW);
  delay(n);
  
  digitalWrite (ledCol[7],HIGH);
  digitalWrite (ledCol[12],HIGH);
  delay(n);
  
  
  digitalWrite (ledCol[6],LOW);
  digitalWrite (ledCol[11],LOW);
  delay(n);
  
  digitalWrite (ledCol[6],HIGH);
  digitalWrite (ledCol[11],HIGH);
  delay(n);
  
  
  digitalWrite (ledCol[5],LOW);
  digitalWrite (ledCol[10],LOW);
  delay(n+800);
  
  digitalWrite (ledCol[5],HIGH);
  digitalWrite (ledCol[10],HIGH);
  delay(n);
  
  
  digitalWrite (ledCol[6],LOW);
  digitalWrite (ledCol[11],LOW);
  delay(n);
  
  digitalWrite (ledCol[6],HIGH);
  digitalWrite (ledCol[11],HIGH);
  delay(n);
  
  
  digitalWrite (ledCol[7],LOW);
  digitalWrite (ledCol[12],LOW);
  delay(n);
  
  digitalWrite (ledCol[7],HIGH);
  digitalWrite (ledCol[12],HIGH);
  delay(n);
  
  
  digitalWrite (ledCol[8],LOW);
  digitalWrite (ledCol[13],LOW);
  delay(n);
  
  digitalWrite (ledCol[8],HIGH);
  digitalWrite (ledCol[13],HIGH);
  delay(n);
  
  
  digitalWrite (ledCol[9],LOW);
  digitalWrite (ledCol[14],LOW);
  delay(n+800);
  
  digitalWrite (ledCol[0],HIGH);
  digitalWrite (ledCol[1],HIGH);
  digitalWrite (ledCol[2],HIGH);
  digitalWrite (ledCol[3],HIGH);
  digitalWrite (ledCol[4],HIGH);
  digitalWrite (ledCol[5],HIGH);
  digitalWrite (ledCol[6],HIGH);
  digitalWrite (ledCol[7],HIGH);
  digitalWrite (ledCol[8],HIGH);
  digitalWrite (ledCol[9],HIGH);

  digitalWrite (ledCol[10],HIGH);
  digitalWrite (ledCol[11],HIGH);
  digitalWrite (ledCol[12],HIGH);
  digitalWrite (ledCol[13],HIGH);
  digitalWrite (ledCol[14],HIGH);

}  

void jumpingBeans()
{
  int n = 20;
  int m;
  int p;
  ledCol[0] = col11;
  ledCol[1] = col12;
  ledCol[2] = col13;
  ledCol[3] = col14;
  ledCol[4] = col15;
  ledCol[5] = col16;
  ledCol[6] = col17;
  ledCol[7] = col18;
  ledCol[8] = col19;
  ledCol[9] = col20;
  ledCol[10] = col21;
  ledCol[11] = col22;
  ledCol[12] = col23;
  ledCol[13] = col24;
  ledCol[14] = col25;
  
  m = random(0,15);
  p = random(0,15);
  if(m==p)
  p = p + 1;
  digitalWrite (ledCol[m],LOW);
  digitalWrite (ledCol[p],LOW);
  delay(10*n);
  digitalWrite (ledCol[m],HIGH);
  digitalWrite (ledCol[p],HIGH);
  
  digitalWrite (ledCol[0],HIGH);
  digitalWrite (ledCol[1],HIGH);
  digitalWrite (ledCol[2],HIGH);
  digitalWrite (ledCol[3],HIGH);
  digitalWrite (ledCol[4],HIGH);
  digitalWrite (ledCol[5],HIGH);
  digitalWrite (ledCol[6],HIGH);
  digitalWrite (ledCol[7],HIGH);
  digitalWrite (ledCol[8],HIGH);
  digitalWrite (ledCol[9],HIGH);

  digitalWrite (ledCol[10],HIGH);
  digitalWrite (ledCol[11],HIGH);
  digitalWrite (ledCol[12],HIGH);
  digitalWrite (ledCol[13],HIGH);
  digitalWrite (ledCol[14],HIGH);

} 

void zigzag_one()
{
  ledCol[0] = col11;
  ledCol[1] = col12;
  ledCol[2] = col13;
  ledCol[3] = col14;
  ledCol[4] = col15;
  ledCol[5] = col16;
  ledCol[6] = col17;
  ledCol[7] = col18;
  ledCol[8] = col19;
  ledCol[9] = col20;
  ledCol[10] = col21;
  ledCol[11] = col22;
  ledCol[12] = col23;
  ledCol[13] = col24;
  ledCol[14] = col25;
  
  int n = 15;
  
  digitalWrite(ledCol[1],HIGH);
  digitalWrite(ledCol[3],HIGH);
  digitalWrite(ledCol[7],HIGH);
  digitalWrite(ledCol[11],HIGH);
  digitalWrite(ledCol[12],HIGH);
  digitalWrite(ledCol[13],HIGH);
  
  delay(4*n);
  
  digitalWrite(ledCol[2],LOW);
  delay(n);
  digitalWrite(ledCol[2],HIGH);
  delay(n);
  digitalWrite(ledCol[8],LOW);
  delay(n);
  digitalWrite(ledCol[8],HIGH);
  delay(n);
  digitalWrite(ledCol[14],LOW);
  delay(n);
  digitalWrite(ledCol[14],HIGH);
  delay(n);
  digitalWrite(ledCol[9],LOW);
  delay(n);
  digitalWrite(ledCol[9],HIGH);
  delay(n);
  digitalWrite(ledCol[4],LOW);
  delay(n);
  digitalWrite(ledCol[4],HIGH);
  delay(n);
  
  delay(6*n);
  
  digitalWrite(ledCol[2],LOW);
  delay(n);
  digitalWrite(ledCol[2],HIGH);
  delay(n);
  digitalWrite(ledCol[6],LOW);
  delay(n);
  digitalWrite(ledCol[6],HIGH);
  delay(n);
  digitalWrite(ledCol[10],LOW);
  delay(n);
  digitalWrite(ledCol[10],HIGH);
  delay(n);
  digitalWrite(ledCol[5],LOW);
  delay(n);
  digitalWrite(ledCol[5],HIGH);
  delay(n);
  digitalWrite(ledCol[0],LOW);
  delay(n);
  digitalWrite(ledCol[0],HIGH);
  delay(n);
  
  digitalWrite (ledCol[0],HIGH);
  digitalWrite (ledCol[1],HIGH);
  digitalWrite (ledCol[2],HIGH);
  digitalWrite (ledCol[3],HIGH);
  digitalWrite (ledCol[4],HIGH);
  digitalWrite (ledCol[5],HIGH);
  digitalWrite (ledCol[6],HIGH);
  digitalWrite (ledCol[7],HIGH);
  digitalWrite (ledCol[8],HIGH);
  digitalWrite (ledCol[9],HIGH);

  digitalWrite (ledCol[10],HIGH);
  digitalWrite (ledCol[11],HIGH);
  digitalWrite (ledCol[12],HIGH);
  digitalWrite (ledCol[13],HIGH);
  digitalWrite (ledCol[14],HIGH);
  
  delay(2*n);

}

void tornado()
{
  int n = 25;
  
  ledCol[0] = col11;
  ledCol[1] = col12;
  ledCol[2] = col13;
  ledCol[3] = col14;
  ledCol[4] = col15;
  ledCol[5] = col16;
  ledCol[6] = col17;
  ledCol[7] = col18;
  ledCol[8] = col19;
  ledCol[9] = col20;
  ledCol[10] = col21;
  ledCol[11] = col22;
  ledCol[12] = col23;
  ledCol[13] = col24;
  ledCol[14] = col25;
  
  digitalWrite(ledCol[2],HIGH);
  
  while(n>=0)
  {
  for (int a=0;a<5;a++)
  {
  delay(14*n);
  digitalWrite(ledCol[4],LOW);
  delay(n);
  digitalWrite(ledCol[4],HIGH);
  delay(n);
  digitalWrite(ledCol[9],LOW);
  delay(n);
  digitalWrite(ledCol[9],HIGH);
  delay(n);
  digitalWrite(ledCol[14],LOW);
  delay(n);
  digitalWrite(ledCol[14],HIGH);
  delay(n);
  digitalWrite(ledCol[13],LOW);
  delay(n);
  digitalWrite(ledCol[13],HIGH);
  delay(n);
  digitalWrite(ledCol[12],LOW);
  delay(n);
  digitalWrite(ledCol[12],HIGH);
  delay(n);
  digitalWrite(ledCol[11],LOW);
  delay(n);
  digitalWrite(ledCol[11],HIGH);
  delay(n);
  digitalWrite(ledCol[10],LOW);
  delay(n);
  digitalWrite(ledCol[10],HIGH);
  delay(n);
  digitalWrite(ledCol[5],LOW);
  delay(n);
  digitalWrite(ledCol[5],HIGH);
  delay(n);
   digitalWrite(ledCol[0],LOW);
  delay(n);
  digitalWrite(ledCol[0],HIGH);
  delay(n);
  }
  for (int a=0;a<5;a++)
  {
  delay(6*n);  
  digitalWrite(ledCol[3],LOW);
  delay(n);
  digitalWrite(ledCol[3],HIGH);
  delay(n);
  digitalWrite(ledCol[8],LOW);
  delay(n);
  digitalWrite(ledCol[8],HIGH);
  delay(n);
  digitalWrite(ledCol[7],LOW);
  delay(n);
  digitalWrite(ledCol[7],HIGH);
  delay(n);
  digitalWrite(ledCol[6],LOW);
  delay(n);
  digitalWrite(ledCol[6],HIGH);
  delay(n);
  digitalWrite(ledCol[1],LOW);
  delay(n);
  digitalWrite(ledCol[1],HIGH);
  delay(n);
}
   n = n - 5;
  }
  digitalWrite (ledCol[0],HIGH);
  digitalWrite (ledCol[1],HIGH);
  digitalWrite (ledCol[2],HIGH);
  digitalWrite (ledCol[3],HIGH);
  digitalWrite (ledCol[4],HIGH);
  digitalWrite (ledCol[5],HIGH);
  digitalWrite (ledCol[6],HIGH);
  digitalWrite (ledCol[7],HIGH);
  digitalWrite (ledCol[8],HIGH);
  digitalWrite (ledCol[9],HIGH);

  digitalWrite (ledCol[10],HIGH);
  digitalWrite (ledCol[11],HIGH);
  digitalWrite (ledCol[12],HIGH);
  digitalWrite (ledCol[13],HIGH);
  digitalWrite (ledCol[14],HIGH);

}

void boxPattern()
{
  int n = 20;
  
  ledCol[0] = col11;
  ledCol[1] = col12;
  ledCol[2] = col13;
  ledCol[3] = col14;
  ledCol[4] = col15;
  ledCol[5] = col16;
  ledCol[6] = col17;
  ledCol[7] = col18;
  ledCol[8] = col19;
  ledCol[9] = col20;
  ledCol[10] = col21;
  ledCol[11] = col22;
  ledCol[12] = col23;
  ledCol[13] = col24;
  ledCol[14] = col25;
  
  for (int a=0;a<=2;a++)
  {
  delay(14*n);
  digitalWrite(ledCol[4],LOW);
  delay(n);
  digitalWrite(ledCol[4],HIGH);
  delay(n);
  digitalWrite(ledCol[9],LOW);
  delay(n);
  digitalWrite(ledCol[9],HIGH);
  delay(n);
  digitalWrite(ledCol[14],LOW);
  delay(n);
  digitalWrite(ledCol[14],HIGH);
  delay(n);
  digitalWrite(ledCol[13],LOW);
  delay(n);
  digitalWrite(ledCol[13],HIGH);
  delay(n);
  digitalWrite(ledCol[12],LOW);
  delay(n);
  digitalWrite(ledCol[12],HIGH);
  delay(n);
  digitalWrite(ledCol[11],LOW);
  delay(n);
  digitalWrite(ledCol[11],HIGH);
  delay(n);
  digitalWrite(ledCol[10],LOW);
  delay(n);
  digitalWrite(ledCol[10],HIGH);
  delay(n);
  digitalWrite(ledCol[5],LOW);
  delay(n);
  digitalWrite(ledCol[5],HIGH);
  delay(n);
   digitalWrite(ledCol[0],LOW);
  delay(n);
  digitalWrite(ledCol[0],HIGH);
  delay(n);
  }
  for (int a=0;a<=2;a++)
  {
  delay(6*n);  
  digitalWrite(ledCol[3],LOW);
  delay(n);
  digitalWrite(ledCol[3],HIGH);
  delay(n);
  digitalWrite(ledCol[8],LOW);
  delay(n);
  digitalWrite(ledCol[8],HIGH);
  delay(n);
  digitalWrite(ledCol[7],LOW);
  delay(n);
  digitalWrite(ledCol[7],HIGH);
  delay(n);
  digitalWrite(ledCol[6],LOW);
  delay(n);
  digitalWrite(ledCol[6],HIGH);
  delay(n);
  digitalWrite(ledCol[1],LOW);
  delay(n);
  digitalWrite(ledCol[1],HIGH);
  delay(n);
}
 for (int a=0;a<=2;a++){
  digitalWrite(ledCol[2],LOW);
  delay(n);
  digitalWrite(ledCol[2],HIGH);
  delay(n);
}
  digitalWrite (ledCol[0],HIGH);
  digitalWrite (ledCol[1],HIGH);
  digitalWrite (ledCol[2],HIGH);
  digitalWrite (ledCol[3],HIGH);
  digitalWrite (ledCol[4],HIGH);
  digitalWrite (ledCol[5],HIGH);
  digitalWrite (ledCol[6],HIGH);
  digitalWrite (ledCol[7],HIGH);
  digitalWrite (ledCol[8],HIGH);
  digitalWrite (ledCol[9],HIGH);

  digitalWrite (ledCol[10],HIGH);
  digitalWrite (ledCol[11],HIGH);
  digitalWrite (ledCol[12],HIGH);
  digitalWrite (ledCol[13],HIGH);
  digitalWrite (ledCol[14],HIGH);
}

void waterDrop()
{
  int n = 30;
  
  ledCol[0] = col11;
  ledCol[1] = col12;
  ledCol[2] = col13;
  ledCol[3] = col14;
  ledCol[4] = col15;
  ledCol[5] = col16;
  ledCol[6] = col17;
  ledCol[7] = col18;
  ledCol[8] = col19;
  ledCol[9] = col20;
  ledCol[10] = col21;
  ledCol[11] = col22;
  ledCol[12] = col23;
  ledCol[13] = col24;
  ledCol[14] = col25;
  
  digitalWrite (ledCol[2],LOW);
  delay(8*n + 500);
  digitalWrite (ledCol[2],HIGH); 
  
  digitalWrite(ledCol[1],LOW);
  digitalWrite(ledCol[3],LOW);
  digitalWrite(ledCol[6],LOW);
  digitalWrite(ledCol[7],LOW);
  digitalWrite(ledCol[8],LOW);
  delay(n+200);
  
  digitalWrite(ledCol[1],HIGH);
  digitalWrite(ledCol[3],HIGH);
  digitalWrite(ledCol[6],HIGH);
  digitalWrite(ledCol[7],HIGH);
  digitalWrite(ledCol[8],HIGH);
  delay(n);
  
  digitalWrite(ledCol[0],LOW);
  digitalWrite(ledCol[5],LOW);
  digitalWrite(ledCol[10],LOW);
  digitalWrite(ledCol[11],LOW);
  digitalWrite(ledCol[12],LOW);
  digitalWrite(ledCol[13],LOW);
  digitalWrite(ledCol[14],LOW);
  digitalWrite(ledCol[9],LOW);
  digitalWrite(ledCol[4],LOW);
  delay(n+500);
  
  digitalWrite(ledCol[0],HIGH);
  digitalWrite(ledCol[5],HIGH);
  digitalWrite(ledCol[10],HIGH);
  digitalWrite(ledCol[11],HIGH);
  digitalWrite(ledCol[12],HIGH);
  digitalWrite(ledCol[13],HIGH);
  digitalWrite(ledCol[14],HIGH);
  digitalWrite(ledCol[9],HIGH);
  digitalWrite(ledCol[4],HIGH);
  delay(n);
  
  digitalWrite (ledCol[0],HIGH);
  digitalWrite (ledCol[1],HIGH);
  digitalWrite (ledCol[2],HIGH);
  digitalWrite (ledCol[3],HIGH);
  digitalWrite (ledCol[4],HIGH);
  digitalWrite (ledCol[5],HIGH);
  digitalWrite (ledCol[6],HIGH);
  digitalWrite (ledCol[7],HIGH);
  digitalWrite (ledCol[8],HIGH);
  digitalWrite (ledCol[9],HIGH);

  digitalWrite (ledCol[10],HIGH);
  digitalWrite (ledCol[11],HIGH);
  digitalWrite (ledCol[12],HIGH);
  digitalWrite (ledCol[13],HIGH);
  digitalWrite (ledCol[14],HIGH);
}

void umbrella()
{
  int n = 30;
  ledCol[0] = col11;
  ledCol[1] = col12;
  ledCol[2] = col13;
  ledCol[3] = col14;
  ledCol[4] = col15;
  ledCol[5] = col16;
  ledCol[6] = col17;
  ledCol[7] = col18;
  ledCol[8] = col19;
  ledCol[9] = col20;
  ledCol[10] = col21;
  ledCol[11] = col22;
  ledCol[12] = col23;
  ledCol[13] = col24;
  ledCol[14] = col25;
  
  digitalWrite (ledCol[2],LOW);
  delay(4*n + 500);
  digitalWrite (ledCol[2],HIGH); 
  
  digitalWrite(ledCol[1],LOW);
  digitalWrite(ledCol[3],LOW);
  digitalWrite(ledCol[6],LOW);
  digitalWrite(ledCol[7],LOW);
  digitalWrite(ledCol[8],LOW);
  delay(n+100);
  
  digitalWrite(ledCol[0],LOW);
  digitalWrite(ledCol[5],LOW);
  digitalWrite(ledCol[10],LOW);
  digitalWrite(ledCol[11],LOW);
  digitalWrite(ledCol[12],LOW);
  digitalWrite(ledCol[13],LOW);
  digitalWrite(ledCol[14],LOW);
  digitalWrite(ledCol[9],LOW);
  digitalWrite(ledCol[4],LOW);
  delay(n+500);
  
  digitalWrite (ledCol[0],HIGH);
  digitalWrite (ledCol[1],HIGH);
  digitalWrite (ledCol[2],HIGH);
  digitalWrite (ledCol[3],HIGH);
  digitalWrite (ledCol[4],HIGH);
  digitalWrite (ledCol[5],HIGH);
  digitalWrite (ledCol[6],HIGH);
  digitalWrite (ledCol[7],HIGH);
  digitalWrite (ledCol[8],HIGH);
  digitalWrite (ledCol[9],HIGH);

  digitalWrite (ledCol[10],HIGH);
  digitalWrite (ledCol[11],HIGH);
  digitalWrite (ledCol[12],HIGH);
  digitalWrite (ledCol[13],HIGH);
  digitalWrite (ledCol[14],HIGH);

}

void fountain()
{
  int n=20;
  
  ledCol[0] = col11;
  ledCol[1] = col12;
  ledCol[2] = col13;
  ledCol[3] = col14;
  ledCol[4] = col15;
  ledCol[5] = col16;
  ledCol[6] = col17;
  ledCol[7] = col18;
  ledCol[8] = col19;
  ledCol[9] = col20;
  ledCol[10] = col21;
  ledCol[11] = col22;
  ledCol[12] = col23;
  ledCol[13] = col24;
  ledCol[14] = col25;
  
  digitalWrite(ledCol[2],HIGH);
  
  digitalWrite(ledCol[1],LOW);
  digitalWrite(ledCol[6],LOW);
  digitalWrite(ledCol[7],LOW);
  digitalWrite(ledCol[8],LOW);
  digitalWrite(ledCol[3],LOW);
  
  delay(10*n);
  
  digitalWrite(ledCol[1],HIGH);
  digitalWrite(ledCol[6],HIGH);
  digitalWrite(ledCol[7],HIGH);
  digitalWrite(ledCol[8],HIGH);
  digitalWrite(ledCol[3],HIGH);
  
  digitalWrite(ledCol[0],LOW);
  digitalWrite(ledCol[5],LOW);
  digitalWrite(ledCol[10],LOW);
  digitalWrite(ledCol[11],LOW);
  digitalWrite(ledCol[12],LOW);
  digitalWrite(ledCol[13],LOW);
  digitalWrite(ledCol[14],LOW);
  digitalWrite(ledCol[9],LOW);
  digitalWrite(ledCol[4],LOW);
  
  delay(10*n);
  
  digitalWrite(ledCol[0],HIGH);
  digitalWrite(ledCol[5],HIGH);
  digitalWrite(ledCol[10],HIGH);
  digitalWrite(ledCol[11],HIGH);
  digitalWrite(ledCol[12],HIGH);
  digitalWrite(ledCol[13],HIGH);
  digitalWrite(ledCol[14],HIGH);
  digitalWrite(ledCol[9],HIGH);
  digitalWrite(ledCol[4],HIGH);
  
  digitalWrite (ledCol[0],HIGH);
  digitalWrite (ledCol[1],HIGH);
  digitalWrite (ledCol[2],HIGH);
  digitalWrite (ledCol[3],HIGH);
  digitalWrite (ledCol[4],HIGH);
  digitalWrite (ledCol[5],HIGH);
  digitalWrite (ledCol[6],HIGH);
  digitalWrite (ledCol[7],HIGH);
  digitalWrite (ledCol[8],HIGH);
  digitalWrite (ledCol[9],HIGH);

  digitalWrite (ledCol[10],HIGH);
  digitalWrite (ledCol[11],HIGH);
  digitalWrite (ledCol[12],HIGH);
  digitalWrite (ledCol[13],HIGH);
  digitalWrite (ledCol[14],HIGH);

  
}

void firework()
{
  int n = 30;
  ledCol[0] = col11;
  ledCol[1] = col12;
  ledCol[2] = col13;
  ledCol[3] = col14;
  ledCol[4] = col15;
  ledCol[5] = col16;
  ledCol[6] = col17;
  ledCol[7] = col18;
  ledCol[8] = col19;
  ledCol[9] = col20;
  ledCol[10] = col21;
  ledCol[11] = col22;
  ledCol[12] = col23;
  ledCol[13] = col24;
  ledCol[14] = col25;
  
  digitalWrite (ledCol[2],LOW);
  delay(24*n + 500);
  digitalWrite (ledCol[2],HIGH);
  
  digitalWrite(ledCol[1],LOW);
  digitalWrite(ledCol[3],LOW);
  digitalWrite(ledCol[6],LOW);
  digitalWrite(ledCol[7],LOW);
  digitalWrite(ledCol[8],LOW);
  digitalWrite(ledCol[0],LOW);
  digitalWrite(ledCol[5],LOW);
  digitalWrite(ledCol[10],LOW);
  digitalWrite(ledCol[11],LOW);
  digitalWrite(ledCol[12],LOW);
  digitalWrite(ledCol[13],LOW);
  digitalWrite(ledCol[14],LOW);
  digitalWrite(ledCol[9],LOW);
  digitalWrite(ledCol[4],LOW);
  delay(11*n+1200);
  
  digitalWrite(ledCol[0],HIGH);
  digitalWrite(ledCol[5],HIGH);
  digitalWrite(ledCol[10],HIGH);
  digitalWrite(ledCol[11],HIGH);
  digitalWrite(ledCol[12],HIGH);
  digitalWrite(ledCol[13],HIGH);
  digitalWrite(ledCol[14],HIGH);
  digitalWrite(ledCol[9],HIGH);
  digitalWrite(ledCol[4],HIGH);
  digitalWrite(ledCol[1],HIGH);
  digitalWrite(ledCol[3],HIGH);
  digitalWrite(ledCol[6],HIGH);
  digitalWrite(ledCol[7],HIGH);
  digitalWrite(ledCol[8],HIGH);
  
  delay(n); 
  
  digitalWrite (ledCol[0],HIGH);
  digitalWrite (ledCol[1],HIGH);
  digitalWrite (ledCol[2],HIGH);
  digitalWrite (ledCol[3],HIGH);
  digitalWrite (ledCol[4],HIGH);
  digitalWrite (ledCol[5],HIGH);
  digitalWrite (ledCol[6],HIGH);
  digitalWrite (ledCol[7],HIGH);
  digitalWrite (ledCol[8],HIGH);
  digitalWrite (ledCol[9],HIGH);

  digitalWrite (ledCol[10],HIGH);
  digitalWrite (ledCol[11],HIGH);
  digitalWrite (ledCol[12],HIGH);
  digitalWrite (ledCol[13],HIGH);
  digitalWrite (ledCol[14],HIGH);
}

void lightning()
{
  int n = 10;
  int m;
  int p;
  int q = m - 2;
  
  ledCol[0] = col11;
  ledCol[1] = col12;
  ledCol[2] = col13;
  ledCol[3] = col14;
  ledCol[4] = col15;
  ledCol[5] = col16;
  ledCol[6] = col17;
  ledCol[7] = col18;
  ledCol[8] = col19;
  ledCol[9] = col20;
  ledCol[10] = col21;
  ledCol[11] = col22;
  ledCol[12] = col23;
  ledCol[13] = col24;
  ledCol[14] = col25;
 
   m = random(0,15);
   p = random(0,15);
  
  if(m==p)
  p = p + 1;
  digitalWrite(ledCol[m],LOW);
  digitalWrite(ledCol[p],LOW);
  digitalWrite(ledCol[q],LOW);
  delay(10*n); 
  digitalWrite(ledCol[m],HIGH);
  digitalWrite(ledCol[p],HIGH);
  digitalWrite(ledCol[q],HIGH);
  
  delay(500);
  
  for(int b=0;b<2;b++)
  {
  digitalWrite(ledCol[0],LOW);
  digitalWrite(ledCol[1],LOW);
  digitalWrite(ledCol[2],LOW);
  digitalWrite(ledCol[3],LOW);
  digitalWrite(ledCol[4],LOW);
  digitalWrite(ledCol[5],LOW);
  digitalWrite(ledCol[6],LOW);
  digitalWrite(ledCol[7],LOW);
  digitalWrite(ledCol[8],LOW);
  digitalWrite(ledCol[9],LOW);
  digitalWrite(ledCol[10],LOW);
  digitalWrite(ledCol[11],LOW);
  digitalWrite(ledCol[12],LOW);
  digitalWrite(ledCol[13],LOW);
  digitalWrite(ledCol[14],LOW);
  delay(500);
  digitalWrite(ledCol[0],HIGH);
  digitalWrite(ledCol[1],HIGH);
  digitalWrite(ledCol[2],HIGH);
  digitalWrite(ledCol[3],HIGH);
  digitalWrite(ledCol[4],HIGH);
  digitalWrite(ledCol[5],HIGH);
  digitalWrite(ledCol[6],HIGH);
  digitalWrite(ledCol[7],HIGH);
  digitalWrite(ledCol[8],HIGH);
  digitalWrite(ledCol[9],HIGH);
  digitalWrite(ledCol[10],HIGH);
  digitalWrite(ledCol[11],HIGH);
  digitalWrite(ledCol[12],HIGH);
  digitalWrite(ledCol[13],HIGH);
  digitalWrite(ledCol[14],HIGH);
  delay(500);
  }
  delay(1000);
  
  digitalWrite (ledCol[0],HIGH);
  digitalWrite (ledCol[1],HIGH);
  digitalWrite (ledCol[2],HIGH);
  digitalWrite (ledCol[3],HIGH);
  digitalWrite (ledCol[4],HIGH);
  digitalWrite (ledCol[5],HIGH);
  digitalWrite (ledCol[6],HIGH);
  digitalWrite (ledCol[7],HIGH);
  digitalWrite (ledCol[8],HIGH);
  digitalWrite (ledCol[9],HIGH);

  digitalWrite (ledCol[10],HIGH);
  digitalWrite (ledCol[11],HIGH);
  digitalWrite (ledCol[12],HIGH);
  digitalWrite (ledCol[13],HIGH);
  digitalWrite (ledCol[14],HIGH);

}



void rain()
{
  int n = 30;
  ledCol[0] = col11;
  ledCol[1] = col12;
  ledCol[2] = col13;
  ledCol[3] = col14;
  ledCol[4] = col15;
  ledCol[5] = col16;
  ledCol[6] = col17;
  ledCol[7] = col18;
  ledCol[8] = col19;
  ledCol[9] = col20;
  ledCol[10] = col21;
  ledCol[11] = col22;
  ledCol[12] = col23;
  ledCol[13] = col24;
  ledCol[14] = col25;
  
  digitalWrite (ledCol[0],LOW);
  digitalWrite (ledCol[1],LOW);
  digitalWrite (ledCol[2],LOW);
  digitalWrite (ledCol[3],LOW);
  digitalWrite (ledCol[4],LOW);
  digitalWrite (ledCol[5],LOW);
  digitalWrite (ledCol[6],LOW);
  digitalWrite (ledCol[7],LOW);
  digitalWrite (ledCol[8],LOW);
  digitalWrite (ledCol[9],LOW);
  digitalWrite (ledCol[10],LOW);
  digitalWrite (ledCol[11],LOW);
  digitalWrite (ledCol[12],LOW);
  digitalWrite (ledCol[13],LOW);
  digitalWrite (ledCol[14],LOW);
  
  delay(160*n);
  
  digitalWrite (ledCol[0],HIGH);
  digitalWrite (ledCol[1],HIGH);
  digitalWrite (ledCol[2],HIGH);
  digitalWrite (ledCol[3],HIGH);
  digitalWrite (ledCol[4],HIGH);
  digitalWrite (ledCol[5],HIGH);
  digitalWrite (ledCol[6],HIGH);
  digitalWrite (ledCol[7],HIGH);
  digitalWrite (ledCol[8],HIGH);
  digitalWrite (ledCol[9],HIGH);

  digitalWrite (ledCol[10],HIGH);
  digitalWrite (ledCol[11],HIGH);
  digitalWrite (ledCol[12],HIGH);
  digitalWrite (ledCol[13],HIGH);
  digitalWrite (ledCol[14],HIGH);
}

void heart()
{
  int n = 80;
  ledCol[0] = col11;
  ledCol[1] = col12;
  ledCol[2] = col13;
  ledCol[3] = col14;
  ledCol[4] = col15;
  ledCol[5] = col16;
  ledCol[6] = col17;
  ledCol[7] = col18;
  ledCol[8] = col19;
  ledCol[9] = col20;
  ledCol[10] = col21;
  ledCol[11] = col22;
  ledCol[12] = col23;
  ledCol[13] = col24;
  ledCol[14] = col25;
  
  digitalWrite(ledCol[0],LOW);
  digitalWrite(ledCol[4],LOW);
  digitalWrite(ledCol[6],LOW);
  digitalWrite(ledCol[8],LOW);
  digitalWrite(ledCol[12],LOW);
  
  digitalWrite(ledCol[1],LOW);
  digitalWrite(ledCol[2],LOW);
  digitalWrite(ledCol[3],LOW);
  digitalWrite(ledCol[5],HIGH);
  digitalWrite(ledCol[7],LOW);
  digitalWrite(ledCol[9],HIGH);
  digitalWrite(ledCol[10],HIGH);
  digitalWrite(ledCol[11],HIGH);
  digitalWrite(ledCol[13],HIGH);
  digitalWrite(ledCol[14],HIGH);
  
  delay(28*n + 2100);
  
  digitalWrite (ledCol[0],HIGH);
  digitalWrite (ledCol[1],HIGH);
  digitalWrite (ledCol[2],HIGH);
  digitalWrite (ledCol[3],HIGH);
  digitalWrite (ledCol[4],HIGH);
  digitalWrite (ledCol[5],HIGH);
  digitalWrite (ledCol[6],HIGH);
  digitalWrite (ledCol[7],HIGH);
  digitalWrite (ledCol[8],HIGH);
  digitalWrite (ledCol[9],HIGH);

  digitalWrite (ledCol[10],HIGH);
  digitalWrite (ledCol[11],HIGH);
  digitalWrite (ledCol[12],HIGH);
  digitalWrite (ledCol[13],HIGH);
  digitalWrite (ledCol[14],HIGH);
}

void wheel()
{
  int n = 75;
  ledCol[0] = col11;
  ledCol[1] = col12;
  ledCol[2] = col13;
  ledCol[3] = col14;
  ledCol[4] = col15;
  ledCol[5] = col16;
  ledCol[6] = col17;
  ledCol[7] = col18;
  ledCol[8] = col19;
  ledCol[9] = col20;
  ledCol[10] = col21;
  ledCol[11] = col22;
  ledCol[12] = col23;
  ledCol[13] = col24;
  ledCol[14] = col25;
  
  digitalWrite(ledCol[11],HIGH);
  digitalWrite(ledCol[13],HIGH);
  digitalWrite(ledCol[5],HIGH);
  digitalWrite(ledCol[9],HIGH);
  
  digitalWrite (ledCol[2],LOW);
  digitalWrite (ledCol[8],LOW);
  digitalWrite (ledCol[14],LOW);
  delay(n);
  digitalWrite (ledCol[2],HIGH);
  digitalWrite (ledCol[8],HIGH);
  digitalWrite (ledCol[14],HIGH);
  delay(n);
  
  digitalWrite (ledCol[7],LOW);
  digitalWrite (ledCol[12],LOW);
  digitalWrite (ledCol[2],LOW);
  delay(n);
  digitalWrite (ledCol[7],HIGH);
  digitalWrite (ledCol[12],HIGH);
  digitalWrite (ledCol[2],HIGH);
  delay(n);
  
  digitalWrite (ledCol[6],LOW);
  digitalWrite (ledCol[10],LOW);
  digitalWrite (ledCol[2],LOW);
  delay(n);
  digitalWrite (ledCol[6],HIGH);
  digitalWrite (ledCol[10],HIGH);
  digitalWrite (ledCol[2],HIGH);
  delay(n);
  
  digitalWrite (ledCol[0],LOW);
  digitalWrite (ledCol[1],LOW);
  digitalWrite (ledCol[2],LOW);
  digitalWrite (ledCol[3],LOW);
  digitalWrite (ledCol[4],LOW);
  delay(n);
  digitalWrite (ledCol[0],LOW);
  digitalWrite (ledCol[1],LOW);
  digitalWrite (ledCol[2],LOW);
  digitalWrite (ledCol[3],LOW);
  digitalWrite (ledCol[4],LOW);
  delay(n);
  
  digitalWrite (ledCol[0],HIGH);
  digitalWrite (ledCol[1],HIGH);
  digitalWrite (ledCol[2],HIGH);
  digitalWrite (ledCol[3],HIGH);
  digitalWrite (ledCol[4],HIGH);
  digitalWrite (ledCol[5],HIGH);
  digitalWrite (ledCol[6],HIGH);
  digitalWrite (ledCol[7],HIGH);
  digitalWrite (ledCol[8],HIGH);
  digitalWrite (ledCol[9],HIGH);

  digitalWrite (ledCol[10],HIGH);
  digitalWrite (ledCol[11],HIGH);
  digitalWrite (ledCol[12],HIGH);
  digitalWrite (ledCol[13],HIGH);
  digitalWrite (ledCol[14],HIGH);
}


void anti_wheel()
{
  int n = 75;
  ledCol[0] = col11;
  ledCol[1] = col12;
  ledCol[2] = col13;
  ledCol[3] = col14;
  ledCol[4] = col15;
  ledCol[5] = col16;
  ledCol[6] = col17;
  ledCol[7] = col18;
  ledCol[8] = col19;
  ledCol[9] = col20;
  ledCol[10] = col21;
  ledCol[11] = col22;
  ledCol[12] = col23;
  ledCol[13] = col24;
  ledCol[14] = col25;
  
  digitalWrite(ledCol[11],HIGH);
  digitalWrite(ledCol[13],HIGH);
  digitalWrite(ledCol[5],HIGH);
  digitalWrite(ledCol[9],HIGH);
 
  digitalWrite (ledCol[2],LOW);
  digitalWrite (ledCol[6],LOW);
  digitalWrite (ledCol[10],LOW);
  delay(n);
  digitalWrite (ledCol[2],HIGH);
  digitalWrite (ledCol[6],HIGH);
  digitalWrite (ledCol[10],HIGH);
  delay(n);
  
  digitalWrite (ledCol[7],LOW);
  digitalWrite (ledCol[12],LOW);
  digitalWrite (ledCol[2],LOW);
  delay(n);
  digitalWrite (ledCol[7],HIGH);
  digitalWrite (ledCol[12],HIGH);
  digitalWrite (ledCol[2],HIGH);
  delay(n);
  
  digitalWrite (ledCol[8],LOW);
  digitalWrite (ledCol[14],LOW);
  digitalWrite (ledCol[2],LOW);
  delay(n);
  digitalWrite (ledCol[8],HIGH);
  digitalWrite (ledCol[14],HIGH);
  digitalWrite (ledCol[2],HIGH);
  delay(n);
  
  digitalWrite (ledCol[0],LOW);
  digitalWrite (ledCol[1],LOW);
  digitalWrite (ledCol[2],LOW);
  digitalWrite (ledCol[3],LOW);
  digitalWrite (ledCol[4],LOW);
  delay(n);
  digitalWrite (ledCol[0],LOW);
  digitalWrite (ledCol[1],LOW);
  digitalWrite (ledCol[2],LOW);
  digitalWrite (ledCol[3],LOW);
  digitalWrite (ledCol[4],LOW);
  delay(n);
  
  digitalWrite (ledCol[0],HIGH);
  digitalWrite (ledCol[1],HIGH);
  digitalWrite (ledCol[2],HIGH);
  digitalWrite (ledCol[3],HIGH);
  digitalWrite (ledCol[4],HIGH);
  digitalWrite (ledCol[5],HIGH);
  digitalWrite (ledCol[6],HIGH);
  digitalWrite (ledCol[7],HIGH);
  digitalWrite (ledCol[8],HIGH);
  digitalWrite (ledCol[9],HIGH);

  digitalWrite (ledCol[10],HIGH);
  digitalWrite (ledCol[11],HIGH);
  digitalWrite (ledCol[12],HIGH);
  digitalWrite (ledCol[13],HIGH);
  digitalWrite (ledCol[14],HIGH);
 }
 
 
 void wheel_four()
{
  int n = 80;
  ledCol[0] = col11;
  ledCol[1] = col12;
  ledCol[2] = col14;
  ledCol[3] = col15;
  ledCol[4] = col19;
  ledCol[5] = col25;
  ledCol[6] = col18;
  ledCol[7] = col23;
  ledCol[8] = col17;
  ledCol[9] = col21;
  ledCol[10] = col13;
  
  digitalWrite(ledCol[5],HIGH);
  digitalWrite(ledCol[9],HIGH);
  digitalWrite(ledCol[11],HIGH);
  digitalWrite(ledCol[13],HIGH);
  
  digitalWrite(ledCol[0],LOW);
  digitalWrite(ledCol[1],LOW);
  digitalWrite(ledCol[10],LOW);
  digitalWrite(ledCol[2],LOW);
  digitalWrite(ledCol[3],LOW);
  digitalWrite(ledCol[6],LOW);
  digitalWrite(ledCol[7],LOW);
  delay(n);
  digitalWrite(ledCol[0],HIGH);
  digitalWrite(ledCol[1],HIGH);
  digitalWrite(ledCol[10],HIGH);
  digitalWrite(ledCol[2],HIGH);
  digitalWrite(ledCol[3],HIGH);
  digitalWrite(ledCol[6],HIGH);
  digitalWrite(ledCol[7],HIGH);
  delay(n);
  
  digitalWrite(ledCol[4],LOW);
  digitalWrite(ledCol[5],LOW);
  digitalWrite(ledCol[10],LOW);
  digitalWrite(ledCol[8],LOW);
  digitalWrite(ledCol[9],LOW);
  delay(n);
  digitalWrite(ledCol[4],HIGH);
  digitalWrite(ledCol[5],HIGH);
  digitalWrite(ledCol[10],HIGH);
  digitalWrite(ledCol[8],HIGH);
  digitalWrite(ledCol[9],HIGH);
  delay(n);
  
  digitalWrite (ledCol[0],HIGH);
  digitalWrite (ledCol[1],HIGH);
  digitalWrite (ledCol[2],HIGH);
  digitalWrite (ledCol[3],HIGH);
  digitalWrite (ledCol[4],HIGH);
  digitalWrite (ledCol[5],HIGH);
  digitalWrite (ledCol[6],HIGH);
  digitalWrite (ledCol[7],HIGH);
  digitalWrite (ledCol[8],HIGH);
  digitalWrite (ledCol[9],HIGH);

  digitalWrite (ledCol[10],HIGH);
  digitalWrite (ledCol[11],HIGH);
  digitalWrite (ledCol[12],HIGH);
  digitalWrite (ledCol[13],HIGH);
  digitalWrite (ledCol[14],HIGH);
}


void wheel_four_reverse()
{
  int n = 80;
  ledCol[0] = col11;
  ledCol[1] = col12;
  ledCol[2] = col14;
  ledCol[3] = col15;
  ledCol[4] = col19;
  ledCol[5] = col25;
  ledCol[6] = col18;
  ledCol[7] = col23;
  ledCol[8] = col17;
  ledCol[9] = col21;
  ledCol[10] = col13;
  
  digitalWrite(ledCol[5],HIGH);
  digitalWrite(ledCol[9],HIGH);
  digitalWrite(ledCol[11],HIGH);
  digitalWrite(ledCol[13],HIGH);
  
  
  digitalWrite(ledCol[4],LOW);
  digitalWrite(ledCol[5],LOW);
  digitalWrite(ledCol[10],LOW);
  digitalWrite(ledCol[8],LOW);
  digitalWrite(ledCol[9],LOW);
  delay(n);
  digitalWrite(ledCol[4],HIGH);
  digitalWrite(ledCol[5],HIGH);
  digitalWrite(ledCol[10],HIGH);
  digitalWrite(ledCol[8],HIGH);
  digitalWrite(ledCol[9],HIGH);
  delay(n);
  
  digitalWrite(ledCol[0],LOW);
  digitalWrite(ledCol[1],LOW);
  digitalWrite(ledCol[10],LOW);
  digitalWrite(ledCol[2],LOW);
  digitalWrite(ledCol[3],LOW);
  digitalWrite(ledCol[6],LOW);
  digitalWrite(ledCol[7],LOW);
  delay(n);
  digitalWrite(ledCol[0],HIGH);
  digitalWrite(ledCol[1],HIGH);
  digitalWrite(ledCol[10],HIGH);
  digitalWrite(ledCol[2],HIGH);
  digitalWrite(ledCol[3],HIGH);
  digitalWrite(ledCol[6],HIGH);
  digitalWrite(ledCol[7],HIGH);
  delay(n);
  
  digitalWrite (ledCol[0],HIGH);
  digitalWrite (ledCol[1],HIGH);
  digitalWrite (ledCol[2],HIGH);
  digitalWrite (ledCol[3],HIGH);
  digitalWrite (ledCol[4],HIGH);
  digitalWrite (ledCol[5],HIGH);
  digitalWrite (ledCol[6],HIGH);
  digitalWrite (ledCol[7],HIGH);
  digitalWrite (ledCol[8],HIGH);
  digitalWrite (ledCol[9],HIGH);

  digitalWrite (ledCol[10],HIGH);
  digitalWrite (ledCol[11],HIGH);
  digitalWrite (ledCol[12],HIGH);
  digitalWrite (ledCol[13],HIGH);
  digitalWrite (ledCol[14],HIGH);
}


void all_spark()
{
  
  int n = 20;
  
  ledCol[0] = col11;
  ledCol[1] = col12;
  ledCol[2] = col13;
  ledCol[3] = col14;
  ledCol[4] = col15;
  ledCol[5] = col16;
  ledCol[6] = col17;
  ledCol[7] = col18;
  ledCol[8] = col19;
  ledCol[9] = col20;
  ledCol[10] = col21;
  ledCol[11] = col22;
  ledCol[12] = col23;
  ledCol[13] = col24;
  ledCol[14] = col25;
 
  digitalWrite (ledCol[0],LOW);
  digitalWrite (ledCol[1],LOW);
  digitalWrite (ledCol[2],LOW);
  digitalWrite (ledCol[3],LOW);
  digitalWrite (ledCol[4],LOW);
  digitalWrite (ledCol[5],LOW);
  digitalWrite (ledCol[6],LOW);
  digitalWrite (ledCol[7],LOW);
  digitalWrite (ledCol[8],LOW);
  digitalWrite (ledCol[9],LOW);
  digitalWrite (ledCol[10],LOW);
  digitalWrite (ledCol[11],LOW);
  digitalWrite (ledCol[12],LOW);
  digitalWrite (ledCol[13],LOW);
  digitalWrite (ledCol[14],LOW); 
  
  delay(24*n + 1000);
  
  digitalWrite (ledCol[0],HIGH);
  digitalWrite (ledCol[1],HIGH);
  digitalWrite (ledCol[2],HIGH);
  digitalWrite (ledCol[3],HIGH);
  digitalWrite (ledCol[4],HIGH);
  digitalWrite (ledCol[5],HIGH);
  digitalWrite (ledCol[6],HIGH);
  digitalWrite (ledCol[7],HIGH);
  digitalWrite (ledCol[8],HIGH);
  digitalWrite (ledCol[9],HIGH);

  digitalWrite (ledCol[10],HIGH);
  digitalWrite (ledCol[11],HIGH);
  digitalWrite (ledCol[12],HIGH);
  digitalWrite (ledCol[13],HIGH);
  digitalWrite (ledCol[14],HIGH);
}

void all_spark_two()
{
  
  int n = 40;
  
  ledCol[0] = col11;
  ledCol[1] = col12;
  ledCol[2] = col13;
  ledCol[3] = col14;
  ledCol[4] = col15;
  ledCol[5] = col16;
  ledCol[6] = col17;
  ledCol[7] = col18;
  ledCol[8] = col19;
  ledCol[9] = col20;
  ledCol[10] = col21;
  ledCol[11] = col22;
  ledCol[12] = col23;
  ledCol[13] = col24;
  ledCol[14] = col25;
 
  digitalWrite (ledCol[0],LOW);
  digitalWrite (ledCol[1],LOW);
  digitalWrite (ledCol[2],LOW);
  digitalWrite (ledCol[3],LOW);
  digitalWrite (ledCol[4],LOW);
  digitalWrite (ledCol[5],LOW);
  digitalWrite (ledCol[6],LOW);
  digitalWrite (ledCol[7],LOW);
  digitalWrite (ledCol[8],LOW);
  digitalWrite (ledCol[9],LOW);
  digitalWrite (ledCol[10],LOW);
  digitalWrite (ledCol[11],LOW);
  digitalWrite (ledCol[12],LOW);
  digitalWrite (ledCol[13],LOW);
  digitalWrite (ledCol[14],LOW); 
  
  delay(10*n + 3200);
  
  digitalWrite (ledCol[0],HIGH);
  digitalWrite (ledCol[1],HIGH);
  digitalWrite (ledCol[2],HIGH);
  digitalWrite (ledCol[3],HIGH);
  digitalWrite (ledCol[4],HIGH);
  digitalWrite (ledCol[5],HIGH);
  digitalWrite (ledCol[6],HIGH);
  digitalWrite (ledCol[7],HIGH);
  digitalWrite (ledCol[8],HIGH);
  digitalWrite (ledCol[9],HIGH);

  digitalWrite (ledCol[10],HIGH);
  digitalWrite (ledCol[11],HIGH);
  digitalWrite (ledCol[12],HIGH);
  digitalWrite (ledCol[13],HIGH);
  digitalWrite (ledCol[14],HIGH);
  
}

void all_spark_three()
{
  int n = 40;
  ledCol[0] = col11;
  ledCol[1] = col12;
  ledCol[2] = col13;
  ledCol[3] = col14;
  ledCol[4] = col15;
  ledCol[5] = col16;
  ledCol[6] = col17;
  ledCol[7] = col18;
  ledCol[8] = col19;
  ledCol[9] = col20;
  ledCol[10] = col21;
  ledCol[11] = col22;
  ledCol[12] = col23;
  ledCol[13] = col24;
  ledCol[14] = col25;
  
  digitalWrite(ledCol[0],HIGH);
  digitalWrite(ledCol[1],HIGH);
  digitalWrite(ledCol[2],HIGH);
  digitalWrite(ledCol[3],HIGH);
  digitalWrite(ledCol[4],HIGH);
  digitalWrite(ledCol[5],HIGH);
  digitalWrite(ledCol[6],HIGH);
  digitalWrite(ledCol[7],HIGH);
  digitalWrite(ledCol[8],HIGH);
  digitalWrite(ledCol[9],HIGH);
  digitalWrite(ledCol[10],HIGH);
  digitalWrite(ledCol[11],HIGH);
  digitalWrite(ledCol[12],HIGH);
  digitalWrite(ledCol[13],HIGH);
  digitalWrite(ledCol[14],HIGH);
  
  digitalWrite(ledCol[0],LOW);
  digitalWrite(ledCol[5],LOW);
  digitalWrite(ledCol[10],LOW);
  delay(n);
  digitalWrite(ledCol[1],LOW);
  digitalWrite(ledCol[6],LOW);
  digitalWrite(ledCol[11],LOW);
  delay(n);
  digitalWrite(ledCol[2],LOW);
  digitalWrite(ledCol[7],LOW);
  digitalWrite(ledCol[12],LOW);
  delay(n);
  digitalWrite(ledCol[3],LOW);
  digitalWrite(ledCol[8],LOW);
  digitalWrite(ledCol[13],LOW);
  delay(n);
  digitalWrite(ledCol[4],LOW);
  digitalWrite(ledCol[9],LOW);
  digitalWrite(ledCol[14],LOW);
  delay(n+800);
  
  digitalWrite(ledCol[0],HIGH);
  digitalWrite(ledCol[1],HIGH);
  digitalWrite(ledCol[2],HIGH);
  digitalWrite(ledCol[3],HIGH);
  digitalWrite(ledCol[4],HIGH);
  digitalWrite(ledCol[5],HIGH);
  digitalWrite(ledCol[6],HIGH);
  digitalWrite(ledCol[7],HIGH);
  digitalWrite(ledCol[8],HIGH);
  digitalWrite(ledCol[9],HIGH);
  digitalWrite(ledCol[10],HIGH);
  digitalWrite(ledCol[11],HIGH);
  digitalWrite(ledCol[12],HIGH);
  digitalWrite(ledCol[13],HIGH);
  digitalWrite(ledCol[14],HIGH);
  delay(800);
  
  digitalWrite(ledCol[4],LOW);
  digitalWrite(ledCol[9],LOW);
  digitalWrite(ledCol[14],LOW);
  delay(n);
  digitalWrite(ledCol[3],LOW);
  digitalWrite(ledCol[8],LOW);
  digitalWrite(ledCol[13],LOW);
  delay(n);
  digitalWrite(ledCol[2],LOW);
  digitalWrite(ledCol[7],LOW);
  digitalWrite(ledCol[12],LOW);
  delay(n);
  digitalWrite(ledCol[1],LOW);
  digitalWrite(ledCol[6],LOW);
  digitalWrite(ledCol[11],LOW);
  delay(n);
  digitalWrite(ledCol[0],LOW);
  digitalWrite(ledCol[5],LOW);
  digitalWrite(ledCol[10],LOW);
  delay(n+800);
  
  digitalWrite(ledCol[0],HIGH);
  digitalWrite(ledCol[1],HIGH);
  digitalWrite(ledCol[2],HIGH);
  digitalWrite(ledCol[3],HIGH);
  digitalWrite(ledCol[4],HIGH);
  digitalWrite(ledCol[5],HIGH);
  digitalWrite(ledCol[6],HIGH);
  digitalWrite(ledCol[7],HIGH);
  digitalWrite(ledCol[8],HIGH);
  digitalWrite(ledCol[9],HIGH);
  digitalWrite(ledCol[10],HIGH);
  digitalWrite(ledCol[11],HIGH);
  digitalWrite(ledCol[12],HIGH);
  digitalWrite(ledCol[13],HIGH);
  digitalWrite(ledCol[14],HIGH);
  delay(800);
 
  digitalWrite (ledCol[0],HIGH);
  digitalWrite (ledCol[1],HIGH);
  digitalWrite (ledCol[2],HIGH);
  digitalWrite (ledCol[3],HIGH);
  digitalWrite (ledCol[4],HIGH);
  digitalWrite (ledCol[5],HIGH);
  digitalWrite (ledCol[6],HIGH);
  digitalWrite (ledCol[7],HIGH);
  digitalWrite (ledCol[8],HIGH);
  digitalWrite (ledCol[9],HIGH);

  digitalWrite (ledCol[10],HIGH);
  digitalWrite (ledCol[11],HIGH);
  digitalWrite (ledCol[12],HIGH);
  digitalWrite (ledCol[13],HIGH);
  digitalWrite (ledCol[14],HIGH);
 
}

void allSpark_four()
{
  int n = 70;
  
  ledCol[0] = col11;
  ledCol[1] = col12;
  ledCol[2] = col13;
  ledCol[3] = col14;
  ledCol[4] = col15;
  ledCol[5] = col16;
  ledCol[6] = col17;
  ledCol[7] = col18;
  ledCol[8] = col19;
  ledCol[9] = col20;
  ledCol[10] = col21;
  ledCol[11] = col22;
  ledCol[12] = col23;
  ledCol[13] = col24;
  ledCol[14] = col25;
 
  digitalWrite (ledCol[0],LOW);
  digitalWrite (ledCol[1],LOW);
  digitalWrite (ledCol[2],LOW);
  digitalWrite (ledCol[3],LOW);
  digitalWrite (ledCol[4],LOW);
  digitalWrite (ledCol[5],LOW);
  digitalWrite (ledCol[6],LOW);
  digitalWrite (ledCol[7],LOW);
  digitalWrite (ledCol[8],LOW);
  digitalWrite (ledCol[9],LOW);
  digitalWrite (ledCol[10],LOW);
  digitalWrite (ledCol[11],LOW);
  digitalWrite (ledCol[12],LOW);
  digitalWrite (ledCol[13],LOW);
  digitalWrite (ledCol[14],LOW);
 
  delay(2*n);
  
  digitalWrite (ledCol[0],HIGH);
  digitalWrite (ledCol[1],HIGH);
  digitalWrite (ledCol[2],HIGH);
  digitalWrite (ledCol[3],HIGH);
  digitalWrite (ledCol[4],HIGH);
  digitalWrite (ledCol[5],HIGH);
  digitalWrite (ledCol[6],HIGH);
  digitalWrite (ledCol[7],HIGH);
  digitalWrite (ledCol[8],HIGH);
  digitalWrite (ledCol[9],HIGH);

  digitalWrite (ledCol[10],HIGH);
  digitalWrite (ledCol[11],HIGH);
  digitalWrite (ledCol[12],HIGH);
  digitalWrite (ledCol[13],HIGH);
  digitalWrite (ledCol[14],HIGH);
}

void allSpark_five()
{
  int n = 50;
  
  ledCol[0] = col11;
  ledCol[1] = col12;
  ledCol[2] = col13;
  ledCol[3] = col14;
  ledCol[4] = col15;
  ledCol[5] = col16;
  ledCol[6] = col17;
  ledCol[7] = col18;
  ledCol[8] = col19;
  ledCol[9] = col20;
  ledCol[10] = col21;
  ledCol[11] = col22;
  ledCol[12] = col23;
  ledCol[13] = col24;
  ledCol[14] = col25;
 
  digitalWrite(ledCol[0],LOW);
  digitalWrite(ledCol[9],LOW);
  digitalWrite(ledCol[10],LOW);
  
  delay(n);
  
  digitalWrite(ledCol[1],LOW);
  digitalWrite(ledCol[8],LOW);
  digitalWrite(ledCol[11],LOW);
  delay(n);
  
  
  digitalWrite(ledCol[2],LOW);
  digitalWrite(ledCol[7],LOW);
  digitalWrite(ledCol[12],LOW);
  delay(n);
  
  
  digitalWrite(ledCol[3],LOW);
  digitalWrite(ledCol[6],LOW);
  digitalWrite(ledCol[13],LOW);
  delay(n);
  
  
  
  digitalWrite(ledCol[4],LOW);
  digitalWrite(ledCol[5],LOW);
  digitalWrite(ledCol[14],LOW);
  delay(n+800);
  
  digitalWrite(ledCol[4],HIGH);
  digitalWrite(ledCol[5],HIGH);
  digitalWrite(ledCol[14],HIGH);
  delay(n);
  
  
  
  digitalWrite(ledCol[3],HIGH);
  digitalWrite(ledCol[6],HIGH);
  digitalWrite(ledCol[13],HIGH);
  delay(n);
  
  
  digitalWrite(ledCol[2],HIGH);
  digitalWrite(ledCol[7],HIGH);
  digitalWrite(ledCol[12],HIGH);
  delay(n);
  
  
  digitalWrite(ledCol[1],HIGH);
  digitalWrite(ledCol[8],HIGH);
  digitalWrite(ledCol[11],HIGH);
  delay(n);
  
  
  digitalWrite(ledCol[0],HIGH);
  digitalWrite(ledCol[9],HIGH);
  digitalWrite(ledCol[10],HIGH);
  delay(n); 
  
  delay(800);
  
  digitalWrite (ledCol[0],HIGH);
  digitalWrite (ledCol[1],HIGH);
  digitalWrite (ledCol[2],HIGH);
  digitalWrite (ledCol[3],HIGH);
  digitalWrite (ledCol[4],HIGH);
  digitalWrite (ledCol[5],HIGH);
  digitalWrite (ledCol[6],HIGH);
  digitalWrite (ledCol[7],HIGH);
  digitalWrite (ledCol[8],HIGH);
  digitalWrite (ledCol[9],HIGH);

  digitalWrite (ledCol[10],HIGH);
  digitalWrite (ledCol[11],HIGH);
  digitalWrite (ledCol[12],HIGH);
  digitalWrite (ledCol[13],HIGH);
  digitalWrite (ledCol[14],HIGH);
}

void verticalClimbing_four()
{
  int n = 40;
  
  ledCol[0] = col11;
  ledCol[1] = col12;
  ledCol[2] = col13;
  ledCol[3] = col14;
  ledCol[4] = col15;
  ledCol[5] = col16;
  ledCol[6] = col17;
  ledCol[7] = col18;
  ledCol[8] = col19;
  ledCol[9] = col20;
  ledCol[10] = col21;
  ledCol[11] = col22;
  ledCol[12] = col23;
  ledCol[13] = col24;
  ledCol[14] = col25;
  
  digitalWrite(ledCol[2],LOW);
  digitalWrite(ledCol[7],LOW);
  digitalWrite(ledCol[12],LOW);
  
  digitalWrite(ledCol[14],LOW);
  digitalWrite(ledCol[13],LOW);
  delay(n+800);
  digitalWrite(ledCol[14],HIGH);
  digitalWrite(ledCol[13],HIGH);
  delay(n);
  
  digitalWrite(ledCol[9],LOW);
  digitalWrite(ledCol[8],LOW);
  delay(n);
  digitalWrite(ledCol[9],HIGH);
  digitalWrite(ledCol[8],HIGH);
  delay(n);
  
  digitalWrite(ledCol[0],LOW);
  digitalWrite(ledCol[1],LOW);
  digitalWrite(ledCol[3],LOW);
  digitalWrite(ledCol[4],LOW);
  delay(n);
  digitalWrite(ledCol[0],HIGH);
  digitalWrite(ledCol[1],HIGH);
  digitalWrite(ledCol[3],HIGH);
  digitalWrite(ledCol[4],HIGH);
  delay(n);
  
  digitalWrite(ledCol[5],LOW);
  digitalWrite(ledCol[6],LOW);
  delay(n);
  digitalWrite(ledCol[5],HIGH);
  digitalWrite(ledCol[6],HIGH);
  delay(n);
  
  digitalWrite(ledCol[10],LOW);
  digitalWrite(ledCol[11],LOW);
  delay(n+800);
  digitalWrite(ledCol[10],HIGH);
  digitalWrite(ledCol[11],HIGH);
  delay(n);
  
  digitalWrite(ledCol[10],LOW);
  digitalWrite(ledCol[11],LOW);
  delay(n+800);
  digitalWrite(ledCol[10],HIGH);
  digitalWrite(ledCol[11],HIGH);
  delay(n);
  
  digitalWrite(ledCol[5],LOW);
  digitalWrite(ledCol[6],LOW);
  delay(n);
  digitalWrite(ledCol[5],HIGH);
  digitalWrite(ledCol[6],HIGH);
  delay(n);
  
  digitalWrite(ledCol[0],LOW);
  digitalWrite(ledCol[1],LOW);
  digitalWrite(ledCol[3],LOW);
  digitalWrite(ledCol[4],LOW);
  delay(n);
  digitalWrite(ledCol[0],HIGH);
  digitalWrite(ledCol[1],HIGH);
  digitalWrite(ledCol[3],HIGH);
  digitalWrite(ledCol[4],HIGH);
  delay(n);
  
  digitalWrite(ledCol[9],LOW);
  digitalWrite(ledCol[8],LOW);
  delay(n);
  digitalWrite(ledCol[9],HIGH);
  digitalWrite(ledCol[8],HIGH);
  delay(n);
  
  digitalWrite(ledCol[14],LOW);
  digitalWrite(ledCol[13],LOW);
  delay(n+800);
  digitalWrite(ledCol[14],HIGH);
  digitalWrite(ledCol[13],HIGH);
  delay(n); 
  
  digitalWrite (ledCol[0],HIGH);
  digitalWrite (ledCol[1],HIGH);
  digitalWrite (ledCol[2],HIGH);
  digitalWrite (ledCol[3],HIGH);
  digitalWrite (ledCol[4],HIGH);
  digitalWrite (ledCol[5],HIGH);
  digitalWrite (ledCol[6],HIGH);
  digitalWrite (ledCol[7],HIGH);
  digitalWrite (ledCol[8],HIGH);
  digitalWrite (ledCol[9],HIGH);
  
  digitalWrite (ledCol[10],HIGH);
  digitalWrite (ledCol[11],HIGH);
  digitalWrite (ledCol[12],HIGH);
  digitalWrite (ledCol[13],HIGH);
  digitalWrite (ledCol[14],HIGH);

}

void berlin_wall()
{
  int n = 50;
  
  ledCol[0] = col11;
  ledCol[1] = col12;
  ledCol[2] = col13;
  ledCol[3] = col14;
  ledCol[4] = col15;
  ledCol[5] = col16;
  ledCol[6] = col17;
  ledCol[7] = col18;
  ledCol[8] = col19;
  ledCol[9] = col20;
  ledCol[10] = col21;
  ledCol[11] = col22;
  ledCol[12] = col23;
  ledCol[13] = col24;
  ledCol[14] = col25;
  
  digitalWrite(ledCol[1],HIGH);
  digitalWrite(ledCol[2],HIGH);
  digitalWrite(ledCol[3],HIGH);
  digitalWrite(ledCol[6],HIGH);
  digitalWrite(ledCol[7],HIGH);
  digitalWrite(ledCol[8],HIGH);
  
  
  for (int a=0;a<5;a++)
  {
  delay(14*n);
  digitalWrite(ledCol[4],HIGH);
  delay(n);
  digitalWrite(ledCol[4],LOW);
  delay(n);
  digitalWrite(ledCol[9],HIGH);
  delay(n);
  digitalWrite(ledCol[9],LOW);
  delay(n);
  digitalWrite(ledCol[14],HIGH);
  delay(n);
  digitalWrite(ledCol[14],LOW);
  delay(n);
  digitalWrite(ledCol[13],HIGH);
  delay(n);
  digitalWrite(ledCol[13],LOW);
  delay(n);
  digitalWrite(ledCol[12],HIGH);
  delay(n);
  digitalWrite(ledCol[12],LOW);
  delay(n);
  digitalWrite(ledCol[11],HIGH);
  delay(n);
  digitalWrite(ledCol[11],LOW);
  delay(n);
  digitalWrite(ledCol[10],HIGH);
  delay(n);
  digitalWrite(ledCol[10],LOW);
  delay(n);
  digitalWrite(ledCol[5],HIGH);
  delay(n);
  digitalWrite(ledCol[5],LOW);
  delay(n);
   digitalWrite(ledCol[0],HIGH);
  delay(n);
  digitalWrite(ledCol[0],LOW);
  delay(n);
  }
  delay(5*n+800); 
  
  digitalWrite (ledCol[0],HIGH);
  digitalWrite (ledCol[1],HIGH);
  digitalWrite (ledCol[2],HIGH);
  digitalWrite (ledCol[3],HIGH);
  digitalWrite (ledCol[4],HIGH);
  digitalWrite (ledCol[5],HIGH);
  digitalWrite (ledCol[6],HIGH);
  digitalWrite (ledCol[7],HIGH);
  digitalWrite (ledCol[8],HIGH);
  digitalWrite (ledCol[9],HIGH);

  digitalWrite (ledCol[10],HIGH);
  digitalWrite (ledCol[11],HIGH);
  digitalWrite (ledCol[12],HIGH);
  digitalWrite (ledCol[13],HIGH);
  digitalWrite (ledCol[14],HIGH);

}

void bigbang()
{
  int n = 80;
  
  ledCol[0] = col11;
  ledCol[1] = col12;
  ledCol[2] = col13;
  ledCol[3] = col14;
  ledCol[4] = col15;
  ledCol[5] = col16;
  ledCol[6] = col17;
  ledCol[7] = col18;
  ledCol[8] = col19;
  ledCol[9] = col20;
  ledCol[10] = col21;
  ledCol[11] = col22;
  ledCol[12] = col23;
  ledCol[13] = col24;
  ledCol[14] = col25;
  
  digitalWrite(ledCol[0],LOW);
  digitalWrite(ledCol[4],LOW);
  delay(n);
  digitalWrite(ledCol[0],HIGH);
  digitalWrite(ledCol[4],HIGH);
  delay(n);
   
  digitalWrite(ledCol[1],LOW);
  digitalWrite(ledCol[3],LOW);
  delay(n);
  digitalWrite(ledCol[1],HIGH);
  digitalWrite(ledCol[3],HIGH);
  delay(n);
  
  for(int a=0;a<3;a++)
  {
  digitalWrite(ledCol[2],LOW);
  delay(n);
  digitalWrite(ledCol[2],HIGH);
  delay(n);
  delay(500);
  }
  
  digitalWrite(ledCol[1],LOW);
  digitalWrite(ledCol[2],LOW);
  digitalWrite(ledCol[3],LOW);
  digitalWrite(ledCol[6],LOW);
  digitalWrite(ledCol[7],LOW);
  digitalWrite(ledCol[8],LOW);
 
  delay(1000);
 
  digitalWrite(ledCol[0],LOW);
  digitalWrite(ledCol[5],LOW);
  digitalWrite(ledCol[10],LOW);
  digitalWrite(ledCol[11],LOW);
  digitalWrite(ledCol[12],LOW);
  digitalWrite(ledCol[13],LOW);
  digitalWrite(ledCol[14],LOW);
  digitalWrite(ledCol[9],LOW);
  digitalWrite(ledCol[4],LOW);
   
  delay(1000);
  
  digitalWrite(ledCol[0],HIGH);
  digitalWrite(ledCol[5],HIGH);
  digitalWrite(ledCol[10],HIGH);
  digitalWrite(ledCol[11],HIGH);
  digitalWrite(ledCol[12],HIGH);
  digitalWrite(ledCol[13],HIGH);
  digitalWrite(ledCol[14],HIGH);
  digitalWrite(ledCol[9],HIGH);
  digitalWrite(ledCol[4],HIGH);
  
  delay(500);
  
  digitalWrite(ledCol[1],HIGH);
  digitalWrite(ledCol[2],HIGH);
  digitalWrite(ledCol[3],HIGH);
  digitalWrite(ledCol[6],HIGH);
  digitalWrite(ledCol[7],HIGH);
  digitalWrite(ledCol[8],HIGH);
  
  delay(1000);
  
  digitalWrite (ledCol[0],HIGH);
  digitalWrite (ledCol[1],HIGH);
  digitalWrite (ledCol[2],HIGH);
  digitalWrite (ledCol[3],HIGH);
  digitalWrite (ledCol[4],HIGH);
  digitalWrite (ledCol[5],HIGH);
  digitalWrite (ledCol[6],HIGH);
  digitalWrite (ledCol[7],HIGH);
  digitalWrite (ledCol[8],HIGH);
  digitalWrite (ledCol[9],HIGH);

  digitalWrite (ledCol[10],HIGH);
  digitalWrite (ledCol[11],HIGH);
  digitalWrite (ledCol[12],HIGH);
  digitalWrite (ledCol[13],HIGH);
  digitalWrite (ledCol[14],HIGH);

}

void boxPattern_2()
{
  int n = 20;
  
  ledCol[0] = col11;
  ledCol[1] = col12;
  ledCol[2] = col13;
  ledCol[3] = col14;
  ledCol[4] = col15;
  ledCol[5] = col16;
  ledCol[6] = col17;
  ledCol[7] = col18;
  ledCol[8] = col19;
  ledCol[9] = col20;
  ledCol[10] = col21;
  ledCol[11] = col22;
  ledCol[12] = col23;
  ledCol[13] = col24;
  ledCol[14] = col25;
  
  for (int a=0;a<=2;a++)
  {
  delay(14*n);
  digitalWrite(ledCol[0],LOW);
  delay(n);
  digitalWrite(ledCol[0],HIGH);
  delay(n);
  digitalWrite(ledCol[5],LOW);
  delay(n);
  digitalWrite(ledCol[5],HIGH);
  delay(n);
  digitalWrite(ledCol[10],LOW);
  delay(n);
  digitalWrite(ledCol[10],HIGH);
  delay(n);
  digitalWrite(ledCol[11],LOW);
  delay(n);
  digitalWrite(ledCol[11],HIGH);
  delay(n);
  digitalWrite(ledCol[12],LOW);
  delay(n);
  digitalWrite(ledCol[12],HIGH);
  delay(n);
  digitalWrite(ledCol[13],LOW);
  delay(n);
  digitalWrite(ledCol[13],HIGH);
  delay(n);
  digitalWrite(ledCol[14],LOW);
  delay(n);
  digitalWrite(ledCol[14],HIGH);
  delay(n);
  digitalWrite(ledCol[9],LOW);
  delay(n);
  digitalWrite(ledCol[9],HIGH);
  delay(n);
   digitalWrite(ledCol[4],LOW);
  delay(n);
  digitalWrite(ledCol[4],HIGH);
  delay(n);
  }
  for (int a=0;a<=2;a++)
  {
  delay(6*n);  
  digitalWrite(ledCol[1],LOW);
  delay(n);
  digitalWrite(ledCol[1],HIGH);
  delay(n);
  digitalWrite(ledCol[6],LOW);
  delay(n);
  digitalWrite(ledCol[6],HIGH);
  delay(n);
  digitalWrite(ledCol[7],LOW);
  delay(n);
  digitalWrite(ledCol[7],HIGH);
  delay(n);
  digitalWrite(ledCol[8],LOW);
  delay(n);
  digitalWrite(ledCol[8],HIGH);
  delay(n);
  digitalWrite(ledCol[3],LOW);
  delay(n);
  digitalWrite(ledCol[3],HIGH);
  delay(n);
}
 for (int a=0;a<=2;a++){
  digitalWrite(ledCol[2],LOW);
  delay(n);
  digitalWrite(ledCol[2],HIGH);
  delay(n);
}
  digitalWrite (ledCol[0],HIGH);
  digitalWrite (ledCol[1],HIGH);
  digitalWrite (ledCol[2],HIGH);
  digitalWrite (ledCol[3],HIGH);
  digitalWrite (ledCol[4],HIGH);
  digitalWrite (ledCol[5],HIGH);
  digitalWrite (ledCol[6],HIGH);
  digitalWrite (ledCol[7],HIGH);
  digitalWrite (ledCol[8],HIGH);
  digitalWrite (ledCol[9],HIGH);

  digitalWrite (ledCol[10],HIGH);
  digitalWrite (ledCol[11],HIGH);
  digitalWrite (ledCol[12],HIGH);
  digitalWrite (ledCol[13],HIGH);
  digitalWrite (ledCol[14],HIGH);
}

void boxPattern_3()
{
  int n = 50;
  
  ledCol[0] = col11;
  ledCol[1] = col12;
  ledCol[2] = col13;
  ledCol[3] = col14;
  ledCol[4] = col15;
  ledCol[5] = col16;
  ledCol[6] = col17;
  ledCol[7] = col18;
  ledCol[8] = col19;
  ledCol[9] = col20;
  ledCol[10] = col21;
  ledCol[11] = col22;
  ledCol[12] = col23;
  ledCol[13] = col24;
  ledCol[14] = col25;
  
  delay(7*n);
  digitalWrite(ledCol[0],LOW);
  delay(n);
  
  digitalWrite(ledCol[5],LOW);
  delay(n);
  
  digitalWrite(ledCol[10],LOW);
  delay(n);
  
  digitalWrite(ledCol[11],LOW);
  delay(n);
  
  digitalWrite(ledCol[12],LOW);
  delay(n);
  
  digitalWrite(ledCol[13],LOW);
  delay(n);
  
  digitalWrite(ledCol[14],LOW);
  delay(n);
  
  digitalWrite(ledCol[9],LOW);
  delay(n);
  
  digitalWrite(ledCol[4],LOW);
  delay(n);
  
  delay(800);
  
  digitalWrite(ledCol[4],HIGH);
  delay(n);
  
  digitalWrite(ledCol[9],HIGH);
  delay(n);

  digitalWrite(ledCol[14],HIGH);
  delay(n); 
  
  digitalWrite(ledCol[13],HIGH);
  delay(n);
  
  digitalWrite(ledCol[12],HIGH);
  delay(n);
  
  digitalWrite(ledCol[11],HIGH);
  delay(n);
  
  digitalWrite(ledCol[10],HIGH);
  delay(n);
  
  digitalWrite(ledCol[5],HIGH);
  delay(n);
  
  digitalWrite(ledCol[0],HIGH);
  delay(n);
  
  delay(7*n + 800);

  digitalWrite (ledCol[0],HIGH);
  digitalWrite (ledCol[1],HIGH);
  digitalWrite (ledCol[2],HIGH);
  digitalWrite (ledCol[3],HIGH);
  digitalWrite (ledCol[4],HIGH);
  digitalWrite (ledCol[5],HIGH);
  digitalWrite (ledCol[6],HIGH);
  digitalWrite (ledCol[7],HIGH);
  digitalWrite (ledCol[8],HIGH);
  digitalWrite (ledCol[9],HIGH);

  digitalWrite (ledCol[10],HIGH);
  digitalWrite (ledCol[11],HIGH);
  digitalWrite (ledCol[12],HIGH);
  digitalWrite (ledCol[13],HIGH);
  digitalWrite (ledCol[14],HIGH);
}

void boxPattern_4()
{
  int n = 50;
  
  ledCol[0] = col11;
  ledCol[1] = col12;
  ledCol[2] = col13;
  ledCol[3] = col14;
  ledCol[4] = col15;
  ledCol[5] = col16;
  ledCol[6] = col17;
  ledCol[7] = col18;
  ledCol[8] = col19;
  ledCol[9] = col20;
  ledCol[10] = col21;
  ledCol[11] = col22;
  ledCol[12] = col23;
  ledCol[13] = col24;
  ledCol[14] = col25;
  
  delay(7*n);
  digitalWrite(ledCol[4],LOW);
  delay(n);
  
  digitalWrite(ledCol[9],LOW);
  delay(n);
  
  digitalWrite(ledCol[14],LOW);
  delay(n);
  
  digitalWrite(ledCol[13],LOW);
  delay(n);
  
  digitalWrite(ledCol[12],LOW);
  delay(n);
  
  digitalWrite(ledCol[11],LOW);
  delay(n);
  
  digitalWrite(ledCol[10],LOW);
  delay(n);
  
  digitalWrite(ledCol[5],LOW);
  delay(n);
  
  digitalWrite(ledCol[0],LOW);
  delay(n);
  
  delay(800);
  
  digitalWrite(ledCol[0],HIGH);
  delay(n);
  
  digitalWrite(ledCol[5],HIGH);
  delay(n);

  digitalWrite(ledCol[10],HIGH);
  delay(n); 
  
  digitalWrite(ledCol[11],HIGH);
  delay(n);
  
  digitalWrite(ledCol[12],HIGH);
  delay(n);
  
  digitalWrite(ledCol[13],HIGH);
  delay(n);
  
  digitalWrite(ledCol[14],HIGH);
  delay(n);
  
  digitalWrite(ledCol[9],HIGH);
  delay(n);
  
  digitalWrite(ledCol[4],HIGH);
  delay(n);
  
  delay(7*n + 800);

  digitalWrite (ledCol[0],HIGH);
  digitalWrite (ledCol[1],HIGH);
  digitalWrite (ledCol[2],HIGH);
  digitalWrite (ledCol[3],HIGH);
  digitalWrite (ledCol[4],HIGH);
  digitalWrite (ledCol[5],HIGH);
  digitalWrite (ledCol[6],HIGH);
  digitalWrite (ledCol[7],HIGH);
  digitalWrite (ledCol[8],HIGH);
  digitalWrite (ledCol[9],HIGH);

  digitalWrite (ledCol[10],HIGH);
  digitalWrite (ledCol[11],HIGH);
  digitalWrite (ledCol[12],HIGH);
  digitalWrite (ledCol[13],HIGH);
  digitalWrite (ledCol[14],HIGH);
}

void breeze()
{
  int n = 100;
  ledCol[0] = col11;
  ledCol[1] = col12;
  ledCol[2] = col13;
  ledCol[3] = col14;
  ledCol[4] = col15;
  ledCol[5] = col16;
  ledCol[6] = col17;
  ledCol[7] = col18;
  ledCol[8] = col19;
  ledCol[9] = col20;
  ledCol[10] = col21;
  ledCol[11] = col22;
  ledCol[12] = col23;
  ledCol[13] = col24;
  ledCol[14] = col25;
 
  digitalWrite (ledCol[0],LOW);
  digitalWrite (ledCol[1],LOW);
  digitalWrite (ledCol[2],LOW);
  digitalWrite (ledCol[3],LOW);
  digitalWrite (ledCol[4],LOW);
  digitalWrite (ledCol[5],LOW);
  digitalWrite (ledCol[6],LOW);
  digitalWrite (ledCol[7],LOW);
  digitalWrite (ledCol[8],LOW);
  digitalWrite (ledCol[9],LOW);
  digitalWrite (ledCol[10],LOW);
  digitalWrite (ledCol[11],LOW);
  digitalWrite (ledCol[12],LOW);
  digitalWrite (ledCol[13],LOW);
  digitalWrite (ledCol[14],LOW);
 
  delay(8*n);
 
 digitalWrite (ledCol[0],HIGH);
  digitalWrite (ledCol[1],HIGH);
  digitalWrite (ledCol[2],HIGH);
  digitalWrite (ledCol[3],HIGH);
  digitalWrite (ledCol[4],HIGH);
  digitalWrite (ledCol[5],HIGH);
  digitalWrite (ledCol[6],HIGH);
  digitalWrite (ledCol[7],HIGH);
  digitalWrite (ledCol[8],HIGH);
  digitalWrite (ledCol[9],HIGH);

  digitalWrite (ledCol[10],HIGH);
  digitalWrite (ledCol[11],HIGH);
  digitalWrite (ledCol[12],HIGH);
  digitalWrite (ledCol[13],HIGH);
  digitalWrite (ledCol[14],HIGH); 
}

void fireflies()
{
  int n = 50;
  int m;
  delay(500);
  ledCol[0] = col11;
  ledCol[1] = col12;
  ledCol[2] = col13;
  ledCol[3] = col14;
  ledCol[4] = col15;
  ledCol[5] = col16;
  ledCol[6] = col17;
  ledCol[7] = col18;
  ledCol[8] = col19;
  ledCol[9] = col20;
  ledCol[10] = col21;
  ledCol[11] = col22;
  ledCol[12] = col23;
  ledCol[13] = col24;
  ledCol[14] = col25;
  
  m = random(0,15);
  for(int a=0;a<5;a++)
  { 
  digitalWrite (ledCol[m],LOW);
  delay(n);
  digitalWrite (ledCol[m],HIGH);
  delay(n);
  }
  
  digitalWrite (ledCol[0],HIGH);
  digitalWrite (ledCol[1],HIGH);
  digitalWrite (ledCol[2],HIGH);
  digitalWrite (ledCol[3],HIGH);
  digitalWrite (ledCol[4],HIGH);
  digitalWrite (ledCol[5],HIGH);
  digitalWrite (ledCol[6],HIGH);
  digitalWrite (ledCol[7],HIGH);
  digitalWrite (ledCol[8],HIGH);
  digitalWrite (ledCol[9],HIGH);

  digitalWrite (ledCol[10],HIGH);
  digitalWrite (ledCol[11],HIGH);
  digitalWrite (ledCol[12],HIGH);
  digitalWrite (ledCol[13],HIGH);
  digitalWrite (ledCol[14],HIGH);
}

void pendulum()
{
 int n = 15;
  
  ledCol[0] = col11;
  ledCol[1] = col12;
  ledCol[2] = col13;
  ledCol[3] = col14;
  ledCol[4] = col15;
  ledCol[5] = col16;
  ledCol[6] = col17;
  ledCol[7] = col18;
  ledCol[8] = col19;
  ledCol[9] = col20;
  ledCol[10] = col21;
  ledCol[11] = col22;
  ledCol[12] = col23;
  ledCol[13] = col24;
  ledCol[14] = col25;
 
 
  digitalWrite(ledCol[0],LOW);
  digitalWrite(ledCol[5],LOW);
  digitalWrite(ledCol[10],LOW);
  delay(n);
  digitalWrite(ledCol[0],HIGH);
  digitalWrite(ledCol[5],HIGH);
  digitalWrite(ledCol[10],HIGH);
  delay(n); 
  
  digitalWrite(ledCol[1],LOW);
  digitalWrite(ledCol[6],LOW);
  digitalWrite(ledCol[11],LOW);
  delay(n);
  digitalWrite(ledCol[1],HIGH);
  digitalWrite(ledCol[6],HIGH);
  digitalWrite(ledCol[11],HIGH);
  delay(n); 
  
  digitalWrite(ledCol[2],LOW);
  digitalWrite(ledCol[7],LOW);
  digitalWrite(ledCol[12],LOW);
  delay(n);
  digitalWrite(ledCol[2],HIGH);
  digitalWrite(ledCol[7],HIGH);
  digitalWrite(ledCol[12],HIGH);
  delay(n); 
  
  digitalWrite(ledCol[3],LOW);
  digitalWrite(ledCol[8],LOW);
  digitalWrite(ledCol[13],LOW);
  delay(n);
  digitalWrite(ledCol[3],HIGH);
  digitalWrite(ledCol[8],HIGH);
  digitalWrite(ledCol[13],HIGH);
  delay(n); 
  
  digitalWrite(ledCol[4],LOW);
  digitalWrite(ledCol[9],LOW);
  digitalWrite(ledCol[14],LOW);
  delay(n);
  digitalWrite(ledCol[4],HIGH);
  digitalWrite(ledCol[9],HIGH);
  digitalWrite(ledCol[14],HIGH);
  delay(n);
 
  digitalWrite(ledCol[4],LOW);
  digitalWrite(ledCol[9],LOW);
  digitalWrite(ledCol[14],LOW);
  delay(n);
  digitalWrite(ledCol[4],HIGH);
  digitalWrite(ledCol[9],HIGH);
  digitalWrite(ledCol[14],HIGH);
  delay(n);

  digitalWrite(ledCol[3],LOW);
  digitalWrite(ledCol[8],LOW);
  digitalWrite(ledCol[13],LOW);
  delay(n);
  digitalWrite(ledCol[3],HIGH);
  digitalWrite(ledCol[8],HIGH);
  digitalWrite(ledCol[13],HIGH);
  delay(n); 

  digitalWrite(ledCol[2],LOW);
  digitalWrite(ledCol[7],LOW);
  digitalWrite(ledCol[12],LOW);
  delay(n);
  digitalWrite(ledCol[2],HIGH);
  digitalWrite(ledCol[7],HIGH);
  digitalWrite(ledCol[12],HIGH);
  delay(n);

  digitalWrite(ledCol[1],LOW);
  digitalWrite(ledCol[6],LOW);
  digitalWrite(ledCol[11],LOW);
  delay(n);
  digitalWrite(ledCol[1],HIGH);
  digitalWrite(ledCol[6],HIGH);
  digitalWrite(ledCol[11],HIGH);
  delay(n);   
  
  digitalWrite(ledCol[0],LOW);
  digitalWrite(ledCol[5],LOW);
  digitalWrite(ledCol[10],LOW);
  delay(n);
  digitalWrite(ledCol[0],HIGH);
  digitalWrite(ledCol[5],HIGH);
  digitalWrite(ledCol[10],HIGH);
  delay(n); 
 
 
  digitalWrite (ledCol[0],HIGH);
  digitalWrite (ledCol[1],HIGH);
  digitalWrite (ledCol[2],HIGH);
  digitalWrite (ledCol[3],HIGH);
  digitalWrite (ledCol[4],HIGH);
  digitalWrite (ledCol[5],HIGH);
  digitalWrite (ledCol[6],HIGH);
  digitalWrite (ledCol[7],HIGH);
  digitalWrite (ledCol[8],HIGH);
  digitalWrite (ledCol[9],HIGH);

  digitalWrite (ledCol[10],HIGH);
  digitalWrite (ledCol[11],HIGH);
  digitalWrite (ledCol[12],HIGH);
  digitalWrite (ledCol[13],HIGH);
  digitalWrite (ledCol[14],HIGH); 
}

void pendulum_2()
{
 int n = 15;
  
  ledCol[0] = col11;
  ledCol[1] = col12;
  ledCol[2] = col13;
  ledCol[3] = col14;
  ledCol[4] = col15;
  ledCol[5] = col16;
  ledCol[6] = col17;
  ledCol[7] = col18;
  ledCol[8] = col19;
  ledCol[9] = col20;
  ledCol[10] = col21;
  ledCol[11] = col22;
  ledCol[12] = col23;
  ledCol[13] = col24;
  ledCol[14] = col25;
 
 
  digitalWrite(ledCol[0],LOW);
  digitalWrite(ledCol[5],LOW);
  digitalWrite(ledCol[10],LOW);
  delay(n);
  digitalWrite(ledCol[0],HIGH);
  digitalWrite(ledCol[5],HIGH);
  digitalWrite(ledCol[10],HIGH);
  delay(n); 
  
  digitalWrite(ledCol[1],LOW);
  digitalWrite(ledCol[6],LOW);
  digitalWrite(ledCol[11],LOW);
  delay(n);
  digitalWrite(ledCol[1],HIGH);
  digitalWrite(ledCol[6],HIGH);
  digitalWrite(ledCol[11],HIGH);
  delay(n); 
  
  digitalWrite(ledCol[2],LOW);
  digitalWrite(ledCol[7],LOW);
  digitalWrite(ledCol[12],LOW);
  delay(n);
  digitalWrite(ledCol[2],HIGH);
  digitalWrite(ledCol[7],HIGH);
  digitalWrite(ledCol[12],HIGH);
  delay(n); 
  
  digitalWrite(ledCol[3],LOW);
  digitalWrite(ledCol[8],LOW);
  digitalWrite(ledCol[13],LOW);
  delay(n);
  digitalWrite(ledCol[3],HIGH);
  digitalWrite(ledCol[8],HIGH);
  digitalWrite(ledCol[13],HIGH);
  delay(n); 
  
  digitalWrite(ledCol[4],LOW);
  digitalWrite(ledCol[9],LOW);
  digitalWrite(ledCol[14],LOW);
  delay(n);
  digitalWrite(ledCol[4],HIGH);
  digitalWrite(ledCol[9],HIGH);
  digitalWrite(ledCol[14],HIGH);
  delay(n);
 
  digitalWrite(ledCol[4],LOW);
  digitalWrite(ledCol[9],LOW);
  digitalWrite(ledCol[14],LOW);
  delay(n);
  digitalWrite(ledCol[4],HIGH);
  digitalWrite(ledCol[9],HIGH);
  digitalWrite(ledCol[14],HIGH);
  delay(n);

  digitalWrite(ledCol[3],LOW);
  digitalWrite(ledCol[8],LOW);
  digitalWrite(ledCol[13],LOW);
  delay(n);
  digitalWrite(ledCol[3],HIGH);
  digitalWrite(ledCol[8],HIGH);
  digitalWrite(ledCol[13],HIGH);
  delay(n); 

  digitalWrite(ledCol[2],LOW);
  digitalWrite(ledCol[7],LOW);
  digitalWrite(ledCol[12],LOW);
  delay(n);
  digitalWrite(ledCol[2],HIGH);
  digitalWrite(ledCol[7],HIGH);
  digitalWrite(ledCol[12],HIGH);
  delay(n);

  digitalWrite(ledCol[1],LOW);
  digitalWrite(ledCol[6],LOW);
  digitalWrite(ledCol[11],LOW);
  delay(n);
  digitalWrite(ledCol[1],HIGH);
  digitalWrite(ledCol[6],HIGH);
  digitalWrite(ledCol[11],HIGH);
  delay(n);   
  
  digitalWrite(ledCol[0],LOW);
  digitalWrite(ledCol[5],LOW);
  digitalWrite(ledCol[10],LOW);
  delay(n);
  digitalWrite(ledCol[0],HIGH);
  digitalWrite(ledCol[5],HIGH);
  digitalWrite(ledCol[10],HIGH);
  delay(n); 
 
 
  digitalWrite (ledCol[0],HIGH);
  digitalWrite (ledCol[1],HIGH);
  digitalWrite (ledCol[2],HIGH);
  digitalWrite (ledCol[3],HIGH);
  digitalWrite (ledCol[4],HIGH);
  digitalWrite (ledCol[5],HIGH);
  digitalWrite (ledCol[6],HIGH);
  digitalWrite (ledCol[7],HIGH);
  digitalWrite (ledCol[8],HIGH);
  digitalWrite (ledCol[9],HIGH);

  digitalWrite (ledCol[10],HIGH);
  digitalWrite (ledCol[11],HIGH);
  digitalWrite (ledCol[12],HIGH);
  digitalWrite (ledCol[13],HIGH);
  digitalWrite (ledCol[14],HIGH); 
}

void rainbow()
{
 int n = 15;
  
  ledCol[0] = col11;
  ledCol[1] = col12;
  ledCol[2] = col13;
  ledCol[3] = col14;
  ledCol[4] = col15;
  ledCol[5] = col16;
  ledCol[6] = col17;
  ledCol[7] = col18;
  ledCol[8] = col19;
  ledCol[9] = col20;
  ledCol[10] = col21;
  ledCol[11] = col22;
  ledCol[12] = col23;
  ledCol[13] = col24;
  ledCol[14] = col25;
 
 
  digitalWrite(ledCol[0],LOW);
  digitalWrite(ledCol[5],LOW);
  digitalWrite(ledCol[10],LOW);
  delay(n);
  digitalWrite(ledCol[0],HIGH);
  digitalWrite(ledCol[5],HIGH);
  digitalWrite(ledCol[10],HIGH);
  delay(n); 
  
  digitalWrite(ledCol[1],LOW);
  digitalWrite(ledCol[6],LOW);
  digitalWrite(ledCol[11],LOW);
  delay(n);
  digitalWrite(ledCol[1],HIGH);
  digitalWrite(ledCol[6],HIGH);
  digitalWrite(ledCol[11],HIGH);
  delay(n); 
  
  digitalWrite(ledCol[2],LOW);
  digitalWrite(ledCol[7],LOW);
  digitalWrite(ledCol[12],LOW);
  delay(n);
  digitalWrite(ledCol[2],HIGH);
  digitalWrite(ledCol[7],HIGH);
  digitalWrite(ledCol[12],HIGH);
  delay(n); 
  
  digitalWrite(ledCol[3],LOW);
  digitalWrite(ledCol[8],LOW);
  digitalWrite(ledCol[13],LOW);
  delay(n);
  digitalWrite(ledCol[3],HIGH);
  digitalWrite(ledCol[8],HIGH);
  digitalWrite(ledCol[13],HIGH);
  delay(n); 
  
  digitalWrite(ledCol[4],LOW);
  digitalWrite(ledCol[9],LOW);
  digitalWrite(ledCol[14],LOW);
  delay(n);
  digitalWrite(ledCol[4],HIGH);
  digitalWrite(ledCol[9],HIGH);
  digitalWrite(ledCol[14],HIGH);
  delay(n);
 
  digitalWrite(ledCol[4],LOW);
  digitalWrite(ledCol[9],LOW);
  digitalWrite(ledCol[14],LOW);
  delay(n);
  digitalWrite(ledCol[4],HIGH);
  digitalWrite(ledCol[9],HIGH);
  digitalWrite(ledCol[14],HIGH);
  delay(n);

  digitalWrite(ledCol[3],LOW);
  digitalWrite(ledCol[8],LOW);
  digitalWrite(ledCol[13],LOW);
  delay(n);
  digitalWrite(ledCol[3],HIGH);
  digitalWrite(ledCol[8],HIGH);
  digitalWrite(ledCol[13],HIGH);
  delay(n); 

  digitalWrite(ledCol[2],LOW);
  digitalWrite(ledCol[7],LOW);
  digitalWrite(ledCol[12],LOW);
  delay(n);
  digitalWrite(ledCol[2],HIGH);
  digitalWrite(ledCol[7],HIGH);
  digitalWrite(ledCol[12],HIGH);
  delay(n);

  digitalWrite(ledCol[1],LOW);
  digitalWrite(ledCol[6],LOW);
  digitalWrite(ledCol[11],LOW);
  delay(n);
  digitalWrite(ledCol[1],HIGH);
  digitalWrite(ledCol[6],HIGH);
  digitalWrite(ledCol[11],HIGH);
  delay(n);   
  
  digitalWrite(ledCol[0],LOW);
  digitalWrite(ledCol[5],LOW);
  digitalWrite(ledCol[10],LOW);
  delay(n);
  digitalWrite(ledCol[0],HIGH);
  digitalWrite(ledCol[5],HIGH);
  digitalWrite(ledCol[10],HIGH);
  delay(n); 
 
 
  digitalWrite (ledCol[0],HIGH);
  digitalWrite (ledCol[1],HIGH);
  digitalWrite (ledCol[2],HIGH);
  digitalWrite (ledCol[3],HIGH);
  digitalWrite (ledCol[4],HIGH);
  digitalWrite (ledCol[5],HIGH);
  digitalWrite (ledCol[6],HIGH);
  digitalWrite (ledCol[7],HIGH);
  digitalWrite (ledCol[8],HIGH);
  digitalWrite (ledCol[9],HIGH);

  digitalWrite (ledCol[10],HIGH);
  digitalWrite (ledCol[11],HIGH);
  digitalWrite (ledCol[12],HIGH);
  digitalWrite (ledCol[13],HIGH);
  digitalWrite (ledCol[14],HIGH); 
}

void random_spark_one()
{
  int n =15;
  int m;
  ledCol[0] = col11;
  ledCol[1] = col12;
  ledCol[2] = col13;
  ledCol[3] = col14;
  ledCol[4] = col15;
  ledCol[5] = col16;
  ledCol[6] = col17;
  ledCol[7] = col18;
  ledCol[8] = col19;
  ledCol[9] = col20;
  ledCol[10] = col21;
  ledCol[11] = col22;
  ledCol[12] = col23;
  ledCol[13] = col24;
  ledCol[14] = col25;

  delay(10*n + 400);
  m=random(0,15);
  digitalWrite(ledCol[m],LOW);
  delay(10*n);
  digitalWrite(ledCol[m],HIGH);
  
  delay(400);
  
  digitalWrite (ledCol[0],HIGH);
  digitalWrite (ledCol[1],HIGH);
  digitalWrite (ledCol[2],HIGH);
  digitalWrite (ledCol[3],HIGH);
  digitalWrite (ledCol[4],HIGH);
  digitalWrite (ledCol[5],HIGH);
  digitalWrite (ledCol[6],HIGH);
  digitalWrite (ledCol[7],HIGH);
  digitalWrite (ledCol[8],HIGH);
  digitalWrite (ledCol[9],HIGH);

  digitalWrite (ledCol[10],HIGH);
  digitalWrite (ledCol[11],HIGH);
  digitalWrite (ledCol[12],HIGH);
  digitalWrite (ledCol[13],HIGH);
  digitalWrite (ledCol[14],HIGH);
}

void random_spark_two()
{
  int n =15;
  int m;
  ledCol[0] = col11;
  ledCol[1] = col12;
  ledCol[2] = col13;
  ledCol[3] = col14;
  ledCol[4] = col15;
  ledCol[5] = col16;
  ledCol[6] = col17;
  ledCol[7] = col18;
  ledCol[8] = col19;
  ledCol[9] = col20;
  ledCol[10] = col21;
  ledCol[11] = col22;
  ledCol[12] = col23;
  ledCol[13] = col24;
  ledCol[14] = col25;

  delay(10*n + 400);
  m=random(0,15);
  digitalWrite(ledCol[m],LOW);
  delay(10*n);
  digitalWrite(ledCol[m],HIGH);
  
  delay(400);
  
  digitalWrite (ledCol[0],HIGH);
  digitalWrite (ledCol[1],HIGH);
  digitalWrite (ledCol[2],HIGH);
  digitalWrite (ledCol[3],HIGH);
  digitalWrite (ledCol[4],HIGH);
  digitalWrite (ledCol[5],HIGH);
  digitalWrite (ledCol[6],HIGH);
  digitalWrite (ledCol[7],HIGH);
  digitalWrite (ledCol[8],HIGH);
  digitalWrite (ledCol[9],HIGH);

  digitalWrite (ledCol[10],HIGH);
  digitalWrite (ledCol[11],HIGH);
  digitalWrite (ledCol[12],HIGH);
  digitalWrite (ledCol[13],HIGH);
  digitalWrite (ledCol[14],HIGH);
}

void random_spark_three()
{
  int n =40;
  int m;
  ledCol[0] = col11;
  ledCol[1] = col12;
  ledCol[2] = col13;
  ledCol[3] = col14;
  ledCol[4] = col15;
  ledCol[5] = col16;
  ledCol[6] = col17;
  ledCol[7] = col18;
  ledCol[8] = col19;
  ledCol[9] = col20;
  ledCol[10] = col21;
  ledCol[11] = col22;
  ledCol[12] = col23;
  ledCol[13] = col24;
  ledCol[14] = col25;
  
   m=random(0,15);
  
  delay(2*n + 400);
 
  digitalWrite(ledCol[m],LOW);
  delay(2*n);
  digitalWrite(ledCol[m],HIGH);
  
  delay(400);
  
  digitalWrite (ledCol[0],HIGH);
  digitalWrite (ledCol[1],HIGH);
  digitalWrite (ledCol[2],HIGH);
  digitalWrite (ledCol[3],HIGH);
  digitalWrite (ledCol[4],HIGH);
  digitalWrite (ledCol[5],HIGH);
  digitalWrite (ledCol[6],HIGH);
  digitalWrite (ledCol[7],HIGH);
  digitalWrite (ledCol[8],HIGH);
  digitalWrite (ledCol[9],HIGH);

  digitalWrite (ledCol[10],HIGH);
  digitalWrite (ledCol[11],HIGH);
  digitalWrite (ledCol[12],HIGH);
  digitalWrite (ledCol[13],HIGH);
  digitalWrite (ledCol[14],HIGH);
}

void rays()
{
  
 int n = 100;
  
  ledCol[0] = col11;
  ledCol[1] = col12;
  ledCol[2] = col13;
  ledCol[3] = col14;
  ledCol[4] = col15;
  ledCol[5] = col16;
  ledCol[6] = col17;
  ledCol[7] = col18;
  ledCol[8] = col19;
  ledCol[9] = col20;
  ledCol[10] = col21;
  ledCol[11] = col22;
  ledCol[12] = col23;
  ledCol[13] = col24;
  ledCol[14] = col25;
  
 digitalWrite(ledCol[2],LOW); 
 delay(6*n);
  
 digitalWrite(ledCol[3],LOW);
 delay(n); 
 digitalWrite(ledCol[4],LOW);
 delay(n);
 digitalWrite(ledCol[8],LOW);
 delay(n);
 digitalWrite(ledCol[14],LOW);
 delay(n);
 digitalWrite(ledCol[7],LOW);
 delay(n);
 digitalWrite(ledCol[12],LOW);
 delay(n);
 digitalWrite(ledCol[6],LOW);
 delay(n);
 digitalWrite(ledCol[10],LOW);
 delay(n);
 digitalWrite(ledCol[1],LOW);
 delay(n);
 digitalWrite(ledCol[0],LOW);
 delay(n);
 
 delay(800);
 
   digitalWrite(ledCol[0],HIGH);
   digitalWrite(ledCol[4],HIGH);
   digitalWrite(ledCol[14],HIGH);
   digitalWrite(ledCol[12],HIGH);
   digitalWrite(ledCol[10],HIGH);
   
   delay(n);
   
   digitalWrite(ledCol[1],HIGH);
   digitalWrite(ledCol[3],HIGH);
   digitalWrite(ledCol[8],HIGH);
   digitalWrite(ledCol[7],HIGH);
   digitalWrite(ledCol[6],HIGH);
   
   delay(800);
   
  digitalWrite (ledCol[0],HIGH);
  digitalWrite (ledCol[1],HIGH);
  digitalWrite (ledCol[2],HIGH);
  digitalWrite (ledCol[3],HIGH);
  digitalWrite (ledCol[4],HIGH);
  digitalWrite (ledCol[5],HIGH);
  digitalWrite (ledCol[6],HIGH);
  digitalWrite (ledCol[7],HIGH);
  digitalWrite (ledCol[8],HIGH);
  digitalWrite (ledCol[9],HIGH);

  digitalWrite (ledCol[10],HIGH);
  digitalWrite (ledCol[11],HIGH);
  digitalWrite (ledCol[12],HIGH);
  digitalWrite (ledCol[13],HIGH);
  digitalWrite (ledCol[14],HIGH);
}

void tornado_2()
{
   int n = 25;
  
  ledCol[0] = col11;
  ledCol[1] = col12;
  ledCol[2] = col13;
  ledCol[3] = col14;
  ledCol[4] = col15;
  ledCol[5] = col16;
  ledCol[6] = col17;
  ledCol[7] = col18;
  ledCol[8] = col19;
  ledCol[9] = col20;
  ledCol[10] = col21;
  ledCol[11] = col22;
  ledCol[12] = col23;
  ledCol[13] = col24;
  ledCol[14] = col25;
  
  digitalWrite(ledCol[2],HIGH);
  
  while(n>=0)
  {
  for (int a=0;a<5;a++)
  {
  delay(14*n);
  digitalWrite(ledCol[0],LOW);
  delay(n);
  digitalWrite(ledCol[0],HIGH);
  delay(n);
  digitalWrite(ledCol[5],LOW);
  delay(n);
  digitalWrite(ledCol[5],HIGH);
  delay(n);
  digitalWrite(ledCol[10],LOW);
  delay(n);
  digitalWrite(ledCol[10],HIGH);
  delay(n);
  digitalWrite(ledCol[11],LOW);
  delay(n);
  digitalWrite(ledCol[11],HIGH);
  delay(n);
  digitalWrite(ledCol[12],LOW);
  delay(n);
  digitalWrite(ledCol[12],HIGH);
  delay(n);
  digitalWrite(ledCol[13],LOW);
  delay(n);
  digitalWrite(ledCol[13],HIGH);
  delay(n);
  digitalWrite(ledCol[14],LOW);
  delay(n);
  digitalWrite(ledCol[14],HIGH);
  delay(n);
  digitalWrite(ledCol[9],LOW);
  delay(n);
  digitalWrite(ledCol[9],HIGH);
  delay(n);
   digitalWrite(ledCol[4],LOW);
  delay(n);
  digitalWrite(ledCol[4],HIGH);
  delay(n);
  }
  for (int a=0;a<5;a++)
  {
  delay(6*n);  
  digitalWrite(ledCol[1],LOW);
  delay(n);
  digitalWrite(ledCol[1],HIGH);
  delay(n);
  digitalWrite(ledCol[6],LOW);
  delay(n);
  digitalWrite(ledCol[6],HIGH);
  delay(n);
  digitalWrite(ledCol[7],LOW);
  delay(n);
  digitalWrite(ledCol[7],HIGH);
  delay(n);
  digitalWrite(ledCol[8],LOW);
  delay(n);
  digitalWrite(ledCol[8],HIGH);
  delay(n);
  digitalWrite(ledCol[3],LOW);
  delay(n);
  digitalWrite(ledCol[3],HIGH);
  delay(n);
}
   n = n - 5;
  }
  digitalWrite (ledCol[0],HIGH);
  digitalWrite (ledCol[1],HIGH);
  digitalWrite (ledCol[2],HIGH);
  digitalWrite (ledCol[3],HIGH);
  digitalWrite (ledCol[4],HIGH);
  digitalWrite (ledCol[5],HIGH);
  digitalWrite (ledCol[6],HIGH);
  digitalWrite (ledCol[7],HIGH);
  digitalWrite (ledCol[8],HIGH);
  digitalWrite (ledCol[9],HIGH);

  digitalWrite (ledCol[10],HIGH);
  digitalWrite (ledCol[11],HIGH);
  digitalWrite (ledCol[12],HIGH);
  digitalWrite (ledCol[13],HIGH);
  digitalWrite (ledCol[14],HIGH);
}

void triangle_1()
{
 int n = 40;
  
  ledCol[0] = col11;
  ledCol[1] = col12;
  ledCol[2] = col13;
  ledCol[3] = col14;
  ledCol[4] = col15;
  ledCol[5] = col16;
  ledCol[6] = col17;
  ledCol[7] = col18;
  ledCol[8] = col19;
  ledCol[9] = col20;
  ledCol[10] = col21;
  ledCol[11] = col22;
  ledCol[12] = col23;
  ledCol[13] = col24;
  ledCol[14] = col25;
 
 
  digitalWrite(ledCol[0],LOW);
  digitalWrite(ledCol[5],LOW);
  digitalWrite(ledCol[10],LOW);
  delay(n);
  digitalWrite(ledCol[0],HIGH);
  digitalWrite(ledCol[5],HIGH);
  digitalWrite(ledCol[10],HIGH);
  delay(n); 
  
  digitalWrite(ledCol[1],LOW);
  digitalWrite(ledCol[6],LOW);
  digitalWrite(ledCol[11],LOW);
  delay(n);
  digitalWrite(ledCol[1],HIGH);
  digitalWrite(ledCol[6],HIGH);
  digitalWrite(ledCol[11],HIGH);
  delay(n); 
  
  digitalWrite(ledCol[2],LOW);
  digitalWrite(ledCol[7],LOW);
  digitalWrite(ledCol[12],LOW);
  delay(n);
  digitalWrite(ledCol[2],HIGH);
  digitalWrite(ledCol[7],HIGH);
  digitalWrite(ledCol[12],HIGH);
  delay(n); 
  
  digitalWrite(ledCol[3],LOW);
  digitalWrite(ledCol[8],LOW);
  digitalWrite(ledCol[13],LOW);
  delay(n);
  digitalWrite(ledCol[3],HIGH);
  digitalWrite(ledCol[8],HIGH);
  digitalWrite(ledCol[13],HIGH);
  delay(n); 
  
  digitalWrite(ledCol[4],LOW);
  digitalWrite(ledCol[9],LOW);
  digitalWrite(ledCol[14],LOW);
  delay(n);
  digitalWrite(ledCol[4],HIGH);
  digitalWrite(ledCol[9],HIGH);
  digitalWrite(ledCol[14],HIGH);
  delay(n);
  
  delay(500);
 
  digitalWrite(ledCol[4],LOW);
  digitalWrite(ledCol[9],LOW);
  digitalWrite(ledCol[14],LOW);
  delay(n);
  digitalWrite(ledCol[4],HIGH);
  digitalWrite(ledCol[9],HIGH);
  digitalWrite(ledCol[14],HIGH);
  delay(n);

  digitalWrite(ledCol[3],LOW);
  digitalWrite(ledCol[8],LOW);
  digitalWrite(ledCol[13],LOW);
  delay(n);
  digitalWrite(ledCol[3],HIGH);
  digitalWrite(ledCol[8],HIGH);
  digitalWrite(ledCol[13],HIGH);
  delay(n); 

  digitalWrite(ledCol[2],LOW);
  digitalWrite(ledCol[7],LOW);
  digitalWrite(ledCol[12],LOW);
  delay(n);
  digitalWrite(ledCol[2],HIGH);
  digitalWrite(ledCol[7],HIGH);
  digitalWrite(ledCol[12],HIGH);
  delay(n);

  digitalWrite(ledCol[1],LOW);
  digitalWrite(ledCol[6],LOW);
  digitalWrite(ledCol[11],LOW);
  delay(n);
  digitalWrite(ledCol[1],HIGH);
  digitalWrite(ledCol[6],HIGH);
  digitalWrite(ledCol[11],HIGH);
  delay(n);   
  
  digitalWrite(ledCol[0],LOW);
  digitalWrite(ledCol[5],LOW);
  digitalWrite(ledCol[10],LOW);
  delay(n);
  digitalWrite(ledCol[0],HIGH);
  digitalWrite(ledCol[5],HIGH);
  digitalWrite(ledCol[10],HIGH);
  delay(n); 
  delay(500);
    
  digitalWrite (ledCol[0],HIGH);
  digitalWrite (ledCol[1],HIGH);
  digitalWrite (ledCol[2],HIGH);
  digitalWrite (ledCol[3],HIGH);
  digitalWrite (ledCol[4],HIGH);
  digitalWrite (ledCol[5],HIGH);
  digitalWrite (ledCol[6],HIGH);
  digitalWrite (ledCol[7],HIGH);
  digitalWrite (ledCol[8],HIGH);
  digitalWrite (ledCol[9],HIGH);

  digitalWrite (ledCol[10],HIGH);
  digitalWrite (ledCol[11],HIGH);
  digitalWrite (ledCol[12],HIGH);
  digitalWrite (ledCol[13],HIGH);
  digitalWrite (ledCol[14],HIGH); 
}

void triangle_2()
{
 int n = 40;
  
  ledCol[0] = col11;
  ledCol[1] = col12;
  ledCol[2] = col13;
  ledCol[3] = col14;
  ledCol[4] = col15;
  ledCol[5] = col16;
  ledCol[6] = col17;
  ledCol[7] = col18;
  ledCol[8] = col19;
  ledCol[9] = col20;
  ledCol[10] = col21;
  ledCol[11] = col22;
  ledCol[12] = col23;
  ledCol[13] = col24;
  ledCol[14] = col25;
 
 
  digitalWrite(ledCol[0],LOW);
  digitalWrite(ledCol[5],LOW);
  digitalWrite(ledCol[10],LOW);
  delay(n);
  digitalWrite(ledCol[0],HIGH);
  digitalWrite(ledCol[5],HIGH);
  digitalWrite(ledCol[10],HIGH);
  delay(n); 
  
  digitalWrite(ledCol[1],LOW);
  digitalWrite(ledCol[6],LOW);
  digitalWrite(ledCol[11],LOW);
  delay(n);
  digitalWrite(ledCol[1],HIGH);
  digitalWrite(ledCol[6],HIGH);
  digitalWrite(ledCol[11],HIGH);
  delay(n); 
  
  digitalWrite(ledCol[2],LOW);
  digitalWrite(ledCol[7],LOW);
  digitalWrite(ledCol[12],LOW);
  delay(n);
  digitalWrite(ledCol[2],HIGH);
  digitalWrite(ledCol[7],HIGH);
  digitalWrite(ledCol[12],HIGH);
  delay(n); 
  
  digitalWrite(ledCol[3],LOW);
  digitalWrite(ledCol[8],LOW);
  digitalWrite(ledCol[13],LOW);
  delay(n);
  digitalWrite(ledCol[3],HIGH);
  digitalWrite(ledCol[8],HIGH);
  digitalWrite(ledCol[13],HIGH);
  delay(n); 
  
  digitalWrite(ledCol[4],LOW);
  digitalWrite(ledCol[9],LOW);
  digitalWrite(ledCol[14],LOW);
  delay(n);
  digitalWrite(ledCol[4],HIGH);
  digitalWrite(ledCol[9],HIGH);
  digitalWrite(ledCol[14],HIGH);
  delay(n);
  
  delay(500);
 
  digitalWrite(ledCol[4],LOW);
  digitalWrite(ledCol[9],LOW);
  digitalWrite(ledCol[14],LOW);
  delay(n);
  digitalWrite(ledCol[4],HIGH);
  digitalWrite(ledCol[9],HIGH);
  digitalWrite(ledCol[14],HIGH);
  delay(n);

  digitalWrite(ledCol[3],LOW);
  digitalWrite(ledCol[8],LOW);
  digitalWrite(ledCol[13],LOW);
  delay(n);
  digitalWrite(ledCol[3],HIGH);
  digitalWrite(ledCol[8],HIGH);
  digitalWrite(ledCol[13],HIGH);
  delay(n); 

  digitalWrite(ledCol[2],LOW);
  digitalWrite(ledCol[7],LOW);
  digitalWrite(ledCol[12],LOW);
  delay(n);
  digitalWrite(ledCol[2],HIGH);
  digitalWrite(ledCol[7],HIGH);
  digitalWrite(ledCol[12],HIGH);
  delay(n);

  digitalWrite(ledCol[1],LOW);
  digitalWrite(ledCol[6],LOW);
  digitalWrite(ledCol[11],LOW);
  delay(n);
  digitalWrite(ledCol[1],HIGH);
  digitalWrite(ledCol[6],HIGH);
  digitalWrite(ledCol[11],HIGH);
  delay(n);   
  
  digitalWrite(ledCol[0],LOW);
  digitalWrite(ledCol[5],LOW);
  digitalWrite(ledCol[10],LOW);
  delay(n);
  digitalWrite(ledCol[0],HIGH);
  digitalWrite(ledCol[5],HIGH);
  digitalWrite(ledCol[10],HIGH);
  delay(n); 
  delay(500);
    
  digitalWrite (ledCol[0],HIGH);
  digitalWrite (ledCol[1],HIGH);
  digitalWrite (ledCol[2],HIGH);
  digitalWrite (ledCol[3],HIGH);
  digitalWrite (ledCol[4],HIGH);
  digitalWrite (ledCol[5],HIGH);
  digitalWrite (ledCol[6],HIGH);
  digitalWrite (ledCol[7],HIGH);
  digitalWrite (ledCol[8],HIGH);
  digitalWrite (ledCol[9],HIGH);

  digitalWrite (ledCol[10],HIGH);
  digitalWrite (ledCol[11],HIGH);
  digitalWrite (ledCol[12],HIGH);
  digitalWrite (ledCol[13],HIGH);
  digitalWrite (ledCol[14],HIGH); 
}

void zigzag_two()
{
  int n = 50;
  
  ledCol[0] = col11;
  ledCol[1] = col12;
  ledCol[2] = col13;
  ledCol[3] = col14;
  ledCol[4] = col15;
  ledCol[5] = col16;
  ledCol[6] = col17;
  ledCol[7] = col18;
  ledCol[8] = col19;
  ledCol[9] = col20;
  ledCol[10] = col21;
  ledCol[11] = col22;
  ledCol[12] = col23;
  ledCol[13] = col24;
  ledCol[14] = col25;
 
  delay(6*n);
  digitalWrite(ledCol[2],LOW);
  delay(n);
  digitalWrite(ledCol[6],LOW);
  delay(n);  
  digitalWrite(ledCol[10],LOW);
  delay(n); 
  digitalWrite(ledCol[11],LOW);
  delay(n); 
  digitalWrite(ledCol[12],LOW);
  delay(n); 
  digitalWrite(ledCol[13],LOW);
  delay(n); 
  digitalWrite(ledCol[14],LOW);
  delay(n); 
  delay(400);
  
  digitalWrite (ledCol[0],HIGH);
  digitalWrite (ledCol[1],HIGH);
  digitalWrite (ledCol[2],HIGH);
  digitalWrite (ledCol[3],HIGH);
  digitalWrite (ledCol[4],HIGH);
  digitalWrite (ledCol[5],HIGH);
  digitalWrite (ledCol[6],HIGH);
  digitalWrite (ledCol[7],HIGH);
  digitalWrite (ledCol[8],HIGH);
  digitalWrite (ledCol[9],HIGH);

  digitalWrite (ledCol[10],HIGH);
  digitalWrite (ledCol[11],HIGH);
  digitalWrite (ledCol[12],HIGH);
  digitalWrite (ledCol[13],HIGH);
  digitalWrite (ledCol[14],HIGH);
} 

void zigzag_three()
{
  int n = 50;
  
  ledCol[0] = col11;
  ledCol[1] = col12;
  ledCol[2] = col13;
  ledCol[3] = col14;
  ledCol[4] = col15;
  ledCol[5] = col16;
  ledCol[6] = col17;
  ledCol[7] = col18;
  ledCol[8] = col19;
  ledCol[9] = col20;
  ledCol[10] = col21;
  ledCol[11] = col22;
  ledCol[12] = col23;
  ledCol[13] = col24;
  ledCol[14] = col25;
 
  delay(6*n);
  digitalWrite(ledCol[2],LOW);
  delay(n);
  digitalWrite(ledCol[8],LOW);
  delay(n);  
  digitalWrite(ledCol[14],LOW);
  delay(n); 
  digitalWrite(ledCol[13],LOW);
  delay(n); 
  digitalWrite(ledCol[12],LOW);
  delay(n); 
  digitalWrite(ledCol[11],LOW);
  delay(n); 
  digitalWrite(ledCol[10],LOW);
  delay(n); 
  delay(400);
  
  digitalWrite (ledCol[0],HIGH);
  digitalWrite (ledCol[1],HIGH);
  digitalWrite (ledCol[2],HIGH);
  digitalWrite (ledCol[3],HIGH);
  digitalWrite (ledCol[4],HIGH);
  digitalWrite (ledCol[5],HIGH);
  digitalWrite (ledCol[6],HIGH);
  digitalWrite (ledCol[7],HIGH);
  digitalWrite (ledCol[8],HIGH);
  digitalWrite (ledCol[9],HIGH);

  digitalWrite (ledCol[10],HIGH);
  digitalWrite (ledCol[11],HIGH);
  digitalWrite (ledCol[12],HIGH);
  digitalWrite (ledCol[13],HIGH);
  digitalWrite (ledCol[14],HIGH);
}

void zigzag_four()
{
  int n = 50;
  
  ledCol[0] = col11;
  ledCol[1] = col12;
  ledCol[2] = col13;
  ledCol[3] = col14;
  ledCol[4] = col15;
  ledCol[5] = col16;
  ledCol[6] = col17;
  ledCol[7] = col18;
  ledCol[8] = col19;
  ledCol[9] = col20;
  ledCol[10] = col21;
  ledCol[11] = col22;
  ledCol[12] = col23;
  ledCol[13] = col24;
  ledCol[14] = col25;
 
  delay(10*n);
  digitalWrite(ledCol[0],LOW);
  delay(n);
  digitalWrite(ledCol[1],LOW);
  delay(n);
  digitalWrite(ledCol[2],LOW);
  delay(n); 
  digitalWrite(ledCol[3],LOW);
  delay(n);
  digitalWrite(ledCol[4],LOW);
  delay(n);
  digitalWrite(ledCol[9],LOW);
  delay(n);
  digitalWrite(ledCol[8],LOW);
  delay(n);
  digitalWrite(ledCol[7],LOW);
  delay(n);
  digitalWrite(ledCol[6],LOW);
  delay(n);
  digitalWrite(ledCol[5],LOW);
  delay(n);
  digitalWrite(ledCol[10],LOW);
  delay(n);
  digitalWrite(ledCol[11],LOW);
  delay(n);
  digitalWrite(ledCol[12],LOW);
  delay(n);
  digitalWrite(ledCol[13],LOW);
  delay(n);
  digitalWrite(ledCol[14],LOW);
  delay(n);
  
  delay(800);
  
  digitalWrite(ledCol[14],HIGH);
  delay(n);
  digitalWrite(ledCol[13],HIGH);
  delay(n);
  digitalWrite(ledCol[12],HIGH);
  delay(n);
  digitalWrite(ledCol[11],HIGH);
  delay(n);
  digitalWrite(ledCol[10],HIGH);
  delay(n);
  digitalWrite(ledCol[5],HIGH);
  delay(n);
  digitalWrite(ledCol[6],HIGH);
  delay(n);
  digitalWrite(ledCol[7],HIGH);
  delay(n);
  digitalWrite(ledCol[8],HIGH);
  delay(n);
  digitalWrite(ledCol[9],HIGH);
  delay(n);
  digitalWrite(ledCol[4],HIGH);
  delay(n);
  digitalWrite(ledCol[3],HIGH);
  delay(n);
  digitalWrite(ledCol[2],HIGH);
  delay(n);
  digitalWrite(ledCol[1],HIGH);
  delay(n);
  digitalWrite(ledCol[0],HIGH);
  delay(n);
  
  delay(10*n + 800);
  
  digitalWrite (ledCol[0],HIGH);
  digitalWrite (ledCol[1],HIGH);
  digitalWrite (ledCol[2],HIGH);
  digitalWrite (ledCol[3],HIGH);
  digitalWrite (ledCol[4],HIGH);
  digitalWrite (ledCol[5],HIGH);
  digitalWrite (ledCol[6],HIGH);
  digitalWrite (ledCol[7],HIGH);
  digitalWrite (ledCol[8],HIGH);
  digitalWrite (ledCol[9],HIGH);

  digitalWrite (ledCol[10],HIGH);
  digitalWrite (ledCol[11],HIGH);
  digitalWrite (ledCol[12],HIGH);
  digitalWrite (ledCol[13],HIGH);
  digitalWrite (ledCol[14],HIGH);
}

void zigzag_five()
{
  int n = 50;
  
  ledCol[0] = col11;
  ledCol[1] = col12;
  ledCol[2] = col13;
  ledCol[3] = col14;
  ledCol[4] = col15;
  ledCol[5] = col16;
  ledCol[6] = col17;
  ledCol[7] = col18;
  ledCol[8] = col19;
  ledCol[9] = col20;
  ledCol[10] = col21;
  ledCol[11] = col22;
  ledCol[12] = col23;
  ledCol[13] = col24;
  ledCol[14] = col25;
 
  digitalWrite(ledCol[0],LOW);
  digitalWrite(ledCol[9],LOW);
  digitalWrite(ledCol[10],LOW);
  delay(n+800);
  digitalWrite(ledCol[0],HIGH);
  digitalWrite(ledCol[9],HIGH);
  digitalWrite(ledCol[10],HIGH);
  delay(n);
  
  digitalWrite(ledCol[1],LOW);
  digitalWrite(ledCol[8],LOW);
  digitalWrite(ledCol[11],LOW);
  delay(n);
  digitalWrite(ledCol[1],HIGH);
  digitalWrite(ledCol[8],HIGH);
  digitalWrite(ledCol[11],HIGH);
  delay(n);
  
  digitalWrite(ledCol[2],LOW);
  digitalWrite(ledCol[7],LOW);
  digitalWrite(ledCol[12],LOW);
  delay(n);
  digitalWrite(ledCol[2],HIGH);
  digitalWrite(ledCol[7],HIGH);
  digitalWrite(ledCol[12],HIGH);
  delay(n);
  
  digitalWrite(ledCol[3],LOW);
  digitalWrite(ledCol[6],LOW);
  digitalWrite(ledCol[13],LOW);
  delay(n);
  digitalWrite(ledCol[3],HIGH);
  digitalWrite(ledCol[6],HIGH);
  digitalWrite(ledCol[13],HIGH);
  delay(n);
  
  digitalWrite(ledCol[4],LOW);
  digitalWrite(ledCol[5],LOW);
  digitalWrite(ledCol[14],LOW);
  delay(n+800);
  digitalWrite(ledCol[4],HIGH);
  digitalWrite(ledCol[5],HIGH);
  digitalWrite(ledCol[14],HIGH);
  delay(n);
  
  digitalWrite(ledCol[3],LOW);
  digitalWrite(ledCol[6],LOW);
  digitalWrite(ledCol[13],LOW);
  delay(n);
  digitalWrite(ledCol[3],HIGH);
  digitalWrite(ledCol[6],HIGH);
  digitalWrite(ledCol[13],HIGH);
  delay(n);
  
  digitalWrite(ledCol[2],LOW);
  digitalWrite(ledCol[7],LOW);
  digitalWrite(ledCol[12],LOW);
  delay(n);
  digitalWrite(ledCol[2],HIGH);
  digitalWrite(ledCol[7],HIGH);
  digitalWrite(ledCol[12],HIGH);
  delay(n);
  
  digitalWrite(ledCol[1],LOW);
  digitalWrite(ledCol[8],LOW);
  digitalWrite(ledCol[11],LOW);
  delay(n);
  digitalWrite(ledCol[1],HIGH);
  digitalWrite(ledCol[8],HIGH);
  digitalWrite(ledCol[11],HIGH);
  delay(n);
  
  digitalWrite(ledCol[0],LOW);
  digitalWrite(ledCol[9],LOW);
  digitalWrite(ledCol[10],LOW);
  delay(n+800);
  digitalWrite(ledCol[0],HIGH);
  digitalWrite(ledCol[9],HIGH);
  digitalWrite(ledCol[10],HIGH);
  delay(n); 
  
  digitalWrite (ledCol[0],HIGH);
  digitalWrite (ledCol[1],HIGH);
  digitalWrite (ledCol[2],HIGH);
  digitalWrite (ledCol[3],HIGH);
  digitalWrite (ledCol[4],HIGH);
  digitalWrite (ledCol[5],HIGH);
  digitalWrite (ledCol[6],HIGH);
  digitalWrite (ledCol[7],HIGH);
  digitalWrite (ledCol[8],HIGH);
  digitalWrite (ledCol[9],HIGH);

  digitalWrite (ledCol[10],HIGH);
  digitalWrite (ledCol[11],HIGH);
  digitalWrite (ledCol[12],HIGH);
  digitalWrite (ledCol[13],HIGH);
  digitalWrite (ledCol[14],HIGH);
}

void u()
{
  int n = 30;
  
  ledCol[0] = col11;
  ledCol[1] = col12;
  ledCol[2] = col13;
  ledCol[3] = col14;
  ledCol[4] = col15;
  ledCol[5] = col16;
  ledCol[6] = col17;
  ledCol[7] = col18;
  ledCol[8] = col19;
  ledCol[9] = col20;
  ledCol[10] = col21;
  ledCol[11] = col22;
  ledCol[12] = col23;
  ledCol[13] = col24;
  ledCol[14] = col25;
 
  digitalWrite(ledCol[0],LOW);
  digitalWrite(ledCol[5],LOW);
  digitalWrite(ledCol[10],LOW);
  digitalWrite(ledCol[11],LOW);
  digitalWrite(ledCol[12],LOW);
  digitalWrite(ledCol[13],LOW);
  digitalWrite(ledCol[14],LOW);
  digitalWrite(ledCol[9],LOW);
  digitalWrite(ledCol[4],LOW);
 
  delay(10*n + 800);
 
  digitalWrite (ledCol[0],HIGH);
  digitalWrite (ledCol[1],HIGH);
  digitalWrite (ledCol[2],HIGH);
  digitalWrite (ledCol[3],HIGH);
  digitalWrite (ledCol[4],HIGH);
  digitalWrite (ledCol[5],HIGH);
  digitalWrite (ledCol[6],HIGH);
  digitalWrite (ledCol[7],HIGH);
  digitalWrite (ledCol[8],HIGH);
  digitalWrite (ledCol[9],HIGH);

  digitalWrite (ledCol[10],HIGH);
  digitalWrite (ledCol[11],HIGH);
  digitalWrite (ledCol[12],HIGH);
  digitalWrite (ledCol[13],HIGH);
  digitalWrite (ledCol[14],HIGH); 
}

void s()
{
  int n = 30;
  
  ledCol[0] = col11;
  ledCol[1] = col12;
  ledCol[2] = col13;
  ledCol[3] = col14;
  ledCol[4] = col15;
  ledCol[5] = col16;
  ledCol[6] = col17;
  ledCol[7] = col18;
  ledCol[8] = col19;
  ledCol[9] = col20;
  ledCol[10] = col21;
  ledCol[11] = col22;
  ledCol[12] = col23;
  ledCol[13] = col24;
  ledCol[14] = col25;
 
  digitalWrite(ledCol[0],LOW);
  digitalWrite(ledCol[1],LOW);
  digitalWrite(ledCol[2],LOW);
  digitalWrite(ledCol[3],LOW);
  digitalWrite(ledCol[4],LOW);
  digitalWrite(ledCol[9],LOW);
  digitalWrite(ledCol[14],LOW);
  digitalWrite(ledCol[13],LOW);
  digitalWrite(ledCol[12],LOW);
  digitalWrite(ledCol[11],LOW);
  digitalWrite(ledCol[10],LOW);
 
  delay(10*n + 800);
 
  digitalWrite (ledCol[0],HIGH);
  digitalWrite (ledCol[1],HIGH);
  digitalWrite (ledCol[2],HIGH);
  digitalWrite (ledCol[3],HIGH);
  digitalWrite (ledCol[4],HIGH);
  digitalWrite (ledCol[5],HIGH);
  digitalWrite (ledCol[6],HIGH);
  digitalWrite (ledCol[7],HIGH);
  digitalWrite (ledCol[8],HIGH);
  digitalWrite (ledCol[9],HIGH);

  digitalWrite (ledCol[10],HIGH);
  digitalWrite (ledCol[11],HIGH);
  digitalWrite (ledCol[12],HIGH);
  digitalWrite (ledCol[13],HIGH);
  digitalWrite (ledCol[14],HIGH); 
}

void d()
{
  int n = 30;
  
  ledCol[0] = col11;
  ledCol[1] = col12;
  ledCol[2] = col13;
  ledCol[3] = col14;
  ledCol[4] = col15;
  ledCol[5] = col16;
  ledCol[6] = col17;
  ledCol[7] = col18;
  ledCol[8] = col19;
  ledCol[9] = col20;
  ledCol[10] = col21;
  ledCol[11] = col22;
  ledCol[12] = col23;
  ledCol[13] = col24;
  ledCol[14] = col25;
 
  digitalWrite(ledCol[3],LOW);
  digitalWrite(ledCol[8],LOW);
  digitalWrite(ledCol[12],LOW);
  digitalWrite(ledCol[11],LOW);
  digitalWrite(ledCol[10],LOW);
  digitalWrite(ledCol[5],LOW);
  digitalWrite(ledCol[0],LOW);
 
  delay(10*n + 800);
 
  digitalWrite (ledCol[0],HIGH);
  digitalWrite (ledCol[1],HIGH);
  digitalWrite (ledCol[2],HIGH);
  digitalWrite (ledCol[3],HIGH);
  digitalWrite (ledCol[4],HIGH);
  digitalWrite (ledCol[5],HIGH);
  digitalWrite (ledCol[6],HIGH);
  digitalWrite (ledCol[7],HIGH);
  digitalWrite (ledCol[8],HIGH);
  digitalWrite (ledCol[9],HIGH);

  digitalWrite (ledCol[10],HIGH);
  digitalWrite (ledCol[11],HIGH);
  digitalWrite (ledCol[12],HIGH);
  digitalWrite (ledCol[13],HIGH);
  digitalWrite (ledCol[14],HIGH); 
}

void l()
{
  int n = 30;
  
  ledCol[0] = col11;
  ledCol[1] = col12;
  ledCol[2] = col13;
  ledCol[3] = col14;
  ledCol[4] = col15;
  ledCol[5] = col16;
  ledCol[6] = col17;
  ledCol[7] = col18;
  ledCol[8] = col19;
  ledCol[9] = col20;
  ledCol[10] = col21;
  ledCol[11] = col22;
  ledCol[12] = col23;
  ledCol[13] = col24;
  ledCol[14] = col25;
 
  digitalWrite(ledCol[0],LOW);
  digitalWrite(ledCol[5],LOW);
  digitalWrite(ledCol[10],LOW);
  digitalWrite(ledCol[11],LOW);
  digitalWrite(ledCol[12],LOW);
  digitalWrite(ledCol[13],LOW);
  digitalWrite(ledCol[14],LOW);
  
 
  delay(10*n + 800);
 
  digitalWrite (ledCol[0],HIGH);
  digitalWrite (ledCol[1],HIGH);
  digitalWrite (ledCol[2],HIGH);
  digitalWrite (ledCol[3],HIGH);
  digitalWrite (ledCol[4],HIGH);
  digitalWrite (ledCol[5],HIGH);
  digitalWrite (ledCol[6],HIGH);
  digitalWrite (ledCol[7],HIGH);
  digitalWrite (ledCol[8],HIGH);
  digitalWrite (ledCol[9],HIGH);

  digitalWrite (ledCol[10],HIGH);
  digitalWrite (ledCol[11],HIGH);
  digitalWrite (ledCol[12],HIGH);
  digitalWrite (ledCol[13],HIGH);
  digitalWrite (ledCol[14],HIGH); 
}

void e()
{
  int n = 30;
  
  ledCol[0] = col11;
  ledCol[1] = col12;
  ledCol[2] = col13;
  ledCol[3] = col14;
  ledCol[4] = col15;
  ledCol[5] = col16;
  ledCol[6] = col17;
  ledCol[7] = col18;
  ledCol[8] = col19;
  ledCol[9] = col20;
  ledCol[10] = col21;
  ledCol[11] = col22;
  ledCol[12] = col23;
  ledCol[13] = col24;
  ledCol[14] = col25;
 
  digitalWrite(ledCol[0],LOW);
  digitalWrite(ledCol[5],LOW);
  digitalWrite(ledCol[10],LOW);
  digitalWrite(ledCol[11],LOW);
  digitalWrite(ledCol[12],LOW);
  digitalWrite(ledCol[13],LOW);
  digitalWrite(ledCol[14],LOW);
  digitalWrite(ledCol[1],LOW);
  digitalWrite(ledCol[2],LOW);
 
  delay(10*n + 800);
 
  digitalWrite (ledCol[0],HIGH);
  digitalWrite (ledCol[1],HIGH);
  digitalWrite (ledCol[2],HIGH);
  digitalWrite (ledCol[3],HIGH);
  digitalWrite (ledCol[4],HIGH);
  digitalWrite (ledCol[5],HIGH);
  digitalWrite (ledCol[6],HIGH);
  digitalWrite (ledCol[7],HIGH);
  digitalWrite (ledCol[8],HIGH);
  digitalWrite (ledCol[9],HIGH);

  digitalWrite (ledCol[10],HIGH);
  digitalWrite (ledCol[11],HIGH);
  digitalWrite (ledCol[12],HIGH);
  digitalWrite (ledCol[13],HIGH);
  digitalWrite (ledCol[14],HIGH); 
}

void c()
{
  int n = 30;
  
  ledCol[0] = col11;
  ledCol[1] = col12;
  ledCol[2] = col13;
  ledCol[3] = col14;
  ledCol[4] = col15;
  ledCol[5] = col16;
  ledCol[6] = col17;
  ledCol[7] = col18;
  ledCol[8] = col19;
  ledCol[9] = col20;
  ledCol[10] = col21;
  ledCol[11] = col22;
  ledCol[12] = col23;
  ledCol[13] = col24;
  ledCol[14] = col25;
 
  digitalWrite(ledCol[0],LOW);
  digitalWrite(ledCol[5],LOW);
  digitalWrite(ledCol[10],LOW);
  digitalWrite(ledCol[11],LOW);
  digitalWrite(ledCol[12],LOW);
  digitalWrite(ledCol[13],LOW);
  digitalWrite(ledCol[14],LOW);
  
  
 
  delay(10*n + 800);
 
  digitalWrite (ledCol[0],HIGH);
  digitalWrite (ledCol[1],HIGH);
  digitalWrite (ledCol[2],HIGH);
  digitalWrite (ledCol[3],HIGH);
  digitalWrite (ledCol[4],HIGH);
  digitalWrite (ledCol[5],HIGH);
  digitalWrite (ledCol[6],HIGH);
  digitalWrite (ledCol[7],HIGH);
  digitalWrite (ledCol[8],HIGH);
  digitalWrite (ledCol[9],HIGH);

  digitalWrite (ledCol[10],HIGH);
  digitalWrite (ledCol[11],HIGH);
  digitalWrite (ledCol[12],HIGH);
  digitalWrite (ledCol[13],HIGH);
  digitalWrite (ledCol[14],HIGH); 
}

void b()
{
  int n = 30;
  
  ledCol[0] = col11;
  ledCol[1] = col12;
  ledCol[2] = col13;
  ledCol[3] = col14;
  ledCol[4] = col15;
  ledCol[5] = col16;
  ledCol[6] = col17;
  ledCol[7] = col18;
  ledCol[8] = col19;
  ledCol[9] = col20;
  ledCol[10] = col21;
  ledCol[11] = col22;
  ledCol[12] = col23;
  ledCol[13] = col24;
  ledCol[14] = col25;
 
  digitalWrite(ledCol[0],LOW);
  digitalWrite(ledCol[5],LOW);
  digitalWrite(ledCol[10],LOW);
  digitalWrite(ledCol[11],LOW);
  digitalWrite(ledCol[12],LOW);
  digitalWrite(ledCol[13],LOW);
  digitalWrite(ledCol[14],LOW);
  digitalWrite(ledCol[9],LOW);
  digitalWrite(ledCol[3],LOW);
  digitalWrite(ledCol[2],LOW);
  digitalWrite(ledCol[1],LOW);
  
 
  delay(10*n + 800);
 
  digitalWrite (ledCol[0],HIGH);
  digitalWrite (ledCol[1],HIGH);
  digitalWrite (ledCol[2],HIGH);
  digitalWrite (ledCol[3],HIGH);
  digitalWrite (ledCol[4],HIGH);
  digitalWrite (ledCol[5],HIGH);
  digitalWrite (ledCol[6],HIGH);
  digitalWrite (ledCol[7],HIGH);
  digitalWrite (ledCol[8],HIGH);
  digitalWrite (ledCol[9],HIGH);

  digitalWrite (ledCol[10],HIGH);
  digitalWrite (ledCol[11],HIGH);
  digitalWrite (ledCol[12],HIGH);
  digitalWrite (ledCol[13],HIGH);
  digitalWrite (ledCol[14],HIGH); 
}
