long long uu_head::parse::parse_num(void* a0, unsigned long long a1, unsigned long long a2)
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
    unsigned long long v11;  // rax
    int v12;  // xmm0
    unsigned long long v13;  // rax

    v4 = core::str::<impl str>::trim_matches(a1, a2);
    v0 = v4;
    v1 = v4 + v5;
    if (!((char)core::str::validations::next_code_point(&v0) & 1))
    {
        v13 = a0 + 8.to_vec(a1, a2);
        *((unsigned long long *)a0) = 1;
        return v13;
    }
    if ((unsigned int)v5 == 43 || (unsigned int)v5 == 45)
    {
        v7 = v4.get(v5);
        if (!v7)
            core::str::slice_error_fail(v4, v5, 1, v5, &g_4f7ae8); /* do not return */
        v8 = (unsigned int)v5 == 45;
        v6 = v7;
    }
    else
    {
        v6 = v4;
    }
    v10 = core::str::<impl str>::trim_start_matches(v6, v9);
    if (v5)
    {
        v11 = uucore::features::parser::parse_size::parse_size_u64_max(&v0, v10, a2);
        if ((int)v0 != 4)
        {
            v12 = *((int128_t *)&v0);
            *((int128_t *)&a0[16]) = *((int128_t *)&v2);
            *(a0) = v12;
            return v11;
        }
        v10 = v1;
        *((unsigned long long *)&a0[8]) = v1;
    }
    else
    {
        *((unsigned long long *)&a0[8]) = 0;
    }
    *((char *)&a0[16]) = v8;
    *((unsigned long long *)a0) = 4;
    return v10;
}
