#include<bits/stdc++.h> 
using namespace std;
struct pos
{
    int x;
    int y;
} food, head; /*食物蛇头坐标*/

const int mapX = 35;/*地图*/
const int mapY = 35;/*地图*/

int snake[mapX * mapY][2];/*蛇身子*/
int length;/*蛇身子长度*/

int direction;/*方向*/

void info();/*提示信息*/
void init();/*初始化*/
void getInput();/*获取键盘输入*/
void changeSnake();
bool alive();/*没有撞墙&&咬到自己*/
void makeFood();/*制造食物*/
void gotoXY(short, short);/*移动光标到指定位置*/
void drawMap();/*画地图*/
void drawFood();/*画食物*/
void drawSnake();/*画蛇*/
void clearSnake();/*清除蛇*/
void upgrade();/*吃到食物，升级*/
bool getFood();
void run();
void gameOver();

int main()
{
    run();
}

void run()
{
    cout << "按任意键开始游戏..." << endl;
    getch();
    srand(int(time(NULL)));
    info();/*提示信息*/
    init();/*初始化*/

    while (true)   /*一步的操作*/
    {
        gotoXY(37, 3);
        cout << length;
        for (int i = 0; i < length; i++)
        {
            gotoXY(37, 2 + i);
            cout << snake[i][0] << " " << snake[i][1];
        }

        getInput();/*获取键盘输入*/
        clearSnake();/*清除出蛇*/
        changeSnake();/*改变蛇身*/
        drawSnake();/*画出蛇*/
        if (!alive())   /*没有撞墙&&咬到自己*/
        {
            gameOver();/*结束游戏*/
            break;
        }
        if (getFood())   /*到食物的地方*/
        {
            upgrade();/*吃到食物，升级*/
            makeFood();/*制造食物*/
            drawFood();/*画出新的食物*/
        }
        //getch();
        Sleep(100);
    }
}

void info()
{
    gotoXY(37,9);
    cout << "|--------------------|";
    gotoXY(37,10);
    cout << "|wasd控制上下左右移动|";
    gotoXY(37,11);
    cout << "|空格键暂停          |";
    gotoXY(37,12);
    cout << "|--------------------|";
}

void init()
{
    length = 1;
    head.x = snake[0][0] = 7;
    head.y = snake[0][1] = 7;
    makeFood();
    direction = 3;
    drawMap();
    drawFood();
    drawSnake();
}

void getInput()   /*获取输入,返回一个方向1234分别代表上左下右*/
{
    char ch;
    if (_kbhit())
    {
        ch = getch();
        if ((ch == 'w' && direction == 3) ||
                (ch == 'a' && direction == 4) ||
                (ch == 's' && direction == 1) ||
                (ch == 'd' && direction == 2))
        {
            return ;
        }
        switch (ch)
        {
        case 'w':
            direction = 1;
            break;
        case 'a':
            direction = 2;
            break;
        case 's':
            direction = 3;
            break;
        case 'd':
            direction = 4;
            break;
        case ' ':
            {
                gotoXY(37,13);
                cout << "游戏暂停，按任意键继续游戏...";
                getch();
            }
            break;
        default:
            break;
        }
    }
}

void changeSnake()   /*根据方向更新蛇身*/
{
    /*更新蛇头*/
    switch (direction)
    {
    case 1:
        head.y--;
        break;
    case 2:
        head.x--;
        break;
    case 3:
        head.y++;
        break;
    case 4:
        head.x++;
        break;
    default:
        break;
    }
    /*更新蛇身*/
    for (int i = length; i > 0; i--)
    {
        snake[i][0] = snake[i - 1][0];
        snake[i][1] = snake[i - 1][1];
    }
    snake[0][0] = head.x;
    snake[0][1] = head.y;
}

bool getFood()
{
    return (head.x == food.x && head.y == food.y) ? true : false;
}

bool alive()
{
    if (head.x == 0 || head.x == (mapX + 1) || head.y == 0 || head.y == (mapY + 1))
    {
        return false;
    }
    for (int i = 1; i < length; i++)
    {
        if (head.x == snake[i][0] && head.y == snake[i][1])
        {
            return false;
        }
    }
    return true;
}

void makeFood()   /*产生食物坐标*/
{
    food.x = rand() % mapX + 1;
    food.y = rand() % mapY + 1;
    /*食物位置不合法的情况：食物food与snake重合*/
    for (int i = 0; i < length; i++)
    {
        if (food.x == snake[i][0] && food.y == snake[i][1])
        {
            makeFood();
            break;
        }
    }
}

void upgrade()
{
    length++;
    snake[length - 1][0] = food.x;
    snake[length - 1][1] = food.y;
}

void gotoXY(short x, short y)
{
    COORD pos = {x, y};
    HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(hOut, pos);
}

void drawMap()/*画地图*/
{
    gotoXY(0, 0);
    for (int i = 0; i < 37; i++) cout << "-";
    gotoXY(0, 36);
    for (int i = 0; i < 37; i++) cout << "-";
    for (int i = 0; i < 37; i++)
    {
        gotoXY(0, i);
        cout << "|";
        gotoXY(36, i);
        cout << "|";
    }
}

void drawFood()/*画食物*/
{
    gotoXY(food.x, food.y);
    cout << "&";
}

void drawSnake()/*画蛇*/
{
    for (int i = 0; i < length; i++)
    {
        gotoXY(snake[i][0], snake[i][1]);
        cout << "#";
    }
}

void clearSnake()/*清除最后一位即可*/
{
    gotoXY(snake[length - 1][0], snake[length - 1][1]);
    cout << " ";
}

void gameOver()
{
    system("cls");
    cout << "Game Over";
}
---
