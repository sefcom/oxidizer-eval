long long uu_env::string_expander::StringExpander::put_one_char::h37c5e1b22e2da92a(unsigned long long a0[3], unsigned long a1)
{
    unsigned long v0;  // [bp-0x28]
    unsigned int v1;  // [bp-0x24], Other Possible Types: char
    char v2;  // [sp-0x23]
    char v3;  // [sp-0x22]
    char v4;  // [sp-0x21]
    unsigned long v6;  // rax
    unsigned long long v7;  // r14
    unsigned int v8;  // eax
    void* v9;  // rax
    unsigned long long v10;  // r12

    v0 = v6;
    v1 = 0;
    if ((unsigned int)a1 < 128)
    {
        v1 = a1;
        v7 = 1;
    }
    else
    {
        v8 = a1;
        if ((unsigned int)a1 < 0x800)
        {
            v1 = (char)(v8 >> 6) | 192;
            v2 = (char)a1 & 63 | 128;
            v7 = 2;
        }
        else if ((unsigned int)a1 < 0x10000)
        {
            v1 = (char)(v8 >> 12) | 224;
            v2 = (char)((a1 & 4294967295 & 4294967295) >> 6 & 4294967295) & 63 | 128;
            v3 = (char)a1 & 63 | 128;
            v7 = 3;
        }
        else
        {
            v1 = (char)(v8 >> 18) & 7 | 240;
            v2 = (char)((a1 & 4294967295 & 4294967295) >> 12 & 4294967295) & 63 | 128;
            v3 = (char)((a1 & 4294967295 & 4294967295) >> 6 & 4294967295) & 63 | 128;
            v4 = (char)a1 & 63 | 128;
            v7 = 4;
        }
    }
    v9 = __rust_alloc(v7, 1);
    if (!v9)
        alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
    memcpy(v9, &v1, v7);
    v10 = a0[2];
    if (a0[0] - v10 >= v7)
    {
        memcpy(a0[1] + v10, v9, v7);
        a0[2] = v10 + v7;
        return __rust_dealloc(v9);
    }
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::reserve::do_reserve_and_handle::ha27a6e5a628087b7(a0, v10, v7);
    v10 = a0[2];
}
