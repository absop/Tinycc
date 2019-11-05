#include <stdio.h>

#define XXX LR"(你好，世界！)"
#define YYY R"(
   /\\\\\\\\\          /\\\\\\\                /\\\         /\\\\\\\\\
  /\\\///////\\\      /\\\/////\\\            /\\\\\       /\\\///////\\\
  \///      \//\\\    /\\\    \//\\\         /\\\/\\\      \/\\\     \/\\\
             /\\\/    \/\\\     \/\\\       /\\\/\/\\\      \///\\\\\\\\\/
           /\\\//      \/\\\     \/\\\     /\\\/  \/\\\       /\\\///////\\\
         /\\\//         \/\\\     \/\\\   /\\\\\\\\\\\\\\\\   /\\\      \//\\\
        /\\\/            \//\\\    /\\\   \///////////\\\//   \//\\\      /\\\
        /\\\\\\\\\\\\\\\   \///\\\\\\\/              \/\\\      \///\\\\\\\\\/
        \///////////////      \///////                \///         \/////////
)"

const wchar_t *L_raw_string = XXX;
const char *raw_string = R"(Hello World!)";
const char *title_card_2048 = YYY;

int main()
{
    wprintf(L"%s\n", L_raw_string);
    printf("%s\n", raw_string);
    printf("%s\n", title_card_2048);

    int L = 1;
    int R = 100;
    int LR = L + R;
    printf("%d + %d = %d\n", L, R, LR);

    return 0;
}
