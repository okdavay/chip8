#include "window.h"

Window::Window(std::string name) {
  window = new sf::RenderWindow(sf::VideoMode(127, 63), name);
  window->setFramerateLimit(60);
  event = new sf::Event;
}

Window::~Window() {
  delete window;
  delete event;
}

void Window::draw(uint32_t frame[128][64]) {
  window->setActive(true);
  window->clear();
  for (auto i = 0; i < 128; ++i)
    for (auto j = 0; j < 64; ++j) {
    }
  window->display();
  window->pollEvent(*event);
  window->setActive(false);
}
