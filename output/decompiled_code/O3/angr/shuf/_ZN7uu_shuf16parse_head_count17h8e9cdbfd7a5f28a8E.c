long long uu_shuf::parse_head_count::h8e9cdbfd7a5f28a8(unsigned long long a0[3], unsigned long long a1)
{
    int v0;  // [sp-0x108]
    unsigned long long v1;  // [sp-0xf8]
    char v2;  // [bp-0xf0]
    char v3;  // [bp-0xe0]
    char v4;  // [bp-0xd8]
    char v5;  // [bp-0xd0]
    char *v6;  // [sp-0xc8]
    unsigned long long v7;  // [sp-0xc0]
    char v8;  // [bp-0xb8]
    char v9;  // [bp-0x98]
    char v10;  // [bp-0x88]
    unsigned long v11;  // [sp-0x80], Other Possible Types: unsigned long long
    unsigned long long v12;  // [sp-0x78]
    struct struct_0 **v13;  // [sp-0x70]
    unsigned long long v14;  // [sp-0x68]
    void* v15;  // [sp-0x60]
    void* v16;  // [sp-0x50]
    int v17;  // [sp-0x48]
    char v18;  // [sp-0x38]
    unsigned long long v20;  // r14
    int v21;  // ymm0
    int v22;  // xmm0
    unsigned long long v24[3];  // rcx

    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::hce8092579b78d193(&v8, a1);
    _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h500d15644f3f8d52(&v2, &v8);
    v20 = -1;
    if (*((long long *)&v2) != 0x8000000000000000)
    {
        do
        {
            v1 = *((long long *)&v3);
            v22 = *((int128_t *)&v2);
            v21 = v21 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v22;
            v0 = v22;
            core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$usize$GT$::from_str::h35e67cae0c0452a5(&v4, (long long)(&v0)[8], *((long long *)&v3));
            if (v4)
            {
                v16 = 0;
                *((int128_t *)&v17) = (int128_t)(&v0)[8];
                v18 = 1;
                v6 = &v16;
                v7 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                v11 = &g_537d48;
                v12 = 1;
                v15 = 0;
                v13 = &v6;
                v14 = 1;
                ::0x4c0370::core::option::Option$LT$T$GT$::map_or_else::h7c94a57f03ee0317(&v9, &v11);
                v24 = a0;
                v24[2] = *((long long *)&v10);
                *((int128_t *)&v24[0]) = *((int128_t *)&v9);
                ::0x4bf7d0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::heff478339c936245(&v0);
                core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$alloc..string..String$GT$$GT$::hd4042d487b460da7(&v8);
                return v24;
            }
            ::0x4bf7d0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::heff478339c936245(&v0);
            v20 = ::0x4bf570::core::cmp::min_by::h9901c89ba00e38af(v20, *((long long *)&v5));
            _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h500d15644f3f8d52(&v2, &v8);
        } while (*((long long *)&v2) != 0x8000000000000000);
    }
    core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$alloc..string..String$GT$$GT$::hd4042d487b460da7(&v8);
    v24 = a0;
    v24[1] = v20;
    v24[0] = 0x8000000000000000;
    return v24;
}
