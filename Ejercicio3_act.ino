int ledRojo = 8;
int ledAmarillo = 9;
int ledVerde = 10;
int pulsador = 13;

// Empieza en tráfico 
int modo = 5;
int estadoAnterior = HIGH;
unsigned long tiempo = 0;

// Estados del semáforo
// 0=Rojo, 1=Amarillo, 2=Verde, 3=Amarillo
int estadoSemaforo = 0;

bool estadoParpadeo = false;

void setup() {
  pinMode(ledRojo, OUTPUT);
  pinMode(ledAmarillo, OUTPUT);
  pinMode(ledVerde, OUTPUT);
  pinMode(pulsador, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {

  unsigned long ahora = millis();
  int estadoBoton = digitalRead(pulsador);

  if (estadoAnterior == HIGH && estadoBoton == LOW) {
    modo++;
    if (modo > 5) {
      modo = 1;
    }
    tiempo = millis();          
    estadoSemaforo = 0;         
    estadoParpadeo = false;     
    Serial.println(modo);
  }

  estadoAnterior = estadoBoton;

  // Apagar todo 
  digitalWrite(ledRojo, LOW);
  digitalWrite(ledAmarillo, LOW);
  digitalWrite(ledVerde, LOW);

  // Condiciones

  if (modo == 1) {
    digitalWrite(ledVerde, HIGH);
  }

  else if (modo == 2) {

    if (ahora - tiempo >= 500) {
      tiempo = ahora;
      estadoParpadeo = !estadoParpadeo;
    }

    digitalWrite(ledRojo, estadoParpadeo);
    digitalWrite(ledAmarillo, estadoParpadeo);
    digitalWrite(ledVerde, estadoParpadeo);
  }

  else if (modo == 3) {

    if (ahora - tiempo >= 500) {
      tiempo = ahora;
      estadoParpadeo = !estadoParpadeo;
    }

    digitalWrite(ledAmarillo, estadoParpadeo);
  }

  else if (modo == 4) {
    // No se enciende nada
  }

  else if (modo == 5) {

    if (ahora - tiempo >= 1000) {
      tiempo = ahora;
      estadoSemaforo++;
      if (estadoSemaforo > 3) {
        estadoSemaforo = 0;
      }
    }

    if (estadoSemaforo == 0) {
      digitalWrite(ledRojo, HIGH);
    }
    else if (estadoSemaforo == 1) {
      digitalWrite(ledAmarillo, HIGH);
    }
    else if (estadoSemaforo == 2) {
      digitalWrite(ledVerde, HIGH);
    }
    else if (estadoSemaforo == 3) {
      digitalWrite(ledAmarillo, HIGH);
    }
  }
}