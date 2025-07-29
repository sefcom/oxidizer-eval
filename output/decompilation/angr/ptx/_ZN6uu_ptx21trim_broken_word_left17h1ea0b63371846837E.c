long long uu_ptx::trim_broken_word_left(void* a0, unsigned long a1, unsigned long a2, unsigned int a3)
{
    unsigned long long v0;  // [bp-0x158]
    unsigned long long v1;  // [bp-0x38]
    unsigned long long v3;  // rax
    unsigned int v4;  // edi
    unsigned int v5;  // edi
    unsigned long v6;  // r13
    unsigned long long v7;  // 4096
    unsigned long long v8;  // r13
    unsigned long long v9;  // 4096
    unsigned long long v10;  // rax
    unsigned long v11;  // rdi
    unsigned long long v13;  // 4096

    v1 = v3;
    uu_ptx::assert_str_integrity(a1, a2, a3);
    if (!(!!a2 && !a2 == a3))
        return a2;
    if (a2 >= a1)
        core::panicking::panic_bounds_check(a2, a1, &g_73b6f0); /* do not return */
    v4 = *((int *)((char *)a0 + 4 * a2));
    if (v4 - 9 >= 5 && v4 != 32 && (v4 < 128 || !(char)::0x59f380::core::unicode::unicode_data::white_space::lookup(v4)))
    {
        v5 = *((int *)(-4 + (char *)a0 + 4 * a2));
        if (v5 - 9 >= 5 && v5 != 32)
        {
            if (v5 >= 128)
            {
                if (!a3 <= a2 && !(char)::0x59f380::core::unicode::unicode_data::white_space::lookup(v5))
                    goto LABEL_5a2012;
            }
            else
            {
                if (a2 < a3)
                {
LABEL_5a2012:
                    v6 = a2 + 1;
                    if (a3 > v6)
                        v7 = a3;
                    else
                        v7 = v6;
                    v8 = v7;
                    v9 = a2;
                    while (true)
                    {
                        v10 = v9;
                        if (v10 >= a1)
                            break;
                        v11 = *((int *)((char *)a0 + 4 * v10));
                        if (v11 <= 32)
                        {
                            v0 = 0x100003e00;
                            if (((char)(*((char *)&v0 + ((v11 & 63) >> 3)) >> ((char)v11 & 63 & 7)) & 1))
                                return v10;
                        }
                        if ((unsigned int)v11 >= 128 && (char)::0x59f380::core::unicode::unicode_data::white_space::lookup(v11))
                            return v10;
                        v9 = v10 + 1;
                        if (v9 >= a3)
                            return v8;
                    }
                    if (a2 <= a1)
                        v13 = a1;
                    else
                        v13 = a2;
                    core::panicking::panic_bounds_check(v13, a1, &g_73b708); /* do not return */
                }
            }
        }
    }
    return a2;
}
