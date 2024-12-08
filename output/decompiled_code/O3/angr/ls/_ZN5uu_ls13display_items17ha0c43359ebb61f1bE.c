long long uu_ls::display_items::ha0c43359ebb61f1b(unsigned long a0, unsigned long long a1, struct_0 *a2, unsigned long long a3, unsigned long a4, struct_1 *a5)
{
    unsigned long long v0;  // [bp-0x1e8], Other Possible Types: unsigned int
    char v1;  // [bp-0x1c4], Other Possible Types: unsigned int
    struct_0 *v2;  // [sp-0x1c0], Other Possible Types: unsigned long long
    int v3;  // [bp-0x1b8], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v4;  // [sp-0x1b0]
    int v5;  // [sp-0x1a8], Other Possible Types: unsigned long long
    unsigned long long v6;  // [sp-0x1a0]
    void* v7;  // [sp-0x198]
    int v8;  // [sp-0x188], Other Possible Types: char, unsigned long long
    unsigned long long v9;  // [sp-0x180]
    int v10;  // [sp-0x178], Other Possible Types: unsigned long long
    unsigned long long v11;  // [sp-0x170]
    unsigned long long v12;  // [sp-0x158]
    int v13;  // [sp-0x148], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v14;  // [sp-0x140]
    int v15;  // [bp-0x138], Other Possible Types: unsigned long
    int v16;  // [sp-0x128], Other Possible Types: unsigned long long, unsigned long
    unsigned long long v17;  // [sp-0x120]
    unsigned long v18;  // [sp-0x118], Other Possible Types: unsigned long long
    unsigned int v19;  // [bp-0x108], Other Possible Types: unsigned long long
    char v20;  // [sp-0x100], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v21;  // [sp-0xf8]
    char v22;  // [bp-0xf0]
    char v23;  // [bp-0xe0], Other Possible Types: unsigned long long, unsigned long
    unsigned long long v24;  // [sp-0xd8]
    char v25;  // [bp-0xd0]
    void* v26;  // [sp-0xc8]
    unsigned long long v27;  // [sp-0xc0]
    void* v28;  // [sp-0xb8]
    unsigned long long v29;  // [sp-0xb0]
    unsigned long v30;  // [sp-0xa8], Other Possible Types: unsigned long long
    unsigned long long v31;  // [sp-0xa0]
    char v32;  // [bp-0x68]
    unsigned long v33;  // [sp-0x60], Other Possible Types: unsigned long long
    unsigned long long v34;  // [sp-0x58]
    unsigned long long v35;  // [sp-0x50]
    char v36;  // [bp-0x48]
    unsigned long long v37;  // [sp-0x18]
    unsigned long v39;  // r14
    unsigned long long v40;  // r12
    unsigned long long v41;  // r14
    unsigned int v42;  // ecx
    struct_2 *v43;  // rax
    unsigned long long v45;  // r14
    unsigned long long v46;  // r15
    unsigned long long v47;  // rbp
    unsigned long long v48;  // rax
    void* v49;  // rax
    unsigned long long v50;  // rax
    unsigned long long v51;  // rax
    unsigned long long v52;  // r13
    unsigned long long v53;  // rax
    struct_0 *v55;  // r12
    unsigned long long v56;  // rax
    struct_0 *v57;  // r12
    unsigned int v58;  // eax
    int v59;  // xmm0
    unsigned long long v60;  // rsi
    unsigned long long v61;  // r8
    unsigned long long v62;  // rdx
    int v63;  // xmm0
    int v64;  // xmm0
    int v65;  // ymm0
    int v66;  // ymm0
    void* v67;  // rbp
    int v68;  // xmm0
    int v69;  // ymm0
    unsigned long long v71;  // rax
    int v72;  // xmm0
    unsigned long long v73;  // rax
    unsigned long long v74;  // rdx
    int v76;  // xmm0
    int v77;  // ymm0
    struct_0 *v78;  // r12
    unsigned long long v79;  // rbx
    unsigned long long v80;  // rbp
    int v81;  // xmm0
    unsigned int v82;  // r12d
    unsigned long long v83;  // rax
    unsigned long long v84;  // rax
    unsigned long long v85;  // rax

    v37 = v39;
    v12 = a4;
    v40 = a0;
    v41 = a1 * 304 + a0;
    v30 = a0;
    v31 = v41;
    v42 = a2->field_f8;
    v2 = a2;
    v1 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::any::h40adf248fe0d6c2c(&v30, a2);
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
            v43 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h6626b1412d983560(&v30);
            v12 = 1;
            v47 = 1;
            if (v43)
            {
                do
                {
                    v47 = ::0x519c90::core::cmp::max_by::h44cff0f2ef2b93bc(v43->field_40, v47);
                    v43 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h6626b1412d983560(&v30);
                } while (v43);
            }
        }
        v52 = a3;
        uu_ls::calculate_padding_collection::h218758ae4902ad8b(&v30, v40, a1, v2, v52);
        if (a5->field_1d != 2)
        {
            uu_ls::colors::StyleManager::apply_normal::h5da694d49000c72d(&v8, a5);
            v13 = &v8;
            v14 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            v3 = &g_423d10;
            v4 = 1;
            v7 = 0;
            v5 = &v13;
            v6 = 1;
            v53 = std::io::Write::write_fmt::h9d32c17c2cadc496(v52, &v3);
            if (v53)
            {
                v49 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he9f0d7c8a30f7b86(v53);
                ::0x51a6a0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::he5e73301f69d5572(&v8);
                return v49;
            }
            ::0x51a6a0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::he5e73301f69d5572(&v8);
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
            v56 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h6626b1412d983560(&v8);
            if (!v56)
                break;
            uu_ls::display_additional_leading_info::h0fd6f91c8eb9a06d(&v3, v56, v30, *((long long *)&v32), v55, v52);
            v49 = v4;
            if (v33 == 0x8000000000000000)
            {
                ::0x51af80::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::hd33891f95b02e0de(&v26);
                return v49;
            }
            v33 = v3;
            v34 = v49;
            v35 = v5;
            v52 = a3;
            v0 = v52;
            v57 = v2;
            uu_ls::display_item_name::heea135a0d549edf1(&v36, v56, v57, v12, v47, &v33, v0, a5, 0);
            alloc::vec::Vec$LT$T$C$A$GT$::push::heb22a87cc2da7dbc(&v26, &v36);
        }
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h733fe6c5694a3f76(&v20, &v26);
        switch (v58)
        {
        case 0:
            v59 = *((int128_t *)&v20);
            *((int128_t *)&v5) = *((int128_t *)&v22);
            v3 = v59;
            v60 = *((int *)&v55->field_e4);
            v61 = v1;
            v62 = 1;
            goto LABEL_529a6c;
        case 3:
            v63 = *((int128_t *)&v20);
            *((int128_t *)&v5) = *((int128_t *)&v22);
            v3 = v63;
            v60 = *((int *)&v55->field_e4);
            v61 = v1;
            v62 = 0;
LABEL_529a6c:
            v49 = uu_ls::display_grid::hb374249ed71bd764(&v3, v60, v62, v52, v61);
            if (v49)
            {
LABEL_529a7d:
                return v49;
            }
        case 4:
            _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h35b4920fdc533a83(&v13, &v20);
            if (v13 == 0x8000000000000000)
            {
                v67 = 0;
                break;
            }
            else
            {
                v10 = (long long)v15;
                v68 = *((int128_t *)&v13);
                v8 = v68;
                v16 = &v8;
                v17 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                v3 = &g_423d10;
                v4 = 1;
                v7 = 0;
                v5 = &v16;
                v6 = 1;
                v71 = std::io::Write::write_fmt::h9d32c17c2cadc496(v52, &v3);
                if (v71)
                {
                    v49 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he9f0d7c8a30f7b86(v71);
                    ::0x51a6a0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::he5e73301f69d5572(&v8);
                    ::0x51b3b0::core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$alloc..string..String$GT$$GT$::hf05f5ae80a28809f(&v20);
                    return v49;
                }
                ::0x51a6a0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::he5e73301f69d5572(&v8);
                v67 = (int)ansi_width::ansi_width::h892ec55095f21e88(v9, v10, v74) + 2;
                break;
            }
            v76 = *((int128_t *)&v20);
            v77 = v69 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v68 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v76;
            *((int128_t *)&v10) = *((int128_t *)&v22);
            v8 = v76;
            _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h35b4920fdc533a83(&v16, &v8);
            if (v16 != 0x8000000000000000)
            {
                v79 = v55->field_e4;
                do
                {
                    v81 = *((int128_t *)&v16);
                    v77 = v77 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v81;
                    v13 = v81;
                    v15 = v18;
                    v82 = ansi_width::ansi_width::h892ec55095f21e88(v14, v18, v74);
                    if ((unsigned short)v79 && ((unsigned int)(v82 + v80) + 1 & 65535) > (v79 & 65535))
                    {
                        v23 = &v13;
                        v24 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                        v3 = &g_612860;
                        v4 = 1;
                        v7 = 0;
                        v5 = &v23;
                        v6 = 1;
                        v83 = std::io::Write::write_fmt::h9d32c17c2cadc496(a3, &v3);
                        if (v83)
                        {
                            v49 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he9f0d7c8a30f7b86(v83);
                        }
                        else
                        {
                            v67 = v82 + 2;
                            continue;
                        }
                        goto LABEL_529f09;
                    }
                    else
                    {
                        v23 = &v13;
                        v24 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                        v3 = &g_612850;
                        v4 = 1;
                        v7 = 0;
                        v5 = &v23;
                        v6 = 1;
                        v84 = std::io::Write::write_fmt::h9d32c17c2cadc496(a3, &v3);
                        if (v84)
                        {
                            v49 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he9f0d7c8a30f7b86(v84);
LABEL_529f09:
                            ::0x51a6a0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::he5e73301f69d5572(&v13);
                            ::0x51b3b0::core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$alloc..string..String$GT$$GT$::hf05f5ae80a28809f(&v8);
                            return v49;
                        }
                        v67 = (unsigned int)(v80 + v82) + 2;
                    }
                    ::0x51a6a0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::he5e73301f69d5572(&v13);
                    _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h35b4920fdc533a83(&v16, &v8);
                    v78 = v2;
                } while (v16 != 0x8000000000000000);
            }
            ::0x51b3b0::core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$alloc..string..String$GT$$GT$::hf05f5ae80a28809f(&v8);
            if ((unsigned short)v67)
            {
                v8 = &v78[1].padding_0[1];
                v9 = _$LT$uucore..mods..line_ending..LineEnding$u20$as$u20$core..fmt..Display$GT$::fmt::h1cda345fbd5bfac0;
                v3 = &g_423d10;
                v4 = 1;
                v7 = 0;
                v5 = &v8;
                v6 = 1;
                v85 = std::io::Write::write_fmt::h9d32c17c2cadc496(a3, &v3);
                if (v85)
                {
                    v49 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he9f0d7c8a30f7b86(v85);
                    return v49;
                }
            }
        default:
            v64 = *((int128_t *)&v20);
            v66 = v65 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v64;
            *((int128_t *)&v15) = *((int128_t *)&v22);
            v13 = v64;
            _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h35b4920fdc533a83(&v23, &v13);
            if (v23 != 0x8000000000000000)
            {
                v2 = &v2[1].padding_0[1];
                do
                {
                    v18 = *((long long *)&v25);
                    v72 = *((int128_t *)&v23);
                    v66 = v66 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v72;
                    v16 = v72;
                    v8 = &v16;
                    v9 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                    v10 = v2;
                    v11 = _$LT$uucore..mods..line_ending..LineEnding$u20$as$u20$core..fmt..Display$GT$::fmt::h1cda345fbd5bfac0;
                    v3 = &g_428d70;
                    v4 = 2;
                    v7 = 0;
                    v5 = &v8;
                    v6 = 2;
                    v73 = std::io::Write::write_fmt::h9d32c17c2cadc496(a3, &v3);
                    if (v73)
                    {
                        v49 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he9f0d7c8a30f7b86(v73);
                        ::0x51a6a0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::he5e73301f69d5572(&v16);
                        ::0x51b3b0::core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$alloc..string..String$GT$$GT$::hf05f5ae80a28809f(&v13);
                        return v49;
                    }
                    ::0x51a6a0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::he5e73301f69d5572(&v16);
                    _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h35b4920fdc533a83(&v23, &v13);
                } while (v23 != 0x8000000000000000);
            }
            ::0x51b3b0::core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$alloc..string..String$GT$$GT$::hf05f5ae80a28809f(&v13);
            return 0;
        }
    }
    else
    {
        uu_ls::calculate_padding_collection::h218758ae4902ad8b(&v30, v40, a1, v2, a3);
        v20 = v40;
        v21 = v41;
        if (!v2->field_e9 && !v2->field_ea)
        {
            while (true)
            {
                v48 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h6626b1412d983560(&v20);
                if (!v48)
                    break;
                v0 = v1;
                v49 = uu_ls::display_item_long::h418ba4a35ed53517(v48, &v30, v2, a3, v12, a5, v0);
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
                v50 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h6626b1412d983560(&v20);
                if (!v50)
                    return 0;
                uu_ls::display_additional_leading_info::h0fd6f91c8eb9a06d(v45, v50, v19, v29, v2, v46);
                v49 = v4;
                if (v8 == 0x8000000000000000)
                    return v49;
                v8 = v3;
                v9 = v49;
                v10 = v5;
                v13 = &v8;
                v14 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                v3 = &g_423d10;
                v4 = 1;
                v7 = 0;
                v5 = &v13;
                v6 = 1;
                v51 = std::io::Write::write_fmt::h9d32c17c2cadc496(v46, v45);
                if (v51)
                {
                    v49 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he9f0d7c8a30f7b86(v51);
                    ::0x51a6a0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::he5e73301f69d5572(&v8);
                    return v49;
                }
                ::0x51a6a0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::he5e73301f69d5572(&v8);
                v0 = v1;
                v49 = uu_ls::display_item_long::h418ba4a35ed53517(v50, &v30, v2, v46, v12, a5, v0);
            } while (!v49);
            goto LABEL_529a7d;
        }
    }
    return 0;
}
