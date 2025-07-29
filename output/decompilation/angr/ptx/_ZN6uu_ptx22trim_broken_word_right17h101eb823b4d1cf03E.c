long long uu_ptx::trim_broken_word_right(void* a0, unsigned long a1, unsigned int a2, unsigned long a3)
{
    unsigned long long v0;  // [bp-0x158]
    unsigned long long v1;  // [bp-0x38]
    unsigned long long v3;  // rax
    unsigned long v4;  // r13
    unsigned int v5;  // edi
    unsigned int v6;  // edi
    unsigned long long v7;  // 4096
    unsigned long long v8;  // r13
    unsigned long long v9;  // rbx
    unsigned long v10;  // rbp
    unsigned long v11;  // rdi

    v1 = v3;
    uu_ptx::assert_str_integrity(a1, a2, a3);
    if (!(!a3 == a1 && !a2 == a3))
        return a3;
    v4 = a3 - 1;
    if (v4 >= a1)
        core::panicking::panic_bounds_check(v4, a1, &g_73b720); /* do not return */
    v5 = *((int *)(-4 + (char *)a0 + 4 * a3));
    if (v5 - 9 < 5)
    {
        return a3;
    }
    else if (v5 == 32)
    {
        return a3;
    }
    else
    {
        if (v5 >= 128 && (char)::0x59f380::core::unicode::unicode_data::white_space::lookup(v5))
            return a3;
        if (a3 >= a1)
            core::panicking::panic_bounds_check(a3, a1, &g_73b738); /* do not return */
        v6 = *((int *)((char *)a0 + 4 * a3));
        if (v6 - 9 < 5)
        {
            return a3;
        }
        else if (v6 == 32)
        {
            return a3;
        }
        else
        {
            if (v6 >= 128)
            {
                if (a3 <= a2 || (char)::0x59f380::core::unicode::unicode_data::white_space::lookup(v6))
                    return a3;
            }
            else
            {
                if (a3 <= a2)
                    return a3;
            }
            if (a2 < v4)
                v7 = a2;
            else
                v7 = v4;
            v8 = v7;
            while (true)
            {
                v9 = a3;
                v10 = v9 - 1;
                if (v10 >= a1)
                    core::panicking::panic_bounds_check(v9 - 1, a1, &g_73b750); /* do not return */
                v11 = *((int *)((char *)a0 + 4 * v10));
                if (v11 <= 32)
                {
                    v0 = 0x100003e00;
                    if (((char)(*((char *)&v0 + ((v11 & 63) >> 3)) >> ((char)v11 & 63 & 7)) & 1))
                        return v9;
                }
                if ((unsigned int)v11 >= 128 && (char)::0x59f380::core::unicode::unicode_data::white_space::lookup(v11))
                    return v9;
                a3 = v10;
                if (a3 <= a2)
                    return v8;
            }
        }
    }
}
