long long uu_factor::write_result::h4349ac4ce4d74e96(unsigned long long a0[3], unsigned long a1, unsigned long long a2, char a3)
{
    char *v0;  // [sp-0x158]
    unsigned long long v1;  // [sp-0x150]
    struct struct_0 **v2;  // [sp-0x148]
    unsigned long long v3;  // [sp-0x140]
    void* v4;  // [sp-0x138]
    struct struct_0 **v5;  // [sp-0x128]
    unsigned long long v6;  // [sp-0x120]
    char *v7;  // [sp-0x118], Other Possible Types: unsigned long long
    unsigned long long v8;  // [sp-0x110]
    unsigned long long v9;  // [sp-0x100]
    struct struct_0 **v10;  // [sp-0xf8]
    unsigned long long v11;  // [sp-0xe8]
    char v12;  // [bp-0xe0]
    char v13;  // [bp-0xd0]
    char v14;  // [bp-0xc8]
    unsigned long v15;  // [sp-0xc0], Other Possible Types: unsigned long long
    unsigned long v16;  // [sp-0xb8], Other Possible Types: unsigned long long
    unsigned long long v17;  // [sp-0xb0]
    struct struct_1 **v18;  // [sp-0xa8], Other Possible Types: unsigned long long
    struct struct_0 **v19;  // [sp-0xa0], Other Possible Types: unsigned long long
    void* v20;  // [sp-0x98]
    char v21;  // [bp-0x70]
    char v22;  // [bp-0x68]
    char v23;  // [bp-0x60]
    struct struct_0 **v24;  // [sp-0x58]
    unsigned long long v25;  // [sp-0x50]
    char v26;  // [bp-0x48]
    char v27;  // [bp-0x38]
    unsigned long long v29;  // rax
    int v30;  // ymm0
    struct struct_0 **v31;  // xmm0
    int v32;  // ymm0
    struct struct_0 **v33;  // xmm0
    struct struct_0 **v34;  // xmm0
    unsigned long long v35;  // rsi
    unsigned long long v36;  // r13
    unsigned long long v37;  // rbp

    v15 = a1;
    v0 = &v15;
    v1 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::ha64c5baa0b7eb683;
    v16 = &g_58adc0;
    v17 = 2;
    v20 = 0;
    v18 = &v0;
    v19 = 1;
    v29 = std::io::Write::write_fmt::h3e05af1c32146a29(a0, &v16);
    if (v29)
    {
        ::0x4a2350::core::ptr::drop_in_place$LT$alloc..collections..btree..map..BTreeMap$LT$num_bigint..biguint..BigUint$C$usize$GT$$GT$::hc741dac43ddbe340(a2);
        return v29;
    }
    ::0x4a21c0::_$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h67a909a576bf9886(&v16, a2);
    if (a3)
    {
        while (true)
        {
            _$LT$alloc..collections..btree..map..IntoIter$LT$K$C$V$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0f3bdc940177747e(&v12, &v16);
            if (*((long long *)&v12) == 0x8000000000000000)
                break;
            v11 = *((long long *)&v13);
            v31 = *((int128_t *)&v12);
            v30 = v30 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v31;
            v10 = v31;
            v9 = *((long long *)&v14);
            if (v9 <= 1)
            {
                v5 = &v10;
                v6 = _$LT$num_bigint..biguint..BigUint$u20$as$u20$core..fmt..Display$GT$::fmt::h3b55b5376c9fe64d;
                v0 = &g_58ae00;
                v1 = 1;
                v4 = 0;
                v2 = &v5;
                v3 = 1;
                v29 = std::io::Write::write_fmt::h3e05af1c32146a29(a0, &v0);
            }
            else
            {
                v5 = &v10;
                v6 = _$LT$num_bigint..biguint..BigUint$u20$as$u20$core..fmt..Display$GT$::fmt::h3b55b5376c9fe64d;
                v7 = &v9;
                v8 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
                v0 = &g_58ade0;
                v1 = 2;
                v4 = 0;
                v2 = &v5;
                v3 = 2;
                v29 = std::io::Write::write_fmt::h3e05af1c32146a29(a0, &v0);
            }
            if (v29)
            {
                ::0x4a2500::core::ptr::drop_in_place$LT$num_bigint..biguint..BigUint$GT$::hcd1b174757cb0819(&v10);
                ::0x4a2360::core::ptr::drop_in_place$LT$alloc..collections..btree..map..IntoIter$LT$num_bigint..biguint..BigUint$C$usize$GT$$GT$::h58b1d517ade24c2d(&v16);
                return v29;
            }
            ::0x4a2500::core::ptr::drop_in_place$LT$num_bigint..biguint..BigUint$GT$::hcd1b174757cb0819(&v10);
        }
    }
    else
    {
        while (true)
        {
            _$LT$alloc..collections..btree..map..IntoIter$LT$K$C$V$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0f3bdc940177747e(&v12, &v16);
            if (*((long long *)&v12) == 0x8000000000000000)
                break;
            v11 = *((long long *)&v13);
            v33 = *((int128_t *)&v12);
            v10 = v33;
            v9 = *((long long *)&v14);
            v24 = &v10;
            v25 = _$LT$num_bigint..biguint..BigUint$u20$as$u20$core..fmt..Display$GT$::fmt::h3b55b5376c9fe64d;
            v0 = &g_58ae00;
            v1 = 1;
            v4 = 0;
            v2 = &v24;
            v3 = 1;
            core::option::Option$LT$T$GT$::map_or_else::ha848903e8938f6fd(&v26, &v0);
            v34 = *((int128_t *)&v26);
            v32 = v32 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v33 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v34;
            v5 = v34;
            v7 = *((long long *)&v27);
            alloc::str::_$LT$impl$u20$str$GT$::repeat::h44a69ba09e43960a(&v21, v6, *((long long *)&v27), v9);
            v35 = *((long long *)&v22);
            v36 = *((long long *)&v23);
            v37 = a0[2];
            if (v36 < a0[0] - v37)
            {
                memcpy(a0[1] + v37, v35, v36);
                a0[2] = v37 + v36;
            }
            else
            {
                v29 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::h84c9340cd8b23129(a0, v35, v36);
                if (v29)
                {
                    ::0x4a2430::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h0c60f8fdd24455a3(&v21);
                    ::0x4a2430::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h0c60f8fdd24455a3(&v5);
                    ::0x4a2500::core::ptr::drop_in_place$LT$num_bigint..biguint..BigUint$GT$::hcd1b174757cb0819(&v10);
                    ::0x4a2360::core::ptr::drop_in_place$LT$alloc..collections..btree..map..IntoIter$LT$num_bigint..biguint..BigUint$C$usize$GT$$GT$::h58b1d517ade24c2d(&v16);
                    return v29;
                }
            }
            ::0x4a2430::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h0c60f8fdd24455a3(&v21);
            ::0x4a2430::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h0c60f8fdd24455a3(&v5);
            ::0x4a2500::core::ptr::drop_in_place$LT$num_bigint..biguint..BigUint$GT$::hcd1b174757cb0819(&v10);
        }
    }
    ::0x4a2360::core::ptr::drop_in_place$LT$alloc..collections..btree..map..IntoIter$LT$num_bigint..biguint..BigUint$C$usize$GT$$GT$::h58b1d517ade24c2d(&v16);
    v16 = &g_58ae10;
    v17 = 1;
    v18 = 8;
    *((int128_t *)&v19) = 0;
    v29 = std::io::Write::write_fmt::h3e05af1c32146a29(a0, &v16);
    if (!v29)
    {
        v29 = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::hea36ead84b054e88(a0);
        return v29;
    }
    return v29;
}
