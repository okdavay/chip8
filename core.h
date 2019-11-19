#ifndef CORE_H
#define CORE_H
#include <algorithm>
#include <set>
#include "ikeyboardslot.h"
#include "iwindow.h"

class Core : public IKeyboardSlot {
 public:
  Core();

  void exec();

  void connectWindow(IWindow* window);

  void disconnectWindow(IWindow* window);

 private:
  bool stop = false;
  std::set<IWindow*> windows;

  uint32_t frameBuffer[128][64];

  void draw();

  // IKeyboard interface
  void keyboardCallback(int32_t key);
};

#endif  // CORE_H
