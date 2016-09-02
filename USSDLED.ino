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

Serial.println("For coordinate Geometry:- ");
Serial.println("Enter the following :- x = 1-3, y= 1-3, z= 1-3.\n"); 
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
      
   
      int x = Serial.parseInt(); 
  
      int y = Serial.parseInt(); 
  
      int z = Serial.parseInt(); 
          

  
  if (Serial.read() == '\n') {
  
    x = constrain(x, 1, 3);
    y = constrain(y, 1, 3);
    z = constrain(z, 1, 3);
    
    
   if(y==1){
        switch(x){
          case 1 :
                  switch(z){
                    case 1 :
                      digitalWrite(z1,LOW);
                      digitalWrite(z2,HIGH);
                      digitalWrite(z3,HIGH);
                       break;
                    case 2 :
                       digitalWrite(z2,LOW);
                       digitalWrite(z1,HIGH);
                       digitalWrite(z3,HIGH);
                        break;
                    case 3 :
                        digitalWrite(z3,LOW);
                        digitalWrite(z2,HIGH);
                        digitalWrite(z1,HIGH);
                          break;
                    default :
                        digitalWrite(z1,HIGH);
                        digitalWrite(z2,HIGH);
                        digitalWrite(z3,HIGH);
                     }        
              digitalWrite(x1y1,HIGH);
               
              break;
        
           case 2 :
        
                   switch(z){
                      case 1 :
                        digitalWrite(z1,LOW);
                        digitalWrite(z2,HIGH);
                        digitalWrite(z3,HIGH);
                         break;
                      case 2 :
                        digitalWrite(z2,LOW);
                        digitalWrite(z1,HIGH);
                        digitalWrite(z3,HIGH);
                          break;
                      case 3 :
                         digitalWrite(z3,LOW);
                         digitalWrite(z2,HIGH);
                         digitalWrite(z1,HIGH);
                          break;
                      default :
                          digitalWrite(z1,HIGH);
                          digitalWrite(z2,HIGH);
                          digitalWrite(z3,HIGH);
                      }         
            digitalWrite(x2y1,HIGH);
             
             break;
          
          case 3 :
        
                    switch(z){
                      case 1 :
                        digitalWrite(z1,LOW);
                        digitalWrite(z2,HIGH);
                        digitalWrite(z3,HIGH);
                          break;
                      case 2 :
                        digitalWrite(z2,LOW);
                        digitalWrite(z1,HIGH);
                        digitalWrite(z3,HIGH);
                          break;
                      case 3 :
                        digitalWrite(z3,LOW);
                        digitalWrite(z2,HIGH);
                        digitalWrite(z1,HIGH);
                          break;
                      default :
                        digitalWrite(z1,HIGH);
                        digitalWrite(z2,HIGH);
                        digitalWrite(z3,HIGH);
                    }        
              digitalWrite(x3y1,HIGH);
               
              break;    
        default:
            digitalWrite(x1y1,LOW);
            digitalWrite(x2y1,LOW);
            digitalWrite(x3y1,LOW);
          }
        }     
    else if(y==2){
          switch(x) {
          case 1 :
              switch(z){
                case 1 :
                  digitalWrite(z1,LOW);
                  digitalWrite(z2,HIGH);
                  digitalWrite(z3,HIGH);
                   break;
                case 2 :
                   digitalWrite(z2,LOW);
                   digitalWrite(z1,HIGH);
                   digitalWrite(z3,HIGH);
                    break;
                case 3 :
                    digitalWrite(z3,LOW);
                    digitalWrite(z2,HIGH);
                    digitalWrite(z1,HIGH);
                    break;
                default :
                    digitalWrite(z1,HIGH);
                    digitalWrite(z2,HIGH);
                    digitalWrite(z3,HIGH);
                }        
            digitalWrite(x1y2,HIGH);
            
            break;
        
            case 2 :
        
             switch(z){
                  case 1 :
                    digitalWrite(z1,LOW);
                    digitalWrite(z2,HIGH);
                    digitalWrite(z3,HIGH);
                     break;
                  case 2 :
                    digitalWrite(z2,LOW);
                    digitalWrite(z1,HIGH);
                    digitalWrite(z3,HIGH);
                    break;
                  case 3 :
                    digitalWrite(z3,LOW);
                    digitalWrite(z2,HIGH);
                    digitalWrite(z1,HIGH);
                    break;
                  default :
                    digitalWrite(z1,HIGH);
                    digitalWrite(z2,HIGH);
                    digitalWrite(z3,HIGH);
                }        
            digitalWrite(x2y2,HIGH);
             
            break;
          case 3 :
        
                    switch(z){
                      case 1 :
                        digitalWrite(z1,LOW);
                        digitalWrite(z2,HIGH);
                        digitalWrite(z3,HIGH);
                          break;
                      case 2 :
                        digitalWrite(z2,LOW);
                        digitalWrite(z1,HIGH);
                        digitalWrite(z3,HIGH);
                          break;
                      case 3 :
                        digitalWrite(z3,LOW);
                        digitalWrite(z2,HIGH);
                        digitalWrite(z1,HIGH);
                          break;
                      default :
                        digitalWrite(z1,HIGH);
                        digitalWrite(z2,HIGH);
                        digitalWrite(z3,HIGH);
                    }        
            digitalWrite(x3y2,HIGH);
             
            break;    
        default :
            digitalWrite(x1y2,LOW);
            digitalWrite(x2y2,LOW);
            digitalWrite(x3y2,LOW);
          }}
    else if(y==3){
        
        switch(x) {
          
          case 1 :
              switch(z){
                
                case 1 :
                  digitalWrite(z1,LOW);
                  digitalWrite(z2,HIGH);
                  digitalWrite(z3,HIGH);
                   break;
                case 2 :
                   digitalWrite(z2,LOW);
                   digitalWrite(z1,HIGH);
                   digitalWrite(z3,HIGH);
                    break;
                case 3 :
                    digitalWrite(z3,LOW);
                    digitalWrite(z2,HIGH);
                    digitalWrite(z1,HIGH);
                    break;
                default :
                    digitalWrite(z1,HIGH);
                    digitalWrite(z2,HIGH);
                    digitalWrite(z3,HIGH);
                }        
            digitalWrite(x1y3,HIGH);
             
            break;
        
        case 2 :
        
             switch(z){
                  case 1 :
                    digitalWrite(z1,LOW);
                    digitalWrite(z2,HIGH);
                    digitalWrite(z3,HIGH);
                     break;
                  case 2 :
                    digitalWrite(z2,LOW);
                    digitalWrite(z1,HIGH);
                    digitalWrite(z3,HIGH);
                    break;
                  case 3 :
                    digitalWrite(z3,LOW);
                    digitalWrite(z2,HIGH);
                    digitalWrite(z1,HIGH);
                    break;
                  default :
                    digitalWrite(z1,HIGH);
                    digitalWrite(z2,HIGH);
                    digitalWrite(z3,HIGH);
                }        
            digitalWrite(x2y3,HIGH);
             
            break;
        case 3 :
        
                    switch(z){
                      case 1 :
                        digitalWrite(z1,LOW);
                        digitalWrite(z2,HIGH);
                        digitalWrite(z3,HIGH);
                          break;
                      case 2 :
                        digitalWrite(z2,LOW);
                        digitalWrite(z1,HIGH);
                        digitalWrite(z3,HIGH);
                          break;
                      case 3 :
                        digitalWrite(z3,LOW);
                        digitalWrite(z2,HIGH);
                        digitalWrite(z1,HIGH);
                          break;
                      default :
                        digitalWrite(z1,HIGH);
                        digitalWrite(z2,HIGH);
                        digitalWrite(z3,HIGH);
                    }        
            digitalWrite(x3y3,HIGH);
            break;    
        default:
            digitalWrite(x1y3,LOW);
            digitalWrite(x2y3,LOW);
            digitalWrite(x3y3,LOW);
          }
  }
  
  /*if(x==4){
    if(y==1){
         if(z==1){
                  for(int i=0;i<10;i++){
                              huha();
                              amp();
                      }
         }
         else if(z==2){
           
             for(int i=0;i<10;i++){
               
               if(i%3==0)
                huha();
               
               else
                   amp();
             }
         }           
       }
    }*/
    
    Serial.print("The cooordinate entered is:- "); 
    Serial.print("(");
    Serial.print(x);
    Serial.print(",");
    Serial.print(y);
    Serial.print(",");
    Serial.print(z);
    Serial.print(")\n");
    delay(5000);
  }    
 }
}


/*void huha()
  {
  digitalWrite(x1y1,HIGH);
  digitalWrite(x2y1,HIGH);
  digitalWrite(x3y1,HIGH);
  digitalWrite(x1y2,HIGH);
  digitalWrite(x2y2,HIGH);
  digitalWrite(x3y2,HIGH);
  digitalWrite(x1y3,HIGH);
  digitalWrite(x2y3,HIGH);
  digitalWrite(x3y3,HIGH);
  
  
  digitalWrite(z1,LOW);
  digitalWrite(z2,HIGH);
  digitalWrite(z3,HIGH);
  delay(100);
  digitalWrite(z1,HIGH);
  digitalWrite(z2,LOW);
  digitalWrite(z3,HIGH);
  delay(100);
  digitalWrite(z1,HIGH);
  digitalWrite(z2,HIGH);
  digitalWrite(z3,LOW);
  delay(100);
 digitalWrite(z1,HIGH);
 digitalWrite(z2,LOW);
 digitalWrite(z3,HIGH);
 delay(100);
 digitalWrite(z1,LOW);
 digitalWrite(z2,HIGH);
 digitalWrite(z3,HIGH);
 delay(100);
}

void amp()
{
digitalWrite(z1,LOW);
digitalWrite(z2,LOW);
digitalWrite(z3,LOW);


digitalWrite(x1y1,HIGH);
digitalWrite(x2y1,HIGH);
digitalWrite(x3y1,HIGH);
digitalWrite(x1y2,LOW);
digitalWrite(x2y2,LOW);
digitalWrite(x3y2,LOW);
digitalWrite(x1y3,LOW);
digitalWrite(x2y3,LOW);
digitalWrite(x3y3,LOW);
delay(100);

digitalWrite(x1y1,LOW);
digitalWrite(x2y1,LOW);
digitalWrite(x3y1,LOW);
digitalWrite(x1y2,LOW);
digitalWrite(x2y2,LOW);
digitalWrite(x3y2,LOW);
digitalWrite(x1y3,LOW);
digitalWrite(x2y3,LOW);
digitalWrite(x3y3,LOW);
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

digitalWrite(x1y1,LOW);
digitalWrite(x2y1,LOW);
digitalWrite(x3y1,LOW);
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
digitalWrite(x1y2,LOW);
digitalWrite(x2y2,LOW);
digitalWrite(x3y2,LOW);
digitalWrite(x1y3,LOW);
digitalWrite(x2y3,LOW);
digitalWrite(x3y3,LOW);
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


digitalWrite(x1y1,LOW);
digitalWrite(x2y1,LOW);
digitalWrite(x3y1,LOW);
digitalWrite(x1y2,LOW);
digitalWrite(x2y2,LOW);
digitalWrite(x3y2,LOW);
digitalWrite(x1y3,LOW);
digitalWrite(x2y3,LOW);
digitalWrite(x3y3,LOW);
delay(100);

digitalWrite(x1y1,HIGH);
digitalWrite(x2y1,HIGH);
digitalWrite(x3y1,HIGH);
digitalWrite(x1y2,LOW);
digitalWrite(x2y2,LOW);
digitalWrite(x3y2,LOW);
digitalWrite(x1y3,LOW);
digitalWrite(x2y3,LOW);
digitalWrite(x3y3,LOW);
delay(100);
}*/
