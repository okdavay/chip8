#ifndef IWINDOW_H
#define IWINDOW_H
#include <inttypes.h>

class IWindow {
 public:
  virtual ~IWindow() {}

  virtual void draw(uint32_t frame[128][64]) = 0;
};

#endif  // IWINDOW_H
