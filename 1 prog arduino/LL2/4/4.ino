/**********************************************************************************
**                                                                               **
**                               Math Is Fun                                     **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************
//********** Variables ************************************************************
long drive_gb = 100;
long drive_mb;
long drive_kb;
long real_drive_mb;
long real_drive_kb;
long missing_drive_kb;

//********** Setup ****************************************************************
void setup()
{
  Serial.begin(9600);     
  Serial.print("Your HD is");
  Serial.print(drive_gb);
  Serial.println(" GB large.");
  
   drive_mb = 1024 * drive_gb;

  Serial.print("It can store ");
  Serial.print(drive_mb);
  Serial.print(" Megabytes,");

  drive_kb = 1024 * drive_mb;

  Serial.print(drive_kb);
  Serial.println(" Kilobytes.");

  drive_mb = 1024 * drive_gb - 2400;

  Serial.print("But really only stores ");
  Serial.print(drive_mb);
  Serial.println(" Megabytes,");

   drive_kb = 1024 * drive_mb - 4857600;

  Serial.print(drive_kb);
  Serial.println(" Kilobytes.");
}

//********** Loop *****************************************************************
void loop()
{
}
