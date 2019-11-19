#include "keyboards.h"

Keyboard::Keyboard(IKeyboardSlot *keyboardSlot) {
  this->keyboardSlot = keyboardSlot;
  thread = new sf::Thread(&Keyboard::keypress, this);
  thread->launch();
}

Keyboard::~Keyboard() {}

void Keyboard::keypress() {
  while (true) {
    for (int it = sf::Keyboard::A; it != sf::Keyboard::KeyCount; ++it) {
      if (sf::Keyboard::isKeyPressed(static_cast<sf::Keyboard::Key>(it)))
        keyboardSlot->keyboardCallback(it);
    }
  }
}
