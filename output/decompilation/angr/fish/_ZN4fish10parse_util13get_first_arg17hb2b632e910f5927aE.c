long long fish::parse_util::get_first_arg(char *a0, unsigned long a1)
{
    unsigned long long v1;  // rsi
    unsigned long long v2;  // rsi

    if (!a1)
        return 0;
    v1 = a1 * 16;
    while (true)
    {
        v2 = v1;
        if (!(*(a0) & 1))
            return a0.argument();
        a0 += 16;
        v1 = v2 - 16;
        if (v2 == 16)
            return 0;
    }
}
