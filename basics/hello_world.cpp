#include <iostream>
#include <ncurses.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int main() {
  initscr(); /* Start curses mode 		  */
  cbreak();
  std::cout << "echo = " << echo() << std::endl;
  int x, y;
  getmaxyx(stdscr, y, x);
  int c = getch();
  printw("Hello World !!! %c", c); /* Print Hello World		  */
  refresh();                       /* Print it on to the real screen */
  getch();                         /* Wait for user input */
  endwin();                        /* End curses mode		  */
  keypad(stdscr, true);
  std::cout << "x = " << x << " y = " << y << std::endl;
  getchar();
  return 0;
}
