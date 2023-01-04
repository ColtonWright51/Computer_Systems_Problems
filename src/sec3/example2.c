int accum = 0;

int sum(int x, int y)
{
    int t = x + y;
    accum += t;
    return t;
}

int main()
{
    sum(1, 3);
    return 0;
}