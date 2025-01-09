long long uu_ls::display_grid::h3c5e157ceab431f0(struct_2 *a0, unsigned int a1, char a2, unsigned long long a3, char a4)
{
    char v0;  // [bp-0x150]
    char v1;  // [bp-0x148]
    char v2;  // [bp-0x140]
    struct struct_0 **v3;  // [bp-0x138]
    unsigned long long v4;  // [sp-0x130]
    unsigned long long v5;  // [sp-0x128]
    struct struct_0 **v6;  // [bp-0x118]
    unsigned long long v7;  // [sp-0x110]
    int v8;  // [bp-0x108], Other Possible Types: struct struct_0 **, unsigned long long
    unsigned long long v9;  // [sp-0x100]
    void* v10;  // [bp-0xf8], Other Possible Types: char
    struct struct_0 **v11;  // [sp-0xe8]
    unsigned long long v12;  // [sp-0xe0]
    struct struct_1 **v13;  // [sp-0xd8], Other Possible Types: unsigned long, unsigned long long
    struct struct_0 **v14;  // [sp-0xd0], Other Possible Types: unsigned long long
    void* v15;  // [sp-0xc8]
    struct struct_0 **v16;  // [sp-0x60]
    unsigned long long v17;  // [sp-0x58]
    char v18;  // [bp-0x50]
    unsigned long long v20;  // r14
    struct struct_0 **v21;  // xmm0
    struct struct_0 **v22;  // xmm0
    int v23;  // ymm0
    int v24;  // ymm0
    unsigned long long v25;  // rax
    struct struct_0 **v26;  // xmm0
    unsigned long long v27;  // rax
    unsigned long long v28;  // rax
    void* v29;  // rax
    unsigned long long v30;  // rax
    unsigned long long v31;  // rax
    unsigned long long v32;  // rax

    v20 = a1;
    if (!(unsigned short)v20)
    {
        v21 = *((int128_t *)&a0->field_0);
        *((uint128_t *)&v8) = a0->field_10;
        v6 = v21;
        _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hd7a5e426642ce2a7(&v0, &v6);
        if (*((long long *)&v0) == 0x8000000000000000)
        {
            ::0x51b3d0::core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$alloc..string..String$GT$$GT$::h7998da7d166a96bf(&v6);
        }
        else
        {
            v5 = *((long long *)&v2);
            v22 = *((int128_t *)&v0);
            v24 = (v23 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v21) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v22;
            v3 = v22;
            while (true)
            {
                v16 = &v3;
                v17 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                v11 = &g_423c10;
                v12 = 1;
                v15 = 0;
                v13 = &v16;
                v14 = 1;
                v25 = std::io::Write::write_fmt::h51abc44b465d2e67(a3, &v11);
                if (v25)
                {
                    v29 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v25);
                    ::0x51a6c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&v3);
                    ::0x51b3d0::core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$alloc..string..String$GT$$GT$::h7998da7d166a96bf(&v6);
                    return v29;
                }
                ::0x51a6c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&v3);
                _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hd7a5e426642ce2a7(&v0, &v6);
                if (*((long long *)&v0) == 0x8000000000000000)
                    break;
                v5 = *((long long *)&v2);
                v26 = *((int128_t *)&v0);
                v3 = v26;
                v11 = &g_612688;
                v12 = 1;
                v13 = 8;
                v24 = (v24 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v26) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
                *((uint128_t *)&v14) = 0;
                v27 = std::io::Write::write_fmt::h51abc44b465d2e67(a3, &v11);
                if (v27)
                {
                    v29 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v27);
                    ::0x51a6c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&v3);
                    ::0x51b3d0::core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$alloc..string..String$GT$$GT$::h7998da7d166a96bf(&v6);
                    return v29;
                }
            }
            ::0x51b3d0::core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$alloc..string..String$GT$$GT$::h7998da7d166a96bf(&v6);
            v11 = &g_6125b8;
            v12 = 1;
            v13 = 8;
            *((uint128_t *)&v14) = 0;
            v30 = std::io::Write::write_fmt::h51abc44b465d2e67(a3, &v11);
            if (!v30)
                return 0;
            v29 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v30);
            return v29;
        }
    }
    else
    {
        if (!a4)
        {
            core::iter::traits::iterator::Iterator::collect::hd9d48ed126578877(&v0);
        }
        else
        {
            core::iter::traits::iterator::Iterator::map::hb476dda254653927(&v18, a0);
            alloc::vec::in_place_collect::_$LT$impl$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$u20$for$u20$alloc..vec..Vec$LT$T$GT$$GT$::from_iter::h0bf662e477722034(&v0, &v18);
        }
        v11 = *((long long *)&v1);
        v12 = &v11[3 * *((long long *)&v2)];
        v28 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::any::h2bc0af22b69decc2(&v11);
        if ((char)v28)
        {
            ::0x51d030::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h09d6369a280ff05a(&v11, "\t?????????+bd-cannot access a Thread Local Storage value during or after destruction/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/std/src/thread/local.rs", 1);
            v31 = v13;
        }
        v5 = *((long long *)&v2);
        *((int128_t *)&v3) = *((int128_t *)&v0);
        v10 = a2;
        *((uint128_t *)&v6) = 0x28000000000000000;
        v8 = v31;
        v9 = v20 & 4294967295;
        term_grid::Grid$LT$T$GT$::new::he78d9ee35961568e(&v11, &v3, &v6);
        v3 = &v11;
        v4 = _$LT$term_grid..Grid$LT$T$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h7f040c401bf95897;
        v6 = &g_423c10;
        v7 = 1;
        v10 = 0;
        v8 = &v3;
        v9 = 1;
        v32 = std::io::Write::write_fmt::h51abc44b465d2e67(a3, &v6);
        if (v32)
        {
            v29 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v32);
            ::0x51aff0::core::ptr::drop_in_place$LT$term_grid..Grid$LT$alloc..string..String$GT$$GT$::he436f5c930c56467(&v11);
            return v29;
        }
        ::0x51aff0::core::ptr::drop_in_place$LT$term_grid..Grid$LT$alloc..string..String$GT$$GT$::he436f5c930c56467(&v11);
    }
    return 0;
}
