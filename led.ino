void setup() {
  // put your setup code here, to run once:
  pinMode(2, INPUT); // o pote do SUDOKU está sem comida (sensor mais abaixo) 
  pinMode(3, INPUT);//o pote do SUDOKU está com comida (sensor mais acima)
  pinMode(8, OUTPUT);// abre a portinhola do alimentador
  pinMode(5, INPUT);//o reservatório do alimentador tem comida
  pinMode(10, OUTPUT);//avisa que esta sem comida no reservatório do alimentador

}

void loop() {
  // put your main code here, to run repeatedly:
  if( digitalRead(2) == HIGH && digitalRead(3) == HIGH){  //verifica se esta a baixo a comida
    delay(10000);
    digitalWrite(8, HIGH);  // coloca comida
    if(digitalRead(3) == LOW){  //verifica se ficou cheio
       digitalWrite(8, LOW);  //para de colocar comida
    }
    }
  if( digitalRead(50) == HIGH){
    digitalWrite(10, HIGH);
  }
  }





////////////////////////////////////////////////////////////

// Projeto de Alimentação automatizada do SUDOKU

// um oferecimento:
/*
 * Ana Carolina Asano
 * Eric Kurachi
 * José Guilherme Moraes
 * Marcos V. V. T. da Silva
 * Thiago B. Ferreira
 * 
 * 
 * SALVEM OS GATOS GORDOS!!! 
*/
