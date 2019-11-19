#include "core.h"
#include "keyboards.h"
#include "window.h"

int main() {
  Core core;
  Window window("Chip 8");
  core.connectWindow(&window);
  Keyboard keyboard(&core);

  core.exec();

  return 0;
}
