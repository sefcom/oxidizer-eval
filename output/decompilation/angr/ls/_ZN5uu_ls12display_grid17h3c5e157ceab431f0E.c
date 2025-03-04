long long uu_ls::display_grid::h3c5e157ceab431f0(struct_1 *a0, unsigned int a1, char a2, unsigned long long a3, char a4)
{
    char v0;  // [sp-0x150]
    char v1;  // [bp-0x148]
    char v2;  // [bp-0x140]
    struct struct_0 **v3;  // [bp-0x138]
    struct struct_0 **v4;  // [bp-0x138]
    unsigned long long v5;  // [sp-0x130]
    unsigned long long v6;  // [sp-0x128]
    struct struct_0 **v7;  // [bp-0x118]
    unsigned long long v8;  // [sp-0x110]
    int v9;  // [bp-0x108], Other Possible Types: struct struct_0 **, unsigned long long
    unsigned long long v10;  // [sp-0x100]
    void* v11;  // [bp-0xf8], Other Possible Types: char
    struct struct_0 **v12;  // [sp-0xe8]
    unsigned long long v13;  // [sp-0xe0]
    struct struct_2 **v14;  // [sp-0xd8], Other Possible Types: unsigned long, unsigned long long
    struct struct_0 **v15;  // [sp-0xd0]
    void* v16;  // [sp-0xc8]
    struct struct_0 **v17;  // [sp-0x60]
    unsigned long long v18;  // [sp-0x58]
    char v19;  // [bp-0x50]
    unsigned long long v21;  // r14
    struct struct_0 **v22;  // xmm0
    struct struct_0 **v23;  // xmm0
    int v24;  // ymm0
    int v25;  // ymm0
    unsigned long long v26;  // rax
    struct struct_0 **v27;  // xmm0
    unsigned long long v28;  // rax
    unsigned long long v29;  // rax
    unsigned long long v30;  // rax
    unsigned long long v31;  // rax
    void* v32;  // rbx
    unsigned long long v33;  // rax

    v21 = a1;
    if (!(unsigned short)v21)
    {
        v22 = *((int128_t *)&a0->field_0);
        *((uint128_t *)&v9) = a0->field_10;
        v7 = v22;
        _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hd7a5e426642ce2a7(&v0, &v7);
        if (*((long long *)&v0) == 0x8000000000000000)
        {
            ::0x51b3d0::core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$alloc..string..String$GT$$GT$::h7998da7d166a96bf(&v7);
        }
        else
        {
            v6 = *((long long *)&v2);
            v23 = *((int128_t *)&v0);
            v25 = (v24 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v22) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v23;
            v4 = v23;
            while (true)
            {
                v17 = &v4;
                v18 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                v12 = &g_423c10;
                v13 = 1;
                v16 = 0;
                v14 = &v17;
                v15 = 1;
                v26 = std::io::Write::write_fmt::h51abc44b465d2e67(a3, &v12);
                if (v26)
                {
                    v30 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v26);
                    ::0x51a6c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&v4);
                    ::0x51b3d0::core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$alloc..string..String$GT$$GT$::h7998da7d166a96bf(&v7);
                    return v32;
                }
                ::0x51a6c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&v4);
                _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hd7a5e426642ce2a7(&v0, &v7);
                if (*((long long *)&v0) == 0x8000000000000000)
                    break;
                v6 = *((long long *)&v2);
                v27 = *((int128_t *)&v0);
                v4 = v27;
                v12 = &g_612688;
                v13 = 1;
                v14 = 8;
                v25 = (v25 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v27) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
                *((uint128_t *)&v15) = 0;
                v28 = std::io::Write::write_fmt::h51abc44b465d2e67(a3, &v12);
                if (v28)
                {
                    v30 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v28);
                    v32 = v30;
                    ::0x51a6c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&v4);
                    ::0x51b3d0::core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$alloc..string..String$GT$$GT$::h7998da7d166a96bf(&v7);
                    return v32;
                }
            }
            ::0x51b3d0::core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$alloc..string..String$GT$$GT$::h7998da7d166a96bf(&v7);
            v12 = &g_6125b8;
            v13 = 1;
            v14 = 8;
            *((uint128_t *)&v15) = 0;
            v31 = std::io::Write::write_fmt::h51abc44b465d2e67(a3, &v12);
            if (!v31)
                return 0;
            v32 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v31);
            return v32;
        }
    }
    else
    {
        if (!a4)
        {
            core::iter::traits::iterator::Iterator::collect::hd9d48ed126578877(&v0, a0);
        }
        else
        {
            core::iter::traits::iterator::Iterator::map::hb476dda254653927(&v19, a0);
            alloc::vec::in_place_collect::_$LT$impl$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$u20$for$u20$alloc..vec..Vec$LT$T$GT$$GT$::from_iter::h0bf662e477722034(&v0, &v19);
        }
        v12 = *((long long *)&v1);
        v13 = &v12[3 * *((long long *)&v2)];
        v29 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::any::h2bc0af22b69decc2(&v12);
        if ((char)v29)
        {
            ::0x51d030::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h09d6369a280ff05a(&v12, "\t?????????+bd-cannot access a Thread Local Storage value during or after destruction/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/std/src/thread/local.rs", 1);
            v29 = v14;
        }
        v6 = *((long long *)&v2);
        *((int128_t *)&v3) = *((int128_t *)&v0);
        v11 = a2;
        *((uint128_t *)&v7) = 0x28000000000000000;
        v9 = v29;
        v10 = v21 & 4294967295;
        term_grid::Grid$LT$T$GT$::new::he78d9ee35961568e(&v12, &v4, &v7);
        v3 = &v12;
        v5 = _$LT$term_grid..Grid$LT$T$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h7f040c401bf95897;
        v7 = &g_423c10;
        v8 = 1;
        v11 = 0;
        v9 = &v4;
        v10 = 1;
        v33 = std::io::Write::write_fmt::h51abc44b465d2e67(a3, &v7);
        if (v33)
        {
            v32 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v33);
            ::0x51aff0::core::ptr::drop_in_place$LT$term_grid..Grid$LT$alloc..string..String$GT$$GT$::he436f5c930c56467(&v12);
            return v32;
        }
        ::0x51aff0::core::ptr::drop_in_place$LT$term_grid..Grid$LT$alloc..string..String$GT$$GT$::he436f5c930c56467(&v12);
    }
    return 0;
}
