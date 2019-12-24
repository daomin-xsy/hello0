int pin=13;
void setup() {
  pinMode(pin,OUTPUT);
}
void loop() {
  char myarr[]={"HELLO"};
  //char myarr[]={"SOS"};
  char arr[26][5]={{".-"},{"-..."},{"-.-."},{"-.."},{"."},
  {"..-."},{"--."},{"...."},{".."},{".---"},
  {"-.-"},{".-.."},{"--"},{"-."},{"---"},{".--."},
  {"--.-"},{".-."},{"..."},{"-"},{"..-"},{"...-"},
  {".--"},{"-..-"},{"-.--"},{"--.."}};
  for(int i=0;i<strlen(myarr);i++)
  {
      int index;
      index=(int)(myarr[i])-65;
      for(int j=0;j<strlen(arr[index]);j++)
      {
          if(arr[index][j]=='.')
          {
            digitalWrite(pin,HIGH);
            delay(500);
            digitalWrite(pin,LOW);
            delay(400);
          }
          else
          {
            digitalWrite(pin,HIGH);
            delay(2000);
            digitalWrite(pin,LOW);
            delay(400);
          }
      }  
  }   
}



  
