# include <stdio.h>

# define SPACE ' '
# define TAB '\t'
# define NL '\n'

int isBlank(int c) {
  return (c == SPACE || c == TAB || c == NL);
}

int main() {
  int c;
  int pc = 0;

  while((c = getchar()) != EOF) { 
    if(!isBlank(pc) || !isBlank(c)) {
      putchar(c);
    }
    pc = c;
  }
  return 0;
}
