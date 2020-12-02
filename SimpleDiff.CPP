#include <iostream.h>
#include <fstream.h>
#include <math.h>
#include <string.h>
#include <stdio.h>
#include <conio.h>
class pol
{
  int coef;
  char str[20];
  int power;
  static int m;

public:
  void input()
  {
    cin >> coef;
    gets(str);
    cin >> power;
  }
  void change(int v)
  {
    m = v;
  }
  float diff();
  float getvalue();
  void show();
};
float pol::diff()
{
  if (!strcmp(str, "x"))
    return (coef * power * pow(m, power - 1));
  else if (!strcmp(str, "sinx"))
    return (coef * power * cos(m) * (pow(sin(m), (power - 1))));
  else if (!strcmp(str, "cosx"))
    return (coef * power * (-1) * sin(m) * (pow(cos(m), (power - 1))));
  else if (!strcmp(str, "tanx"))
    return (coef * power * (pow((1 / cos(m)), 2)) * (pow(tan(m), (power - 1))));
  else if (!strcmp(str, "cotx"))
    return (coef * power * (-1) * (pow((1 / sin(m)), 2)) * (pow(1 / tan(m), (power - 1))));
  else if (!strcmp(str, "secx"))
    return (coef * power * (1 / cos(m)) * tan(m) * (pow((1 / cos(m)), (power - 1))));
  else if (!strcmp(str, "cosecx"))
    return (coef * power * (1 / sin(m)) * (1 / tan(m)) * (pow((1 / sin(m)), (power - 1))));
  else if (!strcmp(str, "arcsinx"))
    return (coef * (1 / (sqrt(1 - m * m))));
  else if (!strcmp(str, "arccosx"))
    return (coef * (-1 / (sqrt(1 - m * m))));
  else if (!strcmp(str, "arctanx"))
    return (coef * (1 / ((1 + m * m))));
  else if (!strcmp(str, "arccotx"))
    return (coef * (-1 / ((1 + m * m))));
  else if (!strcmp(str, "arcsecx"))
    return (coef * (1 / (m * sqrt(1 - m * m))));
  else if (!strcmp(str, "arcsecx"))
    return (coef * (-1 / (m * sqrt(1 - m * m))));
  else
    return 0;
}
float pol::getvalue()
{
  if (!strcmp("sinx", str))
  {
    return sin(m);
  }
  else if (!strcmp("cosx", str))
  {
    return cos(m);
  }
  else if (!strcmp("tanx", str))
  {
    return tan(m);
  }
  else if (!strcmp("cotx", str))
  {
    return 1 / tan(m);
  }
  else if (!strcmp("secx", str))
  {
    return 1 / cos(m);
  }
  else if (!strcmp("cosecx", str))
  {
    return 1 / sin(m);
  }
  else if (!strcmp("arcsinx", str))
  {
    return asin(m);
  }
  else if (!strcmp("arccosx", str))
  {
    return acos(m);
  }
  else if (!strcmp("arctanx", str))
  {
    return atan(m);
  }
  else if (!strcmp("arccotx", str))
  {
    return 3.14 / 2 - atan(m);
  }
  else if (!strcmp("arcsecx", str))
  {
    return acos(1 / m);
  }
  else if (!strcmp("arccosecx", str))
  {
    return asin(1 / m);
  }
  else
    return 0;
}
void pol::show()
{
  cout << diff();
}

class trig
{
public:
  char fname[100];
  static int m;
  void input();
  float diff();
  void changem(int v)
  {
    m = v;
  }
  float getvalue();
  void show();
};
void trig::input()
{
  gets(fname);
}
float trig::diff()
{
  if (!strcmp("sinx", fname))
  {
    return cos(m);
  }
  else if (!strcmp("cosx", fname))
  {
    return (-1) * sin(m);
  }
  else if (!strcmp("tanx", fname))
  {
    return 1 / (cos(m) * cos(m));
  }
  else if (!strcmp("cot", fname))
  {
    return (-1) / (sin(m) * sin(m));
  }
  else if (!strcmp("secx", fname))
  {
    return tan(m) / cos(m);
  }
  else if (!strcmp("cosecx", fname))
  {
    return (-1) / (tan(m) * sin(m));
  }
  else if (!strcmp("arcsinx", fname))
  {
    return 1 / (sqrt(1 - m * m));
  }
  else if (!strcmp("arccosx", fname))
  {
    return -1 / (sqrt(1 - m * m));
  }
  else if (!strcmp("arctanx", fname))
  {
    return 1 / (1 + m * m);
  }
  else if (!strcmp("arccotx", fname))
  {
    return -1 / (1 + m * m);
  }
  else if (!strcmp("arcsecx", fname))
  {
    return 1 / (m * sqrt(1 - m * m));
  }
  else if (!strcmp("arccosecx", fname))
  {
    return -1 / (m * sqrt(1 - m * m));
  }
  return 0;
}

void trig::show()
{
  cout << diff();
}
float trig::getvalue()
{
  if (!strcmp("sinx", fname))
  {
    return sin(m) * 1.0;
  }
  else if (!strcmp("cosx", fname))
  {
    return cos(m) * 1.0;
  }
  else if (!strcmp("tanx", fname))
  {
    return tan(m) * 1.0;
  }
  else if (!strcmp("cotx", fname))
  {
    return 1.0 / tan(m);
  }
  else if (!strcmp("secx", fname))
  {
    return 1.0 / cos(m);
  }
  else if (!strcmp("cosecx", fname))
  {
    return 1.0 / sin(m);
  }
  else if (!strcmp("arcsinx", fname))
  {
    return asin(m) * 1.0;
  }
  else if (!strcmp("arccosx", fname))
  {
    return acos(m) * 1.0;
  }
  else if (!strcmp("arctanx", fname))
  {
    return atan(m) * 1.0;
  }
  else if (!strcmp("arccotx", fname))
  {
    return 3.14 / 2 - atan(m);
  }
  else if (!strcmp("arcsecx", fname))
  {
    return acos(1 / m) * 1.0;
  }
  else if (!strcmp("arccosecx", fname))
  {
    return asin(1 / m) * 1.0;
  }
  else
    return 0;
}
int pol::m = 0;
int trig::m = 0;

void main()
{
  clrscr();
  int n, num;
  cout << "1. Polynomial" << endl;
  cout << "2. Trigonometric" << endl;
  cout << "3. Composite" << endl;
  cout << "Enter your choice: ";
  cin >> n;
  if (n == 1)
  {
    pol t;
    cout << endl
         << "1.Sum/ Difference" << endl;
    cout << "2. Product" << endl;
    cout << "3. Division" << endl;
    cout << "Enter your choice: ";
    cin >> num;
    if (num == 1)
    {
      ifstream fin;
      ofstream fout;

      //add and sub
      ifstream fin2;
      ofstream fout2;
      fout.open("terms", ios::out | ios::binary);
      fout2.open("operators");
      char ch1 = 'y';
      char op;
      while (ch1 != 'n')
      {
        cout << "Enter the operator first (ex: 2x^2 + 2 => + 2 x 2 + 2 x 0) ";
        cin >> op;
        fout2 << op;
        t.input();
        fout.write((char *)&t, sizeof(t));
        cout << "Enter y to continue ";
        cin >> ch1;
      }
      fout.close();
      fout2.close();
      int sum = 0;
      fin.open("terms", ios::in | ios::binary);
      fin2.open("operators");
      while (!fin.eof())
      {
        fin.read((char *)&t, sizeof(t));
        if (fin.eof())
          break;
        fin2.get(op);
        if (op == '+')
          sum += t.diff();
        else if (op == '-')
          sum -= t.diff();
        else
          cout << "invalid";
      }
      cout << sum;
    }

    //product
    else if (num == 2)
    {
      ifstream fin2;
      ofstream fout3;
      fstream fio;
      int pos;
      fio.open("Factors", ios::out | ios::in | ios::binary);
      fout3.open("operators");
      char ch2 = 'y';
      int j;
      char op;
      while (ch2 != 'n')
      {
        cout << "Enter the term first (ex: 2x^2 * 2 => 2 x 2 * 2 x 0) ";
        t.input();
        fio.write((char *)&t, sizeof(t));
        cin >> op;
        fout3 << op;
        cout << "Enter y to continue ";
        cin >> ch2;
      }
      fout3.close();
      int count;
      float sum = 0;
      while (!fio.eof())
      {
        pos = fio.tellg();
        count = 0;
        do
        {
          fio.read((char *)&t, sizeof(t));
          if (fio.eof())
            break;
          fin2.get(op);
          count++;
        } while (op == '*');
        if (op == '+' || op == '-')
        {
          pol *tp = new pol[count];

          fio.seekg(pos);
          for (int i = 0; i < count; ++i)
          {
            fio.read((char *)&t, sizeof(t));
            tp[i] = t;
          }
          for (i = 0; i < count; ++i)
          {
            float pro = 1.0;
            for (int j = 0; j < count; ++j)
            {
              if (i == j)
                pro = pro * tp[j].diff() * 1.0;
              else
                pro = pro * 1.0 * tp[j].getvalue();
            }
            if (op == '+')
              sum += pro;
            else
              sum -= pro;
          }
          delete[] tp;
        }
      }
      cout << sum;
      fin2.close();
      fio.close();
    }

    //division
    else if (num == 3)
    {
      pol t[2];
      cout << "Please enter the numerator first ";
      t[0].input();
      t[1].input();
      cout << (t[1].getvalue() * t[0].diff() - t[0].getvalue() * t[1].diff()) / (t[1].getvalue() * t[1].getvalue());
    }
  }
  if (n == 2)
  {
    trig t;
    cout << endl
         << "1.Sum/ Difference" << endl;
    cout << "2. Product" << endl;
    cout << "3. Division" << endl;
    cout << "Enter your choice: ";
    cin >> num;
    if (num == 1)
    {
      ifstream fin;
      ofstream fout;

      //add and sub
      ifstream fin2, fin4;
      ofstream fout2;
      fout.open("terms", ios::out | ios::binary);
      fout2.open("operators");
      char ch4 = 'y';
      char op;
      while (ch4 != 'n')
      {
        cout << "Enter the operator first (ex: 2sin^2x + 2 => + 2 sinx 2 + 2 sinx 0) ";
        cin >> op;
        fout2 << op;
        t.input();
        fout.write((char *)&t, sizeof(t));
        cout << "Enter y to continue";
        cin >> ch4;
      }
      fout.close();
      fout2.close();
      int sum = 0;
      fin4.open("terms", ios::in | ios::binary);
      fin2.open("operators");
      while (!fin4.eof())
      {
        fin4.read((char *)&t, sizeof(t));
        if (fin4.eof())
          break;
        fin2.get(op);
        if (op == '+')
          sum += t.diff();
        else if (op == '-')
          sum -= t.diff();
        else
          cout << "invalid";
      }
      cout << sum;
      fin4.close();
      fin2.close();
    }

    //product
    else if (num == 2)
    {
      ifstream fin2;
      ofstream fout2;
      fstream fio;
      int pos;
      fio.open("Factors", ios::out | ios::in | ios::binary);
      fout2.open("operators");
      char ch5 = 'y';
      int j;
      char op;
      while (ch5 != 'n')
      {
        cout << "Enter the term first (ex: 2sin^2x + 2 => 2 sinx 2 + 2 sinx 0) ";
        t.input();
        fio.write((char *)&t, sizeof(t));
        cin >> op;
        fout2 << op;
        cout << "Enter y to continue";
        cin >> ch5;
      }
      fout2.close();
      int count;
      float sum = 0;
      while (!fio.eof())
      {
        pos = fio.tellg();
        count = 0;
        do
        {
          fio.read((char *)&t, sizeof(t));
          if (fio.eof())
            break;
          fin2.get(op);
          count++;
        } while (op == '*');
        if (op == '+' || op == '-')
        {
          trig *tp = new trig[count];

          fio.seekg(pos);
          for (int i = 0; i < count; ++i)
          {
            fio.read((char *)&t, sizeof(t));
            tp[i] = t;
          }
          for (i = 0; i < count; ++i)
          {
            float pro = 1.0;
            for (int j = 0; j < count; ++j)
            {
              if (i == j)
                pro = pro * tp[j].diff() * 1.0;
              else
                pro = pro * 1.0 * tp[j].getvalue();
            }
            if (op == '+')
              sum += pro;
            else
              sum -= pro;
          }
          delete[] tp;
        }
      }
      cout << sum;
      fio.close();
      fout2.close();
    }

    //division
    else if (num == 3)
    {
      trig t[2];
      cout << "Please enter the numerator first";
      t[0].input();
      t[1].input();
      cout << (t[1].getvalue() * t[0].diff() - t[0].getvalue() * t[1].diff()) / (t[1].getvalue() * t[1].getvalue());
    }

    //composite functions
    else if (n == 3)
    {
      trig t;
      pol p;
      t.input();
      p.input();
      p.change(p.getvalue());
      cout << t.diff() * p.diff();
    }
  }
  getch();
}