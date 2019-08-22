#define E1 10     // activa el Pin para motor 
#define I1 8     // Control pin 1 para motor 
#define I2 9     // Control pin 2 para motor 

#define P1 2     // Control pin pulsador primera planta 
#define P2 3     // Control pin pulsador segunda planta
#define P3 4     // Control pin pulsador tercera planta
#define P4 5     // Control pin pulsador tercera planta
#define P5 6     // Control pin pulsador tercera planta

const int pinBuzzer=12;


int PULSADOR_1 = 0; //variables para controlar el estado de los pulsadores de cada piso
int PULSADOR_2 = 0;
int PULSADOR_3 = 0;
int PULSADOR_4 = 0;
int PULSADOR_5 = 0;

int plantaActual=5; //definimos el piso actual donde comienza el elevador


void setup() {
        Serial.begin(9600);
       
        pinMode( I1, OUTPUT);//MOTOR
        pinMode( I2, OUTPUT);//MOTOR
        pinMode( E1, OUTPUT);//MOTOR
        
        pinMode(P1, INPUT);//PULSADOR
        pinMode(P2, INPUT);//PULSADOR
        pinMode(P3, INPUT);//PULSADOR
        pinMode(P4, INPUT);//PULSADOR
        pinMode(P5, INPUT);//PULSADOR
}

void loop() {
  PULSADOR_1=digitalRead(2); //lee el estado del pin 2 asignado para el primer piso
  PULSADOR_2=digitalRead(3); //lee el estado del pin 3 asignado para el segundo piso
  PULSADOR_3=digitalRead(4); //lee el estado del pin 4 asignado para el tercer piso
  PULSADOR_4=digitalRead(5); //lee el estado del pin 5 asignado para el cuarto piso
  PULSADOR_5=digitalRead(6); //lee el estado del pin 6 asignado para el quinto piso
        
  if(PULSADOR_1==HIGH){ //Si se presiona el botón del primer nivel
      if(plantaActual==2){ //Si el elvador se encuentra en el segundo nivel
            Serial.print("Moviendo del piso 2 al piso 1\n");
            digitalWrite(E1, HIGH);     // Activamos Motor
        
            digitalWrite(I1, LOW);     // Arrancamos para BAJAR
            digitalWrite(I2, HIGH);
            delay(900); //tiempo de bajada del ascensor de la planta 2 a la planta 1

            digitalWrite(E1, LOW);      // Paramos Motor 
            
            plantaActual=1; //como hemos pulsado el pulsador de la planta primera, la planta actual es la primera            
            Serial.print("Piso acutal: 1\n");
            //tone(pinBuzzer, 440);(pinBuzzer, 440);
            delay(100);
            //noTone(pinBuzzer);
        }
        if(plantaActual==3){ //Si el elvador se encuentra en el tercer nivel
            Serial.print("Moviendo del piso 3 al piso 1\n");
            digitalWrite(E1, HIGH);     // Activamos Motor
        
            digitalWrite(I1, LOW);     // Arrancamos para BAJAR
            digitalWrite(I2, HIGH);
            delay(2200); //tiempo de bajada del ascensor de la planta 3 a la planta 1

            digitalWrite(E1, LOW);      // Paramos Motor

            plantaActual=1; //como hemos pulsado el pulsador de la planta primera, la planta actual es la primera
            Serial.print("Piso actual: 1\n");
            //tone(pinBuzzer, 440);
            //delay(100);
            
          }
          if(plantaActual==4){ //Si el elvador se encuentra en el cuarto nivel
            Serial.print("Moviendo del piso 4 al piso 1\n");
            digitalWrite(E1, HIGH);     // Activamos Motor
        
            digitalWrite(I1, LOW);     // Arrancamos para BAJAR
            digitalWrite(I2, HIGH);
            delay(3500); //tiempo de bajada del ascensor de la planta 3 a la planta 1

            digitalWrite(E1, LOW);      // Paramos Motor

            plantaActual=1; //como hemos pulsado el pulsador de la planta primera, la planta actual es la primera
            Serial.print("Piso actual: 1\n");
            //tone(pinBuzzer, 440);(pinBuzzer, 440);
            //delay(100);
          }
         if(plantaActual==5){ //Si el elvador se encuentra en el cuarto nivel
            Serial.print("Moviendo de piso 5 al piso 1\n");
            digitalWrite(E1, HIGH);     // Activamos Motor
        
            digitalWrite(I1, LOW);     // Arrancamos para BAJAR
            digitalWrite(I2, HIGH);
            delay(4800); //tiempo de bajada del ascensor de la planta 3 a la planta 1

            digitalWrite(E1, LOW);      // Paramos Motor

            plantaActual=1; //como hemos pulsado el pulsador de la planta primera, la planta actual es la primera
            Serial.print("Piso actual: 1\n");
            //tone(pinBuzzer, 440);(pinBuzzer, 440);
            //delay(1000);
          }
    }
    else if (PULSADOR_2==HIGH){ //Si se presiona el botón del segundo nivel      
        if(plantaActual==1){ //Si el elvador se encuentra en el primer nivel
          Serial.print("Moviendo del piso 1 al piso 2\n");
          digitalWrite(E1, HIGH);     // Activamos Motor
      
          digitalWrite(I1, HIGH);     // Arrancamos para SUBIR
          digitalWrite(I2, LOW);
          delay(1300); //tiempo para subir el ascensor de la planta 1 a la planta 2

          digitalWrite(E1, LOW);      // Paramos Motor

          plantaActual=2; //ahora la planta actual es la segunda
          Serial.print("Piso actual: 2\n");
          //tone(pinBuzzer, 440);(pinBuzzer, 440);
          //delay(1000);
        }
        if(plantaActual==3){ //Si el elvador se encuentra en el tercer nivel
            Serial.print("Moviendo del piso 3 al piso 2\n");
            digitalWrite(E1, HIGH);     // Activamos Motor
        
            digitalWrite(I1, LOW);     // Arrancamos para BAJAR
            digitalWrite(I2, HIGH);
            delay(800); //tiempo para bajar el ascensor de la planta 3 a la planta 2
     
            digitalWrite(E1, LOW);      // Paramos Motor

            plantaActual=2; //ahora la planta actual es la segunda
            Serial.print("Piso actual: 2\n");
            //tone(pinBuzzer, 440);(pinBuzzer, 440);
            //delay(1000);
          }
          if(plantaActual==4){ //Si el elvador se encuentra en el cuarto nivel
            Serial.print("Moviendo del piso 4 al piso 2\n");
            digitalWrite(E1, HIGH);     // Activamos Motor
        
            digitalWrite(I1, LOW);     // Arrancamos para BAJAR
            digitalWrite(I2, HIGH);
            delay(1300); //tiempo para bajar el ascensor de la planta 3 a la planta 2
      
            digitalWrite(E1, LOW);      // Paramos Motor

            plantaActual=2; //ahora la planta actual es la segunda
            Serial.print("Piso actual: 2\n");
            //tone(pinBuzzer, 440);(pinBuzzer, 440);
            //delay(1000);
          }
          if(plantaActual==5){ //Si el elvador se encuentra en el quinto nivel
            Serial.print("Moviendo del piso 5 al piso 2\n");
            digitalWrite(E1, HIGH);     // Activamos Motor
        
            digitalWrite(I1, LOW);     // Arrancamos para BAJAR
            digitalWrite(I2, HIGH);
            delay(2500); //tiempo para bajar el ascensor de la planta 3 a la planta 2
      
            digitalWrite(E1, LOW);      // Paramos Motor

            plantaActual=2; //ahora la planta actual es la segunda
            Serial.print("Piso actual: 2\n");
            //tone(pinBuzzer, 440);(pinBuzzer, 440);
            //delay(1000);
          }
      }
      else if (PULSADOR_3==HIGH){ //Si se presiona el botón del tercer nivel
        if(plantaActual==5){ //Si el elvador se encuentra en el primer nivel
          Serial.print("Moviendo del piso 5 al piso 3\n");
          digitalWrite(E1, HIGH);     // Activamos Motor
      
          digitalWrite(I1, LOW);     // Arrancamos para BAJAR
          digitalWrite(I2, HIGH);
          delay(2500); //tiempo para bajar el ascensor de la planta 3 a la planta 2
    
          digitalWrite(E1, LOW);      // Paramos Motor

          plantaActual=3; //ahora la planta actual es la segunda
          Serial.print("Piso actual: 3\n");
          //tone(pinBuzzer, 440);(pinBuzzer, 440);
          //delay(1000);
        }
        if(plantaActual==4){ //Si el elvador se encuentra en el segundo nivel
           Serial.print("Moviendo del piso 4 al piso 3\n");
            digitalWrite(E1, HIGH);     // Activamos Motor
        
            digitalWrite(I1, LOW);     // Arrancamos para BAJAR
            digitalWrite(I2, HIGH);
            delay(1200); //tiempo para bajar el ascensor de la planta 3 a la planta 2
      
            digitalWrite(E1, LOW);      // Paramos Motor

            plantaActual=3; //ahora la planta actual es la segunda
            Serial.print("Piso actual: 3\n");
            //tone(pinBuzzer, 440);(pinBuzzer, 440);
            //delay(1000);
          }
          if(plantaActual==2){ //Si el elvador se encuentra en el cuarto nivel
            Serial.print("Moviendo del piso 2 al piso 3\n");
            digitalWrite(E1, HIGH);     // Activamos Motor
        
            digitalWrite(I1, HIGH);     // Arrancamos para SUBIR
            digitalWrite(I2, LOW);
            delay(1100); //tiempo para subir de la segunda planta a la tercera

            digitalWrite(E1, LOW);      // Paramos Motor 

            plantaActual=3; //ahora la planta actual es la tercera
            Serial.print("Piso actual: 3\n");
            //tone(pinBuzzer, 440);(pinBuzzer, 440);
            //delay(1000);
          }
          if(plantaActual==1){ //Si el elvador se encuentra en el quinto nivel
            Serial.print("Moviendo del piso 1 al piso 3\n");
            digitalWrite(E1, HIGH);     // Activamos Motor
        
            digitalWrite(I1, HIGH);     // Arrancamos para SUBIR
            digitalWrite(I2, LOW);
            delay(2000); //tiempo para subir de la primera planta a la tercera

            digitalWrite(E1, LOW);      // Paramos Motor
            
            plantaActual=3; //ahora la planta actual es la tercera
            Serial.print("Piso actual: 3\n");
            //tone(pinBuzzer, 440);(pinBuzzer, 440);
            //delay(1000);
          }
      }
      else if (PULSADOR_4==HIGH){ //Si se presiona el botón del tercer nivel
        if(plantaActual==5){ //Si el elvador se encuentra en el primer nivel
          Serial.print("Moviendo del piso 5 al piso 4\n");
          digitalWrite(E1, HIGH);     // Activamos Motor
      
          digitalWrite(I1, LOW);     // Arrancamos para BAJAR
          digitalWrite(I2, HIGH);
          delay(900); //tiempo para bajar el ascensor de la planta 3 a la planta 2
    
          digitalWrite(E1, LOW);      // Paramos Motor

          plantaActual=4; //ahora la planta actual es la cuarta
          Serial.print("Piso actual: 4\n");
          //tone(pinBuzzer, 440);(pinBuzzer, 440);
          //delay(1000);
        }
        if(plantaActual==3){ //Si el elvador se encuentra en el segundo nivel
            Serial.print("Moviendo del piso 3 al piso 4\n");
            digitalWrite(E1, HIGH);     // Activamos Motor
        
            digitalWrite(I1, HIGH);     // Arrancamos para SUBIR
            digitalWrite(I2, LOW);
            delay(1200); //tiempo para subir de la primera planta a la tercera

            digitalWrite(E1, LOW);      // Paramos Motor
            
            plantaActual=4; //ahora la planta actual es la cuarta
            Serial.print("Piso actual: 4\n");
            //tone(pinBuzzer, 440);(pinBuzzer, 440);
            //delay(1000);
            
          }
          if(plantaActual==2){ //Si el elvador se encuentra en el tercer nivel
            Serial.print("Moviendo del piso 2 al piso 4\n");
            digitalWrite(E1, HIGH);     // Activamos Motor
        
            digitalWrite(I1, HIGH);     // Arrancamos para SUBIR
            digitalWrite(I2, LOW);
            delay(2000); //tiempo para subir de la primera planta a la tercera

            digitalWrite(E1, LOW);      // Paramos Motor
            
            plantaActual=4; //ahora la planta actual es la cuarta
            Serial.print("Piso actual: 4\n");
            //tone(pinBuzzer, 440);(pinBuzzer, 440);
            //delay(1000);
            
          }
          if(plantaActual==1){ //Si el elvador se encuentra en el quinto nivel
            Serial.print("Moviendo del piso 1 al piso 4\n");
            digitalWrite(E1, HIGH);     // Activamos Motor
        
            digitalWrite(I1, HIGH);     // Arrancamos para SUBIR
            digitalWrite(I2, LOW);
            delay(3000); //tiempo para subir de la primera planta a la tercera

            digitalWrite(E1, LOW);      // Paramos Motor
            
            plantaActual=4; //ahora la planta actual es la cuarta
            Serial.print("Piso actual: 4\n");
            //tone(pinBuzzer, 440);(pinBuzzer, 440);
            //delay(1000);
          }
      }
      else if (PULSADOR_5==HIGH){ //Si se presiona el botón del tercer nivel
            if(plantaActual==4){ //Si el elvador se encuentra en el primer nivel
                Serial.print("Moviendo del piso 4 al piso 5\n");
                digitalWrite(E1, HIGH);     // Activamos Motor
            
                digitalWrite(I1, HIGH);     // Arrancamos para SUBIR
                digitalWrite(I2, LOW);
                delay(900); //tiempo para subir de la primera planta a la tercera
    
                digitalWrite(E1, LOW);      // Paramos Motor
                
                plantaActual=5; //ahora la planta actual es el quinto
                Serial.print("Piso actual: 5\n");
                //tone(pinBuzzer, 440);(pinBuzzer, 440);
                //delay(1000);
        }
            if(plantaActual==3){ //Si el elvador se encuentra en el segundo nivel
                Serial.print("Moviendo del piso 3 al piso 5\n");
                digitalWrite(E1, HIGH);     // Activamos Motor
            
                digitalWrite(I1, HIGH);     // Arrancamos para SUBIR
                digitalWrite(I2, LOW);
                delay(2200); //tiempo para subir de la primera planta a la tercera
    
                digitalWrite(E1, LOW);      // Paramos Motor
                
                plantaActual=5; //ahora la planta actual es el quinto
                Serial.print("Piso actual: 5\n");
                //tone(pinBuzzer, 440);(pinBuzzer, 440);
                //delay(1000);
              }
              if(plantaActual==2){ //Si el elvador se encuentra en el tercer nivel
                Serial.print("Moviendo del piso 2 al piso 5\n");
                digitalWrite(E1, HIGH);     // Activamos Motor
            
                digitalWrite(I1, HIGH);     // Arrancamos para SUBIR
                digitalWrite(I2, LOW);
                delay(3500); //tiempo para subir de la primera planta a la tercera
    
                digitalWrite(E1, LOW);      // Paramos Motor
                
                plantaActual=5; //ahora la planta actual es el quinto
                Serial.print("Piso actual: 5\n");
                //tone(pinBuzzer, 440);(pinBuzzer, 440);
                //delay(1000);
              }
              if(plantaActual==1){ //Si el elvador se encuentra en el cuarto nivel
                Serial.print("Moviendo del piso 1 al piso 5\n");
                digitalWrite(E1, HIGH);     // Activamos Motor
            
                digitalWrite(I1, HIGH);     // Arrancamos para SUBIR
                digitalWrite(I2, LOW);
                delay(4800); //tiempo para subir de la primera planta a la tercera
    
                digitalWrite(E1, LOW);      // Paramos Motor
                
                plantaActual=5; //ahora la planta actual es el quinto
                Serial.print("Piso actual: 5\n");
                //tone(pinBuzzer, 440);(pinBuzzer, 440);
                //delay(1000);
              }
      }
}
