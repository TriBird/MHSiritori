// author : shigetomo sakuma
// title  : ConsoleCtrl
// memo   : 2   - name
//          3-5 - hp bar
//          7-11- enemy graphic

#include <iostream>
#include <vector>
#include <curses.h>

int HitPoint = 100;

std::vector<std::string> MonsterVisual = {
  "* * * * * *",
  "*  -   -  *",
  "*  |   |  *",
  "*    ^    *",
  "* * * * * *"
};

void show_progress(int Percent) {
  // border
  attrset(COLOR_PAIR(1));
  mvaddstr(3, 5, "+--------------------+");
  mvaddstr(4, 5, "|");
  mvaddstr(4, 26, "|");
  mvaddstr(5, 5, "+--------------------+");

  // progress
  std::string tmp;
  for (int i = 0; i < 100; i += 5) {
    tmp += (Percent > i) ? "|" : " ";
  }
  attrset(COLOR_PAIR(2));
  mvaddstr(4, 6, tmp.c_str());
}

void show_MonsterName(std::string Name) {
  // calc center
  int pos = 16 - floor((float)Name.length() / 2);

  attrset(COLOR_PAIR(1));
  mvaddstr(2, pos, Name.c_str());
}

void show_MonsterVisual(std::string MonsterName) {
  attrset(COLOR_PAIR(1));

  int i = 7;
  for (std::string str : MonsterVisual) {
    mvaddstr(i++, 11, str.c_str());
  }
}

void show_NextChar(std::string character) {
  attrset(COLOR_PAIR(1));
  character = "Next char: " + character;
  mvaddstr(13, 5, character.c_str());
}

std::string IO_WordInput() {
  curs_set(1);
  std::string input;
  std::cin >> input;
  return input;
}

int main() {
  // init
  if (initscr() == NULL) {
    return 1;
  }

  curs_set(0);    // disable cursol
  start_color();  // enable color
  init_pair(1, COLOR_WHITE, COLOR_BLACK);
  init_pair(2, COLOR_GREEN, COLOR_BLACK);

  while (true) {
    erase();

    show_MonsterName("Nargacuga");
    show_MonsterVisual("");
    show_progress(HitPoint);
    show_NextChar(IO_WordInput());

    HitPoint -= 2;

    refresh();

    napms(500);
  }

	return 390;
}