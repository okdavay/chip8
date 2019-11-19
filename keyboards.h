#ifndef KEYBOARDS_H
#define KEYBOARDS_H
#include <SFML/Window.hpp>
#include "SFML/Window/Keyboard.hpp"
#include "ikeyboardslot.h"

class Keyboard {
 public:
  Keyboard(IKeyboardSlot* keyboardSlot);
  ~Keyboard();

 private:
  IKeyboardSlot* keyboardSlot;
  sf::Thread* thread;

  void keypress();
};

class VirtualKeyboard {
 public:
  VirtualKeyboard(IKeyboardSlot* keyboardSlot) {}
  ~VirtualKeyboard() {}

 private:
};

#endif  // KEYBOARDS_H
