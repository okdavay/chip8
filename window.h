#ifndef WINDOW_H
#define WINDOW_H
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include "iwindow.h"

class Window : public IWindow {
 public:
  Window(std::string name);
  ~Window();

  // IWindow interface
 private:
  sf::RenderWindow* window = nullptr;
  sf::Event* event = nullptr;

  void draw(uint32_t frame[128][64]);
};

#endif  // WINDOW_H
