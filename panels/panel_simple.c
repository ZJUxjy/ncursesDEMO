#include <panel.h> // 导入 panel.h 头文件

int main() {
  WINDOW *my_wins[3];  // 定义 WINDOW 数组，用于存放三个窗口
  PANEL *my_panels[3]; // 定义 PANEL 数组，用于存放三个面板
  int lines = 10, cols = 40, y = 2, x = 4, i;

  initscr(); // 初始化 curses 库
  cbreak();  // 将输入模式设置为 cbreak 模式
  noecho();  // 关闭字符回显功能

  /* Create windows for the panels */              // 为面板创建窗口
  my_wins[0] = newwin(lines, cols, y, x);          // 第一个窗口
  my_wins[1] = newwin(lines, cols, y + 1, x + 5);  // 第二个窗口
  my_wins[2] = newwin(lines, cols, y + 2, x + 10); // 第三个窗口

  /*
   * Create borders around the windows so that you can see the effect
   * of panels
   */ // 给窗口创建边框，以便观察面板的效果
  for (i = 0; i < 3; ++i)
    box(my_wins[i], 0, 0);

  /* Attach a panel to each window */ // 将窗口关联面板，从底向上依次排列
  my_panels[0] = new_panel(my_wins[0]); // 将第一个窗口与第一个面板关联，底层
  my_panels[1] = new_panel(my_wins[1]); // 将第二个窗口与第二个面板关联，中层
  my_panels[2] = new_panel(my_wins[2]); // 将第三个窗口与第三个面板关联，顶层

  /* Update the stacking order. 2nd panel will be on top */ // 更新面板的层级顺序，第二个面板在最上面
  update_panels();

  /* Show it on the screen */ // 将面板显示在屏幕上
  doupdate();                 // 刷新屏幕

  getch();  // 等待用户输入
  endwin(); // 关闭 curses 库
}
