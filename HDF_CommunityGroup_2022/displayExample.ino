#include <OledDisplay.h>

void setup(){
    Screen.init();
}

void loop(){
    Screen.print("Remote Labore\n machen Spass", true);
    delay(500);
    Screen.clean();
    delay(500);
}