void fish::screen::Screen::move(unsigned long long a0[14], unsigned long long a1, unsigned long long a2)
{
    if (a0[12] != a1)
    {
        a0.with_buffered_output(a1, a2);
        return;
    }
    if (a0[13] == a2)
        return;
    a0.with_buffered_output(a1, a2);
    return;
}
