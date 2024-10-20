long long uu_env::string_parser::StringParser::consume_chunk::h273ffbace99edc38(struct_0 *a0, unsigned long long a1[5], unsigned long a2)
{
    char *v0;  // [sp-0x70]
    unsigned long long v1;  // [sp-0x68]
    unsigned long v2;  // [sp-0x60], Other Possible Types: unsigned long long
    unsigned long long v3;  // [sp-0x58]
    unsigned long long v4;  // [sp-0x50]
    int v5;  // [sp-0x48]
    unsigned long long v8;  // rbp
    unsigned long v9;  // r12
    unsigned long long v10;  // r12
    char *v11;  // r12
    unsigned int v13;  // eax
    char *v14;  // r15
    unsigned int v15;  // edx
    char *v16;  // rax
    unsigned long long v18;  // r15

    v8 = a1[4];
    if (v9 < v8)
    {
        v2 = &anon.c479f575d13bdc6af5496164023f20a6.5.llvm.1842864401518779319;
        v3 = 1;
        v4 = 8;
        *((int128_t *)&v5) = 0;
        core::panicking::panic_fmt::he12d0d7468628bb4(&v2); /* do not return */
    }
    v9 = a1[1];
    v11 = v10 - v8;
    if (v10 == v8)
    {
        a0->field_8 = v8;
        a0->field_10 = 0;
        a0->field_0 = 1;
        return a0;
    }
    v1 = a1[0];
    v0 = v1 + v8;
    v13 = uu_env::native_int_str::get_char_from_native_int::h0450fbe3acce94e3(*(v0));
    if (v13 != 0x110000)
    {
        v16 = v15 * 0x100000000 | v13;
        v0 = 0;
        goto LABEL_4a35fe;
    }
    v14 = 1;
    if (v11 < 2)
    {
LABEL_4a35f2:
        if (v14 > v11)
            core::slice::index::slice_end_index_len_fail::hb96f779f51482844(); /* do not return */
    }
    else
    {
        do
        {
            if (!((int)uu_env::native_int_str::get_char_from_native_int::h0450fbe3acce94e3(*((char *)(v0 + v14))) == 0x110000))
                goto LABEL_4a35f2;
        } while ((v14 += 1, v11 != v14));
    }
LABEL_4a35fe:
    v18 = 1 + v8;
    a1[4] = v18;
    if (v10 >= v18)
    {
        a1[2] = v1 + v18;
        a1[3] = v9 - v18;
        a0->field_8 = v0;
        a0->field_10 = (char)v16;
        *((char *)&a0->field_11 + 3) = v16 >> 56;
        *((unsigned short *)((char *)&a0->field_11 + 1)) = v16 >> 40;
        *((unsigned int *)&(&a0->field_10)[1]) = v16 >> 8;
        a0->field_0 = 0;
        return a0;
    }
    v2 = &anon.c479f575d13bdc6af5496164023f20a6.5.llvm.1842864401518779319;
    v3 = 1;
    v4 = 8;
    *((int128_t *)&v5) = 0;
    core::panicking::panic_fmt::he12d0d7468628bb4(&v2); /* do not return */
}
