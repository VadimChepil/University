#include <stdio.h>

int main(void)
{
    char list[100];
    int reckon = 0;
    printf("%c%c%c%c%c%c%c%c %c%c%c%c%c%c%c:",-115,-96,-81,-88,-24,105,-30,-22, -32,-91,-25,-91,-83,-83,-17);
    fgets(list, sizeof(list), stdin);
        for (int i = 0; i < 100; i++) {
    if (list[i] == -118 && list[i+1] == -32 && list[i+2] == -82 && list[i+3] == -81 && list[i+4] == -88 && list[i+5] == -94 && list[i+6] == -83
        && list[i+7] == -88 && list[i+8] == -26 && list[i+9] == -20 && list[i+10] == -86 && list[i+11] == -88 && list[i+12] == -87) {
        reckon = reckon + 1;
        }
    if (list[i] == '|') {
        break;
        }
    }
    if (reckon > 0){
        printf("%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c %c", -111,-85,-82,-94,-82, -118,-32,-82,-81,-88,-94,-83,-88,-26,-20,-86,-88,-87, -13);
    }
    else {
        printf("%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c %c%c%c%c%c", -111,-85,-82,-94,-82, -118,-32,-82,-81,-88,-94,-83,-88,-26,-20,-86,-88,-87, -83,-91,-84,-96,-13);
    }
    return 0;
}

