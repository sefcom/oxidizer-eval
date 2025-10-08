long long uu_stat::group_num(unsigned long a0, unsigned long long a1, unsigned long long a2)
{
    unsigned int v0;  // [bp-0x50], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x48]
    void* v2;  // [bp-0x40], Other Possible Types: unsigned long long
    void* v3;  // [bp-0x38]
    unsigned long long v5;  // rdx
    char v6;  // al
    unsigned long v7;  // r13
    unsigned long long v8;  // r13
    unsigned long long v9;  // rax
    unsigned long long v10;  // r8
    unsigned long long v11;  // 4096
    unsigned long long v12;  // rax
    unsigned long long v13;  // rax

    v0 = 0;
    v6 = core::slice::<impl [T]>::starts_with(a1, a2, ::0x46d190::core::char::methods::encode_utf8_raw(45, &v0), v5);
    if (!v6)
    {
        v0 = a1;
        v1 = a1 + a2;
        v2 = 1;
        if (!v0.try_fold().eq())
            core::panicking::panic("assertion failed: is_negative || s.chars().take(1).all(|c| c.is_ascii_digit())assertion failed: s.chars().skip(1).all(|c| c.is_ascii_digit())?\'\"", 78, &g_519b28); /* do not return */
    }
    v0 = a1;
    v1 = a1 + a2;
    v2 = 1;
    if (!v0.try_fold().eq())
    {
        core::panicking::panic("assertion failed: s.chars().skip(1).all(|c| c.is_ascii_digit())?\'\"", 63, &g_519b40); /* do not return */
    }
    else if (a2 < 4)
    {
        *((unsigned long long *)&v3[8]) = a1;
        *((unsigned long long *)&v3[16]) = a2;
        *((unsigned long long *)v3) = 0x8000000000000000;
        return 0x8000000000000000;
    }
    else
    {
        v7 = a2 - 1;
        v0 = v7 / 3.with_capacity_in(1, 1, &g_5195e8);
        v1 = v5;
        v2 = 0;
        if (v6)
        {
            v0.push(45);
            v8 = 1;
            v9 = 1.get(a1, a2);
            if (v9)
            {
                v7 = v5 - 1;
                a1 = v9;
                a2 = v5;
                goto LABEL_473940;
            }
            else
            {
                v10 = &g_519b58;
                v11 = a2;
            }
        }
        else
        {
LABEL_473940:
            v11 = -(v7 / 3 * 3) + v7 + 1;
            v12 = v11.get(a1, a2);
            if (v12)
            {
                v0.spec_extend(v12, v5 + v12);
                v11 = -(v7 / 3 * 3) + v7 + 4;
                while (true)
                {
                    if (1 - a2 + v11 == 4)
                    {
                        *((unsigned long long *)&v3[16]) = 0;
                        *((int128_t *)v3) = *((int128_t *)&v0);
                        return 0;
                    }
                    v0.push(44);
                    v13 = v11 - 3.get(v11, a1, a2);
                    if (!v13)
                        break;
                    v11 += 3;
                    v0.spec_extend(v13, v5 + v13);
                }
                v10 = &g_519b88;
            }
            else
            {
                v10 = &g_519b70;
                v8 = 0;
            }
        }
        core::str::slice_error_fail(a1, a2, v8, v11, v10); /* do not return */
    }
}
