#include "core.h"

#include <chrono>
#include <iostream>
#include <thread>

Core::Core() {}

void Core::exec() {
  while (!stop) {
    draw();
  }
}

void Core::connectWindow(IWindow *window) { windows.emplace(window); }

void Core::disconnectWindow(IWindow *window) {
  for (auto it : windows) {
    if (it == window) {
      windows.erase(it);
      break;
    }
  }
}

void Core::draw() {
  for (auto it : windows) {
    it->draw(frameBuffer);
  }
}

void Core::keyboardCallback(int32_t key) {}
