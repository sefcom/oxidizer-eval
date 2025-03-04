double uu_uname::UNameOutput::display::hd0fb8855ff2e124d(long long a0, long long a1)
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
    unsigned long long v17[22];  // rcx
    void* v18;  // rdx
    void* v19;  // r8
    void* v20;  // r9
    void* v21;  // r10
    void* v22;  // r11
    void* v23;  // r14
    void* v24;  // r15
    unsigned long long v25[3];  // rax
    unsigned long long v26;  // rdx
    int v27;  // xmm0
    int v28;  // ymm0

    v17 = a1;
    if (a1[0] == 0x8000000000000000)
        v17 = 0;
    v18 = &a1[3];
    if (a1[3] == 0x8000000000000000)
        v18 = 0;
    v0 = 0;
    v19 = &a1[6];
    if (a1[6] == 0x8000000000000000)
        v19 = 0;
    v20 = &a1[9];
    if (a1[9] == 0x8000000000000000)
        v20 = 0;
    v21 = &a1[12];
    if (a1[12] == 0x8000000000000000)
        v21 = 0;
    v1 = 1;
    v22 = &a1[15];
    if (a1[15] == 0x8000000000000000)
        v22 = 0;
    v23 = &a1[18];
    if (a1[18] == 0x8000000000000000)
        v23 = 0;
    v24 = &a1[21];
    if (a1[21] == 0x8000000000000000)
        v24 = 0;
    v2 = 0;
    v3 = 1;
    v4[0] = v17;
    v5 = v18;
    v6 = v19;
    v7 = v20;
    v8 = v21;
    v9 = v22;
    v10 = v23;
    v11 = v24;
    v12 = 0;
    v13 = 8;
    v14 = 0;
    v15 = 0;
    while (true)
    {
        v25 = _$LT$core..iter..adapters..flatten..FlattenCompat$LT$I$C$U$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he5291530aa6c89ad(&v3);
        if (!v25)
            break;
        alloc::vec::Vec$LT$T$C$A$GT$::append_elements::h7d7b704ad484e1bb(&v0, core::slice::iter::Iter$LT$T$GT$::make_slice::h8a021e817a756358(v25[1], v25[2] + v25[1]), v26);
        ::0x4a82a0::alloc::string::String::push::h859ae11851fd8b8e(&v0);
    }
    core::ptr::drop_in_place$LT$core..iter..adapters..flatten..Flatten$LT$core..array..iter..IntoIter$LT$core..option..Option$LT$$RF$alloc..string..String$GT$$C$8_usize$GT$$GT$$GT$::h58996adff40e52b0(&v3);
    a0->field_10 = v2;
    v27 = *((int128_t *)&v0);
    *((void*)&a0->field_0) = v27;
    return (unsigned long long)(v28 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v27);
}
