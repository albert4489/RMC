void mx_printchar(char c);
int mx_strlen(const char *s);
void mx_printstr(const char *s);
int mx_strcmp(const char *s1, const char *s2);

int main(int argc, char **argv) {
  if (argc <= 1) {
    return 0;
  }
  int i, j;

  for (i = 1; i < argc - 1; i++) {
    for (j = i; j < argc; j++) {
      if (mx_strcmp(argv[i], argv[j]) > 0) {
        char *temp = argv[i];
        argv[i] = argv[j];
        argv[j] = temp;
      }
    }
  }

  for (i = 1; i < argc; i++) {
    mx_printstr(argv[i]);
    mx_printchar('\n');
  }

  return 0;
}

