long long fish::reader::is_backslashed(unsigned long a0, unsigned long a1, unsigned long long a2)
{
    unsigned long v0;  // [bp-0x8]
    void* v2;  // rax
    unsigned long long v3;  // 4096
    void* v4;  // rax
    unsigned long long v5;  // rcx
    unsigned long v6;  // rax
    unsigned int v8;  // eax

    v2 = 0;
    if (a2 - 1 >= a1)
        return 0;
    v3 = a2;
    while (true)
    {
        v4 = v2;
        v5 = v3;
        if (*((int *)(a0 + v5 * 4 - 4)) != 92)
            break;
        if (v5 != 1)
        {
            if (*((int *)(a0 + v5 * 4 - 8)) != 92)
            {
                v8 = (unsigned int)v4 + 1;
                break;
            }
            v6 = (unsigned int)v4 + 2;
            if (((unsigned int)~(v4 & 4294967295 ^ 2) & ((unsigned int)v4 ^ (unsigned int)v4 + 2)) < 0)
            {
                v0 = v6;
                core::panicking::panic_const::panic_const_add_overflow(&g_14e0eb8); /* do not return */
            }
            v3 = v5 - 2;
            v2 = v6;
            if (!v5 - 2)
                goto LABEL_1407b7f;
        }
        else
        {
LABEL_1407b7f:
            v8 = a2;
            break;
        }
    }
    return v8 & 2147483649 & 0xffffff00 | (v8 & 2147483649) == 1;
}
