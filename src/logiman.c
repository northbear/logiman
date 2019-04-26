#include <stdio.h>
#include <ncurses.h>

int init_ncurses() {
  initscr();
  cbreak();
  noecho();
  nonl();
  keypad(stdscr, TRUE);
  /* start_color(); */

}

int main(int argc, char** argv)
{
  WINDOW *nw;

  printf("start ncurses application\n");

  init_ncurses();
  start_color();
  init_pair(1, COLOR_YELLOW, COLOR_BLUE);
  init_pair(2, COLOR_BLUE, COLOR_WHITE);

  nw = newwin(3, 25, 12, 20);
  move(10, 20);
  attron(COLOR_PAIR(1)); 
  /* bkgdset(COLOR_PAIR(1)); */
  bkgd(COLOR_PAIR(1));
  attron(COLOR_PAIR(2)); 
  printw("Test test...");
  refresh();
  getch();
  delwin(nw);

  
  /* start_color(); */
  /* init_pair(1, COLOR_YELLOW, COLOR_BLUE); */
  /* init_pair(2, COLOR_BLUE, COLOR_YELLOW); */
  /* init_pair(3, COLOR_BLUE, COLOR_WHITE);  */

  /* win=newwin(12, 40, 20, 0); */
  /* wbkgd(win, COLOR_PAIR(1)); */

  /* wmove(win, 3, 3); */
  /* wprintw(win, "Hello, World!!!"); */
  /* wbkgd(win, COLOR_PAIR(1)); */
  /* wrefresh(win); */
  /* getch(); */
  /* delwin(win); */
  endwin();

  printf("complete ncurses application\n");
  return 0;
}
