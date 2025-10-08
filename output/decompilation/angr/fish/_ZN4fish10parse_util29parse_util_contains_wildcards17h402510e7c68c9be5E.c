long long fish::parse_util::parse_util_contains_wildcards(unsigned int *a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x28]
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax
    unsigned int v4;  // ecx
    unsigned long long v5;  // rax
    void* v6;  // r12
    unsigned int v7;  // cc_dep2
    void* v8;  // r15
    void* v9;  // r12

    v0 = v2;
    v3 = fish::future_feature_flags::test(1);
    if (!a1)
        return 0;
    if ((char)v3)
    {
        v4 = *(a0);
        v5 = v3 & 0xffffffffffffff00 | 1;
        if (*(a0) == 42)
            return v3 & 0xffffffffffffff00 | 1;
        v6 = 0;
        while (true)
        {
            v7 = 92;
            if (v4 == 92)
            {
                v8 = v6 + 1;
                v5 = a0.char_at(a1, v8);
                v4 = v5;
                v7 = 42;
                v6 = v8;
                if ((unsigned int)v5 != 42)
                {
                    v5 = a0.char_at(a1, v8);
                    v4 = v5;
                    v7 = 92;
                    v6 = v8;
                    if ((unsigned int)v5 != 92)
                        v6 = v6;
                }
            }
            v6 += 1;
            if ((char)_ccall(4, 24, v6 + 1, 0, (unsigned long long)(char)(v4 < v7)))
                break;
            v5 = v5 & 0xffffffffffffff00 | v6 < a1;
            if (v6 >= a1)
                return v5 & 0xffffffffffffff00 | v6 < a1;
            v4 = *((int *)((char *)a0 + 0x4 * v6));
            if (*((int *)((char *)a0 + 0x4 * v6)) == 42)
                return v5 & 0xffffffffffffff00 | v6 < a1;
        }
        core::panicking::panic_const::panic_const_add_overflow(&g_14dda20); /* do not return */
    }
    v9 = 0;
}
