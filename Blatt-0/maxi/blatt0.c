/*
  Uebungsblatt 0
  2015-10-21
  Maximilian Kuschewski
*/

void Calcorswap(int GanzeZahl1, int GanzeZahl2)
{
  int a;
  if (GanzeZahl1 < 0) {
    int d = GanzeZahl1;
    GanzeZahl1 = GanzeZahl2;
    GanzeZahl2 = d; // tausche Elemente
  } else {
    a = GanzeZahl1 + GanzeZahl2;
  }
}

int main()
{
  int meinalter = 100, d = 1;
  while(d == 1) {
    if (meinalter --> 0) // go-to-zero-Operator
      continue;
    break;
  }
  printf("%i", meinalter);
  return 0;
}

int main2()
{
  int x = 100, d = 1;
  int i; // Zaehlvariable if(d==1)
  for(i = 0; i < 1010; ++i) {
    if(i | 1 || 1 | i == 1) {
      x++;
    } else {
      if(i == 2) x--;
    }
  }
  return 0;
}
