long long uu_cp::print_paths::h93d7a9a3ec668051(unsigned int a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4)
{
    struct struct_0 **v0;  // [bp-0x100], Other Possible Types: unsigned long
    unsigned long v1;  // [sp-0xf8], Other Possible Types: unsigned long long
    char v2;  // [bp-0xf0]
    unsigned long v3;  // [bp-0xe0], Other Possible Types: unsigned long long
    unsigned long long v4;  // [sp-0xd8]
    struct struct_0 **v5;  // [sp-0xd0], Other Possible Types: struct struct_1 **
    unsigned long long v6;  // [sp-0xc8]
    void* v7;  // [sp-0xc0]
    char *v8;  // [sp-0x90]
    unsigned long long v9;  // [sp-0x88]
    char *v10;  // [sp-0x80]
    unsigned long long v11;  // [sp-0x78]
    unsigned long v12;  // [sp-0x70], Other Possible Types: unsigned long long
    unsigned long long v13;  // [sp-0x68]
    char v14;  // [bp-0x60]
    int v15;  // [sp-0x40]
    unsigned long long v17;  // rax
    unsigned long long v18;  // rsi
    int v19;  // ymm0
    int v20;  // xmm0
    unsigned long long v21;  // rdx
    unsigned long long v22;  // rsi

    if (!a0)
    {
        uu_cp::context_for::h98549e35fded8509(&v8, a1, a2, a3, a4);
        v0 = &v8;
        v1 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        v3 = &g_5b5ce8;
        v4 = 2;
        v7 = 0;
        v5 = &v0;
        v6 = 1;
        std::io::stdio::_print::he918bceb0c89db46(&v3, v22, v21);
        return ::0x4fc410::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h5bdd96f6f34778b9(&v8);
    }
    uu_cp::aligned_ancestors::h4cf131ef21f6aa74(&v3, a1, a2, a3, a4);
    ::0x4feef0::_$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h6511090ed0ef25d3(&v14, &v3);
    ::0x4fb5b0::_$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h109fcabe2eb45d25(&v0, &v14);
    v17 = v0;
    if (v17)
    {
        do
        {
            v20 = *((int128_t *)&v2);
            v19 = v19 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v20;
            v12 = v17;
            v13 = v1;
            v15 = v20;
            v8 = &v12;
            v9 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76;
            v10 = &v15;
            v11 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76;
            v3 = &g_5b5f48;
            v4 = 3;
            v7 = 0;
            v5 = &v8;
            v6 = 2;
            std::io::stdio::_print::he918bceb0c89db46(&v3, v18, v21);
            ::0x4fb5b0::_$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h109fcabe2eb45d25(&v0, &v14);
            v17 = v0;
        } while (v17);
    }
    ::0x4fc050::core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$LP$$RF$std..path..Path$C$$RF$std..path..Path$RP$$GT$$GT$::h0c6e777e5bffd2a5(&v14);
}
