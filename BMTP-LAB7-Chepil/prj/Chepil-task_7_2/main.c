#include <stdio.h>

int main()
{
    int array[20];
    int min;
    int sum = 0;
    for(int i=0;i<20;i++){//Заповнення масиву елементами
        printf("%c%c%c%c%c%c%c %d %c%c%c%c%c%c%c %c%c%c%c%c%c: ",-126,-94,-91,-92,105,-30,-20, i+1, -91,-85,-91,-84,-91,-83,-30, -84,-96,-31,-88,-94,-29);
        scanf("%d",&array[i]);
    }
    printf("\n%c%c%c %c%c%c%c%c: ",-116,105,-87, -84,-96,-31,-88,-94);//Виведення масиву
    for(int i=0;i<20;i++){
         printf("%d ",array[i]);
    }
    for(int i=0;i<20;i++){//Знаходження суми всіх чисел масиву
        sum += array[i];
    }
    min = array[0];
    for(int index = 1; index < 20; index++) {//Знаходження мінімального значення в масиві
        if(array[index] < min) {
            min = array[index];
        }
    }
    for(int i = 0; i < 20; i++) {//Заміна мінімального значення суммою
        if(array[i] == min) {
            array[i] = sum;
        }
    }
    printf("\n%c%c%c%c%c%c%c%c %c%c%c%c%c: ",-121,-84,105,-83,-91,-83,-88,-87, -84,-96,-31,-88,-94);//Виведення зміненого масиву
    for( int i = 0; i < 20; i++) {
        printf("%d ", array[i]);
    }
    return 0;
}

