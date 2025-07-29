double uu_ls::parse_width(long long a0, long long a1)
{
    char v0;  // [bp-0x58], Other Possible Types: unsigned long long
    unsigned short v1;  // [bp-0x50]
    char v2;  // [bp-0x4e]
    unsigned long long v3;  // [bp-0x48]
    char v4;  // [bp-0x3e]
    unsigned long v5;  // [bp-0x30]
    int v6;  // [bp-0x28], Other Possible Types: char
    char v7;  // [bp-0x18]
    int v9;  // xmm0
    unsigned long long v10;  // rax
    unsigned long v11;  // xmm0lq

    if (a1)
    {
        uu_ls::parse_width::{{closure}}(&v0, a1[1], a1[2]);
        if (v0 != 9223372036854775814)
        {
            *((unsigned long *)((char *)&a0[1].field_0 + 7)) = v5;
            v9 = *((int128_t *)&v2);
            *((int128_t *)((char *)&a0->field_a + 10)) = *((int128_t *)&v4);
            *((void*)&(&a0->field_8)[1]) = v9;
            a0->field_0 = v0;
            a0->field_8 = v1;
            return (unsigned long long)v9;
        }
    }
    else
    {
        std::env::var_os(&v6, "COLUMNS: ls-invalid-columns-widthsihuman-readable: warning: patternBLOCKSIZEBLOCK_SIZELS_BLOCK_SIZEPOSIXLY_CORRECT*~.*~ls-invalid-hide-patternls-invalid-ignore-patternTABSIZE(uutils coreutils) 0.1.0ls-help-print-helpls-help-set-display-formatls-help-displa", 7);
        if (*((long long *)&v6) == 0x8000000000000000)
        {
            v10 = terminal_size::unix::terminal_size();
            if ((unsigned short)v10)
                v1 = (unsigned int)v10 >> 16;
            else
                v1 = 80;
        }
        else
        {
            v3 = *((long long *)&v7);
            v11 = (unsigned long long)v6;
            memcpy(&(char)v0, &v6, 16);
            v1 = uu_ls::parse_width::{{closure}}(&(char)v0);
        }
    }
    a0->field_8 = v1;
    a0->field_0 = 9223372036854775814;
    return v11;
}
