long long uu_env::apply_specified_env_vars::h6c78a4a1daaeaedd(unsigned long long a0[9], unsigned long long a1, unsigned long long a2)
{
    unsigned long v0;  // [sp-0x90], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0x88]
    unsigned long v2;  // [sp-0x80], Other Possible Types: unsigned long long
    unsigned long long v3;  // [sp-0x78]
    unsigned long long v4;  // [sp-0x70]
    unsigned long long v5;  // [sp-0x68]
    void* v6;  // [sp-0x60]
    int v7;  // [bp-0x50], Other Possible Types: unsigned long long
    int v8;  // [sp-0x48]
    char v9;  // [sp-0x38]
    unsigned long long v10;  // [sp-0x30]
    unsigned long long v11;  // [sp-0x28]
    unsigned long long v12;  // [sp-0x20]
    unsigned long long v13;  // [sp-0x18]
    unsigned long long v14;  // [sp-0x10]
    unsigned long long v15;  // [sp-0x8]
    char v16;  // [bp+0x0]
    unsigned long long v18;  // rax
    unsigned long v19;  // r15
    unsigned long v20;  // r14
    unsigned long v21;  // r13
    unsigned long v22;  // r12
    unsigned long v23;  // rbx
    struct_0 *v24;  // rbx
    unsigned long long v25;  // r12
    int v27;  // ymm0
    int v28;  // xmm0
    int v29;  // xmm0
    unsigned long long v30;  // rsi
    unsigned long long v31;  // rdx
    unsigned long long v32;  // r12

    v18 = a0[8];
    if (!v18)
        return v18;
    v15 = &v16;
    v14 = v19;
    v13 = v20;
    v12 = v21;
    v11 = v22;
    v10 = v23;
    v24 = a0[7] + 24;
    v25 = v18 * 48;
    do
    {
        if (v24->padding_0)
        {
            v18 = std::env::set_var::hcdbfb2d6e0889965((char *)&v24->field_8 + 8, v24);
        }
        else
        {
            if (_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2)
                once_cell::imp::OnceCell$LT$T$GT$::initialize::hf309a323f9c37110(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
            v28 = g_512018;
            v7 = v28;
            v0 = &v7;
            v1 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::he4bb067a457648df;
            v2 = &g_50c8a0;
            v3 = 2;
            v6 = 0;
            v4 = &v0;
            v5 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v2, a1, a2);
            v29 = *((int128_t *)&v24->padding_0);
            v27 = v27 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v28 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v29;
            v7 = 1;
            v8 = v29;
            v9 = 1;
            v0 = &v7;
            v1 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
            v2 = &g_50c8c0;
            v3 = 2;
            v6 = 0;
            v4 = &v0;
            v5 = 1;
            v18 = std::io::stdio::_eprint::hcdfeec148c7134f7(&v2, v30, v31);
        }
    } while ((v24 += 48, v32 = v25 - 48, v25 != 48));
    return v18;
}
