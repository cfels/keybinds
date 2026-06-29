#include <iostream>
#include <stdio.h>
#include <../include/ftxui/ftxui.hpp>

ftxui::Element keybinds_store() {
  using namespace ftxui;
  Element document = vbox({
    // the keybinds
    vbox({
    text("-- Screenshoting and clearing clipboard") | color(0xca9ee6_rgb),
    text("SUPER+SHIFT+C - clear your clipboard"),
    text("SUPER+SHIFT+S - region screenshot"),
    text("SUPER+PRINT - fullscreen screenshot\n"),
    text("-- Emoji's") | color(0xF5BDE6_rgb),
    text("SUPER+. (period) - show emoji keyboard\n"),
    text("-- Lockscreen & logout") | color(0xF0C6C6_rgb),
    text("SUPER+SHIFT+P - logout (wlogout)"),
    text("SUPER+SHIFT+L - lockscreen (hyprlock)\n"),
    text("-- Reload waybar & swaync") | color(0xb7bdf8_rgb),
    text("SUPER+SHIFT+R - basically reloads swaync and waybar (as top comment says)\n"),
    text("-- Quiting program") | color(0xf4dbd6_rgb),
    text("SUPER+Q - quit's the program ur focused on\n"),
    text("-- Kill hyprland ig") | color(0xf5bde6_rgb),
    text("SUPER+SHIFT+M - kill hyprland (maybe works)\n"),
    text("-- Apps") | color(0xc6a0f6_rgb),
    text("SUPER+W - open librewolf"),
    text("SUPER+E - open file explorer"),
    text("SUPER+SHIFT+D - open discord (shit platform)"),
    text("SUPER+RETURN - open terminal (kitty)"),
    text("SUPER+SPACE - open rofi (app launcher)\n"),
    text("-- Window stuff") | color(0xc6a0f6_rgb),
    text("SUPER+SHIFT+T - toggle floating mode on window"),
    text("SUPER+J - toggle split (splits window or smth like that)"),
    text("SUPER+Left - move window focus to left"),
    text("SUPER+Right - move window focus to right"),
    text("SUPER+Up - move window focus up"),
    text("SUPER+Down - move window focus down"),
    text("SUPER+F - make window fullscreen"),
    text("SUPER+SHIFT+F - make window maximized"),
    text("SUPER+SHIFT+l,r,u,p - move window to diffrent position"),
    text("SUPER+ALT+SHIFT+l,r,u,p - move window to diffrent workspace"),
    text("SUPER+1,10/mouse_scroll - switch workspace"),
    text("SUPER+right_mouse - resize window"),
    }) | border,
});
 
  return document;
}

// colors
// pink: 0xf5bde6_rgb
// mauve: 0xc6a0f6_rgb
// flamingo: 0xf0c6c6_rgb
// lavender: 0xb7bdf8_rgb
// rosewater: 0xf4dbd6_rgb
