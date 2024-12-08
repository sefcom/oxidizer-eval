long long uu_seq::print_seq::h5e3ef1552e593da1(struct_0 *a0, unsigned int a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5)
{
    unsigned long v0;  // [sp-0x200], Other Possible Types: unsigned long long
    int v1;  // [sp-0x1f8]
    int v2;  // [sp-0x1e8]
    unsigned long long v3;  // [sp-0x1d8]
    unsigned long long v4;  // [sp-0x190]
    int v5;  // [sp-0x188]
    int v6;  // [sp-0x178]
    unsigned long long v7;  // [sp-0x168]
    int v8;  // [sp-0x158]
    int v9;  // [sp-0x148]
    unsigned long long v10;  // [sp-0x138]
    unsigned long long v11;  // [sp-0x130]
    unsigned long v12;  // [sp-0x118], Other Possible Types: unsigned long long
    int v13;  // [sp-0xf8]
    int v14;  // [sp-0xe8]
    unsigned long long v15;  // [sp-0xd8]
    unsigned long long v16;  // [sp-0xa8]
    unsigned long long v17;  // [sp-0xa0]
    unsigned long long v18;  // [sp-0x98]
    unsigned long long v19;  // [sp-0x90]
    unsigned long v20;  // [bp+0x8]
    char v21;  // [bp+0x10]
    char v22;  // [bp+0x18]
    unsigned long long v26;  // rsi
    unsigned long long v27;  // rdx
    unsigned long long v29;  // 4096
    void* v30;  // rax
    void* v31;  // rax
    unsigned long long v32;  // rax
    void* v33;  // rdx
    unsigned long long v34;  // rax
    void* v35;  // rcx

    v16 = a2;
    v17 = a3;
    v18 = a4;
    v19 = a5;
    v12 = std::io::stdio::stdout::h077da66234850927();
    v0 = std::io::stdio::Stderr::lock::h890f7962a170fc90(&v12, v26, v27);
    v3 = a0->field_20;
    *((uint128_t *)&v2) = a0->field_10;
    *((uint128_t *)&v1) = a0->field_0;
    v7 = *((long long *)((char *)&a0->field_38 + 8));
    *((int128_t *)&v6) = *((int128_t *)((char *)&a0->field_28 + 8));
    *((int128_t *)&v5) = *((int128_t *)&(&a0->field_20)[1]);
    v15 = a0->field_60;
    *((uint128_t *)&v14) = a0->field_50;
    *((int128_t *)&v13) = *((int128_t *)&a0->field_48);
    v30 = v29 + *((long long *)&v21);
    if (!(char)v20)
        v30 = 0;
    v11 = *((long long *)*((long long *)&v22));
    if (!(char)uu_seq::done_printing::h021550745a6ada3d(&v1, &v5, &v13))
    {
        v4 = 0x8000000000000000;
        if (v11 != 0x8000000000000000)
        {
            v32 = (long long)v1;
            v33 = v32 + 9223372036854775809;
            if (v32 >= 9223372036854775812)
                v33 = 0;
            goto *((int *)(4341192 + vvar_21{reg 64} * 4)) + 4341192;
        }
        else
        {
            v31 = uu_seq::write_value_float::h353224deef300b19(&v0, &v1, v30, a1);
            if (!v31)
            {
                v10 = v3;
                v9 = v2;
                v34 = (long long)v5;
                v35 = v34 + 9223372036854775809;
                if (v34 >= 9223372036854775812)
                    v35 = 0;
                v8 = v1;
                goto *((int *)(4341212 + vvar_22{reg 32} * 4)) + 4341212;
            }
        }
    }
    else
    {
        v31 = _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::flush::hf4899ae455fb37b6(&v0);
        if (!v31)
        {
            ::0x4c7b60::core::ptr::drop_in_place$LT$uu_seq..extendedbigdecimal..ExtendedBigDecimal$GT$::h6c3a67fa4844504c(&v1);
            ::0x4c7b60::core::ptr::drop_in_place$LT$uu_seq..extendedbigdecimal..ExtendedBigDecimal$GT$::h6c3a67fa4844504c(&v13);
            ::0x4c7b60::core::ptr::drop_in_place$LT$uu_seq..extendedbigdecimal..ExtendedBigDecimal$GT$::h6c3a67fa4844504c(&v5);
            core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::h285e6b35528a634d(v0);
            return 0;
        }
    }
    ::0x4c7b60::core::ptr::drop_in_place$LT$uu_seq..extendedbigdecimal..ExtendedBigDecimal$GT$::h6c3a67fa4844504c(&v1);
    ::0x4c7b60::core::ptr::drop_in_place$LT$uu_seq..extendedbigdecimal..ExtendedBigDecimal$GT$::h6c3a67fa4844504c(&v13);
    ::0x4c7b60::core::ptr::drop_in_place$LT$uu_seq..extendedbigdecimal..ExtendedBigDecimal$GT$::h6c3a67fa4844504c(&v5);
    core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::h285e6b35528a634d(v0);
    return v31;
}
