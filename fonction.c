#include <string.h>
#include <unistd.h>

void display_str (char *s)
{ write (1, s, strlen (s));
}
