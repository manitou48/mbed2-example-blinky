#include "mbed.h"

DigitalOut myled(LED1);

int main() {
    printf("later tom ok \n");
  while(1) {
    myled = 1;
    wait(5.2);
    myled = 0;
    wait(2.2);
  }
}
