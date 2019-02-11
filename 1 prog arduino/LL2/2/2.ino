
/**********************************************************************************
**                                                                               **
**                             Math Is Fun                                       **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
int a = 5, b = 10, h = 0;
int c = (sqrt(sq(a)+sq(b)));

//********** Setup ****************************************************************
void setup()              // run once, when the sketch starts
{
  Serial.begin(9600);     // set up Serial library at 9600 bps

  Serial.println("Lets calculate a hypoteneuse: ");
  Serial.println("a = ");
  Serial.println(a);
  Serial.print("b = ");
  Serial.println(b);
  Serial.print("h = ");
  Serial.println(c);

}

//********** Loop *****************************************************************
void loop()  // we need this to be here even though its empty
{
}

//********** Funcions ***********************************************************
