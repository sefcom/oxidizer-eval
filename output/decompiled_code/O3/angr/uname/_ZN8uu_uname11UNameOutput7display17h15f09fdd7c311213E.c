double uu_uname::UNameOutput::display::h15f09fdd7c311213(long long a0, long long a1)
{
    void* v0;  // [sp-0xa8]
    unsigned long long v1;  // [sp-0xa0]
    void* v2;  // [sp-0x98]
    unsigned long long v3;  // [sp-0x90]
    unsigned long long v4[22];  // [sp-0x88]
    unsigned long long v5;  // [sp-0x80]
    unsigned long long v6;  // [sp-0x78]
    unsigned long long v7;  // [sp-0x70]
    unsigned long long v8;  // [sp-0x68]
    unsigned long long v9;  // [sp-0x60]
    unsigned long long v10;  // [sp-0x58]
    unsigned long long v11;  // [sp-0x50]
    void* v12;  // [sp-0x48]
    unsigned long long v13;  // [sp-0x40]
    void* v14;  // [sp-0x38]
    void* v15;  // [sp-0x28]
    unsigned long long v18[22];  // rcx
    unsigned long long v19[22];  // rcx
    void* v20;  // rdx
    void* v21;  // r8
    void* v22;  // r9
    void* v23;  // r10
    void* v24;  // r11
    void* v25;  // r14
    void* v26;  // r15
    unsigned long long v27[3];  // rax
    unsigned long long v28;  // rdx
    int v29;  // xmm0
    int v30;  // ymm0

    if (a1[0] == 0x8000000000000000)
        v18 = 0;
    else
        v18 = a1;
    v19 = v18;
    v20 = &a1[3];
    if (a1[3] == 0x8000000000000000)
        v20 = 0;
    v0 = 0;
    v21 = &a1[6];
    if (a1[6] == 0x8000000000000000)
        v21 = 0;
    v22 = &a1[9];
    if (a1[9] == 0x8000000000000000)
        v22 = 0;
    v23 = &a1[12];
    if (a1[12] == 0x8000000000000000)
        v23 = 0;
    v1 = 1;
    v24 = &a1[15];
    if (a1[15] == 0x8000000000000000)
        v24 = 0;
    v25 = &a1[18];
    if (a1[18] == 0x8000000000000000)
        v25 = 0;
    v26 = &a1[21];
    if (a1[21] == 0x8000000000000000)
        v26 = 0;
    v2 = 0;
    v3 = 1;
    v4[0] = v19;
    v5 = v20;
    v6 = v21;
    v7 = v22;
    v8 = v23;
    v9 = v24;
    v10 = v25;
    v11 = v26;
    v12 = 0;
    v13 = 8;
    v14 = 0;
    v15 = 0;
    while (true)
    {
        v27 = _$LT$core..iter..adapters..flatten..FlattenCompat$LT$I$C$U$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hffe3c2fe1b84fb79(&v3, a1, v20);
        if (!v27)
            break;
        alloc::vec::Vec$LT$T$C$A$GT$::append_elements::hd86b63345d02d641(&v0, core::slice::iter::Iter$LT$T$GT$::make_slice::h76c0ef975e2f71cc(v27[1], v27[2] + v27[1]), v28);
        ::0x4a8560::alloc::string::String::push::h859ae11851fd8b8e(&v0);
    }
    core::ptr::drop_in_place$LT$core..iter..adapters..flatten..Flatten$LT$core..array..iter..IntoIter$LT$core..option..Option$LT$$RF$alloc..string..String$GT$$C$8_usize$GT$$GT$$GT$::h88b4913d8f8e5d32(&v3);
    a0->field_10 = v2;
    v29 = *((int128_t *)&v0);
    *((void*)&a0->field_0) = v29;
    return (unsigned long long)(v30 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v29);
}
