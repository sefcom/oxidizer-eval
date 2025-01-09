long long uu_du::read_block_size::h76babfb70e66ee44(unsigned long long a0[2], unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0xc8]
    char v1;  // [bp-0xc0]
    char v2;  // [bp-0xb8]
    int v3;  // [sp-0xa8], Other Possible Types: unsigned long long
    unsigned long long v4;  // [sp-0xa0]
    int v5;  // [sp-0x98], Other Possible Types: unsigned long long
    unsigned long long v6;  // [sp-0x90]
    unsigned long long v7;  // [sp-0x88]
    unsigned long long v8;  // [sp-0x80]
    void* v9;  // [sp-0x78]
    unsigned long long v10;  // [sp-0x70]
    int v11;  // [sp-0x68]
    unsigned long long v12;  // [sp-0x58]
    char v13;  // [bp-0x50]
    char v14;  // [bp-0x48]
    char v15;  // [bp-0x38]
    int v17;  // ymm0
    unsigned long long v18;  // rax
    unsigned long long v19;  // rdx
    int v20;  // xmm0
    unsigned long long v21;  // rcx
    void* v22;  // rax
    int v23;  // xmm0

    if (a1)
    {
        uucore::parser::parse_size::parse_size_u64::h6825c2c9656edafa(&v0, a1, a2);
        if (*((int *)&v0) == 3)
        {
            v21 = *((long long *)&v1);
            v22 = 0;
        }
        else
        {
            v23 = *((int128_t *)&v0);
            *((int128_t *)&v5) = *((int128_t *)&v2);
            v3 = v23;
            v22 = uu_du::read_block_size::_$u7b$$u7b$closure$u7d$$u7d$::hbe6839e34197ed94(a1, a2, &v3);
            v21 = &g_584310;
        }
        a0[1] = v21;
        a0[0] = v22;
        return a0;
    }
    else
    {
        v3 = "DU_BLOCK_SIZE";
        v4 = 13;
        v5 = "BLOCK_SIZE";
        v6 = 10;
        v7 = "BLOCKSIZE";
        v8 = 9;
        v9 = 0;
        v10 = 3;
        while (true)
        {
            v18 = _$LT$core..array..iter..IntoIter$LT$T$C$_$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hca94120cebd2fbbe(&v3);
            if (!v18)
            {
                core::ptr::drop_in_place$LT$core..array..iter..IntoIter$LT$$RF$str$C$3_usize$GT$$GT$::h1e3b5b2db52edb1f();
                std::env::var::h8742b1567e161603(&v3, "POSIXLY_CORRECT", 15);
                core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..env..VarError$GT$$GT$::h9fc456eefb69a366(&v3);
                if (!v3)
                {
                    a0[1] = 0x200;
                    a0[0] = 0;
                    return a0;
                }
                a0[1] = 0x400;
                a0[0] = 0;
                return a0;
            }
            std::env::var::h8742b1567e161603(&v13, v18, v19);
            if (!*((long long *)&v13))
            {
                v12 = *((long long *)&v15);
                v20 = *((int128_t *)&v14);
                v17 = v17 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v20;
                v11 = v20;
                uucore::parser::parse_size::parse_size_u64::h6825c2c9656edafa(&v0, (long long)(&v11)[8], *((long long *)&v15));
                if (*((int *)&v0) == 3)
                {
                    a0[1] = *((long long *)&v1);
                    a0[0] = 0;
                    core::ptr::drop_in_place$LT$core..result..Result$LT$u64$C$uucore..parser..parse_size..ParseSizeError$GT$$GT$::h0c054e42efb06657(&v0);
                    ::0x4ef6e0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h5d86c71ca1632ad3(&v11);
                    if (*((long long *)&v13))
                        core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..env..VarError$GT$$GT$::h9fc456eefb69a366(&v13);
                    core::ptr::drop_in_place$LT$core..array..iter..IntoIter$LT$$RF$str$C$3_usize$GT$$GT$::h1e3b5b2db52edb1f();
                    break;
                }
                else
                {
                    core::ptr::drop_in_place$LT$core..result..Result$LT$u64$C$uucore..parser..parse_size..ParseSizeError$GT$$GT$::h0c054e42efb06657(&v0);
                    ::0x4ef6e0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h5d86c71ca1632ad3(&v11);
                    if (!*((long long *)&v13))
                        continue;
                }
            }
            core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..env..VarError$GT$$GT$::h9fc456eefb69a366(&v13);
        }
        return a0;
    }
}
