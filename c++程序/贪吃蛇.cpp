#include<bits/stdc++.h> 
using namespace std;
struct pos
{
    int x;
    int y;
} food, head; /*ʳ����ͷ����*/

const int mapX = 35;/*��ͼ*/
const int mapY = 35;/*��ͼ*/

int snake[mapX * mapY][2];/*������*/
int length;/*�����ӳ���*/

int direction;/*����*/

void info();/*��ʾ��Ϣ*/
void init();/*��ʼ��*/
void getInput();/*��ȡ��������*/
void changeSnake();
bool alive();/*û��ײǽ&&ҧ���Լ�*/
void makeFood();/*����ʳ��*/
void gotoXY(short, short);/*�ƶ���굽ָ��λ��*/
void drawMap();/*����ͼ*/
void drawFood();/*��ʳ��*/
void drawSnake();/*����*/
void clearSnake();/*�����*/
void upgrade();/*�Ե�ʳ�����*/
bool getFood();
void run();
void gameOver();

int main()
{
    run();
}

void run()
{
    cout << "���������ʼ��Ϸ..." << endl;
    getch();
    srand(int(time(NULL)));
    info();/*��ʾ��Ϣ*/
    init();/*��ʼ��*/

    while (true)   /*һ���Ĳ���*/
    {
        gotoXY(37, 3);
        cout << length;
        for (int i = 0; i < length; i++)
        {
            gotoXY(37, 2 + i);
            cout << snake[i][0] << " " << snake[i][1];
        }

        getInput();/*��ȡ��������*/
        clearSnake();/*�������*/
        changeSnake();/*�ı�����*/
        drawSnake();/*������*/
        if (!alive())   /*û��ײǽ&&ҧ���Լ�*/
        {
            gameOver();/*������Ϸ*/
            break;
        }
        if (getFood())   /*��ʳ��ĵط�*/
        {
            upgrade();/*�Ե�ʳ�����*/
            makeFood();/*����ʳ��*/
            drawFood();/*�����µ�ʳ��*/
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
    cout << "|wasd�������������ƶ�|";
    gotoXY(37,11);
    cout << "|�ո����ͣ          |";
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

void getInput()   /*��ȡ����,����һ������1234�ֱ������������*/
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
                cout << "��Ϸ��ͣ���������������Ϸ...";
                getch();
            }
            break;
        default:
            break;
        }
    }
}

void changeSnake()   /*���ݷ����������*/
{
    /*������ͷ*/
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
    /*��������*/
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

void makeFood()   /*����ʳ������*/
{
    food.x = rand() % mapX + 1;
    food.y = rand() % mapY + 1;
    /*ʳ��λ�ò��Ϸ��������ʳ��food��snake�غ�*/
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

void drawMap()/*����ͼ*/
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

void drawFood()/*��ʳ��*/
{
    gotoXY(food.x, food.y);
    cout << "&";
}

void drawSnake()/*����*/
{
    for (int i = 0; i < length; i++)
    {
        gotoXY(snake[i][0], snake[i][1]);
        cout << "#";
    }
}

void clearSnake()/*������һλ����*/
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
