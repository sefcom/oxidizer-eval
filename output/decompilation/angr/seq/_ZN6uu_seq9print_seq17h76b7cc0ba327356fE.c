long long uu_seq::print_seq::h76b7cc0ba327356f(struct_0 *a0, unsigned int a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5, char a6, unsigned long a7, unsigned long long *a8)
{
    unsigned long v0;  // [sp-0x200]
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
    unsigned long v12;  // [sp-0x118]
    int v13;  // [sp-0xf8]
    int v14;  // [sp-0xe8]
    unsigned long long v15;  // [sp-0xd8]
    unsigned long long v16;  // [sp-0xa8]
    unsigned long long v17;  // [sp-0xa0]
    unsigned long long v18;  // [sp-0x98]
    unsigned long long v19;  // [sp-0x90]
    unsigned long long v20;  // rax
    unsigned long v21;  // r15
    void* v22;  // r13
    unsigned long long v23;  // rax
    unsigned long long v24;  // rax
    unsigned long long v25;  // rsi
    unsigned long long v26;  // rax
    unsigned long long v27;  // rdx

    v16 = a2;
    v17 = a3;
    v18 = a4;
    v19 = a5;
    v12 = std::io::stdio::stdout::h077da66234850927();
    v0 = std::io::stdio::Stderr::lock::h890f7962a170fc90(&v12);
    v3 = a0->field_20;
    *((uint128_t *)&v2) = a0->field_10;
    *((uint128_t *)&v1) = a0->field_0;
    v7 = *((long long *)((char *)&a0->field_38 + 8));
    *((int128_t *)&v6) = *((int128_t *)((char *)&a0->field_28 + 8));
    *((int128_t *)&v5) = *((int128_t *)&(&a0->field_20)[1]);
    v15 = a0->field_60;
    *((uint128_t *)&v14) = a0->field_50;
    *((int128_t *)&v13) = *((int128_t *)&a0->field_48);
    v20 = a1 + 1;
    if (!a1)
        v20 = a1;
    v21 = (a6 ? v20 + a7 : 0);
    v11 = *(a8);
    if (!(char)uu_seq::done_printing::h3afd308e88daff24(&v1, &v5, &v13))
    {
        v4 = 0x8000000000000000;
        if (v11 != 0x8000000000000000)
        {
            v24 = (long long)v1;
            v25 = (v24 < 9223372036854775812 ? v24 + 9223372036854775809 : 0);
            goto *((int *)(4339844 + vvar_24{reg 64} * 4)) + 4339844;
        }
        else
        {
            v23 = uu_seq::write_value_float::h583f3c53a243a2bf(&v0, &v1, v21, a1);
            v22 = v23;
            if (!v23)
            {
                v10 = v3;
                v9 = v2;
                v26 = (long long)v5;
                v27 = (v26 < 9223372036854775812 ? v26 + 9223372036854775809 : 0);
                v8 = v1;
                goto *((int *)(4339864 + vvar_25{reg 32} * 4)) + 4339864;
            }
        }
    }
    else
    {
        v22 = _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::flush::hf4899ae455fb37b6(&v0);
        if (!v22)
        {
            ::0x4c68d0::core::ptr::drop_in_place$LT$uu_seq..extendedbigdecimal..ExtendedBigDecimal$GT$::h34bd9961a5e5dc1c(&v1);
            ::0x4c68d0::core::ptr::drop_in_place$LT$uu_seq..extendedbigdecimal..ExtendedBigDecimal$GT$::h34bd9961a5e5dc1c(&v13);
            ::0x4c68d0::core::ptr::drop_in_place$LT$uu_seq..extendedbigdecimal..ExtendedBigDecimal$GT$::h34bd9961a5e5dc1c(&v5);
            core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::h1972256e3ce050a6(v0);
            return 0;
        }
    }
    ::0x4c68d0::core::ptr::drop_in_place$LT$uu_seq..extendedbigdecimal..ExtendedBigDecimal$GT$::h34bd9961a5e5dc1c(&v1);
    ::0x4c68d0::core::ptr::drop_in_place$LT$uu_seq..extendedbigdecimal..ExtendedBigDecimal$GT$::h34bd9961a5e5dc1c(&v13);
    ::0x4c68d0::core::ptr::drop_in_place$LT$uu_seq..extendedbigdecimal..ExtendedBigDecimal$GT$::h34bd9961a5e5dc1c(&v5);
    core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::h1972256e3ce050a6(v0);
    return v22;
}
