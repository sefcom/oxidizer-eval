long long uu_tr::operation::Sequence::from_str::h56200db488f7fe37(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long a3, unsigned long a4, unsigned long a5)
{
    unsigned long long v0;  // [sp-0xa0]
    uint128_t *v1;  // [sp-0x98]
    uint128_t *v2;  // [sp-0x90]
    char v3;  // [bp-0x88], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v4;  // [sp-0x80], Other Possible Types: unsigned long
    unsigned long v5;  // [sp-0x78], Other Possible Types: unsigned long long
    char v6;  // [bp-0x70], Other Possible Types: unsigned long, unsigned long long
    char v7;  // [bp-0x60]
    uint128_t *v8;  // [sp-0x50]
    uint128_t *v9;  // [sp-0x48]
    unsigned long long v10;  // [sp-0x40]
    unsigned long long v11;  // [sp-0x38]
    uint128_t *v13;  // rax
    unsigned long long v14;  // rbx
    unsigned long long v15;  // r15
    int v16;  // ymm0
    unsigned long long v17;  // rsi
    unsigned long long v18;  // r8
    unsigned long long v19;  // r9
    unsigned long long v20;  // r14
    uint128_t *v21;  // r15
    uint128_t *v22;  // rax
    uint128_t *v23;  // rcx
    int v24;  // xmm0
    unsigned long long v25;  // r12
    unsigned long long v26;  // rsi
    unsigned long long v27;  // r14
    uint128_t *v28;  // rdx
    void* v29;  // r13

    v13 = __rust_alloc(96, 8);
    if (!v13)
        alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
    v0 = 4;
    v1 = v13;
    v2 = 0;
    while (true)
    {
        v14 = a1;
        v15 = a2;
        _$LT$$LP$A$C$B$C$C$C$D$C$E$C$F$RP$$u20$as$u20$nom..branch..Alt$LT$Input$C$Output$C$Error$GT$$GT$::choice::ha53429a2226f2d18(&v3, v17, v14, v15, v18, v19);
        if (v3)
        {
            v25 = v4;
            if (v25 == 1)
            {
                v28 = v1;
                v8 = v28;
                v10 = v0;
                v9 = v28;
                v11 = (char *)v28 + 0x18 * v2;
                return core::iter::adapters::try_process::hc35780246b9233d3(a0, &v8);
            }
            v27 = (&v6)[8];
            v29 = *((int *)&(&v6)[9]) * 0x100 | (*((short *)&(&v6)[13]) | (&v6)[15] * 0x10000) * 0x10000000000;
            v6 = v6;
            v5 = v5;
            break;
        }
        else
        {
            v20 = v5;
            if (v20 != v15)
            {
                v21 = v2;
                if (v21 == v0)
                    alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::h774467fb390454b6(&v0);
                v22 = v1;
                v23 = v21 * 3;
                *((long long *)(16 + (char *)v22 + 0x8 * v23)) = *((long long *)&v7);
                v24 = *((int128_t *)&v6);
                v16 = v16 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v24;
                *((void*)((char *)v22 + 0x8 * v23)) = v24;
                v2 = (char *)v21 + 1;
                a2 = v20;
                a1 = v4;
            }
            else
            {
                v26 = v6;
                v25 = 1;
                v27 = 8;
                if (v26 != 9223372036854775818)
                {
                    v29 = 0;
                    v6 = v15;
                    v5 = v14;
                    if (!(!((0x8000000000000000 ^ v26) != 4 & (0x8000000000000000 ^ v26) < 10)) || !((v6 = v15, v5 = v14, v26)))
                        break;
                    __rust_dealloc(*((long long *)&(&v6)[8]));
                }
                v29 = 0;
                v6 = v15;
                v5 = v14;
                break;
            }
        }
    }
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h3af19e8c62a0159a(&v0);
    _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h3a4c9db84efb4937(&v0);
    v3 = v25;
    v4 = v5;
    v5 = v6;
    v6 = v29 | v27;
    core::result::unwrap_failed::h39784290e544308e(); /* do not return */
}
