long long fish_printf::fmt_fp::log10u(unsigned int a0)
{
    unsigned long long v1;  // rax

    v1 = 9;
    if (a0 <= 999999999)
    {
        v1 = 0;
        if (a0 >= 10)
        {
            v1 = 1;
            if (a0 > 99)
            {
                v1 = 2;
                if (a0 >= 1000)
                {
                    v1 = 3;
                    if (a0 >= 10000)
                    {
                        v1 = 4;
                        if (a0 >= 100000)
                        {
                            v1 = 5;
                            if (a0 >= 1000000)
                            {
                                v1 = 6;
                                if (a0 >= 10000000)
                                    v1 = 8 - (a0 < 0x5f5e100);
                            }
                        }
                    }
                }
            }
        }
    }
    return v1;
}
