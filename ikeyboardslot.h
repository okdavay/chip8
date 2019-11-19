#ifndef IKEYBOARDSLOT_H
#define IKEYBOARDSLOT_H
#include <inttypes.h>

class IKeyboardSlot {
 public:
  virtual ~IKeyboardSlot() {}

  virtual void keyboardCallback(int32_t key) = 0;
};

#endif  // IKEYBOARDSLOT_H
