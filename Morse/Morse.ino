/******************************************************************************
**                                                                           **
**                              Morse                                        **
**                                                                           **
**                                                                           **
******************************************************************************/

//****** Includes *************************************************************

//****** Variables ************************************************************
const int pin = 8;   // pin per altaveu

int note = 1047;
int velocitat = 10;

//****** Setup ****************************************************************
void setup()
{
}

//****** Loop *****************************************************************
void loop()
{
  //M   ** Exemple Me entiendes ? **
  ratlla();
  ratlla();
  //Espai entre lletres
  espaiL();
  
  //E
  punt();
  //Espai entre paraula
  espaiP();

  //E
  punt();
  //Espai entre lletres
  espaiL();
 
   //N
  ratlla();
  punt();
  //Espai entre lletres
  espaiL();
 
   //T
  ratlla();
  //Espai entre lletres
  espaiL();
  
   //I
  punt();
  punt();
  //Espai entre lletres
  espaiL();
 
   //E
  punt();
  //Espai entre lletres
  espaiL();
  
   //N
  ratlla();
  punt();
  //Espai entre lletres
  espaiL();
  
   //D
  ratlla();
  punt();
  punt();
  //Espai entre lletres
  espaiL();
 
   //E
  punt();
  //Espai entre lletres
  espaiL();
  
   //S
  punt();
  punt();
  punt();
  //Espai entre paraula
  espaiP();
  
   //?
  punt();
  punt();
  ratlla();
  ratlla();
  punt();
  punt();
    //Espai entre paraula
  espaiP();
}

//****** Funcions *************************************************************
void punt()
{
  tone(pin, note, 1000/velocitat);
  delay(1000/velocitat); 
  delay(1000/velocitat); 
}

void ratlla()
{
  tone(pin, note, 3*(1000/velocitat));
  delay(3*(1000/velocitat)); 
  delay(1000/velocitat);  
}

void espaiL()  //Espai entre lletres
{  
  delay(3*(1000/velocitat));  
}

void espaiP()  //Espai entre paraules
{   
  delay(7*(1000/velocitat));  
}
