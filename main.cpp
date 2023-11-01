#include <iostream>
#include <random>
#include <ctime>
using namespace std;

void task1() {
    //Заполнить массив данными от пользователя, вывести эти данные в рядок
        // creating array
        int a;
        cout << "enter array size: " << endl;
        cin >> a;


        // now we have an array[a]
        int arr[a];

        //input elements in array
        cout << "enter" << a << "elements in arra: " << endl;
        for (int i = 0; i < a; ++i) {
            cout << "element" << i + 1 << ": ";
            cin >> arr[i];
        }
        //output arrray num in a line
        cout << "array Elements: ";
        for (int i = 0; i < a; ++i) {
            cout << arr[i];
            if (i < a - 1) {
                cout << ", "; // zapyatie vezde krome poslednego element
            }

        }

}
void task2(){
    //Подсчитать кол-во элементов в заданном диапазоне в массиве


        // creating array
        int a;
        cout << "Size of array";
        cin >> a;

        int arr[a];

        cout << "enter" << a << "elementews: " << endl;
        for (int i = 0; i < a; ++i) {
            cout << "Eleement" << i + 1 << ": ";
            cin >> arr[i];
        }
        // do the lower and highrt value
        int l, h;
        cout << "lower elem ";
        cin >> l;
        cout << "highest ";
        cin >> h;

//do the peremennaya for count values in range
        int crange=0;
        for (int i = 0; i < a; ++i) {
            //if array[i] higer value or = lower elem -and arr[i] lower h. countrange crange++
            if (arr[i] > l & arr[i] < h) {
                crange++;
            }
        }
        cout << "elements in range: "<< crange << endl;
}
void task3(){
    //Заполнить массив случайными числами в диапазоне -5 25

//creating size of array
        int a = 25;
        int randArr[a];//array
//generrator rand values
        srand(time(0));
        //fill an array with rand valuees
        for (int i = 0; i < a; ++i) {
            //gen a random numbers -5 to 25
            randArr[i] = rand() % 31 - 5 ; // % 31: Оператор % возвращает остаток от деления случайного числа на 31. Таким образом, результат этой операции будет в диапазоне от 0 до 30.
            // Затем к полученному остатку от деления прибавляется -5. Это сдвигает диапазон значений так, что теперь он находится в диапазоне от -5 до 25.
        }
//cout
        for (int i = 0; i < a; ++i) {
            cout << randArr[i] << " ";
        }
}
void task4() {
    // В этом массиве обнулить только четные элементы

        int a = 25;
        int randArr[a];//array
//generrator rand values
        srand(time(0));
        //fill an array with rand valuees
        for (int i = 0; i < a; ++i) {
            //gen a random numbers -5 to 25
            randArr[i] = rand() % 31 -
                         5; // % 31: Оператор % возвращает остаток от деления случайного числа на 31. Таким образом, результат этой операции будет в диапазоне от 0 до 30.
            // Затем к полученному остатку от деления прибавляется -5. Это сдвигает диапазон значений так, что теперь он находится в диапазоне от -5 до 25.
        }
        //cout
        for (int i = 0; i < a; ++i) {
            if (randArr[i] % 2 == 0) {
                randArr[i] = 0;
            }
        }
        for (int i = 0; i < a; ++i) {
            cout << randArr[i] << " ";
        }
}
/*void history(){
//Напиши программу,в начале которой нужно ввести имя,какие нибудь цифры ну и тд на ваше усмотрение.
// И что бы потом появилась какая нибудь история которая включает мои данные. Типо ввожу Глеб,15,зеленый, 6. И выводит типо:
// в 15 веке до нашей эры,великий предводитель зеленых драконов по имени Глеб ну итд.
// моя история: В century веке нашей эры, king стал Королём в age года. И была у него Королева queen. Жили они припиваюче пока дракон dragon не напал на дачный посёлок city и украл queen.
//и король king забухал короче, и ушёл в тильт но апнул 10ку фейсита потому что все мы знаем что без баб заниматься важными вещали легче. Ну не суть. Пока не родился человек по имени hero.
// он рос и играл в доту. Но однажды, он увидел на столбе вывеску о пропаже королевы queen. Он почувствовал как в его животе запархали бабочки, и он решил её спасти.
// Он взял свой огромный swordname и начал путь по тропе к дому дракона под названием- dragoncastle в котором и была заточена королева queen. Король king понял что то то намечается)))
// и он присоединился к hero. они вместе пошли к дракону в dragoncastle. Но они не знали что на их пути будут задания. Они решили объединить их умы и пройти этот сложный путь.


    string  king;
    int age;
    int century;
    string queen;
    string dragon;
    string city;
    string hero;
    string swordname;
    string dragoncastle;


    cout << "king name: ";
    cin >> king;
    cout << "age: ";
    cin >> age;
    cout << "century: ";
    cin >> century;
    cout << "queen name: ";
    cin >> queen;
    cout << "dragon name: ";
    cin >> dragon;
    cout << "city name: ";
    cin >> city;
    cout << "hero";
    cin >> hero;
    cout << "swordname";
    cin >> swordname;
    cout << "dragoncastle";
    cin >> dragoncastle;

    cout << "In the " << century << "th century AD, " << king << " became King at the age of " << age << ". He had a Queen named " << queen << ". They lived merrily until a dragon named " << dragon << " attacked the countryside village of " << city << " and kidnapped " << queen << ". " << endl;
    cout << "King " << king << " decided to drown his sorrows and went on a drinking spree. But he eventually pulled himself together and leveled up to a Faceit 10 because, as we all know, dealing with important matters is easier with wealth. But I digress. Before a person named " << hero << " was born." << endl;
    cout << "He grew up and played Dota. However, one day, he saw a poster about the Queen's disappearance on a lamppost. He felt butterflies in his stomach and decided to rescue her." << endl;
    cout << "He took his enormous " << swordname << " and embarked on a journey along the path to the dragon's lair known as " << dragoncastle << ", where the Queen " << queen << " was imprisoned. King " << king << " realized something significant was happening." << endl;
    cout << "He joined forces with " << hero << ", and together, they headed to " << dragoncastle << " to face the dragon. Little did they know, challenges awaited them on their journey. They decided to combine their wits and overcome this arduous path." << endl;
}
 */
void GPTtask2(){
    //Поиск минимума и максимума:
    //Создайте массив чисел и напишите программу, которая находит минимальное и максимальное значение в массиве.
    int size;
    cout << "Enter size of array" << endl;
    cin >> size;

    int Arr[size];
    for (int i = 0; i < size; ++i) {
        cout << "element" << i + 1 << ": ";
        cin >> Arr[i];
    }
    int minValue = Arr[0];
    int maxValue = Arr[0];

    for (int i = 0; i < size; ++i) {
        if (Arr[i] < minValue) {
            minValue = Arr[i];
        }
        if (Arr[i] > maxValue) {
            maxValue = Arr[i];
        }
    }
    cout << "MN: " << minValue << endl;
    cout << "MAX: " << maxValue << endl;



}

int main(){
    cout << "task 1" << endl;
    task1();
    cout << endl;
    cout << "task 2" << endl;
    task2();
    cout << endl;
    cout << "task 3" << endl;
    task3();
    cout << endl;
    cout << "task 4" << endl;
    task4();
    cout << endl;
    /*cout << "History" << endl;
    history();
     */
    cout << "GPTtask2" << endl;
    GPTtask2();
}