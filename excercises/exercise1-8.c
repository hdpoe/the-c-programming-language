# include <stdio.h>
//# define NEWLINE 10
//# define SPACE 32
//# define TAB 9

# define NEWLINE '\n'
# define SPACE ' '
# define TAB '\t'


int main() {
  int nl = 0;
  int tabs = 0;
  int blnk = 0;
  int c;

  while((c = getchar()) != EOF) {
    if(c == 10) {
      ++nl;
    } else if(c == 9) {
      ++tabs;
    } else if(c == 32) {
      ++blnk;
    }
  }

  printf("Tabs: %d Spaces: %d Newlines: %d\n", tabs, blnk, nl);
}
