long long uu_ls::parse_width::h6c0d34d7a456f903(struct_0 *a0, unsigned long long a1[3], unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5)
{
    int v0;  // [bp-0x58], Other Possible Types: char
    char v1;  // [bp-0x57]
    char v2;  // [bp-0x56]
    char v3;  // [bp-0x54]
    unsigned long long v4;  // [sp-0x48]
    char v5;  // [bp-0x44]
    char v6;  // [bp-0x34]
    char v7;  // [bp-0x24]
    char v8;  // [bp-0x20]
    char v9;  // [bp-0x10]
    unsigned long long v11;  // rax
    char v12;  // cl
    unsigned short v13;  // dx
    unsigned long long v14;  // rdi
    unsigned long long v15;  // rsi
    unsigned long long v16;  // rdx
    unsigned long long v17;  // rcx
    unsigned long long v18;  // r8
    unsigned long long v19;  // r9
    unsigned long long v20;  // rax

    if (!a1)
    {
        std::env::var_os::h00ce706604dc1520(&v8, "COLUMNS: ignoring invalid width in environment variable COLUMNS: \n", 7);
        if (*((long long *)&v8) != 0x8000000000000000)
        {
            v4 = *((long long *)&v9);
            *((int128_t *)&v0) = *((int128_t *)&v8);
            v11 = uu_ls::parse_width::_$u7b$$u7b$closure$u7d$$u7d$::h0185f2defe4792c8(&v0);
        }
        else
        {
            v20 = terminal_size::unix::terminal_size::h9cd9ea50976260ba(v14, v15, v16, v17, v18, v19);
            if (!(unsigned short)v20)
                v11 = 80;
            else
                v11 = (unsigned int)v20 >> 16;
        }
    }
    else
    {
        uu_ls::parse_width::_$u7b$$u7b$closure$u7d$$u7d$::h592058b1caa92954(&v0, a1[1], a1[2]);
        v11 = v0;
        if ((char)v11 != 7)
        {
            v12 = v1;
            v13 = *((short *)&v2);
            *((int *)((char *)&a0->field_24 + 4)) = *((int *)&v7);
            *((int128_t *)((char *)&a0->field_14 + 4)) = *((int128_t *)&v6);
            *((int128_t *)((char *)&a0->field_4 + 4)) = *((int128_t *)&v5);
            *((int128_t *)&(&a0->field_2)[1]) = *((int128_t *)&v3);
            a0->field_0 = v11;
            a0->field_1 = v12;
            a0->field_2 = v13;
            return v11;
        }
        v11 = *((short *)&v2);
    }
    a0->field_2 = v11;
    a0->field_0 = 7;
    return v11;
}
