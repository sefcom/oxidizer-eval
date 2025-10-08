double uu_expr::syntax_tree::NumOrStr::eval_as_bigint(long long a0, long long a1)
{
    int v0;  // [bp-0x30], Other Possible Types: char
    char v1;  // [bp-0x20]
    unsigned long v3;  // rax
    unsigned long long v4;  // rax
    unsigned long v5;  // xmm0lq
    int v6;  // xmm0

    if (!((char)(((0 ^ *((long long *)a1)) & (0 ^ -(*((long long *)a1)))) >> 63)))
    {
        v6 = *((int128_t *)a1);
        *((int128_t *)&a0[24]) = (int128_t)a1[16];
        a0[8] = v6;
        *((unsigned long long *)a0) = 0;
        return (unsigned long long)v6;
    }
    v0.from_str_radix((long long)a1[16], (long long)a1[24]);
    v3 = a0 + 8;
    if (*((long long *)&v0) == 0x8000000000000000)
    {
        *((unsigned long long *)v3) = 2;
        v4 = 1;
    }
    else
    {
        v5 = (unsigned long long)v0;
        *((int128_t *)(v3 + 16)) = *((int128_t *)&v1);
        *((void*)v3) = v0;
        v4 = 0;
    }
    *((unsigned long long *)a0) = v4;
    core::ptr::drop_in_place<alloc::string::String>(a1 + 8);
    return v5;
}
