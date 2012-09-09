#define LEDMAT_SERIAL_DATA 8
#define LEDMAT_SHIFT_CLOCK 2
#define LEDMAT_LATCH_CLOCK 9

#define LEDMAT_FILA_0 3
#define LEDMAT_FILA_1 4
#define LEDMAT_FILA_2 5
#define LEDMAT_FILA_3 6
#define LEDMAT_FILA_4 7

const boolean alfabeto[28*5][5] = {
  { 0, 1, 1, 0 },  //A
  { 1, 0, 0, 1 },
  { 1, 1, 1, 1 },
  { 1, 0, 0, 1 },
  { 1, 0, 0, 1 },

  { 1, 1, 1, 0 },  //B
  { 1, 0, 0, 1 },
  { 1, 1, 1, 0 },
  { 1, 0, 0, 1 },
  { 1, 1, 1, 0 },

  { 0, 1, 1, 0 },  //C
  { 1, 0, 0, 1 },
  { 1, 0, 0, 0 },
  { 1, 0, 0, 1 },
  { 0, 1, 1, 0 },

  { 1, 1, 1, 0 },  //D
  { 1, 0, 0, 1 },
  { 1, 0, 0, 1 },
  { 1, 0, 0, 1 },
  { 1, 1, 1, 0 },

  { 1, 1, 1, 1 },  //E
  { 1, 0, 0, 0 },
  { 1, 1, 1, 0 },
  { 1, 0, 0, 0 },
  { 1, 1, 1, 1 },

  { 1, 1, 1, 1 },  //F
  { 1, 0, 0, 0 },
  { 1, 1, 1, 0 },
  { 1, 0, 0, 0 },
  { 1, 0, 0, 0 },

  { 0, 1, 1, 1 },  //G
  { 1, 0, 0, 0 },
  { 1, 0, 1, 1 },
  { 1, 0, 0, 1 },
  { 0, 1, 1, 0 },

  { 1, 0, 0, 1 },  //H
  { 1, 0, 0, 1 },
  { 1, 1, 1, 1 },
  { 1, 0, 0, 1 },
  { 1, 0, 0, 1 },

  { 1, 1, 1 },  //I
  { 0, 1, 0 },
  { 0, 1, 0 },
  { 0, 1, 0 },
  { 1, 1, 1 },
  
  { 0, 1, 1, 1 },  //j
  { 0, 0, 0, 1 },
  { 0, 0, 0, 1 },
  { 1, 0, 0, 1 },
  { 0, 1, 1, 0 },
  
  { 1, 0, 0, 1 },  //k
  { 1, 0, 1, 0 },
  { 1, 1, 0, 0 },
  { 1, 0, 1, 0 },
  { 1, 0, 0, 1 },
  
  { 1, 0, 0, 0 },  //L
  { 1, 0, 0, 0 },
  { 1, 0, 0, 0 },
  { 1, 0, 0, 0 },
  { 1, 1, 1, 1 },

  { 1, 0, 0, 0, 1 },  //M
  { 1, 1, 0, 1, 1 },
  { 1, 0, 1, 0, 1 },
  { 1, 0, 0, 0, 1 },
  { 1, 0, 0, 0, 1 },
  
  { 1, 0, 0, 1 },  //N
  { 1, 1, 0, 1 },
  { 1, 0, 1, 1 },
  { 1, 0, 0, 1 },
  { 1, 0, 0, 1 },

  { 0, 1, 1, 0 },  //O
  { 1, 0, 0, 1 },
  { 1, 0, 0, 1 },
  { 1, 0, 0, 1 },
  { 0, 1, 1, 0 },  

  { 1, 1, 1, 0 },  //P
  { 1, 0, 0, 1 },
  { 1, 1, 1, 0 },
  { 1, 0, 0, 0 },
  { 1, 0, 0, 0 },
  
  { 0, 1, 1, 0 },  //Q
  { 1, 0, 0, 1 },
  { 1, 0, 0, 1 },
  { 1, 0, 1, 0 },
  { 0, 1, 0, 1 },  

  { 1, 1, 1, 0 },  //R
  { 1, 0, 0, 1 },
  { 1, 1, 1, 0 },
  { 1, 0, 0, 1 },
  { 1, 0, 0, 1 },

  { 0, 1, 1, 1 },  //S
  { 1, 0, 0, 0 },
  { 0, 1, 1, 0 },
  { 0, 0, 0, 1 },
  { 1, 1, 1, 0 },
  
  { 1, 1, 1 },  //T
  { 0, 1, 0 },
  { 0, 1, 0 },
  { 0, 1, 0 },
  { 0, 1, 0 },
  
  { 1, 0, 0, 1 },  //U
  { 1, 0, 0, 1 },
  { 1, 0, 0, 1 },
  { 1, 0, 0, 1 },
  { 0, 1, 1, 0 },

  { 1, 0, 0, 1 },  //V
  { 1, 0, 0, 1 },
  { 1, 0, 0, 1 },
  { 1, 0, 1, 0 },
  { 0, 1, 0, 0 },
  
  
  { 1, 0, 0, 0, 1 },  //W
  { 1, 0, 0, 0, 1 },
  { 1, 0, 1, 0, 1 },
  { 1, 1, 0, 1, 1 },
  { 1, 0, 0, 0, 1 },
  
  { 1, 0, 0, 1 },  //x
  { 1, 0, 0, 1 },
  { 0, 1, 1, 0 },
  { 1, 0, 0, 1 },
  { 1, 0, 0, 1 },
  
  { 1, 0, 1 },  //Y
  { 1, 0, 1 },
  { 0, 1, 0 },
  { 0, 1, 0 },
  { 0, 1, 0 },
  
  { 1, 1, 1, 1 },  //Z
  { 0, 0, 0, 1 },
  { 0, 1, 1, 0 },
  { 1, 0, 0, 0 },
  { 1, 1, 1, 1 },
  
  { 0},  //" "
  { 0,},
  { 0 },
  { 0 },
  { 0 },
};


const int anchoCaracter[30] = {
  4, 4, 4, 4, 4, 4, 4, 4, 3, 4, 4, 4, 5, 4, 4, 4, 4, 4, 4, 3, 4, 4, 5, 4, 3, 4, 1,
//A, B, C, D, E, F, G, H, I, J, K, L, M, N, 0, P, Q, R, S, T, U, V, W, X, Y, Z," "
//0, 1, 2, 3, 4, 5, 6, 7, 8, 9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26
};
//ABCDEFGHIJKLMNOPQRSTUVWXYZ
char texto[256] = "LINUX ALSW\n";
boolean pantalla[5][20];

void setup () {
  pinMode(LEDMAT_SERIAL_DATA, OUTPUT);
  pinMode(LEDMAT_SHIFT_CLOCK, OUTPUT);
  pinMode(LEDMAT_LATCH_CLOCK, OUTPUT);

  pinMode(LEDMAT_FILA_0, OUTPUT);
  pinMode(LEDMAT_FILA_1, OUTPUT);
  pinMode(LEDMAT_FILA_2, OUTPUT);
  pinMode(LEDMAT_FILA_3, OUTPUT);
  pinMode(LEDMAT_FILA_4, OUTPUT);

  Serial.begin(9600);
  /*
char letra;
  for( letra = 'A'; letra <= 'a'; letra++){
  Serial.print(letra);
  Serial.println(letra, DEC);
  }
  */
}

void loop () {
  int i;
  static int pos = -20;
  
  for (i=0; i<20; i++) {
    dibujarTexto(pos);
    actualizarMatriz();
  }
  if(Serial.available() >0 ){
    nuevoTexto();
    pos = -20;
  }
  

  pos++;
  if (pos >= longitudTexto()) pos = -20;
}

void nuevoTexto(){
  int posicion = 0;
 while( Serial.available() > 0 ){
   texto[posicion] = Serial.read();
   posicion++;
   if( Serial.available() == 0){ 
     texto[posicion] = '\n';
     }
   }
}

int posicionTexto(char caracter){
 int l = 0;
 if(caracter >= 'A' && caracter <= 'Z')
 l = caracter - 'A';
 else if(caracter >= 'a' && caracter <= 'z')
 l = caracter - 'a';
 else if( caracter == ' ')
 l = 26;
 return l;
}

int longitudTexto() {
  int l = 0;
  int n = 0;

  while (texto[n] != '\n') {
    l += anchoCaracter[posicionTexto(texto[n])] + 1;
    n++;
  }

  return l;
}

void dibujarTexto(int offset) {
  int posTexto = 0;
  int posPantalla = 0;
  int nPixel = 0;
  char caracter;

  //En caso que el offset sea negativo, comienza a dibujar texto adelante (a la derecha),
  //mientras que si es positivo entonces el dibujado comenzaria desde atras
  //(a la izquierda)
  posPantalla = -offset;

  //Dibujara hasta alcanzar el final del espacio visible de la pantalla
  while (posPantalla < 20) {
    //Verifica si se dara inicio a un nuevo caracter
    if (nPixel == 0) {
      //Para cada nuevo caracter se obtiene el codigo ascii
      caracter = texto[posTexto];
      //Se determina si es valido
      if (caracter == '\n' || ( caracter < 'A' | caracter > 'Z' && caracter < 'a' | caracter > 'z') && caracter != ' ') break;
      //Si es valido, entonces ubica el offset absoluto en la tabla del alfabeto
      //caracter -= 'A';
      caracter = posicionTexto(caracter);
    }

    //En caso que se determine un offset positivo (posicion de pantalla negativa) se
    //omite el dibujado, de manera que solo se dibuja en posiciones visibles
    if (posPantalla >= 0) {
      pantalla[0][posPantalla] = alfabeto[caracter*5 + 0][nPixel];
      pantalla[1][posPantalla] = alfabeto[caracter*5 + 1][nPixel];
      pantalla[2][posPantalla] = alfabeto[caracter*5 + 2][nPixel];
      pantalla[3][posPantalla] = alfabeto[caracter*5 + 3][nPixel];
      pantalla[4][posPantalla] = alfabeto[caracter*5 + 4][nPixel];
    }
    posPantalla++;  //Avanza a la siguiente columna

    nPixel++;  //Incrementa la posicion dentro del caracter actual

    //Verifica si se terminaron los pixeles del caracter
    if (nPixel >= anchoCaracter[caracter]) {
      //En caso de terminarse, apunta al siguiente caracter de la cadena
      posTexto++;
      nPixel = 0;     //Inicia con el primer pixel del nuevo caracter

      //En caso que se este en el espacio visile, se dibuja un espacio despues del caracter
      if (posPantalla >= 0) {
        pantalla[0][posPantalla] = 0;
        pantalla[1][posPantalla] = 0;
        pantalla[2][posPantalla] = 0;
        pantalla[3][posPantalla] = 0;
        pantalla[4][posPantalla] = 0;
      }
      posPantalla++;  //Avanza a la siguiente columna
    }
  }
}

void actualizarMatriz() {
  byte i;
  for (i=0; i<5; i++) {
    enviarFila(i);
    delay(2);
  }
}

void enviarFila(byte nFila) {
  byte i;

  digitalWrite(LEDMAT_SHIFT_CLOCK, HIGH);
  digitalWrite(LEDMAT_LATCH_CLOCK, HIGH);

  for (i=0; i<20; i++) {
    digitalWrite(LEDMAT_SERIAL_DATA, pantalla[nFila][i]);
    digitalWrite(LEDMAT_SHIFT_CLOCK, LOW);
    digitalWrite(LEDMAT_SHIFT_CLOCK, HIGH);
  }

  digitalWrite(LEDMAT_FILA_0, LOW);
  digitalWrite(LEDMAT_FILA_1, LOW);
  digitalWrite(LEDMAT_FILA_2, LOW);
  digitalWrite(LEDMAT_FILA_3, LOW);
  digitalWrite(LEDMAT_FILA_4, LOW);

  digitalWrite(LEDMAT_LATCH_CLOCK, LOW);
  digitalWrite(LEDMAT_LATCH_CLOCK, HIGH);  
  
  switch (nFila) {
  case 0:
    digitalWrite(LEDMAT_FILA_0, HIGH);
    break;
  case 1:
    digitalWrite(LEDMAT_FILA_1, HIGH);
    break;
  case 2:
    digitalWrite(LEDMAT_FILA_2, HIGH);
    break;
  case 3:
    digitalWrite(LEDMAT_FILA_3, HIGH);
    break;
  case 4:
    digitalWrite(LEDMAT_FILA_4, HIGH);
    break;
  }
}

