long long uu_cp::print_paths::ha8cf25c1ee386d81(unsigned int a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4)
{
    unsigned long long v0;  // [sp-0x108]
    struct_0 *v1;  // [sp-0x100]
    char v2;  // [bp-0xf8], Other Possible Types: unsigned long, unsigned long long
    struct_0 *v3;  // [sp-0xf0], Other Possible Types: unsigned long long
    unsigned long v4;  // [sp-0xe8], Other Possible Types: unsigned long long
    unsigned long long v5;  // [sp-0xe0]
    void* v6;  // [sp-0xd8]
    unsigned long v7;  // [sp-0xc8], Other Possible Types: unsigned long long
    unsigned long long v8;  // [sp-0xc0]
    unsigned long long v9;  // [sp-0xb8]
    char v10;  // [bp-0xb0], Other Possible Types: unsigned long
    unsigned long v11;  // [sp-0x88], Other Possible Types: unsigned long long
    unsigned long long v12;  // [sp-0x80]
    unsigned long long v13;  // [sp-0x78]
    unsigned long long v14;  // [sp-0x70]
    int v15;  // [bp-0x68], Other Possible Types: unsigned long long
    unsigned long long v16;  // [sp-0x60]
    unsigned long long v17;  // [sp-0x58]
    char v18;  // [sp-0x50]
    char v19;  // [bp-0x48]
    char v20;  // [bp-0x40]
    unsigned long long v22;  // r13
    struct_0 *v23;  // r12
    struct_0 *v24;  // r12
    struct_0 *v25;  // r12
    int v26;  // ymm0
    unsigned long long v27;  // rax
    int v28;  // xmm0
    unsigned long long v29;  // rsi
    unsigned long long v30;  // rdx
    struct_0 *v31;  // r12
    unsigned long long v32;  // rax

    if (a0)
    {
        uu_cp::aligned_ancestors::h926ed14216efe686(&v2);
        v0 = v2;
        v1 = v3;
        v22 = v4;
        if (v22)
        {
            v23 = v1;
            do
            {
                v25 = v24;
                v27 = v25->field_0;
            } while (v11 && (v28 = v25->field_10, v26 = v26 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v28, v11 = v27, v12 = v25->field_8, v15 = v28, v7 = (unsigned long long)&v11, v8 = (unsigned long long)_$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76, v9 = (unsigned long long)&v15, v10 = (unsigned long)_$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76, v2 = (unsigned long long)&g_555570, v3 = (unsigned long long)3, v6 = (void*)0, v4 = (unsigned long long)&v7, v5 = (unsigned long long)2, std::io::stdio::_print::he918bceb0c89db46(&v2, v29, v30), v31 = v25 + 32, v31 != (v22 << 5) + v23));
        }
        if (v0)
            __rust_dealloc(v1);
    }
    v15 = 1;
    v16 = a1;
    v17 = a2;
    v18 = 1;
    v7 = 1;
    v8 = a3;
    v9 = a4;
    v10 = 1;
    v11 = &v15;
    v12 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
    v13 = &v7;
    v14 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
    v2 = &anon.7947dff69a24cd925ba6dc87d49388a5.176.llvm.6903499209109998583;
    v3 = 2;
    v6 = 0;
    v4 = &v11;
    v5 = 2;
    alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v19, &v2);
    v7 = &v19;
    v8 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
    v2 = &g_555338;
    v3 = 2;
    v6 = 0;
    v4 = &v7;
    v5 = 1;
    v32 = std::io::stdio::_print::he918bceb0c89db46(&v2, v29, v30);
    if (*((long long *)&v19))
    {
        v32 = __rust_dealloc(*((long long *)&v20));
        return v32;
    }
    return v32;
}
