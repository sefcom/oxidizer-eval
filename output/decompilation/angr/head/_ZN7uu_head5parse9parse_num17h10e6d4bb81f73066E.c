long long uu_head::parse::parse_num(int a0[17], unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x50]
    unsigned long long v1;  // [bp-0x48]
    char v2;  // [bp-0x40]
    unsigned long long v4;  // r15
    unsigned long long v5;  // rdx
    unsigned long long v6;  // r15
    unsigned long long v7;  // rax
    char v8;  // bpl
    unsigned long long v9;  // r14
    unsigned long long v10;  // rax
    int v11;  // xmm0

    v4 = core::str::<impl str>::trim_matches(a1, a2);
    v0 = v4;
    v1 = v4 + v5;
    if (!(int)::0x4bb120::core::str::validations::next_code_point(&v0))
    {
        a0 + 8.to_vec(a1, a2);
        *((unsigned long long *)&a0[0]) = 1;
        return a0;
    }
    if ((unsigned int)v5 == 43 || (unsigned int)v5 == 45)
    {
        v7 = v4.get(v5);
        if (!v7)
            core::str::slice_error_fail(v4, v5, 1, v5, &g_593c90); /* do not return */
        v8 = (unsigned int)v5 == 45;
        v6 = v7;
    }
    else
    {
        v6 = v4;
    }
    v10 = core::str::<impl str>::trim_start_matches(v6, v9, 48);
    if (v5)
    {
        uucore::features::parser::parse_size::parse_size_u64_max(&v0, v10, a2);
        if ((int)v0 != 4)
        {
            v11 = *((int128_t *)&v0);
            *((int128_t *)&a0[16]) = *((int128_t *)&v2);
            a0[0] = v11;
            return a0;
        }
        *((unsigned long long *)&a0[8]) = v1;
    }
    else
    {
        *((unsigned long long *)&a0[8]) = 0;
    }
    *((char *)&a0[16]) = v8;
    *((unsigned long long *)&a0[0]) = 4;
    return a0;
}
