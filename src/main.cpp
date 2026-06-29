#include <iostream>
#include <stdio.h>
#include <../include/ftxui/ftxui.hpp>
#include "keybind_store.hpp"

int main() {
  using namespace ftxui;
 
  // create a simple TUI window (with name KEYBINDS)
  Element document = vbox({
    text("///// KEYBINDS /////") | color(0x7dc4e4_rgb) | center | border,
    keybinds_store(),
    text("///////// END /////////") | color(0x7dc4e4_rgb) | center | border,
    // keybinds in keybind store cpp file
});
 
  // Create a screen with full width and height fitting the document.
  auto screen = Screen::Create(
    Dimension::Full(),       // Width
    Dimension::Fit(document) // Height
  );
 
  // Render the document onto the screen.
  Render(screen, document);
 
  // Print the screen to the console.
  screen.Print();
  std::cin.get();
}
