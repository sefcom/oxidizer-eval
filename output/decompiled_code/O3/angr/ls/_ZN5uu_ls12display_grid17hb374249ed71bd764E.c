long long uu_ls::display_grid::hb374249ed71bd764(uint128_t a0[2], unsigned int a1, unsigned long long a2, unsigned long long a3, char a4)
{
    char v0;  // [bp-0x150]
    char v1;  // [bp-0x148]
    char v2;  // [bp-0x140]
    int v3;  // [bp-0x138], Other Possible Types: unsigned long long
    unsigned long long v4;  // [sp-0x130]
    unsigned long long v5;  // [sp-0x128]
    int v6;  // [bp-0x118], Other Possible Types: unsigned long long
    unsigned long long v7;  // [sp-0x110]
    int v8;  // [bp-0x108], Other Possible Types: unsigned long long
    unsigned long long v9;  // [sp-0x100]
    void* v10;  // [bp-0xf8], Other Possible Types: char
    unsigned long v11;  // [sp-0xe8], Other Possible Types: unsigned long long
    unsigned long long v12;  // [sp-0xe0]
    unsigned long v13;  // [sp-0xd8], Other Possible Types: unsigned long long
    int v14;  // [sp-0xd0], Other Possible Types: unsigned long long
    void* v15;  // [sp-0xc8]
    unsigned long v16;  // [sp-0x60], Other Possible Types: unsigned long long
    unsigned long long v17;  // [sp-0x58]
    char v18;  // [bp-0x50]
    unsigned long long v20;  // r14
    int v21;  // xmm0
    int v22;  // xmm0
    int v23;  // ymm0
    int v24;  // ymm0
    unsigned long long v25;  // rax
    int v26;  // xmm0
    unsigned long long v27;  // rax
    unsigned long long v28;  // rsi
    unsigned long long v29;  // rdx
    unsigned long long v30;  // rax
    void* v31;  // rax
    unsigned long long v32;  // rax
    unsigned long long v33;  // rax
    unsigned long long v34;  // rax

    v20 = a1;
    if (!(unsigned short)v20)
    {
        v21 = a0[0];
        *((uint128_t *)&v8) = a0[1];
        v6 = v21;
        _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h35b4920fdc533a83(&v0, &v6);
        if (*((long long *)&v0) == 0x8000000000000000)
        {
            ::0x51b3b0::core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$alloc..string..String$GT$$GT$::hf05f5ae80a28809f(&v6);
        }
        else
        {
            v5 = *((long long *)&v2);
            v22 = *((int128_t *)&v0);
            v24 = v23 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v21 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v22;
            v3 = v22;
            while (true)
            {
                v16 = &v3;
                v17 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                v11 = &g_423d10;
                v12 = 1;
                v15 = 0;
                v13 = &v16;
                v14 = 1;
                v25 = std::io::Write::write_fmt::h9d32c17c2cadc496(a3, &v11);
                if (v25)
                {
                    v31 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he9f0d7c8a30f7b86(v25);
                    ::0x51a6a0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::he5e73301f69d5572(&v3);
                    ::0x51b3b0::core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$alloc..string..String$GT$$GT$::hf05f5ae80a28809f(&v6);
                    return v31;
                }
                ::0x51a6a0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::he5e73301f69d5572(&v3);
                _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h35b4920fdc533a83(&v0, &v6);
                if (*((long long *)&v0) == 0x8000000000000000)
                    break;
                v5 = *((long long *)&v2);
                v26 = *((int128_t *)&v0);
                v3 = v26;
                v11 = &g_612888;
                v12 = 1;
                v13 = 8;
                v24 = v24 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v26 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
                *((int128_t *)&v14) = 0;
                v27 = std::io::Write::write_fmt::h9d32c17c2cadc496(a3, &v11);
                if (v27)
                {
                    v31 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he9f0d7c8a30f7b86(v27);
                    ::0x51a6a0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::he5e73301f69d5572(&v3);
                    ::0x51b3b0::core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$alloc..string..String$GT$$GT$::hf05f5ae80a28809f(&v6);
                    return v31;
                }
            }
            ::0x51b3b0::core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$alloc..string..String$GT$$GT$::hf05f5ae80a28809f(&v6);
            v11 = &g_612788;
            v12 = 1;
            v13 = 8;
            *((int128_t *)&v14) = 0;
            v32 = std::io::Write::write_fmt::h9d32c17c2cadc496(a3, &v11);
            if (!v32)
                return 0;
            v31 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he9f0d7c8a30f7b86(v32);
            return v31;
        }
    }
    else
    {
        if (!a4)
        {
            core::iter::traits::iterator::Iterator::collect::hfe48113e9ac4e207(&v0, a0, a2);
        }
        else
        {
            core::iter::traits::iterator::Iterator::map::h7ce140a6011e9213(&v18, a0);
            alloc::vec::in_place_collect::_$LT$impl$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$u20$for$u20$alloc..vec..Vec$LT$T$GT$$GT$::from_iter::hfb0d4dd31742890a(&v0, &v18);
        }
        v11 = *((long long *)&v1);
        v12 = v11 + *((long long *)&v2) * 24;
        v30 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::any::ha04e664bbcd20d1f(&v11, v28, v29);
        if ((char)v30)
        {
            ::0x51d010::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h2d1b440b8b51b75c(&v11, "\t+bd-?????????cannot access a Thread Local Storage value during or after destruction/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/std/src/thread/local.rs", 1);
            v33 = v13;
        }
        v5 = *((long long *)&v2);
        *((int128_t *)&v3) = *((int128_t *)&v0);
        v10 = a2;
        *((int128_t *)&v6) = 0x28000000000000000;
        v8 = v33;
        v9 = v20 & 4294967295;
        term_grid::Grid$LT$T$GT$::new::hea0984c7b8bb37b6(&v11, &v3, &v6, v20 & 4294967295);
        v3 = &v11;
        v4 = _$LT$term_grid..Grid$LT$T$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h35bf0eb0c5d04007;
        v6 = &g_423d10;
        v7 = 1;
        v10 = 0;
        v8 = &v3;
        v9 = 1;
        v34 = std::io::Write::write_fmt::h9d32c17c2cadc496(a3, &v6);
        if (v34)
        {
            v31 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he9f0d7c8a30f7b86(v34);
            ::0x51afd0::core::ptr::drop_in_place$LT$term_grid..Grid$LT$alloc..string..String$GT$$GT$::h0cff197f5b251e68(&v11);
            return v31;
        }
        ::0x51afd0::core::ptr::drop_in_place$LT$term_grid..Grid$LT$alloc..string..String$GT$$GT$::h0cff197f5b251e68(&v11);
    }
    return 0;
}
