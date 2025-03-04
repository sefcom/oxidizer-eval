long long uu_ls::display_items::hbe9721d3f3017f49(struct struct_0 **a0, unsigned long long a1, struct_3 *a2, unsigned long long a3, unsigned long a4, struct_2 *a5)
{
    unsigned long v0;  // [bp-0x1e8], Other Possible Types: unsigned int
    char v1;  // [bp-0x1c4], Other Possible Types: unsigned int
    struct struct_0 **v2;  // [sp-0x1c0], Other Possible Types: struct_3 *
    struct struct_0 **v3;  // [sp-0x1b8]
    struct struct_0 **v4;  // [bp-0x1b8]
    unsigned long long v5;  // [sp-0x1b0]
    struct struct_1 **v6;  // [sp-0x1a8], Other Possible Types: struct struct_0 **
    unsigned long long v7;  // [sp-0x1a0]
    void* v8;  // [sp-0x198]
    struct struct_0 **v9;  // [sp-0x188]
    struct struct_0 **v10;  // [sp-0x188]
    unsigned long long v11;  // [sp-0x180]
    struct struct_0 **v12;  // [sp-0x178], Other Possible Types: unsigned long long
    unsigned long long v13;  // [sp-0x170]
    unsigned long long v14;  // [sp-0x158]
    struct struct_0 **v15;  // [bp-0x148]
    unsigned long long v16;  // [sp-0x140]
    struct struct_0 **v17;  // [bp-0x138], Other Possible Types: unsigned long
    struct struct_0 **v18;  // [sp-0x128]
    unsigned long long v19;  // [sp-0x120]
    unsigned long v20;  // [sp-0x118], Other Possible Types: unsigned long long
    struct struct_0 **v21;  // [bp-0x108]
    struct struct_0 **v22;  // [sp-0x100]
    unsigned long long v23;  // [sp-0xf8]
    char v24;  // [bp-0xf0]
    struct struct_0 **v25;  // [sp-0xe0], Other Possible Types: unsigned long
    unsigned long long v26;  // [sp-0xd8]
    char v27;  // [bp-0xd0]
    void* v28;  // [sp-0xc8]
    unsigned long long v29;  // [sp-0xc0]
    void* v30;  // [sp-0xb8]
    unsigned long long v31;  // [sp-0xb0]
    struct struct_0 **v32;  // [sp-0xa8]
    unsigned long long v33;  // [sp-0xa0]
    char v34;  // [bp-0x68]
    struct struct_0 **v35;  // [sp-0x60]
    unsigned long long v36;  // [sp-0x58]
    struct struct_0 **v37;  // [sp-0x50]
    char v38;  // [bp-0x48]
    unsigned long long v39;  // [sp-0x18]
    unsigned long v41;  // r14
    unsigned long long v42;  // r14
    struct struct_0 **v43;  // ecx
    struct_4 *v44;  // rax
    struct struct_0 **v46;  // r14
    unsigned long long v47;  // r15
    unsigned long long v48;  // rbp
    unsigned long long v49;  // rax
    unsigned long long v50;  // rax
    unsigned long long v51;  // rax
    void* v52;  // r12
    unsigned long long v53;  // rax
    unsigned long long v54;  // rax
    unsigned long long v55;  // r13
    unsigned long long v56;  // rax
    struct_3 *v58;  // r12
    unsigned long long v59;  // rax
    struct struct_0 **v60;  // eax
    struct struct_0 **v61;  // xmm0
    unsigned long long v62;  // rsi
    unsigned long long v63;  // r8
    unsigned long long v64;  // rdx
    struct struct_0 **v65;  // xmm0
    struct struct_0 **v66;  // xmm0
    int v67;  // ymm0
    int v68;  // ymm0
    void* v69;  // rbp, Other Possible Types: unsigned long long
    struct struct_0 **v70;  // xmm0
    int v71;  // ymm0
    unsigned long long v73;  // rax
    struct struct_0 **v74;  // xmm0
    unsigned long long v75;  // rax
    struct struct_0 **v77;  // xmm0
    int v78;  // ymm0
    unsigned short v79;  // bx
    struct struct_0 **v80;  // xmm0
    unsigned int v81;  // r12d
    unsigned long long v82;  // rax
    unsigned long long v83;  // rax
    unsigned long long v84;  // rax
    unsigned long long v85;  // rax

    v39 = v41;
    v14 = a4;
    v42 = &a0[38 * a1];
    v32 = a0;
    v33 = v42;
    v43 = a2->field_f8;
    v2 = a2;
    v1 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::any::h09eed60290850493(&v32, a2);
    if (v43 != 1)
    {
        v21 = v43;
        if (!a2->field_eb)
        {
            v14 = 0;
        }
        else
        {
            v32 = a0;
            v33 = v42;
            v44 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hb7b65ed0162d4d31(&v32);
            v14 = 1;
            v48 = 1;
            if (v44)
            {
                do
                {
                    v48 = ::0x519cb0::core::cmp::max_by::h7ee1a79e2ed707c0(v44->field_40, v48);
                    v44 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hb7b65ed0162d4d31(&v32);
                } while (v44);
            }
        }
        v55 = a3;
        uu_ls::calculate_padding_collection::h885b95310ac7cc45(&v32, a0, a1, v2, v55);
        if (a5->field_1d != 2)
        {
            uu_ls::colors::StyleManager::apply_normal::h404909a10cb94e2b(&v10, a5);
            v15 = &v10;
            v16 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            v3 = &g_423c10;
            v5 = 1;
            v8 = 0;
            v6 = &v15;
            v7 = 1;
            v56 = std::io::Write::write_fmt::h51abc44b465d2e67(v55, &v3);
            if (v56)
            {
                v54 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v56);
                v52 = v54;
                ::0x51a6c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&v10);
                return v52;
            }
            ::0x51a6c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&v10);
        }
        v28 = 0;
        v29 = 8;
        v30 = 0;
        v9 = a0;
        v11 = v42;
        v58 = v2;
        while (true)
        {
            v59 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hb7b65ed0162d4d31(&v10);
            if (!v59)
                break;
            uu_ls::display_additional_leading_info::hdfeacb5163c0e10b(&v3, v59, v32, *((long long *)&v34), v58, v55);
            v52 = v5;
            if (v35 == 0x8000000000000000)
            {
                ::0x51afa0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::hbaa87f9dbd448729(&v28);
                return v52;
            }
            v35 = v3;
            v36 = v52;
            v37 = v6;
            v55 = a3;
            v0 = v55;
            v58 = v2;
            uu_ls::display_item_name::h2be516ffa591d327(&v38, v59, v58, v14, v48, &v35, v0, a5, 0);
            alloc::vec::Vec$LT$T$C$A$GT$::push::h8719a5ff12332ceb(&v28, &v38);
        }
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h2fdd1c99928f9068(&v22, &v28);
        switch (v60)
        {
        case 0:
            v61 = *((int128_t *)&v22);
            *((int128_t *)&v6) = *((int128_t *)&v24);
            v4 = v61;
            v62 = *((int *)&v58->field_e4);
            v63 = v1;
            v64 = 1;
            goto LABEL_529afc;
        case 3:
            v65 = *((int128_t *)&v22);
            *((int128_t *)&v6) = *((int128_t *)&v24);
            v4 = v65;
            v62 = *((int *)&v58->field_e4);
            v63 = v1;
            v64 = 0;
LABEL_529afc:
            v50 = uu_ls::display_grid::h3c5e157ceab431f0(&v3, v62, v64, v55, v63);
            if (v50)
            {
LABEL_529b0d:
                v52 = v50;
                return v52;
            }
        case 4:
            _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hd7a5e426642ce2a7(&v15, &v22);
            if (v15 == 0x8000000000000000)
            {
                v69 = 0;
                break;
            }
            else
            {
                v12 = v17;
                v70 = *((int128_t *)&v15);
                v9 = v70;
                v18 = &v10;
                v19 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                v3 = &g_423c10;
                v5 = 1;
                v8 = 0;
                v6 = &v18;
                v7 = 1;
                v73 = std::io::Write::write_fmt::h51abc44b465d2e67(v55, &v3);
                if (v73)
                {
                    v52 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v73);
                    ::0x51a6c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&v10);
                    ::0x51b3d0::core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$alloc..string..String$GT$$GT$::h7998da7d166a96bf(&v22);
                    return v52;
                }
                ::0x51a6c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&v10);
                v69 = (int)ansi_width::ansi_width::h2f2b875c576f64e5(v11, v12) + 2;
                break;
            }
            v77 = *((int128_t *)&v22);
            v78 = (v71 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v70) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v77;
            *((int128_t *)&v12) = *((int128_t *)&v24);
            v9 = v77;
            _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hd7a5e426642ce2a7(&v18, &v10);
            if (v18 != 0x8000000000000000)
            {
                v79 = v58->field_e4;
                do
                {
                    v80 = *((int128_t *)&v18);
                    v78 = v78 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v80;
                    v15 = v80;
                    v17 = v20;
                    v81 = ansi_width::ansi_width::h2f2b875c576f64e5(v16, v20);
                    if (v79 && ((unsigned int)(v81 + v69) + 1 & 65535) * 0x1000000000000 > v79 * 0x1000000000000)
                    {
                        v25 = &v15;
                        v26 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                        v3 = &g_612650;
                        v5 = 1;
                        v8 = 0;
                        v6 = &v25;
                        v7 = 1;
                        v82 = std::io::Write::write_fmt::h51abc44b465d2e67(a3, &v3);
                        if (v82)
                        {
                            v84 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v82);
                        }
                        else
                        {
                            v69 = v81 + 2;
                            continue;
                        }
                        goto LABEL_529f99;
                    }
                    else
                    {
                        v25 = &v15;
                        v26 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                        v3 = &g_612660;
                        v5 = 1;
                        v8 = 0;
                        v6 = &v25;
                        v7 = 1;
                        v83 = std::io::Write::write_fmt::h51abc44b465d2e67(a3, &v3);
                        if (v83)
                        {
                            v84 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v83);
LABEL_529f99:
                            v52 = v84;
                            ::0x51a6c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&v15);
                            ::0x51b3d0::core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$alloc..string..String$GT$$GT$::h7998da7d166a96bf(&v10);
                            return v52;
                        }
                        v69 = (unsigned int)(v69 + v81) + 2;
                    }
                    ::0x51a6c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&v15);
                    v58 = v2;
                    _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hd7a5e426642ce2a7(&v18, &v10);
                } while (v18 != 0x8000000000000000);
            }
            ::0x51b3d0::core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$alloc..string..String$GT$$GT$::h7998da7d166a96bf(&v10);
            if ((unsigned short)v69)
            {
                v9 = &v58[1].padding_0[1];
                v11 = _$LT$uucore..mods..line_ending..LineEnding$u20$as$u20$core..fmt..Display$GT$::fmt::h6643b2132dca5a5b;
                v3 = &g_423c10;
                v5 = 1;
                v8 = 0;
                v6 = &v10;
                v7 = 1;
                v85 = std::io::Write::write_fmt::h51abc44b465d2e67(a3, &v3);
                if (v85)
                {
                    v50 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v85);
                    return v52;
                }
            }
        default:
            v66 = *((int128_t *)&v22);
            v68 = v67 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v66;
            *((int128_t *)&v17) = *((int128_t *)&v24);
            v15 = v66;
            _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hd7a5e426642ce2a7(&v25, &v15);
            if (v25 != 0x8000000000000000)
            {
                v2 = &v2[1].padding_0[1];
                do
                {
                    v20 = *((long long *)&v27);
                    v74 = *((int128_t *)&v25);
                    v68 = v68 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v74;
                    v18 = v74;
                    v9 = &v18;
                    v11 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                    v12 = v2;
                    v13 = _$LT$uucore..mods..line_ending..LineEnding$u20$as$u20$core..fmt..Display$GT$::fmt::h6643b2132dca5a5b;
                    v3 = &g_428c70;
                    v5 = 2;
                    v8 = 0;
                    v6 = &v10;
                    v7 = 2;
                    v75 = std::io::Write::write_fmt::h51abc44b465d2e67(a3, &v3);
                    if (v75)
                    {
                        v52 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v75);
                        ::0x51a6c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&v18);
                        ::0x51b3d0::core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$alloc..string..String$GT$$GT$::h7998da7d166a96bf(&v15);
                        return v52;
                    }
                    ::0x51a6c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&v18);
                    _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hd7a5e426642ce2a7(&v25, &v15);
                } while (v25 != 0x8000000000000000);
            }
            ::0x51b3d0::core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$alloc..string..String$GT$$GT$::h7998da7d166a96bf(&v15);
            return 0;
        }
    }
    else
    {
        uu_ls::calculate_padding_collection::h885b95310ac7cc45(&v32, a0, a1, a2, a3);
        v22 = a0;
        v23 = v42;
        if (!a2->field_e9 && !a2->field_ea)
        {
            while (true)
            {
                v49 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hb7b65ed0162d4d31(&v22);
                if (!v49)
                    break;
                v0 = v1;
                v50 = uu_ls::display_item_long::he4defe602b238d5a(v49, &v32, v2, a3, v14, a5);
                if (v50)
                    return v52;
            }
        }
        else
        {
            v21 = v32;
            v31 = *((long long *)&v34);
            v46 = &v3;
            v1 = v1;
            v47 = a3;
            do
            {
                v51 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hb7b65ed0162d4d31(&v22);
                if (!v51)
                    return 0;
                uu_ls::display_additional_leading_info::hdfeacb5163c0e10b(v46, v51, v21, v31, v2, v47);
                v52 = v5;
                if (v10 == 0x8000000000000000)
                    return v52;
                v10 = v3;
                v11 = v52;
                v12 = v6;
                v15 = &v10;
                v16 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                v3 = &g_423c10;
                v5 = 1;
                v8 = 0;
                v6 = &v15;
                v7 = 1;
                v53 = std::io::Write::write_fmt::h51abc44b465d2e67(v47, v46);
                if (v53)
                {
                    v54 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v53);
                    ::0x51a6c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&v10);
                    return v52;
                }
                ::0x51a6c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&v10);
                v0 = v1;
                v50 = uu_ls::display_item_long::he4defe602b238d5a(v51, &v32, v2, v47, v14, a5);
            } while (!v50);
            goto LABEL_529b0d;
        }
    }
    return 0;
}
