long long bat::style::StyleComponents::new(unsigned long long a0, unsigned long long a1, unsigned long a2)
{
    a0.collect(a1, a2 + a1);
    return a0;
}
