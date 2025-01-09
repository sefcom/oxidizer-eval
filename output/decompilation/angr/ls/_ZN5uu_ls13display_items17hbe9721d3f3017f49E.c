long long uu_ls::display_items::hbe9721d3f3017f49(struct struct_0 **a0, unsigned long long a1, struct_2 *a2, unsigned long long a3, unsigned long a4, struct_3 *a5)
{
    unsigned long long v0;  // [bp-0x1e8], Other Possible Types: unsigned int
    char v1;  // [bp-0x1c4], Other Possible Types: unsigned int
    struct_2 *v2;  // [sp-0x1c0], Other Possible Types: unsigned long long
    struct struct_0 **v3;  // [bp-0x1b8]
    unsigned long long v4;  // [sp-0x1b0]
    struct struct_1 **v5;  // [sp-0x1a8], Other Possible Types: struct struct_0 **
    unsigned long long v6;  // [sp-0x1a0]
    void* v7;  // [sp-0x198]
    struct struct_0 **v8;  // [sp-0x188]
    unsigned long long v9;  // [sp-0x180]
    struct struct_0 **v10;  // [sp-0x178], Other Possible Types: unsigned long long
    unsigned long long v11;  // [sp-0x170]
    unsigned long long v12;  // [sp-0x158]
    struct struct_0 **v13;  // [sp-0x148]
    unsigned long long v14;  // [sp-0x140]
    struct struct_0 **v15;  // [bp-0x138]
    struct struct_0 **v16;  // [sp-0x128]
    unsigned long long v17;  // [sp-0x120]
    struct struct_0 **v18;  // [sp-0x118], Other Possible Types: unsigned long long
    struct struct_0 **v19;  // [bp-0x108]
    struct struct_0 **v20;  // [sp-0x100]
    unsigned long long v21;  // [sp-0xf8]
    char v22;  // [bp-0xf0]
    struct struct_0 **v23;  // [bp-0xe0], Other Possible Types: unsigned long
    unsigned long long v24;  // [sp-0xd8]
    char v25;  // [bp-0xd0]
    void* v26;  // [sp-0xc8]
    unsigned long long v27;  // [sp-0xc0]
    void* v28;  // [sp-0xb8]
    unsigned long long v29;  // [sp-0xb0]
    struct struct_0 **v30;  // [sp-0xa8]
    unsigned long long v31;  // [sp-0xa0]
    char v32;  // [bp-0x68]
    struct struct_0 **v33;  // [sp-0x60]
    unsigned long long v34;  // [sp-0x58]
    struct struct_0 **v35;  // [sp-0x50]
    char v36;  // [bp-0x48]
    unsigned long long v37;  // [sp-0x18]
    unsigned long v39;  // r14
    struct struct_0 **v40;  // r12
    unsigned long long v41;  // r14
    struct struct_0 **v42;  // ecx
    struct_4 *v43;  // rax
    struct struct_0 **v45;  // r14
    unsigned long long v46;  // r15
    unsigned long long v47;  // rbp
    unsigned long long v48;  // rax
    void* v49;  // rax
    unsigned long long v50;  // rax
    unsigned long long v51;  // rax
    unsigned long long v52;  // r13
    unsigned long long v53;  // rax
    struct_2 *v55;  // r12
    unsigned long long v56;  // rax
    struct_2 *v57;  // r12
    struct struct_0 **v58;  // eax
    struct struct_0 **v59;  // xmm0
    unsigned long long v60;  // rsi
    unsigned long long v61;  // r8
    unsigned long long v62;  // rdx
    struct struct_0 **v63;  // xmm0
    struct struct_0 **v64;  // xmm0
    int v65;  // ymm0
    int v66;  // ymm0
    void* v67;  // rbp
    struct struct_0 **v68;  // xmm0
    int v69;  // ymm0
    unsigned long long v71;  // rax
    struct struct_0 **v72;  // xmm0
    unsigned long long v73;  // rax
    struct struct_0 **v75;  // xmm0
    int v76;  // ymm0
    struct_2 *v77;  // r12
    unsigned short v78;  // bx
    unsigned long long v79;  // rbp
    struct struct_0 **v80;  // xmm0
    unsigned int v81;  // r12d
    unsigned long long v82;  // rax
    unsigned long long v83;  // rax
    unsigned long long v84;  // rax

    v37 = v39;
    v12 = a4;
    v40 = a0;
    v41 = &a0[38 * a1];
    v30 = a0;
    v31 = v41;
    v42 = a2->field_f8;
    v2 = a2;
    v1 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::any::h09eed60290850493(&v30, a2);
    if (v42 != 1)
    {
        v19 = v42;
        if (!v2->field_eb)
        {
            v12 = 0;
        }
        else
        {
            v30 = v40;
            v31 = v41;
            v43 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hb7b65ed0162d4d31(&v30);
            v12 = 1;
            v47 = 1;
            if (v43)
            {
                do
                {
                    v47 = ::0x519cb0::core::cmp::max_by::h7ee1a79e2ed707c0(v43->field_40, v47);
                    v43 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hb7b65ed0162d4d31(&v30);
                } while (v43);
            }
        }
        v52 = a3;
        uu_ls::calculate_padding_collection::h885b95310ac7cc45(&v30, v40, a1, v2, v52);
        if (a5->field_1d != 2)
        {
            uu_ls::colors::StyleManager::apply_normal::h404909a10cb94e2b(&v8, a5);
            v13 = &v8;
            v14 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            v3 = &g_423c10;
            v4 = 1;
            v7 = 0;
            v5 = &v13;
            v6 = 1;
            v53 = std::io::Write::write_fmt::h51abc44b465d2e67(v52, &v3);
            if (v53)
            {
                v49 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v53);
                ::0x51a6c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&v8);
                return v49;
            }
            ::0x51a6c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&v8);
        }
        v26 = 0;
        v27 = 8;
        v28 = 0;
        v8 = v40;
        v9 = v41;
        v2 = v2;
        while (true)
        {
            v55 = v2;
            v56 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hb7b65ed0162d4d31(&v8);
            if (!v56)
                break;
            uu_ls::display_additional_leading_info::hdfeacb5163c0e10b(&v3, v56, v30, *((long long *)&v32), v55, v52);
            v49 = v4;
            if (v33 == 0x8000000000000000)
            {
                ::0x51afa0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::hbaa87f9dbd448729(&v26);
                return v49;
            }
            v33 = v3;
            v34 = v49;
            v35 = v5;
            v52 = a3;
            v0 = v52;
            v57 = v2;
            uu_ls::display_item_name::h2be516ffa591d327(&v36, v56, v57, v12, v47, &v33, v0, a5, 0);
            alloc::vec::Vec$LT$T$C$A$GT$::push::h8719a5ff12332ceb(&v26, &v36);
        }
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h2fdd1c99928f9068(&v20, &v26);
        switch (v58)
        {
        case 0:
            v59 = *((int128_t *)&v20);
            *((int128_t *)&v5) = *((int128_t *)&v22);
            v3 = v59;
            v60 = *((int *)&v55->field_e4);
            v61 = v1;
            v62 = 1;
            goto LABEL_529afc;
        case 3:
            v63 = *((int128_t *)&v20);
            *((int128_t *)&v5) = *((int128_t *)&v22);
            v3 = v63;
            v60 = *((int *)&v55->field_e4);
            v61 = v1;
            v62 = 0;
LABEL_529afc:
            v49 = uu_ls::display_grid::h3c5e157ceab431f0(&v3, v60, v62, v52, v61);
            if (v49)
            {
LABEL_529b0d:
                return v49;
            }
        case 4:
            _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hd7a5e426642ce2a7(&v13, &v20);
            if (v13 == 0x8000000000000000)
            {
                v67 = 0;
                break;
            }
            else
            {
                v10 = v15;
                v68 = *((int128_t *)&v13);
                v8 = v68;
                v16 = &v8;
                v17 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                v3 = &g_423c10;
                v4 = 1;
                v7 = 0;
                v5 = &v16;
                v6 = 1;
                v71 = std::io::Write::write_fmt::h51abc44b465d2e67(v52, &v3);
                if (v71)
                {
                    v49 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v71);
                    ::0x51a6c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&v8);
                    ::0x51b3d0::core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$alloc..string..String$GT$$GT$::h7998da7d166a96bf(&v20);
                    return v49;
                }
                ::0x51a6c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&v8);
                v67 = (int)ansi_width::ansi_width::h2f2b875c576f64e5(v9, v10) + 2;
                break;
            }
            v75 = *((int128_t *)&v20);
            v76 = (v69 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v68) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v75;
            *((int128_t *)&v10) = *((int128_t *)&v22);
            v8 = v75;
            _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hd7a5e426642ce2a7(&v16, &v8);
            if (v16 != 0x8000000000000000)
            {
                v78 = v55->field_e4;
                do
                {
                    v80 = *((int128_t *)&v16);
                    v76 = v76 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v80;
                    v13 = v80;
                    v15 = v18;
                    v81 = ansi_width::ansi_width::h2f2b875c576f64e5(v14, v18);
                    if (v78 && ((unsigned int)(v81 + v79) + 1 & 65535) * 0x1000000000000 > v78 * 0x1000000000000)
                    {
                        v23 = &v13;
                        v24 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                        v3 = &g_612650;
                        v4 = 1;
                        v7 = 0;
                        v5 = &v23;
                        v6 = 1;
                        v82 = std::io::Write::write_fmt::h51abc44b465d2e67(a3, &v3);
                        if (v82)
                        {
                            v49 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v82);
                        }
                        else
                        {
                            v67 = v81 + 2;
                            continue;
                        }
                        goto LABEL_529f99;
                    }
                    else
                    {
                        v23 = &v13;
                        v24 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                        v3 = &g_612660;
                        v4 = 1;
                        v7 = 0;
                        v5 = &v23;
                        v6 = 1;
                        v83 = std::io::Write::write_fmt::h51abc44b465d2e67(a3, &v3);
                        if (v83)
                        {
                            v49 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v83);
LABEL_529f99:
                            ::0x51a6c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&v13);
                            ::0x51b3d0::core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$alloc..string..String$GT$$GT$::h7998da7d166a96bf(&v8);
                            return v49;
                        }
                        v67 = (unsigned int)(v79 + v81) + 2;
                    }
                    ::0x51a6c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&v13);
                    _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hd7a5e426642ce2a7(&v16, &v8);
                    v77 = v2;
                } while (v16 != 0x8000000000000000);
            }
            ::0x51b3d0::core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$alloc..string..String$GT$$GT$::h7998da7d166a96bf(&v8);
            if ((unsigned short)v67)
            {
                v8 = &v77[1].padding_0[1];
                v9 = _$LT$uucore..mods..line_ending..LineEnding$u20$as$u20$core..fmt..Display$GT$::fmt::h6643b2132dca5a5b;
                v3 = &g_423c10;
                v4 = 1;
                v7 = 0;
                v5 = &v8;
                v6 = 1;
                v84 = std::io::Write::write_fmt::h51abc44b465d2e67(a3, &v3);
                if (v84)
                {
                    v49 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v84);
                    return v49;
                }
            }
        default:
            v64 = *((int128_t *)&v20);
            v66 = v65 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v64;
            *((int128_t *)&v15) = *((int128_t *)&v22);
            v13 = v64;
            _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hd7a5e426642ce2a7(&v23, &v13);
            if (v23 != 0x8000000000000000)
            {
                v2 = &v2[1].padding_0[1];
                do
                {
                    v18 = *((long long *)&v25);
                    v72 = *((int128_t *)&v23);
                    v66 = v66 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v72;
                    v16 = v72;
                    v8 = &v16;
                    v9 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                    v10 = v2;
                    v11 = _$LT$uucore..mods..line_ending..LineEnding$u20$as$u20$core..fmt..Display$GT$::fmt::h6643b2132dca5a5b;
                    v3 = &g_428c70;
                    v4 = 2;
                    v7 = 0;
                    v5 = &v8;
                    v6 = 2;
                    v73 = std::io::Write::write_fmt::h51abc44b465d2e67(a3, &v3);
                    if (v73)
                    {
                        v49 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v73);
                        ::0x51a6c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&v16);
                        ::0x51b3d0::core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$alloc..string..String$GT$$GT$::h7998da7d166a96bf(&v13);
                        return v49;
                    }
                    ::0x51a6c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&v16);
                    _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hd7a5e426642ce2a7(&v23, &v13);
                } while (v23 != 0x8000000000000000);
            }
            ::0x51b3d0::core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$alloc..string..String$GT$$GT$::h7998da7d166a96bf(&v13);
            return 0;
        }
    }
    else
    {
        uu_ls::calculate_padding_collection::h885b95310ac7cc45(&v30, v40, a1, v2, a3);
        v20 = v40;
        v21 = v41;
        if (!v2->field_e9 && !v2->field_ea)
        {
            while (true)
            {
                v48 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hb7b65ed0162d4d31(&v20);
                if (!v48)
                    break;
                v0 = v1;
                v49 = uu_ls::display_item_long::he4defe602b238d5a(v48, &v30, v2, a3, v12, a5);
                if (v49)
                    return v49;
            }
        }
        else
        {
            v19 = v30;
            v29 = *((long long *)&v32);
            v45 = &v3;
            v1 = v1;
            v46 = a3;
            do
            {
                v50 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hb7b65ed0162d4d31(&v20);
                if (!v50)
                    return 0;
                uu_ls::display_additional_leading_info::hdfeacb5163c0e10b(v45, v50, v19, v29, v2, v46);
                v49 = v4;
                if (v8 == 0x8000000000000000)
                    return v49;
                v8 = v3;
                v9 = v49;
                v10 = v5;
                v13 = &v8;
                v14 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                v3 = &g_423c10;
                v4 = 1;
                v7 = 0;
                v5 = &v13;
                v6 = 1;
                v51 = std::io::Write::write_fmt::h51abc44b465d2e67(v46, v45);
                if (v51)
                {
                    v49 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v51);
                    ::0x51a6c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&v8);
                    return v49;
                }
                ::0x51a6c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&v8);
                v0 = v1;
                v49 = uu_ls::display_item_long::he4defe602b238d5a(v50, &v30, v2, v46, v12, a5);
            } while (!v49);
            goto LABEL_529b0d;
        }
    }
    return 0;
}
