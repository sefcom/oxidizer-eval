long long uu_env::apply_ignore_signal(unsigned long a0)
{
    unsigned long long v0;  // [bp-0x20]
    unsigned long long v1;  // [bp-0x18]
    unsigned long long v3;  // rdx
    unsigned int *v4;  // rax
    unsigned long long v5;  // rsi
    unsigned long long v6;  // rcx
    unsigned long long v7;  // rax

    v0 = a0 + 96.into_iter();
    v1 = v3;
    while (true)
    {
        v4 = v0.next();
        if (!v4)
        {
            return 0;
        }
        else if (!(int)*(v4).try_from())
        {
            v7 = uu_env::ignore_signal((unsigned int)v3, v5, v3, v6);
            if (v7)
                return v7;
        }
        else
        {
            return v3 * 0x100000000 | 2.from();
        }
    }
}
