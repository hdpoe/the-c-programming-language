# include <stdio.h>

# define NL '\n'
# define SPACE  ' '

int main() {
  int c, pc;
  c = pc = 0;

  while((c = getchar()) != EOF) {
    if(c == SPACE && pc != SPACE) {
      putchar('\n');
    } else if(c == SPACE) {
      ;
    } else {
      putchar(c);
    }
    pc = c;
  }
  return 0;
}
