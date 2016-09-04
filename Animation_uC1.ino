int col1 = 23;
int col2 = 24;
int col3 = 25;
int col4 = 26;
int col5 = 27;
int col6 = 28;
int col7 = 29;
int col8 = 10;
int col9 = 38;
int col10 = 19;

int row1 = 33;
int row2 = 32;
int row3 = 5;
int row4 = 4;
int row5 = 3;

int ledCol[25];
int ledRow[5];
  
void setup()
{
  pinMode (col1,OUTPUT);
  pinMode (col2,OUTPUT);
  pinMode (col3,OUTPUT);
  pinMode (col4,OUTPUT);
  pinMode (col5,OUTPUT);
  pinMode (col6,OUTPUT);
  pinMode (col7,OUTPUT);
  pinMode (col8,OUTPUT);
  pinMode (col9,OUTPUT);
  pinMode (col10,OUTPUT);
  
  pinMode (row1,OUTPUT);
  pinMode (row2,OUTPUT);
  pinMode (row3,OUTPUT);
  pinMode (row4,OUTPUT);
  pinMode (row5,OUTPUT);
}

void loop()
{
 int t = 200; 
 digitalWrite(col1,HIGH);
 digitalWrite(col2,HIGH);
 digitalWrite(col3,HIGH);
 digitalWrite(col4,HIGH);
 digitalWrite(col5,HIGH);
 digitalWrite(col6,HIGH);
 digitalWrite(col7,HIGH);
 digitalWrite(col8,HIGH);
 digitalWrite(col9,HIGH);
 digitalWrite(col10,HIGH);

 digitalWrite(row1,LOW);
 digitalWrite(row2,LOW);
 digitalWrite(row3,LOW);
 digitalWrite(row4,LOW);
 digitalWrite(row5,LOW);
  
  
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
  
  ledCol[0] = col1;
  ledCol[1] = col2;
  ledCol[2] = col3;
  ledCol[3] = col4;
  ledCol[4] = col5;
  ledCol[5] = col6;
  ledCol[6] = col7;
  ledCol[7] = col8;
  ledCol[8] = col9;
  ledCol[9] = col10;
  
  ledRow[0] = row1;
  ledRow[1] = row2;
  ledRow[2] = row3;
  ledRow[3] = row4;
  ledRow[4] = row5;
  
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
  
  
  
  digitalWrite (ledRow[4],HIGH);
  delay(n);
  digitalWrite (ledRow[4],LOW);
  delay(n);
  digitalWrite (ledRow[3],HIGH);
  delay(n);
  digitalWrite (ledRow[3],LOW);
  delay(n);
  digitalWrite (ledRow[2],HIGH);
  delay(n);
  digitalWrite (ledRow[2],LOW);
  delay(n);
  digitalWrite (ledRow[1],HIGH);
  delay(n);
  digitalWrite (ledRow[1],LOW);
  delay(n);
  digitalWrite (ledRow[0],HIGH);
  delay(n+800);
  
  digitalWrite (ledRow[0],HIGH);
  delay(n);
  digitalWrite (ledRow[0],LOW);
  delay(n);
  digitalWrite (ledRow[1],HIGH);
  delay(n);
  digitalWrite (ledRow[1],LOW);
  delay(n);
  digitalWrite (ledRow[2],HIGH);
  delay(n);
  digitalWrite (ledRow[2],LOW);
  delay(n);
  digitalWrite (ledRow[3],HIGH);
  delay(n);
  digitalWrite (ledRow[3],LOW);
  delay(n);
  digitalWrite (ledRow[4],HIGH);
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
  
}

void verticalClimbing()
{
  ledCol[0] = col1;
  ledCol[1] = col2;
  ledCol[2] = col3;
  ledCol[3] = col4;
  ledCol[4] = col5;
  ledCol[5] = col6;
  ledCol[6] = col7;
  ledCol[7] = col8;
  ledCol[8] = col9;
  ledCol[9] = col10;
  
  ledRow[0] = row1;
  ledRow[1] = row2;
  ledRow[2] = row3;
  ledRow[3] = row4;
  ledRow[4] = row5;
  
  int n = 40;
  
  digitalWrite (ledRow[0],HIGH);
  digitalWrite (ledRow[1],HIGH);
  digitalWrite (ledRow[2],HIGH);
  digitalWrite (ledRow[3],HIGH);
  digitalWrite (ledRow[4],HIGH);
  
 
  digitalWrite (ledCol[0],LOW);
  digitalWrite (ledCol[5],LOW);
  delay(n);
  digitalWrite (ledCol[0],HIGH);
  digitalWrite (ledCol[5],HIGH);
  delay(n);
  
  digitalWrite (ledCol[1],LOW);
  digitalWrite (ledCol[6],LOW);
  delay(n);
  digitalWrite (ledCol[1],HIGH);
  digitalWrite (ledCol[6],HIGH);
  delay(n);
  
  digitalWrite (ledCol[2],LOW);
  digitalWrite (ledCol[7],LOW);
  delay(n);
  digitalWrite (ledCol[2],HIGH);
  digitalWrite (ledCol[7],HIGH);
  delay(n);
  
  digitalWrite (ledCol[3],LOW);
  digitalWrite (ledCol[8],LOW);
  delay(n);
  digitalWrite (ledCol[3],HIGH);
  digitalWrite (ledCol[8],HIGH);
  delay(n);
  
  digitalWrite (ledCol[4],LOW);
  digitalWrite (ledCol[9],LOW);
  delay(n+800);
  digitalWrite (ledCol[4],HIGH);
  digitalWrite (ledCol[9],HIGH);
  delay(n);
  
  digitalWrite (ledCol[3],LOW);
  digitalWrite (ledCol[8],LOW);
  delay(n);
  digitalWrite (ledCol[3],HIGH);
  digitalWrite (ledCol[8],HIGH);
  delay(n);
  
  digitalWrite (ledCol[2],LOW);
  digitalWrite (ledCol[7],LOW);
  delay(n);
  digitalWrite (ledCol[2],HIGH);
  digitalWrite (ledCol[7],HIGH);
  delay(n);
  
  digitalWrite (ledCol[1],LOW);
  digitalWrite (ledCol[6],LOW);
  delay(n);
  digitalWrite (ledCol[1],HIGH);
  digitalWrite (ledCol[6],HIGH);
  delay(n);
 
  digitalWrite (ledCol[0],LOW);
  digitalWrite (ledCol[5],LOW);
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
  
  digitalWrite (ledRow[0],LOW);
  digitalWrite (ledRow[1],LOW);
  digitalWrite (ledRow[2],LOW);
  digitalWrite (ledRow[3],LOW);
  digitalWrite (ledRow[4],LOW);
}

void verticalClimbing_two()
{
  int n = 40;
  
  ledCol[0] = col1;
  ledCol[1] = col2;
  ledCol[2] = col3;
  ledCol[3] = col4;
  ledCol[4] = col5;
  ledCol[5] = col6;
  ledCol[6] = col7;
  ledCol[7] = col8;
  ledCol[8] = col9;
  ledCol[9] = col10;
  
  ledRow[0] = row1;
  ledRow[1] = row2;
  ledRow[2] = row3;
  ledRow[3] = row4;
  ledRow[4] = row5;
  
  digitalWrite (ledRow[0],HIGH);
  digitalWrite (ledRow[1],HIGH);
  digitalWrite (ledRow[2],HIGH);
  digitalWrite (ledRow[3],HIGH);
  digitalWrite (ledRow[4],HIGH);
  
  digitalWrite(ledCol[0],LOW);
  digitalWrite(ledCol[1],LOW);
  digitalWrite(ledCol[2],LOW);
  digitalWrite(ledCol[3],LOW);
  digitalWrite(ledCol[4],LOW);
  
  delay(n+800);
  
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
  
  delay(10*n+800);
  
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
  
  delay(n+800);
  
  digitalWrite(ledCol[0],HIGH);
  digitalWrite(ledCol[1],HIGH);
  digitalWrite(ledCol[2],HIGH);
  digitalWrite(ledCol[3],HIGH);
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
  
  digitalWrite (ledRow[0],LOW);
  digitalWrite (ledRow[1],LOW);
  digitalWrite (ledRow[2],LOW);
  digitalWrite (ledRow[3],LOW);
  digitalWrite (ledRow[4],LOW);
}

void verticalClimbing_three()
{
  ledCol[0] = col1;
  ledCol[1] = col2;
  ledCol[2] = col3;
  ledCol[3] = col4;
  ledCol[4] = col5;
  ledCol[5] = col6;
  ledCol[6] = col7;
  ledCol[7] = col8;
  ledCol[8] = col9;
  ledCol[9] = col10;
  
  ledRow[0] = row1;
  ledRow[1] = row2;
  ledRow[2] = row3;
  ledRow[3] = row4;
  ledRow[4] = row5;
  
  int n = 40;
  
  digitalWrite (ledRow[0],HIGH);
  digitalWrite (ledRow[1],HIGH);
  digitalWrite (ledRow[2],HIGH);
  digitalWrite (ledRow[3],HIGH);
  digitalWrite (ledRow[4],HIGH);
  
 
  digitalWrite (ledCol[0],LOW);
  digitalWrite (ledCol[5],LOW);
  delay(n);
  digitalWrite (ledCol[0],HIGH);
  digitalWrite (ledCol[5],HIGH);
  delay(n);
  
  digitalWrite (ledCol[1],LOW);
  digitalWrite (ledCol[6],LOW);
  delay(n);
  digitalWrite (ledCol[1],HIGH);
  digitalWrite (ledCol[6],HIGH);
  delay(n);
  
  digitalWrite (ledCol[2],LOW);
  digitalWrite (ledCol[7],LOW);
  delay(n);
  digitalWrite (ledCol[2],HIGH);
  digitalWrite (ledCol[7],HIGH);
  delay(n);
  
  digitalWrite (ledCol[3],LOW);
  digitalWrite (ledCol[8],LOW);
  delay(n);
  digitalWrite (ledCol[3],HIGH);
  digitalWrite (ledCol[8],HIGH);
  delay(n);
  
  digitalWrite (ledCol[4],LOW);
  digitalWrite (ledCol[9],LOW);
  delay(n+800);
  digitalWrite (ledCol[4],HIGH);
  digitalWrite (ledCol[9],HIGH);
  delay(n);
  
  digitalWrite (ledCol[3],LOW);
  digitalWrite (ledCol[8],LOW);
  delay(n);
  digitalWrite (ledCol[3],HIGH);
  digitalWrite (ledCol[8],HIGH);
  delay(n);
  
  digitalWrite (ledCol[2],LOW);
  digitalWrite (ledCol[7],LOW);
  delay(n);
  digitalWrite (ledCol[2],HIGH);
  digitalWrite (ledCol[7],HIGH);
  delay(n);
  
  digitalWrite (ledCol[1],LOW);
  digitalWrite (ledCol[6],LOW);
  delay(n);
  digitalWrite (ledCol[1],HIGH);
  digitalWrite (ledCol[6],HIGH);
  delay(n);
 
  digitalWrite (ledCol[0],LOW);
  digitalWrite (ledCol[5],LOW);
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
  
  digitalWrite (ledRow[0],LOW);
  digitalWrite (ledRow[1],LOW);
  digitalWrite (ledRow[2],LOW);
  digitalWrite (ledRow[3],LOW);
  digitalWrite (ledRow[4],LOW);
}

void jumpingBeans()
{
   int n = 20;
   int m;
  ledCol[0] = col1;
  ledCol[1] = col2;
  ledCol[2] = col3;
  ledCol[3] = col4;
  ledCol[4] = col5;
  ledCol[5] = col6;
  ledCol[6] = col7;
  ledCol[7] = col8;
  ledCol[8] = col9;
  ledCol[9] = col10;
  
  ledRow[0] = row1;
  ledRow[1] = row2;
  ledRow[2] = row3;
  ledRow[3] = row4;
  ledRow[4] = row5;
  
  m = random(0,10);
  digitalWrite (ledCol[m],LOW);
  
  digitalWrite (ledRow[0],HIGH);
  delay(n);
  digitalWrite (ledRow[0],LOW);
  delay(n);
  
  digitalWrite (ledRow[1],HIGH);
  delay(n);
  digitalWrite (ledRow[1],LOW);
  delay(n);
  
  digitalWrite (ledRow[2],HIGH);
  delay(n);
  digitalWrite (ledRow[2],LOW);
  delay(n);
  
  digitalWrite (ledRow[3],HIGH);
  delay(n);
  digitalWrite (ledRow[3],LOW);
  delay(n);
  
  digitalWrite (ledRow[4],HIGH);
  delay(n);
  digitalWrite (ledRow[4],LOW);
  delay(n);
  
  digitalWrite (ledCol[m],HIGH);
  
  
  digitalWrite (ledRow[0],LOW);
  digitalWrite (ledRow[1],LOW);
  digitalWrite (ledRow[2],LOW);
  digitalWrite (ledRow[3],LOW);
  digitalWrite (ledRow[4],LOW);
  
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
}

void zigzag_one()
{
  ledCol[0] = col1;
  ledCol[1] = col2;
  ledCol[2] = col3;
  ledCol[3] = col4;
  ledCol[4] = col5;
  ledCol[5] = col6;
  ledCol[6] = col7;
  ledCol[7] = col8;
  ledCol[8] = col9;
  ledCol[9] = col10;
  
  ledRow[0] = row1;
  ledRow[1] = row2;
  ledRow[2] = row3;
  ledRow[3] = row4;
  ledRow[4] = row5;
  
  int n = 15;
  int m;
  
  digitalWrite(ledRow[0],HIGH);
  digitalWrite(ledRow[1],HIGH);
  digitalWrite(ledRow[2],HIGH);
  digitalWrite(ledRow[3],HIGH);
  digitalWrite(ledRow[4],HIGH);
  
  
  digitalWrite(ledCol[1],HIGH);
  digitalWrite(ledCol[2],HIGH);
  digitalWrite(ledCol[3],HIGH);
  digitalWrite(ledCol[7],HIGH);
  
  digitalWrite(ledCol[0],LOW);
  delay(n);
  digitalWrite(ledCol[0],HIGH);
  delay(n);
  digitalWrite(ledCol[6],LOW);
  delay(n);
  digitalWrite(ledCol[6],HIGH);
  delay(n);
  
  delay(10*n);
  
  digitalWrite(ledCol[9],LOW);
  delay(n);
  digitalWrite(ledCol[9],HIGH);
  delay(n);
  digitalWrite(ledCol[4],LOW);
  delay(n);
  digitalWrite(ledCol[4],HIGH);
  delay(n);
  digitalWrite(ledCol[8],LOW);
  delay(n);
  digitalWrite(ledCol[8],HIGH);
  delay(n);
  
  delay(10*n);
  
  digitalWrite(ledCol[5],LOW);
  delay(n);
  digitalWrite(ledCol[5],HIGH);
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
  
  digitalWrite (ledRow[0],LOW);
  digitalWrite (ledRow[1],LOW);
  digitalWrite (ledRow[2],LOW);
  digitalWrite (ledRow[3],LOW);
  digitalWrite (ledRow[4],LOW);
}

void tornado()
{
  ledCol[0] = col1;
  ledCol[1] = col2;
  ledCol[2] = col3;
  ledCol[3] = col4;
  ledCol[4] = col5;
  ledCol[5] = col6;
  ledCol[6] = col7;
  ledCol[7] = col8;
  ledCol[8] = col9;
  ledCol[9] = col10;
  
  ledRow[0] = row1;
  ledRow[1] = row2;
  ledRow[2] = row3;
  ledRow[3] = row4;
  ledRow[4] = row5;
  
   
  int n = 25;
  
  digitalWrite(ledRow[0],LOW);
  digitalWrite(ledRow[1],LOW);
  digitalWrite(ledRow[2],LOW);
  digitalWrite(ledRow[3],LOW);
  digitalWrite(ledRow[4],LOW);
  
  while(n>=0)
  { 
  for(int a = 0;a<5;a++)
  {
   digitalWrite (ledRow[a],HIGH);
    
  digitalWrite(ledCol[5],LOW);
  delay(n);
  digitalWrite(ledCol[5],HIGH);
  delay(n);
  digitalWrite(ledCol[0],LOW);
  delay(n);
  digitalWrite(ledCol[0],HIGH);
  delay(n);
  digitalWrite(ledCol[1],LOW);
  delay(n);
  digitalWrite(ledCol[1],HIGH);
  delay(n);
  digitalWrite(ledCol[2],LOW);
  delay(n);
  digitalWrite(ledCol[2],HIGH);
  delay(n);
  digitalWrite(ledCol[3],LOW);
  delay(n);
  digitalWrite(ledCol[3],HIGH);
  delay(n);
  digitalWrite(ledCol[4],LOW);
  delay(n);
  digitalWrite(ledCol[4],HIGH);
  delay(n);
  digitalWrite(ledCol[9],LOW);
  delay(n);
  digitalWrite(ledCol[9],HIGH);
  delay(n);
  delay(18*n);
  digitalWrite(ledRow[a],LOW);
  }
  
  for(int a = 0;a<5;a++)
  {
  digitalWrite (ledRow[a],HIGH);
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
  delay(10*n);  
  
  digitalWrite(ledRow[a],LOW);
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

  digitalWrite (ledRow[0],LOW);
  digitalWrite (ledRow[1],LOW);
  digitalWrite (ledRow[2],LOW);
  digitalWrite (ledRow[3],LOW);
  digitalWrite (ledRow[4],LOW);
}

void boxPattern()
{
  
  ledCol[0] = col1;
  ledCol[1] = col2;
  ledCol[2] = col3;
  ledCol[3] = col4;
  ledCol[4] = col5;
  ledCol[5] = col6;
  ledCol[6] = col7;
  ledCol[7] = col8;
  ledCol[8] = col9;
  ledCol[9] = col10;
  
  ledRow[0] = row1;
  ledRow[1] = row2;
  ledRow[2] = row3;
  ledRow[3] = row4;
  ledRow[4] = row5;
  
  int n = 20;
  
   digitalWrite (ledRow[0],HIGH);
   digitalWrite (ledRow[1],HIGH);
   digitalWrite (ledRow[2],HIGH);
   digitalWrite (ledRow[3],HIGH);
   digitalWrite (ledRow[4],HIGH);
   
   
  for (int a=0;a<=2;a++)
  {
  digitalWrite(ledCol[5],LOW);
  delay(n);
  digitalWrite(ledCol[5],HIGH);
  delay(n);
  digitalWrite(ledCol[0],LOW);
  delay(n);
  digitalWrite(ledCol[0],HIGH);
  delay(n);
  digitalWrite(ledCol[1],LOW);
  delay(n);
  digitalWrite(ledCol[1],HIGH);
  delay(n);
  digitalWrite(ledCol[2],LOW);
  delay(n);
  digitalWrite(ledCol[2],HIGH);
  delay(n);
  digitalWrite(ledCol[3],LOW);
  delay(n);
  digitalWrite(ledCol[3],HIGH);
  delay(n);
  digitalWrite(ledCol[4],LOW);
  delay(n);
  digitalWrite(ledCol[4],HIGH);
  delay(n);
  
  digitalWrite(ledCol[9],LOW);
  delay(n);
  digitalWrite(ledCol[9],HIGH);
  delay(n);
  delay(18*n);
  
  }
  for (int a=0;a<=2;a++)
  {
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
  delay(10*n);  
}
  delay(6*n);
  
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
  
  digitalWrite (ledRow[0],LOW);
  digitalWrite (ledRow[1],LOW);
  digitalWrite (ledRow[2],LOW);
  digitalWrite (ledRow[3],LOW);
  digitalWrite (ledRow[4],LOW);
}

void waterDrop()
{
  int n = 30;
  
  
  ledCol[0] = col1;
  ledCol[1] = col2;
  ledCol[2] = col3;
  ledCol[3] = col4;
  ledCol[4] = col5;
  ledCol[5] = col6;
  ledCol[6] = col7;
  ledCol[7] = col8;
  ledCol[8] = col9;
  ledCol[9] = col10;
  
  ledRow[0] = row1;
  ledRow[1] = row2;
  ledRow[2] = row3;
  ledRow[3] = row4;
  ledRow[4] = row5;
  
  
  digitalWrite (ledRow[4],HIGH);
  delay(n+500);
  digitalWrite (ledRow[4],LOW);
  delay(n);
  digitalWrite (ledRow[3],HIGH);
  delay(n);
  digitalWrite (ledRow[3],LOW);
  delay(n);
  digitalWrite (ledRow[2],HIGH);
  delay(n);
  digitalWrite (ledRow[2],LOW);
  delay(n);
  digitalWrite (ledRow[1],HIGH);
  delay(n);
  digitalWrite (ledRow[1],LOW);
  delay(n);
  
  
  
  digitalWrite (ledRow[0],HIGH);
  digitalWrite (ledRow[1],LOW);
  digitalWrite (ledRow[2],LOW);
  digitalWrite (ledRow[3],LOW);
  digitalWrite (ledRow[4],LOW);
     
  digitalWrite (ledCol[6],LOW);
  digitalWrite (ledCol[7],LOW);
  digitalWrite (ledCol[8],LOW);
  delay(n+200);
  
  digitalWrite (ledCol[6],HIGH);
  digitalWrite (ledCol[7],HIGH);
  digitalWrite (ledCol[8],HIGH);
  delay(n);
   

  
  digitalWrite(ledCol[0],LOW);
  digitalWrite(ledCol[1],LOW);
  digitalWrite(ledCol[2],LOW);
  digitalWrite(ledCol[3],LOW);
  digitalWrite(ledCol[4],LOW);
  digitalWrite(ledCol[5],LOW);
  digitalWrite(ledCol[9],LOW);
  delay(n+500);
  
  
  
  digitalWrite(ledCol[0],HIGH);
  digitalWrite(ledCol[1],HIGH);
  digitalWrite(ledCol[2],HIGH);
  digitalWrite(ledCol[3],HIGH);
  digitalWrite(ledCol[4],HIGH);
  digitalWrite(ledCol[5],HIGH);
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
  
  digitalWrite (ledRow[0],LOW);
  digitalWrite (ledRow[1],LOW);
  digitalWrite (ledRow[2],LOW);
  digitalWrite (ledRow[3],LOW);
  digitalWrite (ledRow[4],LOW);
 
}

void umbrella()
{
  int n = 30;
  
  
  ledCol[0] = col1;
  ledCol[1] = col2;
  ledCol[2] = col3;
  ledCol[3] = col4;
  ledCol[4] = col5;
  ledCol[5] = col6;
  ledCol[6] = col7;
  ledCol[7] = col8;
  ledCol[8] = col9;
  ledCol[9] = col10;
  
  ledRow[0] = row1;
  ledRow[1] = row2;
  ledRow[2] = row3;
  ledRow[3] = row4;
  ledRow[4] = row5;
  
  digitalWrite (ledRow[0],HIGH);
  delay(n+500);
  digitalWrite (ledRow[1],HIGH);
  delay(n);
  digitalWrite (ledRow[2],HIGH);
  delay(n);
  digitalWrite (ledRow[3],HIGH);
  delay(n);
    
  digitalWrite (ledRow[0],LOW);
  digitalWrite (ledRow[1],LOW);
  digitalWrite (ledRow[2],LOW);
  digitalWrite (ledRow[3],LOW);
  digitalWrite (ledRow[4],HIGH);
  
  digitalWrite (ledCol[6],LOW);
  digitalWrite (ledCol[7],LOW);
  digitalWrite (ledCol[8],LOW);
  delay(n+100);
  
  digitalWrite(ledCol[0],LOW);
  digitalWrite(ledCol[1],LOW);
  digitalWrite(ledCol[2],LOW);
  digitalWrite(ledCol[3],LOW);
  digitalWrite(ledCol[4],LOW);
  digitalWrite(ledCol[5],LOW);
  digitalWrite(ledCol[9],LOW);
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
 
  digitalWrite (ledRow[0],LOW);
  digitalWrite (ledRow[1],LOW);
  digitalWrite (ledRow[2],LOW);
  digitalWrite (ledRow[3],LOW);
  digitalWrite (ledRow[4],LOW); 
}

void fountain()
{
  int n = 20;
  
  ledCol[0] = col1;
  ledCol[1] = col2;
  ledCol[2] = col3;
  ledCol[3] = col4;
  ledCol[4] = col5;
  ledCol[5] = col6;
  ledCol[6] = col7;
  ledCol[7] = col8;
  ledCol[8] = col9;
  ledCol[9] = col10;
  
  ledRow[0] = row1;
  ledRow[1] = row2;
  ledRow[2] = row3;
  ledRow[3] = row4;
  ledRow[4] = row5;
  
  digitalWrite(ledCol[6],LOW);
  digitalWrite(ledCol[7],LOW);
  digitalWrite(ledCol[8],LOW);
  
  digitalWrite(ledRow[0],HIGH);
  delay(n);
  digitalWrite(ledRow[0],LOW);
  delay(n);
  
  digitalWrite(ledRow[1],HIGH);
  delay(n);
  digitalWrite(ledRow[1],LOW);
  delay(n);
  
  digitalWrite(ledRow[2],HIGH);
  delay(n);
  digitalWrite(ledRow[2],LOW);
  delay(n);
  
  digitalWrite(ledRow[3],HIGH);
  delay(n);
  digitalWrite(ledRow[3],LOW);
  delay(n);
  
  digitalWrite(ledRow[4],HIGH);
  delay(n);
  digitalWrite(ledRow[4],LOW);
  delay(n);
  
  digitalWrite(ledCol[6],HIGH);
  digitalWrite(ledCol[7],HIGH);
  digitalWrite(ledCol[8],HIGH);
  
  digitalWrite(ledCol[5],LOW);
  digitalWrite(ledCol[0],LOW);
  digitalWrite(ledCol[1],LOW);
  digitalWrite(ledCol[2],LOW);
  digitalWrite(ledCol[3],LOW);
  digitalWrite(ledCol[4],LOW);
  digitalWrite(ledCol[9],LOW);
  
  digitalWrite(ledRow[4],HIGH);
  delay(n);
  digitalWrite(ledRow[4],LOW);
  delay(n);
  
  digitalWrite(ledRow[3],HIGH);
  delay(n);
  digitalWrite(ledRow[3],LOW);
  delay(n);
  
  digitalWrite(ledRow[2],HIGH);
  delay(n);
  digitalWrite(ledRow[2],LOW);
  delay(n);
  
  digitalWrite(ledRow[1],HIGH);
  delay(n);
  digitalWrite(ledRow[1],LOW);
  delay(n);
  
  digitalWrite(ledRow[0],HIGH);
  delay(n);
  digitalWrite(ledRow[0],LOW);
  delay(n);
  
  digitalWrite(ledCol[5],HIGH);
  digitalWrite(ledCol[0],HIGH);
  digitalWrite(ledCol[1],HIGH);
  digitalWrite(ledCol[2],HIGH);
  digitalWrite(ledCol[3],HIGH);
  digitalWrite(ledCol[4],HIGH);
  digitalWrite(ledCol[9],HIGH);
  
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
  
  digitalWrite (ledRow[0],LOW);
  digitalWrite (ledRow[1],LOW);
  digitalWrite (ledRow[2],LOW);
  digitalWrite (ledRow[3],LOW);
  digitalWrite (ledRow[4],LOW);
  
  
}

void firework()
{
  
  int n = 30;
  
  
  ledCol[0] = col1;
  ledCol[1] = col2;
  ledCol[2] = col3;
  ledCol[3] = col4;
  ledCol[4] = col5;
  ledCol[5] = col6;
  ledCol[6] = col7;
  ledCol[7] = col8;
  ledCol[8] = col9;
  ledCol[9] = col10;
  
  ledRow[0] = row1;
  ledRow[1] = row2;
  ledRow[2] = row3;
  ledRow[3] = row4;
  ledRow[4] = row5;
  
  digitalWrite (ledRow[0],HIGH);
  delay(3*n+500);
  digitalWrite (ledRow[0],LOW);
  delay(3*n);
  digitalWrite (ledRow[1],HIGH);
  delay(3*n);
  digitalWrite (ledRow[1],LOW);
  delay(3*n);
  digitalWrite (ledRow[2],HIGH);
  delay(3*n);
  digitalWrite (ledRow[2],LOW);
  delay(3*n);
  digitalWrite (ledRow[3],HIGH);
  delay(3*n);
  digitalWrite (ledRow[3],LOW);
  delay(3*n);
  
  digitalWrite (ledRow[0],LOW);
  digitalWrite (ledRow[1],LOW);
  digitalWrite (ledRow[2],LOW);
  digitalWrite (ledRow[3],LOW);
  digitalWrite (ledRow[4],HIGH);
  
  digitalWrite (ledCol[6],LOW);
  digitalWrite (ledCol[7],LOW);
  digitalWrite (ledCol[8],LOW);
  digitalWrite(ledCol[0],LOW);
  digitalWrite(ledCol[1],LOW);
  digitalWrite(ledCol[2],LOW);
  digitalWrite(ledCol[3],LOW);
  digitalWrite(ledCol[4],LOW);
  digitalWrite(ledCol[5],LOW);
  digitalWrite(ledCol[9],LOW);
  delay(n+500);
  
  digitalWrite (ledRow[4],HIGH);
  delay(n-10);
  digitalWrite (ledRow[4],LOW);
  delay(n-10);
  digitalWrite (ledRow[3],HIGH);
  delay(n-10);
  digitalWrite (ledRow[3],LOW);
  delay(n-10);
  digitalWrite (ledRow[2],HIGH);
  delay(n-10);
  digitalWrite (ledRow[2],LOW);
  delay(n-10);
  digitalWrite (ledRow[1],HIGH);
  delay(n-10);
  digitalWrite (ledRow[1],LOW);
  delay(n-10);
  digitalWrite (ledRow[0],HIGH);
  delay(n-10+800);
  digitalWrite (ledRow[0],LOW);
  delay(n-10);
 
 
  digitalWrite(ledCol[0],HIGH);
  digitalWrite(ledCol[1],HIGH);
  digitalWrite(ledCol[2],HIGH);
  digitalWrite(ledCol[3],HIGH);
  digitalWrite(ledCol[4],HIGH);
  digitalWrite(ledCol[5],HIGH);
  digitalWrite(ledCol[9],HIGH);
  digitalWrite (ledCol[6],HIGH);
  digitalWrite (ledCol[7],HIGH);
  digitalWrite (ledCol[8],HIGH);
  
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
  
  digitalWrite (ledRow[0],LOW);
  digitalWrite (ledRow[1],LOW);
  digitalWrite (ledRow[2],LOW);
  digitalWrite (ledRow[3],LOW);
  digitalWrite (ledRow[4],LOW);
}

void lightning()
{
  int n = 10;
  int m;
  int p; 
  ledCol[0] = col1;
  ledCol[1] = col2;
  ledCol[2] = col3;
  ledCol[3] = col4;
  ledCol[4] = col5;
  ledCol[5] = col6;
  ledCol[6] = col7;
  ledCol[7] = col8;
  ledCol[8] = col9;
  ledCol[9] = col10;
  
  ledRow[0] = row1;
  ledRow[1] = row2;
  ledRow[2] = row3;
  ledRow[3] = row4;
  ledRow[4] = row5;
  
  m = random(0,10);
  p = random(0,10);
  
  if(p==m)
  p = p + 1;
  digitalWrite(ledCol[m],LOW);
  digitalWrite(ledCol[p],LOW);
  for(int a=0;a<5;a++)
  {
   digitalWrite(ledRow[a],HIGH);
   delay(n);
   digitalWrite(ledRow[a],LOW);
   delay(n); 
  }
  digitalWrite(ledCol[m],HIGH);
  digitalWrite(ledCol[p],HIGH);
  
  delay(500);
  
  digitalWrite(ledRow[0],HIGH);
  digitalWrite(ledRow[1],HIGH);
  digitalWrite(ledRow[2],HIGH);
  digitalWrite(ledRow[3],HIGH);
  digitalWrite(ledRow[4],HIGH);
  
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
  delay(500);
  }
  
  digitalWrite(ledRow[0],LOW);
  digitalWrite(ledRow[1],LOW);
  digitalWrite(ledRow[2],LOW);
  digitalWrite(ledRow[3],LOW);
  digitalWrite(ledRow[4],LOW);
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
}

void rain()
{
  int n = 30;
  
  
  ledCol[0] = col1;
  ledCol[1] = col2;
  ledCol[2] = col3;
  ledCol[3] = col4;
  ledCol[4] = col5;
  ledCol[5] = col6;
  ledCol[6] = col7;
  ledCol[7] = col8;
  ledCol[8] = col9;
  ledCol[9] = col10;
  
  ledRow[0] = row1;
  ledRow[1] = row2;
  ledRow[2] = row3;
  ledRow[3] = row4;
  ledRow[4] = row5;
  
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
  
  
  digitalWrite (ledRow[4],HIGH);
  for(int a = 0; a <= 19; a++)
  {
  digitalWrite (ledRow[3],HIGH);
  delay(n);
  digitalWrite (ledRow[3],LOW);
  delay(n);
  digitalWrite (ledRow[2],HIGH);
  delay(n);
  digitalWrite (ledRow[2],LOW);
  delay(n);
  digitalWrite (ledRow[1],HIGH);
  delay(n);
  digitalWrite (ledRow[1],LOW);
  delay(n);
  digitalWrite (ledRow[0],HIGH);
  delay(n);
  digitalWrite (ledRow[0],LOW);
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
  
  digitalWrite (ledRow[0],LOW);
  digitalWrite (ledRow[1],LOW);
  digitalWrite (ledRow[2],LOW);
  digitalWrite (ledRow[3],LOW);
  digitalWrite (ledRow[4],LOW);
}

void heart()
{
  int n = 80;
  
  ledCol[0] = col1;
  ledCol[1] = col2;
  ledCol[2] = col3;
  ledCol[3] = col4;
  ledCol[4] = col5;
  ledCol[5] = col6;
  ledCol[6] = col7;
  ledCol[7] = col8;
  ledCol[8] = col9;
  ledCol[9] = col10;
  
  ledRow[0] = row1;
  ledRow[1] = row2;
  ledRow[2] = row3;
  ledRow[3] = row4;
  ledRow[4] = row5;
 
  digitalWrite(ledRow[0],LOW);
  digitalWrite(ledRow[1],LOW);
  digitalWrite(ledRow[2],LOW);
  digitalWrite(ledRow[3],LOW);
  digitalWrite(ledRow[4],LOW);
  
  digitalWrite(ledCol[0],LOW);
  digitalWrite(ledCol[1],LOW);
  digitalWrite(ledCol[5],LOW);
  digitalWrite(ledCol[7],LOW);
  digitalWrite(ledCol[3],LOW);
  digitalWrite(ledCol[4],LOW);
  digitalWrite(ledCol[9],LOW);
  digitalWrite(ledCol[2],HIGH);
  digitalWrite(ledCol[6],LOW);
  digitalWrite(ledCol[8],LOW);
  
  digitalWrite(ledRow[0],HIGH);
  delay(n);
  digitalWrite(ledRow[0],LOW);
  delay(n);
  digitalWrite(ledRow[1],HIGH);
  delay(n);
  digitalWrite(ledRow[1],LOW);
  delay(n);
  digitalWrite(ledRow[2],HIGH);
  delay(n);
  digitalWrite(ledRow[2],LOW);
  delay(n);
  digitalWrite(ledRow[3],HIGH);
  delay(n);
  digitalWrite(ledRow[3],LOW);
  delay(n);
  for(int a = 0;a<5;a++)
  {
   for(int b = 0;b<2;b++)
  {  
  digitalWrite(ledRow[4],HIGH);
  delay(n-20);
  digitalWrite(ledRow[4],LOW);
  delay(n-20);
   }
   delay(500);
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
  
  digitalWrite (ledRow[0],LOW);
  digitalWrite (ledRow[1],LOW);
  digitalWrite (ledRow[2],LOW);
  digitalWrite (ledRow[3],LOW);
  digitalWrite (ledRow[4],LOW);
}
void wheel()
{
  int n=75;
  
  ledCol[0] = col1;
  ledCol[1] = col2;
  ledCol[2] = col3;
  ledCol[3] = col4;
  ledCol[4] = col5;
  ledCol[5] = col6;
  ledCol[6] = col7;
  ledCol[7] = col8;
  ledCol[8] = col9;
  ledCol[9] = col10;
  
  ledRow[0] = row1;
  ledRow[1] = row2;
  ledRow[2] = row3;
  ledRow[3] = row4;
  ledRow[4] = row5;
  
 
  digitalWrite (ledRow[0],HIGH);
  digitalWrite (ledRow[1],HIGH);
  digitalWrite (ledRow[2],HIGH);
  digitalWrite (ledRow[3],HIGH);
  digitalWrite (ledRow[4],HIGH);
  
  digitalWrite(ledCol[1],HIGH);
  digitalWrite(ledCol[5],HIGH);
  digitalWrite(ledCol[9],HIGH);
  digitalWrite(ledCol[3],HIGH);
 
  digitalWrite (ledCol[0],LOW);
  digitalWrite (ledCol[6],LOW);
  delay(n);
  digitalWrite (ledCol[0],HIGH);
  digitalWrite (ledCol[6],HIGH);
  delay(n);
  digitalWrite (ledCol[2],LOW);
  digitalWrite (ledCol[7],LOW);
  delay(n);
  digitalWrite (ledCol[2],HIGH);
  digitalWrite (ledCol[7],HIGH);
  delay(n);
  digitalWrite (ledCol[4],LOW);
  digitalWrite (ledCol[8],LOW);
  delay(n);
  digitalWrite (ledCol[4],HIGH);
  digitalWrite (ledCol[8],HIGH);
  delay(n);
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
  
  digitalWrite (ledRow[0],LOW);
  digitalWrite (ledRow[1],LOW);
  digitalWrite (ledRow[2],LOW);
  digitalWrite (ledRow[3],LOW);
  digitalWrite (ledRow[4],LOW);
}

void anti_wheel()
{
  int n=75;
  
  ledCol[0] = col1;
  ledCol[1] = col2;
  ledCol[2] = col3;
  ledCol[3] = col4;
  ledCol[4] = col5;
  ledCol[5] = col6;
  ledCol[6] = col7;
  ledCol[7] = col8;
  ledCol[8] = col9;
  ledCol[9] = col10;
  
  ledRow[0] = row1;
  ledRow[1] = row2;
  ledRow[2] = row3;
  ledRow[3] = row4;
  ledRow[4] = row5;
  
 
  digitalWrite (ledRow[0],HIGH);
  digitalWrite (ledRow[1],HIGH);
  digitalWrite (ledRow[2],HIGH);
  digitalWrite (ledRow[3],HIGH);
  digitalWrite (ledRow[4],HIGH);
  
  digitalWrite(ledCol[1],HIGH);
  digitalWrite(ledCol[5],HIGH);
  digitalWrite(ledCol[9],HIGH);
  digitalWrite(ledCol[3],HIGH);
 
  digitalWrite (ledCol[4],LOW);
  digitalWrite (ledCol[8],LOW);
  delay(n);
  digitalWrite (ledCol[4],HIGH);
  digitalWrite (ledCol[8],HIGH);
  delay(n);
  digitalWrite (ledCol[2],LOW);
  digitalWrite (ledCol[7],LOW);
  delay(n);
  digitalWrite (ledCol[2],HIGH);
  digitalWrite (ledCol[7],HIGH);
  delay(n);
  digitalWrite (ledCol[0],LOW);
  digitalWrite (ledCol[6],LOW);
  delay(n);
  digitalWrite (ledCol[0],HIGH);
  digitalWrite (ledCol[6],HIGH);
  delay(n);
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
  
  digitalWrite (ledRow[0],LOW);
  digitalWrite (ledRow[1],LOW);
  digitalWrite (ledRow[2],LOW);
  digitalWrite (ledRow[3],LOW);
  digitalWrite (ledRow[4],LOW);

}


void wheel_four()
{
  int n=80;
  ledCol[0] = col1;
  ledCol[1] = col2;
  ledCol[2] = col3;
  ledCol[3] = col4;
  ledCol[4] = col5;
  ledCol[5] = col6;
  ledCol[6] = col7;
  ledCol[7] = col8;
  ledCol[8] = col9;
  ledCol[9] = col10;
  
  ledRow[0] = row1;
  ledRow[1] = row2;
  ledRow[2] = row3;
  ledRow[3] = row4;
  ledRow[4] = row5;
  
  digitalWrite(ledRow[0],HIGH);
  digitalWrite(ledRow[1],HIGH);
  digitalWrite(ledRow[2],HIGH);
  digitalWrite(ledRow[3],HIGH);
  digitalWrite(ledRow[4],HIGH);
  
  digitalWrite(ledCol[1],HIGH);
  digitalWrite(ledCol[5],HIGH);
  digitalWrite(ledCol[9],HIGH);
  digitalWrite(ledCol[3],HIGH);
  
  digitalWrite(ledCol[2],LOW);
  digitalWrite(ledCol[7],LOW);
  delay(n);
  digitalWrite(ledCol[2],HIGH);
  digitalWrite(ledCol[7],HIGH);
  delay(n);
  
  
  digitalWrite(ledCol[0],LOW);
  digitalWrite(ledCol[6],LOW);
  digitalWrite(ledCol[4],LOW);
  digitalWrite(ledCol[8],LOW);
  delay(n);
  digitalWrite(ledCol[0],HIGH);
  digitalWrite(ledCol[6],HIGH);
  digitalWrite(ledCol[4],HIGH);
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
  
  
  digitalWrite (ledRow[0],LOW);
  digitalWrite (ledRow[1],LOW);
  digitalWrite (ledRow[2],LOW);
  digitalWrite (ledRow[3],LOW);
  digitalWrite (ledRow[4],LOW);

}

void wheel_four_reverse()
{
  int n=80;
  ledCol[0] = col1;
  ledCol[1] = col2;
  ledCol[2] = col3;
  ledCol[3] = col4;
  ledCol[4] = col5;
  ledCol[5] = col6;
  ledCol[6] = col7;
  ledCol[7] = col8;
  ledCol[8] = col9;
  ledCol[9] = col10;
  
  ledRow[0] = row1;
  ledRow[1] = row2;
  ledRow[2] = row3;
  ledRow[3] = row4;
  ledRow[4] = row5;
  
  digitalWrite(ledRow[0],HIGH);
  digitalWrite(ledRow[1],HIGH);
  digitalWrite(ledRow[2],HIGH);
  digitalWrite(ledRow[3],HIGH);
  digitalWrite(ledRow[4],HIGH);
  
  digitalWrite(ledCol[1],HIGH);
  digitalWrite(ledCol[5],HIGH);
  digitalWrite(ledCol[9],HIGH);
  digitalWrite(ledCol[3],HIGH);
  
  digitalWrite(ledCol[0],LOW);
  digitalWrite(ledCol[6],LOW);
  digitalWrite(ledCol[4],LOW);
  digitalWrite(ledCol[8],LOW);
  delay(n);
  digitalWrite(ledCol[0],HIGH);
  digitalWrite(ledCol[6],HIGH);
  digitalWrite(ledCol[4],HIGH);
  digitalWrite(ledCol[8],HIGH);
  delay(n);
  
  digitalWrite(ledCol[2],LOW);
  digitalWrite(ledCol[7],LOW);
  delay(n);
  digitalWrite(ledCol[2],HIGH);
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

  digitalWrite (ledRow[0],LOW);
  digitalWrite (ledRow[1],LOW);
  digitalWrite (ledRow[2],LOW);
  digitalWrite (ledRow[3],LOW);
  digitalWrite (ledRow[4],LOW);
}

void all_spark()
{
  int n = 20;
  
  ledCol[0] = col1;
  ledCol[1] = col2;
  ledCol[2] = col3;
  ledCol[3] = col4;
  ledCol[4] = col5;
  ledCol[5] = col6;
  ledCol[6] = col7;
  ledCol[7] = col8;
  ledCol[8] = col9;
  ledCol[9] = col10;
  
  ledRow[0] = row1;
  ledRow[1] = row2;
  ledRow[2] = row3;
  ledRow[3] = row4;
  ledRow[4] = row5;

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
  
  digitalWrite(ledRow[0],LOW);
  delay(n);
  digitalWrite(ledRow[0],HIGH);
  delay(n);
  digitalWrite(ledRow[0],HIGH);
  digitalWrite(ledRow[1],LOW);
  delay(n);
  digitalWrite(ledRow[1],HIGH);
  delay(n);
  digitalWrite(ledRow[1],LOW);
  digitalWrite(ledRow[2],HIGH);
  delay(n);
  digitalWrite(ledRow[2],HIGH);
  delay(n);
  digitalWrite(ledRow[2],LOW);
  digitalWrite(ledRow[3],HIGH);
  delay(n);
  digitalWrite(ledRow[3],HIGH);
  delay(n);
  digitalWrite(ledRow[3],LOW);
  digitalWrite(ledRow[4],HIGH);
  delay(n);
  digitalWrite(ledRow[4],HIGH);
  delay(n);
  digitalWrite(ledRow[4],LOW);
  delay(n);
  digitalWrite(ledRow[4],HIGH);
  delay(n + 500);
  
  digitalWrite(ledRow[4],LOW);
  delay(n);
  digitalWrite(ledRow[4],HIGH);
  delay(n);
  digitalWrite(ledRow[4],LOW);
  digitalWrite(ledRow[3],LOW);
  delay(n);
  digitalWrite(ledRow[3],HIGH);
  delay(n);
  digitalWrite(ledRow[3],HIGH);
  digitalWrite(ledRow[2],LOW);
  delay(n);
  digitalWrite(ledRow[2],HIGH);
  delay(n);
  digitalWrite(ledRow[2],HIGH);
  digitalWrite(ledRow[1],LOW);
  delay(n);
  digitalWrite(ledRow[1],HIGH);
  delay(n);
  digitalWrite(ledRow[1],HIGH);
  digitalWrite(ledRow[0],LOW);
  delay(n);
  digitalWrite(ledRow[0],HIGH);
  delay(n);
  digitalWrite(ledRow[0],LOW);
  delay(n);
  digitalWrite(ledRow[0],HIGH);
  
  delay(n + 500);
  
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

  digitalWrite (ledRow[0],LOW);
  digitalWrite (ledRow[1],LOW);
  digitalWrite (ledRow[2],LOW);
  digitalWrite (ledRow[3],LOW);
  digitalWrite (ledRow[4],LOW);
}

void all_spark_two()
{
 int n = 40;
  
  ledCol[0] = col1;
  ledCol[1] = col2;
  ledCol[2] = col3;
  ledCol[3] = col4;
  ledCol[4] = col5;
  ledCol[5] = col6;
  ledCol[6] = col7;
  ledCol[7] = col8;
  ledCol[8] = col9;
  ledCol[9] = col10;
  
  ledRow[0] = row1;
  ledRow[1] = row2;
  ledRow[2] = row3;
  ledRow[3] = row4;
  ledRow[4] = row5; 
  
  
  
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
  
  digitalWrite(ledRow[0],LOW);
  digitalWrite(ledRow[1],LOW);
  digitalWrite(ledRow[2],LOW);
  digitalWrite(ledRow[3],LOW);
  digitalWrite(ledRow[4],LOW);
  delay(800);
  
  digitalWrite(ledRow[0],HIGH);
  delay(n);
  digitalWrite(ledRow[1],HIGH);
  delay(n);
  digitalWrite(ledRow[2],HIGH);
  delay(n);
  digitalWrite(ledRow[3],HIGH);
  delay(n);
  digitalWrite(ledRow[4],HIGH);
  delay(n+800);
  
  digitalWrite(ledRow[0],LOW);
  digitalWrite(ledRow[1],LOW);
  digitalWrite(ledRow[2],LOW);
  digitalWrite(ledRow[3],LOW);
  digitalWrite(ledRow[4],LOW);
  delay(800);
  
  digitalWrite(ledRow[4],HIGH);
  delay(n);
  digitalWrite(ledRow[3],HIGH);
  delay(n);
  digitalWrite(ledRow[2],HIGH);
  delay(n);
  digitalWrite(ledRow[1],HIGH);
  delay(n);
  digitalWrite(ledRow[0],HIGH);
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
  
  digitalWrite (ledRow[0],LOW);
  digitalWrite (ledRow[1],LOW);
  digitalWrite (ledRow[2],LOW);
  digitalWrite (ledRow[3],LOW);
  digitalWrite (ledRow[4],LOW);
  
}

void all_spark_three()
{
 int n = 40;
  
  ledCol[0] = col1;
  ledCol[1] = col2;
  ledCol[2] = col3;
  ledCol[3] = col4;
  ledCol[4] = col5;
  ledCol[5] = col6;
  ledCol[6] = col7;
  ledCol[7] = col8;
  ledCol[8] = col9;
  ledCol[9] = col10;
  
  ledRow[0] = row1;
  ledRow[1] = row2;
  ledRow[2] = row3;
  ledRow[3] = row4;
  ledRow[4] = row5; 
  
  digitalWrite(ledRow[0],HIGH);
  digitalWrite(ledRow[1],HIGH);
  digitalWrite(ledRow[2],HIGH);
  digitalWrite(ledRow[3],HIGH);
  digitalWrite(ledRow[4],HIGH);
  
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
  
  digitalWrite(ledCol[0],LOW);
  digitalWrite(ledCol[5],LOW);
  delay(n);
  digitalWrite(ledCol[1],LOW);
  digitalWrite(ledCol[6],LOW);
  delay(n);
  digitalWrite(ledCol[2],LOW);
  digitalWrite(ledCol[7],LOW);
  delay(n);
  digitalWrite(ledCol[3],LOW);
  digitalWrite(ledCol[8],LOW);
  delay(n);
  digitalWrite(ledCol[4],LOW);
  digitalWrite(ledCol[9],LOW);
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
  delay(800);
  
  digitalWrite(ledCol[4],LOW);
  digitalWrite(ledCol[9],LOW);
  delay(n);
  digitalWrite(ledCol[3],LOW);
  digitalWrite(ledCol[8],LOW);
  delay(n);
  digitalWrite(ledCol[2],LOW);
  digitalWrite(ledCol[7],LOW);
  delay(n);
  digitalWrite(ledCol[1],LOW);
  digitalWrite(ledCol[6],LOW);
  delay(n);
  digitalWrite(ledCol[0],LOW);
  digitalWrite(ledCol[5],LOW);
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

  digitalWrite (ledRow[0],LOW);
  digitalWrite (ledRow[1],LOW);
  digitalWrite (ledRow[2],LOW);
  digitalWrite (ledRow[3],LOW);
  digitalWrite (ledRow[4],LOW);
}

void allSpark_four()
{
  int n = 70;
  
  ledCol[0] = col1;
  ledCol[1] = col2;
  ledCol[2] = col3;
  ledCol[3] = col4;
  ledCol[4] = col5;
  ledCol[5] = col6;
  ledCol[6] = col7;
  ledCol[7] = col8;
  ledCol[8] = col9;
  ledCol[9] = col10;
  
  ledRow[0] = row1;
  ledRow[1] = row2;
  ledRow[2] = row3;
  ledRow[3] = row4;
  ledRow[4] = row5;
 
 
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
   
  digitalWrite(ledRow[0],HIGH);
  digitalWrite(ledRow[1],HIGH);
  digitalWrite(ledRow[2],HIGH);
  digitalWrite(ledRow[3],HIGH);
  digitalWrite(ledRow[4],HIGH);
  delay(n);
  digitalWrite(ledRow[0],LOW);
  digitalWrite(ledRow[1],LOW);
  digitalWrite(ledRow[2],LOW);
  digitalWrite(ledRow[3],LOW);
  digitalWrite(ledRow[4],LOW);
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
  
  digitalWrite (ledRow[0],LOW);
  digitalWrite (ledRow[1],LOW);
  digitalWrite (ledRow[2],LOW);
  digitalWrite (ledRow[3],LOW);
  digitalWrite (ledRow[4],LOW);
}

void allSpark_five()
{
 int n = 50;
  
  ledCol[0] = col1;
  ledCol[1] = col2;
  ledCol[2] = col3;
  ledCol[3] = col4;
  ledCol[4] = col5;
  ledCol[5] = col6;
  ledCol[6] = col7;
  ledCol[7] = col8;
  ledCol[8] = col9;
  ledCol[9] = col10;
  
  ledRow[0] = row1;
  ledRow[1] = row2;
  ledRow[2] = row3;
  ledRow[3] = row4;
  ledRow[4] = row5;
  
  digitalWrite(ledRow[0],HIGH);
  digitalWrite(ledRow[1],HIGH);
  digitalWrite(ledRow[2],HIGH);
  digitalWrite(ledRow[3],HIGH);
  digitalWrite(ledRow[4],HIGH); 
  
  digitalWrite(ledCol[0],LOW);
  digitalWrite(ledCol[9],LOW);
  delay(n);
  
  digitalWrite(ledCol[1],LOW);
  digitalWrite(ledCol[8],LOW);
  delay(n);
  
  
  digitalWrite(ledCol[2],LOW);
  digitalWrite(ledCol[7],LOW);
  delay(n);
  
  
  digitalWrite(ledCol[3],LOW);
  digitalWrite(ledCol[6],LOW);
  delay(n);
  
  
  digitalWrite(ledCol[4],LOW);
  digitalWrite(ledCol[5],LOW);
  delay(n+800);
  
  digitalWrite(ledCol[4],HIGH);
  digitalWrite(ledCol[5],HIGH);
  delay(n);
  
  digitalWrite(ledCol[3],HIGH);
  digitalWrite(ledCol[6],HIGH);
  delay(n);
  
  
  digitalWrite(ledCol[2],HIGH);
  digitalWrite(ledCol[7],HIGH);
  delay(n);
  
  
  digitalWrite(ledCol[1],HIGH);
  digitalWrite(ledCol[8],HIGH);
  delay(n);
  
  
  digitalWrite(ledCol[0],HIGH);
  digitalWrite(ledCol[9],HIGH);
  delay(n);
  
  delay(800);
  
  digitalWrite (ledRow[0],LOW);
  digitalWrite (ledRow[1],LOW);
  digitalWrite (ledRow[2],LOW);
  digitalWrite (ledRow[3],LOW);
  digitalWrite (ledRow[4],LOW);
  
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
}
  
void verticalClimbing_four()
{
  int n = 40;
  
  ledCol[0] = col1;
  ledCol[1] = col2;
  ledCol[2] = col3;
  ledCol[3] = col4;
  ledCol[4] = col5;
  ledCol[5] = col6;
  ledCol[6] = col7;
  ledCol[7] = col8;
  ledCol[8] = col9;
  ledCol[9] = col10;
  
  ledRow[0] = row1;
  ledRow[1] = row2;
  ledRow[2] = row3;
  ledRow[3] = row4;
  ledRow[4] = row5;
  
  digitalWrite(ledRow[0],HIGH);
  digitalWrite(ledRow[1],HIGH);
  digitalWrite(ledRow[2],HIGH);
  digitalWrite(ledRow[3],HIGH);
  digitalWrite(ledRow[4],HIGH);
   
  digitalWrite(ledCol[2],LOW);
  digitalWrite(ledCol[7],LOW); 
 
  digitalWrite(ledCol[0],LOW);
  digitalWrite(ledCol[1],LOW);
  delay(n+800);
  digitalWrite(ledCol[0],HIGH);
  digitalWrite(ledCol[1],HIGH);
  delay(n);
 
  digitalWrite(ledCol[5],LOW);
  digitalWrite(ledCol[6],LOW);
  delay(n);
  digitalWrite(ledCol[5],HIGH);
  digitalWrite(ledCol[6],HIGH);
  delay(n); 
   
  delay(2*n);
  
  digitalWrite(ledCol[8],LOW);
  digitalWrite(ledCol[9],LOW);
  delay(n);
  digitalWrite(ledCol[8],HIGH);
  digitalWrite(ledCol[9],HIGH);
  delay(n);
  
  digitalWrite(ledCol[3],LOW);
  digitalWrite(ledCol[4],LOW);
  delay(n+800);
  digitalWrite(ledCol[3],HIGH);
  digitalWrite(ledCol[4],HIGH);
  delay(n);

  digitalWrite(ledCol[3],LOW);
  digitalWrite(ledCol[4],LOW);
  delay(n+800);
  digitalWrite(ledCol[3],HIGH);
  digitalWrite(ledCol[4],HIGH);
  delay(n);  
 
  digitalWrite(ledCol[8],LOW);
  digitalWrite(ledCol[9],LOW);
  delay(n);
  digitalWrite(ledCol[8],HIGH);
  digitalWrite(ledCol[9],HIGH);
  delay(n); 
  
  delay(2*n);
  
  digitalWrite(ledCol[5],LOW);
  digitalWrite(ledCol[6],LOW);
  delay(n);
  digitalWrite(ledCol[5],HIGH);
  digitalWrite(ledCol[6],HIGH);
  delay(n);
 
  digitalWrite(ledCol[0],LOW);
  digitalWrite(ledCol[1],LOW);
  delay(n+800);
  digitalWrite(ledCol[0],HIGH);
  digitalWrite(ledCol[1],HIGH);
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
  
  digitalWrite (ledRow[0],LOW);
  digitalWrite (ledRow[1],LOW);
  digitalWrite (ledRow[2],LOW);
  digitalWrite (ledRow[3],LOW);
  digitalWrite (ledRow[4],LOW);
}  

void berlin_wall()
{
  ledCol[0] = col1;
  ledCol[1] = col2;
  ledCol[2] = col3;
  ledCol[3] = col4;
  ledCol[4] = col5;
  ledCol[5] = col6;
  ledCol[6] = col7;
  ledCol[7] = col8;
  ledCol[8] = col9;
  ledCol[9] = col10;
  
  ledRow[0] = row1;
  ledRow[1] = row2;
  ledRow[2] = row3;
  ledRow[3] = row4;
  ledRow[4] = row5;
  
  int n = 50;
  
  digitalWrite(ledRow[0],LOW);
  digitalWrite(ledRow[1],LOW);
  digitalWrite(ledRow[2],LOW);
  digitalWrite(ledRow[3],LOW);
  digitalWrite(ledRow[4],LOW);
  
  digitalWrite(ledCol[6],HIGH);
  digitalWrite(ledCol[7],HIGH);
  digitalWrite(ledCol[8],HIGH);
  for(int a = 0;a<5;a++)
  {
  digitalWrite (ledRow[a],HIGH);
    
  digitalWrite(ledCol[5],HIGH);
  delay(n);
  digitalWrite(ledCol[5],LOW);
  delay(n);
  digitalWrite(ledCol[0],HIGH);
  delay(n);
  digitalWrite(ledCol[0],LOW);
  delay(n);
  digitalWrite(ledCol[1],HIGH);
  delay(n);
  digitalWrite(ledCol[1],LOW);
  delay(n);
  digitalWrite(ledCol[2],HIGH);
  delay(n);
  digitalWrite(ledCol[2],LOW);
  delay(n);
  digitalWrite(ledCol[3],HIGH);
  delay(n);
  digitalWrite(ledCol[3],LOW);
  delay(n);
  digitalWrite(ledCol[4],HIGH);
  delay(n);
  digitalWrite(ledCol[4],LOW);
  delay(n);
  digitalWrite(ledCol[9],HIGH);
  delay(n);
  digitalWrite(ledCol[9],LOW);
  delay(n);
  delay(18*n);
  }
  digitalWrite(ledRow[4],LOW);
  delay(n);
  digitalWrite(ledRow[3],LOW);
  delay(n);
  digitalWrite(ledRow[2],LOW);
  delay(n);
  digitalWrite(ledRow[1],LOW);
  delay(n);
  digitalWrite(ledRow[0],LOW);
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
  
  digitalWrite (ledRow[0],LOW);
  digitalWrite (ledRow[1],LOW);
  digitalWrite (ledRow[2],LOW);
  digitalWrite (ledRow[3],LOW);
  digitalWrite (ledRow[4],LOW);
}

void bigbang()
{
  ledCol[0] = col1;
  ledCol[1] = col2;
  ledCol[2] = col3;
  ledCol[3] = col4;
  ledCol[4] = col5;
  ledCol[5] = col6;
  ledCol[6] = col7;
  ledCol[7] = col8;
  ledCol[8] = col9;
  ledCol[9] = col10;
  
  ledRow[0] = row1;
  ledRow[1] = row2;
  ledRow[2] = row3;
  ledRow[3] = row4;
  ledRow[4] = row5;
  
  int n = 80;
  
  digitalWrite(ledRow[0],LOW);
  digitalWrite(ledRow[1],LOW);
  digitalWrite(ledRow[2],HIGH);
  digitalWrite(ledRow[3],LOW);
  digitalWrite(ledRow[4],LOW);
  
  delay(10*n+1500);
  
  digitalWrite(ledRow[0],LOW);
  digitalWrite(ledRow[1],HIGH);
  digitalWrite(ledRow[2],HIGH);
  digitalWrite(ledRow[3],HIGH);
  digitalWrite(ledRow[4],LOW);
  
  digitalWrite(ledCol[6],LOW);
  digitalWrite(ledCol[7],LOW);
  digitalWrite(ledCol[8],LOW);
  
  delay(1000);
  
  digitalWrite(ledRow[0],HIGH);
  digitalWrite(ledRow[1],HIGH);
  digitalWrite(ledRow[2],HIGH);
  digitalWrite(ledRow[3],HIGH);
  digitalWrite(ledRow[4],HIGH);
  
  digitalWrite(ledCol[0],LOW);
  digitalWrite(ledCol[5],LOW);
  digitalWrite(ledCol[1],LOW);
  digitalWrite(ledCol[2],LOW);
  digitalWrite(ledCol[3],LOW);
  digitalWrite(ledCol[4],LOW);
  digitalWrite(ledCol[9],LOW);
  
  delay(1000);
  
  digitalWrite(ledRow[0],LOW);
  digitalWrite(ledRow[1],HIGH);
  digitalWrite(ledRow[2],HIGH);
  digitalWrite(ledRow[3],HIGH);
  digitalWrite(ledRow[4],LOW);
  
  digitalWrite(ledCol[0],HIGH);
  digitalWrite(ledCol[5],HIGH);
  digitalWrite(ledCol[1],HIGH);
  digitalWrite(ledCol[2],HIGH);
  digitalWrite(ledCol[3],HIGH);
  digitalWrite(ledCol[4],HIGH);
  digitalWrite(ledCol[9],HIGH);
  
  delay(500);
  
  digitalWrite(ledRow[0],LOW);
  digitalWrite(ledRow[1],LOW);
  digitalWrite(ledRow[2],LOW);
  digitalWrite(ledRow[3],LOW);
  digitalWrite(ledRow[4],LOW);
  
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

  digitalWrite (ledRow[0],LOW);
  digitalWrite (ledRow[1],LOW);
  digitalWrite (ledRow[2],LOW);
  digitalWrite (ledRow[3],LOW);
  digitalWrite (ledRow[4],LOW);

}

void boxPattern_2()
{
  ledCol[0] = col1;
  ledCol[1] = col2;
  ledCol[2] = col3;
  ledCol[3] = col4;
  ledCol[4] = col5;
  ledCol[5] = col6;
  ledCol[6] = col7;
  ledCol[7] = col8;
  ledCol[8] = col9;
  ledCol[9] = col10;
  
  ledRow[0] = row1;
  ledRow[1] = row2;
  ledRow[2] = row3;
  ledRow[3] = row4;
  ledRow[4] = row5;
  
  int n = 20;
  
   digitalWrite (ledRow[0],HIGH);
   digitalWrite (ledRow[1],HIGH);
   digitalWrite (ledRow[2],HIGH);
   digitalWrite (ledRow[3],HIGH);
   digitalWrite (ledRow[4],HIGH);
   
   
  for (int a=0;a<=2;a++)
  {
  digitalWrite(ledCol[9],LOW);
  delay(n);
  digitalWrite(ledCol[9],HIGH);
  delay(n);
  digitalWrite(ledCol[4],LOW);
  delay(n);
  digitalWrite(ledCol[4],HIGH);
  delay(n);
  digitalWrite(ledCol[3],LOW);
  delay(n);
  digitalWrite(ledCol[3],HIGH);
  delay(n);
  digitalWrite(ledCol[2],LOW);
  delay(n);
  digitalWrite(ledCol[2],HIGH);
  delay(n);
  digitalWrite(ledCol[1],LOW);
  delay(n);
  digitalWrite(ledCol[1],HIGH);
  delay(n);
  digitalWrite(ledCol[0],LOW);
  delay(n);
  digitalWrite(ledCol[0],HIGH);
  delay(n);
  
  digitalWrite(ledCol[5],LOW);
  delay(n);
  digitalWrite(ledCol[5],HIGH);
  delay(n);
  delay(18*n);
  
  }
  for (int a=0;a<=2;a++)
  {
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
  delay(10*n);  
}
  delay(6*n);
  
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
  
  digitalWrite (ledRow[0],LOW);
  digitalWrite (ledRow[1],LOW);
  digitalWrite (ledRow[2],LOW);
  digitalWrite (ledRow[3],LOW);
  digitalWrite (ledRow[4],LOW);
}

void boxPattern_3()
{
  ledCol[0] = col1;
  ledCol[1] = col2;
  ledCol[2] = col3;
  ledCol[3] = col4;
  ledCol[4] = col5;
  ledCol[5] = col6;
  ledCol[6] = col7;
  ledCol[7] = col8;
  ledCol[8] = col9;
  ledCol[9] = col10;
  
  ledRow[0] = row1;
  ledRow[1] = row2;
  ledRow[2] = row3;
  ledRow[3] = row4;
  ledRow[4] = row5;
  
  int n = 50;
 
   digitalWrite (ledRow[0],HIGH);
   digitalWrite (ledRow[1],HIGH);
   digitalWrite (ledRow[2],HIGH);
   digitalWrite (ledRow[3],HIGH);
   digitalWrite (ledRow[4],HIGH);
   
   
  
  digitalWrite(ledCol[9],LOW);
  delay(n);
  
  digitalWrite(ledCol[4],LOW);
  delay(n);
  
  digitalWrite(ledCol[3],LOW);
  delay(n);
  
  digitalWrite(ledCol[2],LOW);
  delay(n);
  
  digitalWrite(ledCol[1],LOW);
  delay(n);
  
  digitalWrite(ledCol[0],LOW);
  delay(n);
  
  digitalWrite(ledCol[5],LOW);
  delay(n);
  
  delay(18*n+800);
  
  digitalWrite(ledCol[5],HIGH);
  delay(n);
  
  digitalWrite(ledCol[0],HIGH);
  delay(n);
  
  digitalWrite(ledCol[1],HIGH);
  delay(n);
  
  digitalWrite(ledCol[2],HIGH);
  delay(n);
  
  digitalWrite(ledCol[3],HIGH);
  delay(n);
  
  digitalWrite(ledCol[4],HIGH);
  delay(n);
  
  digitalWrite(ledCol[9],HIGH);
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
  
  digitalWrite (ledRow[0],LOW);
  digitalWrite (ledRow[1],LOW);
  digitalWrite (ledRow[2],LOW);
  digitalWrite (ledRow[3],LOW);
  digitalWrite (ledRow[4],LOW); 
}

void boxPattern_4()
{
  ledCol[0] = col1;
  ledCol[1] = col2;
  ledCol[2] = col3;
  ledCol[3] = col4;
  ledCol[4] = col5;
  ledCol[5] = col6;
  ledCol[6] = col7;
  ledCol[7] = col8;
  ledCol[8] = col9;
  ledCol[9] = col10;
  
  ledRow[0] = row1;
  ledRow[1] = row2;
  ledRow[2] = row3;
  ledRow[3] = row4;
  ledRow[4] = row5;
  
  int n = 50;
 
   digitalWrite (ledRow[0],HIGH);
   digitalWrite (ledRow[1],HIGH);
   digitalWrite (ledRow[2],HIGH);
   digitalWrite (ledRow[3],HIGH);
   digitalWrite (ledRow[4],HIGH);
   
   
  
  digitalWrite(ledCol[5],LOW);
  delay(n);
  
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
  
  delay(18*n+800);
  
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
  
  digitalWrite(ledCol[5],HIGH);
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
  
  digitalWrite (ledRow[0],LOW);
  digitalWrite (ledRow[1],LOW);
  digitalWrite (ledRow[2],LOW);
  digitalWrite (ledRow[3],LOW);
  digitalWrite (ledRow[4],LOW); 
}

void breeze()
{
   int n = 100;
  
  ledCol[0] = col1;
  ledCol[1] = col2;
  ledCol[2] = col3;
  ledCol[3] = col4;
  ledCol[4] = col5;
  ledCol[5] = col6;
  ledCol[6] = col7;
  ledCol[7] = col8;
  ledCol[8] = col9;
  ledCol[9] = col10;
  
  ledRow[0] = row1;
  ledRow[1] = row2;
  ledRow[2] = row3;
  ledRow[3] = row4;
  ledRow[4] = row5; 
  
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
  
  digitalWrite(ledRow[2],LOW);
  
  digitalWrite(ledRow[1],LOW);
  delay(n);
  digitalWrite(ledRow[1],HIGH);
  delay(n);
  digitalWrite(ledRow[0],LOW);
  delay(n);
  digitalWrite(ledRow[0],HIGH);
  delay(n);
  
  digitalWrite(ledRow[3],LOW);
  delay(n);
  digitalWrite(ledRow[3],HIGH);
  delay(n);
  digitalWrite(ledRow[4],LOW);
  delay(n);
  digitalWrite(ledRow[4],HIGH);
  delay(n);
  
  digitalWrite (ledRow[0],LOW);
  digitalWrite (ledRow[1],LOW);
  digitalWrite (ledRow[2],LOW);
  digitalWrite (ledRow[3],LOW);
  digitalWrite (ledRow[4],LOW);
  
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
}

void fireflies()
{
  int n = 50;
  int m;
  int p;
  ledCol[0] = col1;
  ledCol[1] = col2;
  ledCol[2] = col3;
  ledCol[3] = col4;
  ledCol[4] = col5;
  ledCol[5] = col6;
  ledCol[6] = col7;
  ledCol[7] = col8;
  ledCol[8] = col9;
  ledCol[9] = col10;
  
  ledRow[0] = row1;
  ledRow[1] = row2;
  ledRow[2] = row3;
  ledRow[3] = row4;
  ledRow[4] = row5;
  
  m = random(0,10);
  p = random(0,5);
  
  digitalWrite (ledRow[p],HIGH);
  for(int a=0;a<5;a++)
  { 
  digitalWrite (ledCol[m],LOW);
  delay(n);
  digitalWrite (ledCol[m],HIGH);
  delay(n);
  }
  delay(500);
  digitalWrite (ledRow[p],LOW);
  
  digitalWrite (ledRow[0],LOW);
  digitalWrite (ledRow[1],LOW);
  digitalWrite (ledRow[2],LOW);
  digitalWrite (ledRow[3],LOW);
  digitalWrite (ledRow[4],LOW);
  
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
}

void pendulum()
{
  int n = 15;
  ledCol[0] = col1;
  ledCol[1] = col2;
  ledCol[2] = col3;
  ledCol[3] = col4;
  ledCol[4] = col5;
  ledCol[5] = col6;
  ledCol[6] = col7;
  ledCol[7] = col8;
  ledCol[8] = col9;
  ledCol[9] = col10;
  
  ledRow[0] = row1;
  ledRow[1] = row2;
  ledRow[2] = row3;
  ledRow[3] = row4;
  ledRow[4] = row5;
 
  digitalWrite(ledRow[0],LOW);
  digitalWrite(ledRow[1],LOW);
  digitalWrite(ledRow[2],LOW);
  digitalWrite(ledRow[3],LOW);
  digitalWrite(ledRow[4],HIGH);
 
  digitalWrite(ledCol[0],LOW);
  digitalWrite(ledCol[5],LOW);
  delay(n);
  digitalWrite(ledCol[0],HIGH);
  digitalWrite(ledCol[5],HIGH);
  delay(n); 
  
  digitalWrite(ledRow[0],LOW);
  digitalWrite(ledRow[1],LOW);
  digitalWrite(ledRow[2],LOW);
  digitalWrite(ledRow[3],HIGH);
  digitalWrite(ledRow[4],LOW);
  
  digitalWrite(ledCol[1],LOW);
  digitalWrite(ledCol[6],LOW);
  delay(n);
  digitalWrite(ledCol[1],HIGH);
  digitalWrite(ledCol[6],HIGH);
  delay(n); 
  
  digitalWrite(ledRow[0],LOW);
  digitalWrite(ledRow[1],LOW);
  digitalWrite(ledRow[2],HIGH);
  digitalWrite(ledRow[3],LOW);
  digitalWrite(ledRow[4],LOW);
  
  digitalWrite(ledCol[2],LOW);
  digitalWrite(ledCol[7],LOW);
  delay(n);
  digitalWrite(ledCol[2],HIGH);
  digitalWrite(ledCol[7],HIGH);
  delay(n);
  
  digitalWrite(ledRow[0],LOW);
  digitalWrite(ledRow[1],LOW);
  digitalWrite(ledRow[2],LOW);
  digitalWrite(ledRow[3],HIGH);
  digitalWrite(ledRow[4],LOW);
  
  digitalWrite(ledCol[3],LOW);
  digitalWrite(ledCol[8],LOW);
  delay(n);
  digitalWrite(ledCol[3],HIGH);
  digitalWrite(ledCol[8],HIGH);
  delay(n);
  
  digitalWrite(ledRow[0],LOW);
  digitalWrite(ledRow[1],LOW);
  digitalWrite(ledRow[2],LOW);
  digitalWrite(ledRow[3],LOW);
  digitalWrite(ledRow[4],HIGH);
  
  digitalWrite(ledCol[4],LOW);
  digitalWrite(ledCol[9],LOW);
  delay(n);
  digitalWrite(ledCol[4],HIGH);
  digitalWrite(ledCol[9],HIGH);
  delay(n);
  
  digitalWrite(ledCol[4],LOW);
  digitalWrite(ledCol[9],LOW);
  delay(n);
  digitalWrite(ledCol[4],HIGH);
  digitalWrite(ledCol[9],HIGH);
  delay(n);
  
  digitalWrite(ledRow[0],LOW);
  digitalWrite(ledRow[1],LOW);
  digitalWrite(ledRow[2],LOW);
  digitalWrite(ledRow[3],HIGH);
  digitalWrite(ledRow[4],LOW);
  
  digitalWrite(ledCol[3],LOW);
  digitalWrite(ledCol[8],LOW);
  delay(n);
  digitalWrite(ledCol[3],HIGH);
  digitalWrite(ledCol[8],HIGH);
  delay(n);
  
  digitalWrite(ledRow[0],LOW);
  digitalWrite(ledRow[1],LOW);
  digitalWrite(ledRow[2],HIGH);
  digitalWrite(ledRow[3],LOW);
  digitalWrite(ledRow[4],LOW);
  
  digitalWrite(ledCol[2],LOW);
  digitalWrite(ledCol[7],LOW);
  delay(n);
  digitalWrite(ledCol[2],HIGH);
  digitalWrite(ledCol[7],HIGH);
  delay(n);
  
  digitalWrite(ledRow[0],LOW);
  digitalWrite(ledRow[1],LOW);
  digitalWrite(ledRow[2],LOW);
  digitalWrite(ledRow[3],HIGH);
  digitalWrite(ledRow[4],LOW);
  
  digitalWrite(ledCol[1],LOW);
  digitalWrite(ledCol[6],LOW);
  delay(n);
  digitalWrite(ledCol[1],HIGH);
  digitalWrite(ledCol[6],HIGH);
  delay(n);
 
 digitalWrite(ledRow[0],LOW);
  digitalWrite(ledRow[1],LOW);
  digitalWrite(ledRow[2],LOW);
  digitalWrite(ledRow[3],LOW);
  digitalWrite(ledRow[4],HIGH);
 
  digitalWrite(ledCol[0],LOW);
  digitalWrite(ledCol[5],LOW);
  delay(n);
  digitalWrite(ledCol[0],HIGH);
  digitalWrite(ledCol[5],HIGH);
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

  digitalWrite (ledRow[0],LOW);
  digitalWrite (ledRow[1],LOW);
  digitalWrite (ledRow[2],LOW);
  digitalWrite (ledRow[3],LOW);
  digitalWrite (ledRow[4],LOW);
  
}

void pendulum_2()
{
  int n = 15;
  ledCol[0] = col1;
  ledCol[1] = col2;
  ledCol[2] = col3;
  ledCol[3] = col4;
  ledCol[4] = col5;
  ledCol[5] = col6;
  ledCol[6] = col7;
  ledCol[7] = col8;
  ledCol[8] = col9;
  ledCol[9] = col10;
  
  ledRow[0] = row1;
  ledRow[1] = row2;
  ledRow[2] = row3;
  ledRow[3] = row4;
  ledRow[4] = row5;
 
  digitalWrite(ledRow[0],HIGH);
  digitalWrite(ledRow[1],LOW);
  digitalWrite(ledRow[2],LOW);
  digitalWrite(ledRow[3],LOW);
  digitalWrite(ledRow[4],HIGH);
 
  digitalWrite(ledCol[0],LOW);
  digitalWrite(ledCol[5],LOW);
  delay(n);
  digitalWrite(ledCol[0],HIGH);
  digitalWrite(ledCol[5],HIGH);
  delay(n); 
  
  digitalWrite(ledRow[0],LOW);
  digitalWrite(ledRow[1],HIGH);
  digitalWrite(ledRow[2],LOW);
  digitalWrite(ledRow[3],HIGH);
  digitalWrite(ledRow[4],LOW);
  
  digitalWrite(ledCol[1],LOW);
  digitalWrite(ledCol[6],LOW);
  delay(n);
  digitalWrite(ledCol[1],HIGH);
  digitalWrite(ledCol[6],HIGH);
  delay(n); 
  
  digitalWrite(ledRow[0],LOW);
  digitalWrite(ledRow[1],LOW);
  digitalWrite(ledRow[2],HIGH);
  digitalWrite(ledRow[3],LOW);
  digitalWrite(ledRow[4],LOW);
  
  digitalWrite(ledCol[2],LOW);
  digitalWrite(ledCol[7],LOW);
  delay(n);
  digitalWrite(ledCol[2],HIGH);
  digitalWrite(ledCol[7],HIGH);
  delay(n);
  
  digitalWrite(ledRow[0],LOW);
  digitalWrite(ledRow[1],HIGH);
  digitalWrite(ledRow[2],LOW);
  digitalWrite(ledRow[3],HIGH);
  digitalWrite(ledRow[4],LOW);
  
  digitalWrite(ledCol[3],LOW);
  digitalWrite(ledCol[8],LOW);
  delay(n);
  digitalWrite(ledCol[3],HIGH);
  digitalWrite(ledCol[8],HIGH);
  delay(n);
  
  digitalWrite(ledRow[0],HIGH);
  digitalWrite(ledRow[1],LOW);
  digitalWrite(ledRow[2],LOW);
  digitalWrite(ledRow[3],LOW);
  digitalWrite(ledRow[4],HIGH);
  
  digitalWrite(ledCol[4],LOW);
  digitalWrite(ledCol[9],LOW);
  delay(n);
  digitalWrite(ledCol[4],HIGH);
  digitalWrite(ledCol[9],HIGH);
  delay(n);
  
  digitalWrite(ledCol[4],LOW);
  digitalWrite(ledCol[9],LOW);
  delay(n);
  digitalWrite(ledCol[4],HIGH);
  digitalWrite(ledCol[9],HIGH);
  delay(n);
  
  digitalWrite(ledRow[0],LOW);
  digitalWrite(ledRow[1],HIGH);
  digitalWrite(ledRow[2],LOW);
  digitalWrite(ledRow[3],HIGH);
  digitalWrite(ledRow[4],LOW);
  
  digitalWrite(ledCol[3],LOW);
  digitalWrite(ledCol[8],LOW);
  delay(n);
  digitalWrite(ledCol[3],HIGH);
  digitalWrite(ledCol[8],HIGH);
  delay(n);
  
  digitalWrite(ledRow[0],LOW);
  digitalWrite(ledRow[1],LOW);
  digitalWrite(ledRow[2],HIGH);
  digitalWrite(ledRow[3],LOW);
  digitalWrite(ledRow[4],LOW);
  
  digitalWrite(ledCol[2],LOW);
  digitalWrite(ledCol[7],LOW);
  delay(n);
  digitalWrite(ledCol[2],HIGH);
  digitalWrite(ledCol[7],HIGH);
  delay(n);
  
  digitalWrite(ledRow[0],LOW);
  digitalWrite(ledRow[1],HIGH);
  digitalWrite(ledRow[2],LOW);
  digitalWrite(ledRow[3],HIGH);
  digitalWrite(ledRow[4],LOW);
  
  digitalWrite(ledCol[1],LOW);
  digitalWrite(ledCol[6],LOW);
  delay(n);
  digitalWrite(ledCol[1],HIGH);
  digitalWrite(ledCol[6],HIGH);
  delay(n);
 
  digitalWrite(ledRow[0],HIGH);
  digitalWrite(ledRow[1],LOW);
  digitalWrite(ledRow[2],LOW);
  digitalWrite(ledRow[3],LOW);
  digitalWrite(ledRow[4],HIGH);
 
  digitalWrite(ledCol[0],LOW);
  digitalWrite(ledCol[5],LOW);
  delay(n);
  digitalWrite(ledCol[0],HIGH);
  digitalWrite(ledCol[5],HIGH);
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

  digitalWrite (ledRow[0],LOW);
  digitalWrite (ledRow[1],LOW);
  digitalWrite (ledRow[2],LOW);
  digitalWrite (ledRow[3],LOW);
  digitalWrite (ledRow[4],LOW);
  
}

void rainbow()
{
  int n = 15;
  ledCol[0] = col1;
  ledCol[1] = col2;
  ledCol[2] = col3;
  ledCol[3] = col4;
  ledCol[4] = col5;
  ledCol[5] = col6;
  ledCol[6] = col7;
  ledCol[7] = col8;
  ledCol[8] = col9;
  ledCol[9] = col10;
  
  ledRow[0] = row1;
  ledRow[1] = row2;
  ledRow[2] = row3;
  ledRow[3] = row4;
  ledRow[4] = row5;
 
  digitalWrite(ledRow[0],HIGH);
  digitalWrite(ledRow[1],LOW);
  digitalWrite(ledRow[2],LOW);
  digitalWrite(ledRow[3],LOW);
  digitalWrite(ledRow[4],LOW);
 
  digitalWrite(ledCol[0],LOW);
  digitalWrite(ledCol[5],LOW);
  delay(n);
  digitalWrite(ledCol[0],HIGH);
  digitalWrite(ledCol[5],HIGH);
  delay(n); 
  
  digitalWrite(ledRow[0],LOW);
  digitalWrite(ledRow[1],HIGH);
  digitalWrite(ledRow[2],LOW);
  digitalWrite(ledRow[3],LOW);
  digitalWrite(ledRow[4],LOW);
  
  digitalWrite(ledCol[1],LOW);
  digitalWrite(ledCol[6],LOW);
  delay(n);
  digitalWrite(ledCol[1],HIGH);
  digitalWrite(ledCol[6],HIGH);
  delay(n); 
  
  digitalWrite(ledRow[0],LOW);
  digitalWrite(ledRow[1],LOW);
  digitalWrite(ledRow[2],HIGH);
  digitalWrite(ledRow[3],LOW);
  digitalWrite(ledRow[4],LOW);
  
  digitalWrite(ledCol[2],LOW);
  digitalWrite(ledCol[7],LOW);
  delay(n);
  digitalWrite(ledCol[2],HIGH);
  digitalWrite(ledCol[7],HIGH);
  delay(n);
  
  digitalWrite(ledRow[0],LOW);
  digitalWrite(ledRow[1],HIGH);
  digitalWrite(ledRow[2],LOW);
  digitalWrite(ledRow[3],LOW);
  digitalWrite(ledRow[4],LOW);
  
  digitalWrite(ledCol[3],LOW);
  digitalWrite(ledCol[8],LOW);
  delay(n);
  digitalWrite(ledCol[3],HIGH);
  digitalWrite(ledCol[8],HIGH);
  delay(n);
  
  digitalWrite(ledRow[0],HIGH);
  digitalWrite(ledRow[1],LOW);
  digitalWrite(ledRow[2],LOW);
  digitalWrite(ledRow[3],LOW);
  digitalWrite(ledRow[4],LOW);
  
  digitalWrite(ledCol[4],LOW);
  digitalWrite(ledCol[9],LOW);
  delay(n);
  digitalWrite(ledCol[4],HIGH);
  digitalWrite(ledCol[9],HIGH);
  delay(n);
  
  digitalWrite(ledCol[4],LOW);
  digitalWrite(ledCol[9],LOW);
  delay(n);
  digitalWrite(ledCol[4],HIGH);
  digitalWrite(ledCol[9],HIGH);
  delay(n);
  
  digitalWrite(ledRow[0],LOW);
  digitalWrite(ledRow[1],HIGH);
  digitalWrite(ledRow[2],LOW);
  digitalWrite(ledRow[3],LOW);
  digitalWrite(ledRow[4],LOW);
  
  digitalWrite(ledCol[3],LOW);
  digitalWrite(ledCol[8],LOW);
  delay(n);
  digitalWrite(ledCol[3],HIGH);
  digitalWrite(ledCol[8],HIGH);
  delay(n);
  
  digitalWrite(ledRow[0],LOW);
  digitalWrite(ledRow[1],LOW);
  digitalWrite(ledRow[2],HIGH);
  digitalWrite(ledRow[3],LOW);
  digitalWrite(ledRow[4],LOW);
  
  digitalWrite(ledCol[2],LOW);
  digitalWrite(ledCol[7],LOW);
  delay(n);
  digitalWrite(ledCol[2],HIGH);
  digitalWrite(ledCol[7],HIGH);
  delay(n);
  
  digitalWrite(ledRow[0],LOW);
  digitalWrite(ledRow[1],HIGH);
  digitalWrite(ledRow[2],LOW);
  digitalWrite(ledRow[3],LOW);
  digitalWrite(ledRow[4],LOW);
  
  digitalWrite(ledCol[1],LOW);
  digitalWrite(ledCol[6],LOW);
  delay(n);
  digitalWrite(ledCol[1],HIGH);
  digitalWrite(ledCol[6],HIGH);
  delay(n);
 
  digitalWrite(ledRow[0],HIGH);
  digitalWrite(ledRow[1],LOW);
  digitalWrite(ledRow[2],LOW);
  digitalWrite(ledRow[3],LOW);
  digitalWrite(ledRow[4],LOW);
 
  digitalWrite(ledCol[0],LOW);
  digitalWrite(ledCol[5],LOW);
  delay(n);
  digitalWrite(ledCol[0],HIGH);
  digitalWrite(ledCol[5],HIGH);
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

  digitalWrite (ledRow[0],LOW);
  digitalWrite (ledRow[1],LOW);
  digitalWrite (ledRow[2],LOW);
  digitalWrite (ledRow[3],LOW);
  digitalWrite (ledRow[4],LOW);
  
}

void random_spark_one()
{
 int n = 15;
 int m; 
  ledCol[0] = col1;
  ledCol[1] = col2;
  ledCol[2] = col3;
  ledCol[3] = col4;
  ledCol[4] = col5;
  ledCol[5] = col6;
  ledCol[6] = col7;
  ledCol[7] = col8;
  ledCol[8] = col9;
  ledCol[9] = col10;
  
  ledRow[0] = row1;
  ledRow[1] = row2;
  ledRow[2] = row3;
  ledRow[3] = row4;
  ledRow[4] = row5;
  
  m=random(0,10);
 
  digitalWrite(ledCol[m],LOW);
  
  
  for(int a=0;a<5;a++)
  {
    digitalWrite(ledRow[a],HIGH);
    delay(n);
    digitalWrite(ledRow[a],LOW);
    delay(n);
  }
  digitalWrite (ledCol[m],HIGH);
  delay(400);
  
  for(int a=0;a<5;a++)
  {
    digitalWrite(ledRow[a],HIGH);
    delay(n);
    digitalWrite(ledRow[a],LOW);
    delay(n);
  }
  
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
  
  digitalWrite (ledRow[0],LOW);
  digitalWrite (ledRow[1],LOW);
  digitalWrite (ledRow[2],LOW);
  digitalWrite (ledRow[3],LOW);
  digitalWrite (ledRow[4],LOW);
   
}

void random_spark_two()
{
 int n = 15;
 int m; 
  ledCol[0] = col1;
  ledCol[1] = col2;
  ledCol[2] = col3;
  ledCol[3] = col4;
  ledCol[4] = col5;
  ledCol[5] = col6;
  ledCol[6] = col7;
  ledCol[7] = col8;
  ledCol[8] = col9;
  ledCol[9] = col10;
  
  ledRow[0] = row1;
  ledRow[1] = row2;
  ledRow[2] = row3;
  ledRow[3] = row4;
  ledRow[4] = row5;
  
  m=random(0,10);
 
  digitalWrite(ledCol[m],LOW);
  
  
  for(int a=4;a>=0;a--)
  {
    digitalWrite(ledRow[a],HIGH);
    delay(n);
    digitalWrite(ledRow[a],LOW);
    delay(n);
  }
  digitalWrite (ledCol[m],HIGH);
  delay(400);
  
  for(int a=4;a>=0;a--)
  {
    digitalWrite(ledRow[a],HIGH);
    delay(n);
    digitalWrite(ledRow[a],LOW);
    delay(n);
  }
  
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
  
  digitalWrite (ledRow[0],LOW);
  digitalWrite (ledRow[1],LOW);
  digitalWrite (ledRow[2],LOW);
  digitalWrite (ledRow[3],LOW);
  digitalWrite (ledRow[4],LOW);
   
}

void random_spark_three()
{
  int n = 40;
 int m; 
  ledCol[0] = col1;
  ledCol[1] = col2;
  ledCol[2] = col3;
  ledCol[3] = col4;
  ledCol[4] = col5;
  ledCol[5] = col6;
  ledCol[6] = col7;
  ledCol[7] = col8;
  ledCol[8] = col9;
  ledCol[9] = col10;
  
  ledRow[0] = row1;
  ledRow[1] = row2;
  ledRow[2] = row3;
  ledRow[3] = row4;
  ledRow[4] = row5;
  
  m=random(0,10);
 
  digitalWrite(ledCol[m],LOW);
  
  digitalWrite(ledRow[0],HIGH);
  digitalWrite(ledRow[1],HIGH);
  digitalWrite(ledRow[2],HIGH);
  digitalWrite(ledRow[3],HIGH);
  digitalWrite(ledRow[4],HIGH);
  delay(n);
  digitalWrite(ledRow[0],LOW);
  digitalWrite(ledRow[1],LOW);
  digitalWrite(ledRow[2],LOW);
  digitalWrite(ledRow[3],LOW);
  digitalWrite(ledRow[4],LOW);
  delay(n);  
  
  digitalWrite (ledCol[m],HIGH);
  delay(400);
  
  digitalWrite(ledRow[0],HIGH);
  digitalWrite(ledRow[1],HIGH);
  digitalWrite(ledRow[2],HIGH);
  digitalWrite(ledRow[3],HIGH);
  digitalWrite(ledRow[4],HIGH);
  delay(n);
  digitalWrite(ledRow[0],LOW);
  digitalWrite(ledRow[1],LOW);
  digitalWrite(ledRow[2],LOW);
  digitalWrite(ledRow[3],LOW);
  digitalWrite(ledRow[4],LOW);
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
  
  digitalWrite (ledRow[0],LOW);
  digitalWrite (ledRow[1],LOW);
  digitalWrite (ledRow[2],LOW);
  digitalWrite (ledRow[3],LOW);
  digitalWrite (ledRow[4],LOW);
   
}

void rays()
{
  ledCol[0] = col1;
  ledCol[1] = col2;
  ledCol[2] = col3;
  ledCol[3] = col4;
  ledCol[4] = col5;
  ledCol[5] = col6;
  ledCol[6] = col7;
  ledCol[7] = col8;
  ledCol[8] = col9;
  ledCol[9] = col10;
  
  ledRow[0] = row1;
  ledRow[1] = row2;
  ledRow[2] = row3;
  ledRow[3] = row4;
  ledRow[4] = row5;
  
  int n = 100;
 
   digitalWrite (ledRow[0],LOW);
   digitalWrite (ledRow[1],LOW);
   digitalWrite (ledRow[2],LOW);
   digitalWrite (ledRow[3],LOW);
   digitalWrite (ledRow[4],HIGH);
   
   digitalWrite(ledCol[6],LOW);
   delay(n);
   digitalWrite(ledCol[0],LOW);
   delay(n);
   digitalWrite(ledCol[7],LOW);
   delay(n);
   digitalWrite(ledCol[2],LOW);
   delay(n);
   digitalWrite(ledCol[8],LOW);
   delay(n);
   digitalWrite(ledCol[4],LOW);
   delay(n);
   
   delay(10*n+800);
   
   digitalWrite(ledCol[0],HIGH);
   digitalWrite(ledCol[2],HIGH);
   digitalWrite(ledCol[4],HIGH);
   
   delay(n);
  
   digitalWrite(ledCol[6],HIGH);
   digitalWrite(ledCol[7],HIGH);
   digitalWrite(ledCol[8],HIGH);
   
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

  digitalWrite (ledRow[0],LOW);
  digitalWrite (ledRow[1],LOW);
  digitalWrite (ledRow[2],LOW);
  digitalWrite (ledRow[3],LOW);
  digitalWrite (ledRow[4],LOW);
}

void tornado_2()
{
  ledCol[0] = col1;
  ledCol[1] = col2;
  ledCol[2] = col3;
  ledCol[3] = col4;
  ledCol[4] = col5;
  ledCol[5] = col6;
  ledCol[6] = col7;
  ledCol[7] = col8;
  ledCol[8] = col9;
  ledCol[9] = col10;
  
  ledRow[0] = row1;
  ledRow[1] = row2;
  ledRow[2] = row3;
  ledRow[3] = row4;
  ledRow[4] = row5;
  
   
  int n = 25;
  
  digitalWrite(ledRow[0],LOW);
  digitalWrite(ledRow[1],LOW);
  digitalWrite(ledRow[2],LOW);
  digitalWrite(ledRow[3],LOW);
  digitalWrite(ledRow[4],LOW);
  
  while(n>=0)
  { 
  for(int a = 0;a<5;a++)
  {
   digitalWrite (ledRow[a],HIGH);
    
  digitalWrite(ledCol[9],LOW);
  delay(n);
  digitalWrite(ledCol[9],HIGH);
  delay(n);
  digitalWrite(ledCol[4],LOW);
  delay(n);
  digitalWrite(ledCol[4],HIGH);
  delay(n);
  digitalWrite(ledCol[3],LOW);
  delay(n);
  digitalWrite(ledCol[3],HIGH);
  delay(n);
  digitalWrite(ledCol[2],LOW);
  delay(n);
  digitalWrite(ledCol[2],HIGH);
  delay(n);
  digitalWrite(ledCol[1],LOW);
  delay(n);
  digitalWrite(ledCol[1],HIGH);
  delay(n);
  digitalWrite(ledCol[0],LOW);
  delay(n);
  digitalWrite(ledCol[0],HIGH);
  delay(n);
  digitalWrite(ledCol[5],LOW);
  delay(n);
  digitalWrite(ledCol[5],HIGH);
  delay(n);
  delay(18*n);
  digitalWrite(ledRow[a],LOW);
  }
  
  for(int a = 0;a<5;a++)
  {
  digitalWrite (ledRow[a],HIGH);
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
  delay(10*n);  
  
  digitalWrite(ledRow[a],LOW);
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

  digitalWrite (ledRow[0],LOW);
  digitalWrite (ledRow[1],LOW);
  digitalWrite (ledRow[2],LOW);
  digitalWrite (ledRow[3],LOW);
  digitalWrite (ledRow[4],LOW);
}

void triangle_1()
{
  int n = 40;
  ledCol[0] = col1;
  ledCol[1] = col2;
  ledCol[2] = col3;
  ledCol[3] = col4;
  ledCol[4] = col5;
  ledCol[5] = col6;
  ledCol[6] = col7;
  ledCol[7] = col8;
  ledCol[8] = col9;
  ledCol[9] = col10;
  
  ledRow[0] = row1;
  ledRow[1] = row2;
  ledRow[2] = row3;
  ledRow[3] = row4;
  ledRow[4] = row5;
 
  digitalWrite(ledRow[0],HIGH);
  digitalWrite(ledRow[1],HIGH);
  digitalWrite(ledRow[2],HIGH);
  digitalWrite(ledRow[3],HIGH);
  digitalWrite(ledRow[4],HIGH);
 
  digitalWrite(ledCol[0],LOW);
  digitalWrite(ledCol[5],LOW);
  delay(n);
  digitalWrite(ledCol[0],HIGH);
  digitalWrite(ledCol[5],HIGH);
  delay(n); 
  
  digitalWrite(ledRow[0],HIGH);
  digitalWrite(ledRow[1],HIGH);
  digitalWrite(ledRow[2],HIGH);
  digitalWrite(ledRow[3],HIGH);
  digitalWrite(ledRow[4],LOW);
  
  digitalWrite(ledCol[1],LOW);
  digitalWrite(ledCol[6],LOW);
  delay(n);
  digitalWrite(ledCol[1],HIGH);
  digitalWrite(ledCol[6],HIGH);
  delay(n); 
  
  digitalWrite(ledRow[0],HIGH);
  digitalWrite(ledRow[1],HIGH);
  digitalWrite(ledRow[2],HIGH);
  digitalWrite(ledRow[3],LOW);
  digitalWrite(ledRow[4],LOW);
  
  digitalWrite(ledCol[2],LOW);
  digitalWrite(ledCol[7],LOW);
  delay(n);
  digitalWrite(ledCol[2],HIGH);
  digitalWrite(ledCol[7],HIGH);
  delay(n);
  
  digitalWrite(ledRow[0],HIGH);
  digitalWrite(ledRow[1],HIGH);
  digitalWrite(ledRow[2],LOW);
  digitalWrite(ledRow[3],LOW);
  digitalWrite(ledRow[4],LOW);
  
  digitalWrite(ledCol[3],LOW);
  digitalWrite(ledCol[8],LOW);
  delay(n);
  digitalWrite(ledCol[3],HIGH);
  digitalWrite(ledCol[8],HIGH);
  delay(n);
  
  digitalWrite(ledRow[0],HIGH);
  digitalWrite(ledRow[1],LOW);
  digitalWrite(ledRow[2],LOW);
  digitalWrite(ledRow[3],LOW);
  digitalWrite(ledRow[4],LOW);
  
  digitalWrite(ledCol[4],LOW);
  digitalWrite(ledCol[9],LOW);
  delay(n);
  digitalWrite(ledCol[4],HIGH);
  digitalWrite(ledCol[9],HIGH);
  delay(n);
  delay(500);
  
  digitalWrite(ledRow[0],HIGH);
  digitalWrite(ledRow[1],HIGH);
  digitalWrite(ledRow[2],HIGH);
  digitalWrite(ledRow[3],HIGH);
  digitalWrite(ledRow[4],HIGH);
  
  digitalWrite(ledCol[4],LOW);
  digitalWrite(ledCol[9],LOW);
  delay(n);
  digitalWrite(ledCol[4],HIGH);
  digitalWrite(ledCol[9],HIGH);
  delay(n);
  
  digitalWrite(ledRow[0],HIGH);
  digitalWrite(ledRow[1],HIGH);
  digitalWrite(ledRow[2],HIGH);
  digitalWrite(ledRow[3],HIGH);
  digitalWrite(ledRow[4],LOW);
  
  digitalWrite(ledCol[3],LOW);
  digitalWrite(ledCol[8],LOW);
  delay(n);
  digitalWrite(ledCol[3],HIGH);
  digitalWrite(ledCol[8],HIGH);
  delay(n);
  
  digitalWrite(ledRow[0],HIGH);
  digitalWrite(ledRow[1],HIGH);
  digitalWrite(ledRow[2],HIGH);
  digitalWrite(ledRow[3],LOW);
  digitalWrite(ledRow[4],LOW);
  
  digitalWrite(ledCol[2],LOW);
  digitalWrite(ledCol[7],LOW);
  delay(n);
  digitalWrite(ledCol[2],HIGH);
  digitalWrite(ledCol[7],HIGH);
  delay(n);
  
  digitalWrite(ledRow[0],HIGH);
  digitalWrite(ledRow[1],HIGH);
  digitalWrite(ledRow[2],LOW);
  digitalWrite(ledRow[3],LOW);
  digitalWrite(ledRow[4],LOW);
  
  digitalWrite(ledCol[1],LOW);
  digitalWrite(ledCol[6],LOW);
  delay(n);
  digitalWrite(ledCol[1],HIGH);
  digitalWrite(ledCol[6],HIGH);
  delay(n);
 
  digitalWrite(ledRow[0],HIGH);
  digitalWrite(ledRow[1],LOW);
  digitalWrite(ledRow[2],LOW);
  digitalWrite(ledRow[3],LOW);
  digitalWrite(ledRow[4],LOW);
 
  digitalWrite(ledCol[0],LOW);
  digitalWrite(ledCol[5],LOW);
  delay(n);
  digitalWrite(ledCol[0],HIGH);
  digitalWrite(ledCol[5],HIGH);
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

  digitalWrite (ledRow[0],LOW);
  digitalWrite (ledRow[1],LOW);
  digitalWrite (ledRow[2],LOW);
  digitalWrite (ledRow[3],LOW);
  digitalWrite (ledRow[4],LOW);
  
}

void triangle_2()
{
  int n = 40;
  ledCol[0] = col1;
  ledCol[1] = col2;
  ledCol[2] = col3;
  ledCol[3] = col4;
  ledCol[4] = col5;
  ledCol[5] = col6;
  ledCol[6] = col7;
  ledCol[7] = col8;
  ledCol[8] = col9;
  ledCol[9] = col10;
  
  ledRow[0] = row1;
  ledRow[1] = row2;
  ledRow[2] = row3;
  ledRow[3] = row4;
  ledRow[4] = row5;
 
  digitalWrite(ledRow[0],HIGH);
  digitalWrite(ledRow[1],HIGH);
  digitalWrite(ledRow[2],HIGH);
  digitalWrite(ledRow[3],HIGH);
  digitalWrite(ledRow[4],HIGH);
 
  digitalWrite(ledCol[0],LOW);
  digitalWrite(ledCol[5],LOW);
  delay(n);
  digitalWrite(ledCol[0],HIGH);
  digitalWrite(ledCol[5],HIGH);
  delay(n); 
  
  digitalWrite(ledRow[0],LOW);
  digitalWrite(ledRow[1],HIGH);
  digitalWrite(ledRow[2],HIGH);
  digitalWrite(ledRow[3],HIGH);
  digitalWrite(ledRow[4],HIGH);
  
  digitalWrite(ledCol[1],LOW);
  digitalWrite(ledCol[6],LOW);
  delay(n);
  digitalWrite(ledCol[1],HIGH);
  digitalWrite(ledCol[6],HIGH);
  delay(n); 
  
  digitalWrite(ledRow[0],LOW);
  digitalWrite(ledRow[1],LOW);
  digitalWrite(ledRow[2],HIGH);
  digitalWrite(ledRow[3],HIGH);
  digitalWrite(ledRow[4],HIGH);
  
  digitalWrite(ledCol[2],LOW);
  digitalWrite(ledCol[7],LOW);
  delay(n);
  digitalWrite(ledCol[2],HIGH);
  digitalWrite(ledCol[7],HIGH);
  delay(n);
  
  digitalWrite(ledRow[0],LOW);
  digitalWrite(ledRow[1],LOW);
  digitalWrite(ledRow[2],LOW);
  digitalWrite(ledRow[3],HIGH);
  digitalWrite(ledRow[4],HIGH);
  
  digitalWrite(ledCol[3],LOW);
  digitalWrite(ledCol[8],LOW);
  delay(n);
  digitalWrite(ledCol[3],HIGH);
  digitalWrite(ledCol[8],HIGH);
  delay(n);
  
  digitalWrite(ledRow[0],LOW);
  digitalWrite(ledRow[1],LOW);
  digitalWrite(ledRow[2],LOW);
  digitalWrite(ledRow[3],LOW);
  digitalWrite(ledRow[4],HIGH);
  
  digitalWrite(ledCol[4],LOW);
  digitalWrite(ledCol[9],LOW);
  delay(n);
  digitalWrite(ledCol[4],HIGH);
  digitalWrite(ledCol[9],HIGH);
  delay(n);
  delay(500);
  
  digitalWrite(ledRow[0],HIGH);
  digitalWrite(ledRow[1],HIGH);
  digitalWrite(ledRow[2],HIGH);
  digitalWrite(ledRow[3],HIGH);
  digitalWrite(ledRow[4],HIGH);
  
  digitalWrite(ledCol[4],LOW);
  digitalWrite(ledCol[9],LOW);
  delay(n);
  digitalWrite(ledCol[4],HIGH);
  digitalWrite(ledCol[9],HIGH);
  delay(n);
  
  digitalWrite(ledRow[0],LOW);
  digitalWrite(ledRow[1],HIGH);
  digitalWrite(ledRow[2],HIGH);
  digitalWrite(ledRow[3],HIGH);
  digitalWrite(ledRow[4],HIGH);
  
  digitalWrite(ledCol[3],LOW);
  digitalWrite(ledCol[8],LOW);
  delay(n);
  digitalWrite(ledCol[3],HIGH);
  digitalWrite(ledCol[8],HIGH);
  delay(n);
  
  digitalWrite(ledRow[0],LOW);
  digitalWrite(ledRow[1],LOW);
  digitalWrite(ledRow[2],HIGH);
  digitalWrite(ledRow[3],HIGH);
  digitalWrite(ledRow[4],HIGH);
  
  digitalWrite(ledCol[2],LOW);
  digitalWrite(ledCol[7],LOW);
  delay(n);
  digitalWrite(ledCol[2],HIGH);
  digitalWrite(ledCol[7],HIGH);
  delay(n);
  
  digitalWrite(ledRow[0],LOW);
  digitalWrite(ledRow[1],LOW);
  digitalWrite(ledRow[2],LOW);
  digitalWrite(ledRow[3],HIGH);
  digitalWrite(ledRow[4],HIGH);
  
  digitalWrite(ledCol[1],LOW);
  digitalWrite(ledCol[6],LOW);
  delay(n);
  digitalWrite(ledCol[1],HIGH);
  digitalWrite(ledCol[6],HIGH);
  delay(n);
 
  digitalWrite(ledRow[0],LOW);
  digitalWrite(ledRow[1],LOW);
  digitalWrite(ledRow[2],LOW);
  digitalWrite(ledRow[3],LOW);
  digitalWrite(ledRow[4],HIGH);
 
  digitalWrite(ledCol[0],LOW);
  digitalWrite(ledCol[5],LOW);
  delay(n);
  digitalWrite(ledCol[0],HIGH);
  digitalWrite(ledCol[5],HIGH);
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

  digitalWrite (ledRow[0],LOW);
  digitalWrite (ledRow[1],LOW);
  digitalWrite (ledRow[2],LOW);
  digitalWrite (ledRow[3],LOW);
  digitalWrite (ledRow[4],LOW);
  
}

void zigzag_two()
{
 int n = 50;
  
  ledCol[0] = col1;
  ledCol[1] = col2;
  ledCol[2] = col3;
  ledCol[3] = col4;
  ledCol[4] = col5;
  ledCol[5] = col6;
  ledCol[6] = col7;
  ledCol[7] = col8;
  ledCol[8] = col9;
  ledCol[9] = col10;
  
  ledRow[0] = row1;
  ledRow[1] = row2;
  ledRow[2] = row3;
  ledRow[3] = row4;
  ledRow[4] = row5;
  
  digitalWrite(ledRow[0],HIGH);
  digitalWrite(ledRow[1],HIGH);
  digitalWrite(ledRow[2],HIGH);
  digitalWrite(ledRow[3],HIGH);
  digitalWrite(ledRow[4],HIGH);
  
  digitalWrite(ledCol[5],HIGH);
  digitalWrite(ledCol[6],HIGH);
  digitalWrite(ledCol[7],HIGH);
  digitalWrite(ledCol[9],HIGH);
  
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
  digitalWrite(ledCol[8],LOW);
  delay(n); 
  delay(7*n);
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
  
  digitalWrite (ledRow[0],LOW);
  digitalWrite (ledRow[1],LOW);
  digitalWrite (ledRow[2],LOW);
  digitalWrite (ledRow[3],LOW);
  digitalWrite (ledRow[4],LOW);
  
}

void zigzag_three()
{
 int n = 50;
  
  ledCol[0] = col1;
  ledCol[1] = col2;
  ledCol[2] = col3;
  ledCol[3] = col4;
  ledCol[4] = col5;
  ledCol[5] = col6;
  ledCol[6] = col7;
  ledCol[7] = col8;
  ledCol[8] = col9;
  ledCol[9] = col10;
  
  ledRow[0] = row1;
  ledRow[1] = row2;
  ledRow[2] = row3;
  ledRow[3] = row4;
  ledRow[4] = row5;
  
  digitalWrite(ledRow[0],HIGH);
  digitalWrite(ledRow[1],HIGH);
  digitalWrite(ledRow[2],HIGH);
  digitalWrite(ledRow[3],HIGH);
  digitalWrite(ledRow[4],HIGH);
  
  digitalWrite(ledCol[5],HIGH);
  digitalWrite(ledCol[9],HIGH);
  digitalWrite(ledCol[7],HIGH);
  digitalWrite(ledCol[9],HIGH);
  
  digitalWrite(ledCol[4],LOW);
  delay(n); 
  digitalWrite(ledCol[3],LOW);
  delay(n);
  digitalWrite(ledCol[2],LOW);
  delay(n); 
  digitalWrite(ledCol[1],LOW);
  delay(n);  
  digitalWrite(ledCol[0],LOW);
  delay(n); 
  digitalWrite(ledCol[6],LOW);
  delay(n); 
  delay(7*n);
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
  
  digitalWrite (ledRow[0],LOW);
  digitalWrite (ledRow[1],LOW);
  digitalWrite (ledRow[2],LOW);
  digitalWrite (ledRow[3],LOW);
  digitalWrite (ledRow[4],LOW);
  
}

void zigzag_four()
{
  int n = 50;
  
  ledCol[0] = col1;
  ledCol[1] = col2;
  ledCol[2] = col3;
  ledCol[3] = col4;
  ledCol[4] = col5;
  ledCol[5] = col6;
  ledCol[6] = col7;
  ledCol[7] = col8;
  ledCol[8] = col9;
  ledCol[9] = col10;
  
  ledRow[0] = row1;
  ledRow[1] = row2;
  ledRow[2] = row3;
  ledRow[3] = row4;
  ledRow[4] = row5;
  
  digitalWrite(ledRow[0],HIGH);
  digitalWrite(ledRow[1],HIGH);
  digitalWrite(ledRow[2],HIGH);
  digitalWrite(ledRow[3],HIGH);
  digitalWrite(ledRow[4],HIGH);
  
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
  
  delay(30*n + 800);
  
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

  
  digitalWrite (ledRow[0],LOW);
  digitalWrite (ledRow[1],LOW);
  digitalWrite (ledRow[2],LOW);
  digitalWrite (ledRow[3],LOW);
  digitalWrite (ledRow[4],LOW);
  
}

void zigzag_five()
{
 int n = 50;
  
  ledCol[0] = col1;
  ledCol[1] = col2;
  ledCol[2] = col3;
  ledCol[3] = col4;
  ledCol[4] = col5;
  ledCol[5] = col6;
  ledCol[6] = col7;
  ledCol[7] = col8;
  ledCol[8] = col9;
  ledCol[9] = col10;
  
  ledRow[0] = row1;
  ledRow[1] = row2;
  ledRow[2] = row3;
  ledRow[3] = row4;
  ledRow[4] = row5;
  
  digitalWrite(ledRow[0],HIGH);
  digitalWrite(ledRow[1],HIGH);
  digitalWrite(ledRow[2],HIGH);
  digitalWrite(ledRow[3],HIGH);
  digitalWrite(ledRow[4],HIGH); 
  
  digitalWrite(ledCol[0],LOW);
  digitalWrite(ledCol[9],LOW);
  delay(n+800);
  digitalWrite(ledCol[0],HIGH);
  digitalWrite(ledCol[9],HIGH);
  delay(n);
  
  digitalWrite(ledCol[1],LOW);
  digitalWrite(ledCol[8],LOW);
  delay(n);
  digitalWrite(ledCol[1],HIGH);
  digitalWrite(ledCol[8],HIGH);
  delay(n);
  
  digitalWrite(ledCol[2],LOW);
  digitalWrite(ledCol[7],LOW);
  delay(n);
  digitalWrite(ledCol[2],HIGH);
  digitalWrite(ledCol[7],HIGH);
  delay(n);
  
  digitalWrite(ledCol[3],LOW);
  digitalWrite(ledCol[6],LOW);
  delay(n);
  digitalWrite(ledCol[3],HIGH);
  digitalWrite(ledCol[6],HIGH);
  delay(n);
  
  digitalWrite(ledCol[4],LOW);
  digitalWrite(ledCol[5],LOW);
  delay(n+800);
  digitalWrite(ledCol[4],HIGH);
  digitalWrite(ledCol[5],HIGH);
  delay(n);
  
  digitalWrite(ledCol[3],LOW);
  digitalWrite(ledCol[6],LOW);
  delay(n);
  digitalWrite(ledCol[3],HIGH);
  digitalWrite(ledCol[6],HIGH);
  delay(n);
  
  digitalWrite(ledCol[2],LOW);
  digitalWrite(ledCol[7],LOW);
  delay(n);
  digitalWrite(ledCol[2],HIGH);
  digitalWrite(ledCol[7],HIGH);
  delay(n);
  
  digitalWrite(ledCol[1],LOW);
  digitalWrite(ledCol[8],LOW);
  delay(n);
  digitalWrite(ledCol[1],HIGH);
  digitalWrite(ledCol[8],HIGH);
  delay(n);
  
  digitalWrite(ledCol[0],LOW);
  digitalWrite(ledCol[9],LOW);
  delay(n+800);
  digitalWrite(ledCol[0],HIGH);
  digitalWrite(ledCol[9],HIGH);
  delay(n);
  
  
  digitalWrite (ledRow[0],LOW);
  digitalWrite (ledRow[1],LOW);
  digitalWrite (ledRow[2],LOW);
  digitalWrite (ledRow[3],LOW);
  digitalWrite (ledRow[4],LOW);
  
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
}

void u()
{
  int n = 30;
  ledCol[0] = col1;
  ledCol[1] = col2;
  ledCol[2] = col3;
  ledCol[3] = col4;
  ledCol[4] = col5;
  ledCol[5] = col6;
  ledCol[6] = col7;
  ledCol[7] = col8;
  ledCol[8] = col9;
  ledCol[9] = col10;
  
  ledRow[0] = row1;
  ledRow[1] = row2;
  ledRow[2] = row3;
  ledRow[3] = row4;
  ledRow[4] = row5;
  
  digitalWrite(ledCol[0],LOW);
  digitalWrite(ledCol[5],LOW);
  digitalWrite(ledCol[4],LOW);
  digitalWrite(ledCol[9],LOW);
  
  for(int a=0;a<4;a++)
  {
    digitalWrite(ledRow[a],HIGH);
    delay(n);
    digitalWrite(ledRow[a],LOW);
    delay(n);
  }
    digitalWrite(ledRow[4],HIGH);
    delay(n+800);
    digitalWrite(ledRow[4],LOW);
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

  digitalWrite (ledRow[0],LOW);
  digitalWrite (ledRow[1],LOW);
  digitalWrite (ledRow[2],LOW);
  digitalWrite (ledRow[3],LOW);
  digitalWrite (ledRow[4],LOW);
}

void s()
{
  int n = 30;
  ledCol[0] = col1;
  ledCol[1] = col2;
  ledCol[2] = col3;
  ledCol[3] = col4;
  ledCol[4] = col5;
  ledCol[5] = col6;
  ledCol[6] = col7;
  ledCol[7] = col8;
  ledCol[8] = col9;
  ledCol[9] = col10;
  
  ledRow[0] = row1;
  ledRow[1] = row2;
  ledRow[2] = row3;
  ledRow[3] = row4;
  ledRow[4] = row5;
  
  digitalWrite(ledCol[0],LOW);
  digitalWrite(ledCol[1],LOW);
  digitalWrite(ledCol[2],LOW);
  digitalWrite(ledCol[3],LOW);
  digitalWrite(ledCol[4],LOW);
  digitalWrite(ledCol[5],LOW);
  
  for(int a=0;a<4;a++)
  {
    digitalWrite(ledRow[a],HIGH);
    delay(n);
    digitalWrite(ledRow[a],LOW);
    delay(n);
  }
    digitalWrite(ledRow[4],HIGH);
    delay(n+800);
    digitalWrite(ledRow[4],LOW);
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

  digitalWrite (ledRow[0],LOW);
  digitalWrite (ledRow[1],LOW);
  digitalWrite (ledRow[2],LOW);
  digitalWrite (ledRow[3],LOW);
  digitalWrite (ledRow[4],LOW);
}

void d()
{
  int n = 30;
  ledCol[0] = col1;
  ledCol[1] = col2;
  ledCol[2] = col3;
  ledCol[3] = col4;
  ledCol[4] = col5;
  ledCol[5] = col6;
  ledCol[6] = col7;
  ledCol[7] = col8;
  ledCol[8] = col9;
  ledCol[9] = col10;
  
  ledRow[0] = row1;
  ledRow[1] = row2;
  ledRow[2] = row3;
  ledRow[3] = row4;
  ledRow[4] = row5;
  
  digitalWrite(ledCol[0],LOW);
  digitalWrite(ledCol[5],LOW);
  digitalWrite(ledCol[1],LOW);
  digitalWrite(ledCol[2],LOW);
  digitalWrite(ledCol[8],LOW);
  
  for(int a=0;a<4;a++)
  {
    digitalWrite(ledRow[a],HIGH);
    delay(n);
    digitalWrite(ledRow[a],LOW);
    delay(n);
  }
    digitalWrite(ledRow[4],HIGH);
    delay(n+800);
    digitalWrite(ledRow[4],LOW);
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

  digitalWrite (ledRow[0],LOW);
  digitalWrite (ledRow[1],LOW);
  digitalWrite (ledRow[2],LOW);
  digitalWrite (ledRow[3],LOW);
  digitalWrite (ledRow[4],LOW);
}

void l()
{
  int n = 30;
  ledCol[0] = col1;
  ledCol[1] = col2;
  ledCol[2] = col3;
  ledCol[3] = col4;
  ledCol[4] = col5;
  ledCol[5] = col6;
  ledCol[6] = col7;
  ledCol[7] = col8;
  ledCol[8] = col9;
  ledCol[9] = col10;
  
  ledRow[0] = row1;
  ledRow[1] = row2;
  ledRow[2] = row3;
  ledRow[3] = row4;
  ledRow[4] = row5;
  
  digitalWrite(ledCol[0],LOW);
  digitalWrite(ledCol[5],LOW);
  
  for(int a=0;a<4;a++)
  {
    digitalWrite(ledRow[a],HIGH);
    delay(n);
    digitalWrite(ledRow[a],LOW);
    delay(n);
  }
    digitalWrite(ledRow[4],HIGH);
    delay(n+800);
    digitalWrite(ledRow[4],LOW);
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

  digitalWrite (ledRow[0],LOW);
  digitalWrite (ledRow[1],LOW);
  digitalWrite (ledRow[2],LOW);
  digitalWrite (ledRow[3],LOW);
  digitalWrite (ledRow[4],LOW);
}

void e()
{
  int n = 30;
  ledCol[0] = col1;
  ledCol[1] = col2;
  ledCol[2] = col3;
  ledCol[3] = col4;
  ledCol[4] = col5;
  ledCol[5] = col6;
  ledCol[6] = col7;
  ledCol[7] = col8;
  ledCol[8] = col9;
  ledCol[9] = col10;
  
  ledRow[0] = row1;
  ledRow[1] = row2;
  ledRow[2] = row3;
  ledRow[3] = row4;
  ledRow[4] = row5;
  
  digitalWrite(ledCol[0],LOW);
  digitalWrite(ledCol[1],LOW);
  digitalWrite(ledCol[2],LOW);
  digitalWrite(ledCol[3],LOW);
  digitalWrite(ledCol[4],LOW);
  digitalWrite(ledCol[5],LOW);
  
  for(int a=0;a<4;a++)
  {
    digitalWrite(ledRow[a],HIGH);
    delay(n);
    digitalWrite(ledRow[a],LOW);
    delay(n);
  }
    digitalWrite(ledRow[4],HIGH);
    delay(n+800);
    digitalWrite(ledRow[4],LOW);
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

  digitalWrite (ledRow[0],LOW);
  digitalWrite (ledRow[1],LOW);
  digitalWrite (ledRow[2],LOW);
  digitalWrite (ledRow[3],LOW);
  digitalWrite (ledRow[4],LOW);
}

void c()
{
  int n = 30;
  ledCol[0] = col1;
  ledCol[1] = col2;
  ledCol[2] = col3;
  ledCol[3] = col4;
  ledCol[4] = col5;
  ledCol[5] = col6;
  ledCol[6] = col7;
  ledCol[7] = col8;
  ledCol[8] = col9;
  ledCol[9] = col10;
  
  ledRow[0] = row1;
  ledRow[1] = row2;
  ledRow[2] = row3;
  ledRow[3] = row4;
  ledRow[4] = row5;
  
  digitalWrite(ledCol[0],LOW);
  digitalWrite(ledCol[1],LOW);
  digitalWrite(ledCol[2],LOW);
  digitalWrite(ledCol[3],LOW);
  digitalWrite(ledCol[4],LOW);
  digitalWrite(ledCol[5],LOW);
  
  for(int a=0;a<4;a++)
  {
    digitalWrite(ledRow[a],HIGH);
    delay(n);
    digitalWrite(ledRow[a],LOW);
    delay(n);
  }
    digitalWrite(ledRow[4],HIGH);
    delay(n+800);
    digitalWrite(ledRow[4],LOW);
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

  digitalWrite (ledRow[0],LOW);
  digitalWrite (ledRow[1],LOW);
  digitalWrite (ledRow[2],LOW);
  digitalWrite (ledRow[3],LOW);
  digitalWrite (ledRow[4],LOW);
}

void b()
{
  int n = 30;
  ledCol[0] = col1;
  ledCol[1] = col2;
  ledCol[2] = col3;
  ledCol[3] = col4;
  ledCol[4] = col5;
  ledCol[5] = col6;
  ledCol[6] = col7;
  ledCol[7] = col8;
  ledCol[8] = col9;
  ledCol[9] = col10;
  
  ledRow[0] = row1;
  ledRow[1] = row2;
  ledRow[2] = row3;
  ledRow[3] = row4;
  ledRow[4] = row5;
  
  digitalWrite(ledCol[0],LOW);
  digitalWrite(ledCol[1],LOW);
  digitalWrite(ledCol[2],LOW);
  digitalWrite(ledCol[3],LOW);
  digitalWrite(ledCol[4],LOW);
  digitalWrite(ledCol[9],LOW);
  digitalWrite(ledCol[5],LOW);
  
  for(int a=0;a<4;a++)
  {
    digitalWrite(ledRow[a],HIGH);
    delay(n);
    digitalWrite(ledRow[a],LOW);
    delay(n);
  }
    digitalWrite(ledRow[4],HIGH);
    delay(n+800);
    digitalWrite(ledRow[4],LOW);
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

  digitalWrite (ledRow[0],LOW);
  digitalWrite (ledRow[1],LOW);
  digitalWrite (ledRow[2],LOW);
  digitalWrite (ledRow[3],LOW);
  digitalWrite (ledRow[4],LOW);
}
