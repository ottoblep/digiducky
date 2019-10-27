// Template Script to copy parts out of

#include "DigiKeyboard.h"
void setup() {
  // Open PowerShell as Superuse Windows+X+A+Left_Arrow+Enter
   
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.sendKeyStroke(KEY_D, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_X, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_A);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ARROW_LEFT);
  DigiKeyboard.delay(500);
   DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);

  // Set Layout to US
  
  DigiKeyboard.print("Set");
  DigiKeyboard.sendKeyStroke(56);
  DigiKeyboard.print("WinUserLanguageList ");
  DigiKeyboard.sendKeyStroke(56);
  DigiKeyboard.print("Force en");
  DigiKeyboard.sendKeyStroke(56);
  DigiKeyboard.print("US");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);

  // Your Code Here
  DigiKeyboard.print("$Password = Read-Host -AsSecureString");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(200);
  DigiKeyboard.print("%ENTER_PASSWORD_HERE");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(200);
  DigiKeyboard.print("New-LocalUser '%ENTER_USERNAME_HERE%' -Password $Password");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(200);
  DigiKeyboard.print("Add-LocalGroupMember -Group 'Administrators' -Member '%ENTER_USERNAME_HERE_TOO%'");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(200);
//  DigiKeyboard.print(F("powershell $pass = ConvertTo-SecureString \"teate3627sts\" -AsPlainText -Force; New-LocalUser \"digiuser\" -Password $pass; Add-LocalGroupMember -Group \"Administrators\" -Member \"accName\" "));

  // Set Layout to DE

  DigiKeyboard.print("Set-WinUserLanguageList -Force de-DE");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(2000);
//  DigiKeyboard.print("exit");
//  DigiKeyboard.sendKeyStroke(KEY_ENTER);
//  for(;;){ /*empty*/ }
}

void loop() {
  // put your main code here, to run repeatedly:

}
