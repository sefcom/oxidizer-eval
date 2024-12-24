long long uu_wc::wc::h9968941e0febe722(unsigned long long a0[4], struct_2 *a1, unsigned long long a2)
{
    unsigned long v0;  // [sp-0x1a8], Other Possible Types: unsigned long long
    struct_1 *v1;  // [sp-0x1a0]
    unsigned long long v2;  // [sp-0x198]
    unsigned long long v3;  // [sp-0x190]
    struct_1 *v4;  // [sp-0x188], Other Possible Types: unsigned long long
    unsigned long long v5;  // [sp-0x180]
    int v6;  // [bp-0x178], Other Possible Types: unsigned long long (64 bits)[6], unsigned long, unsigned long long
    unsigned long v7;  // [sp-0x170], Other Possible Types: unsigned long long
    int v8;  // [sp-0x168], Other Possible Types: unsigned long, unsigned long long
    char v9;  // [bp-0x160], Other Possible Types: unsigned long long
    void* v10;  // [sp-0x158], Other Possible Types: unsigned long long
    char v11;  // [bp-0x150]
    char v12;  // [bp-0x148]
    unsigned long v13;  // [sp-0x140], Other Possible Types: unsigned long long
    unsigned long long v14;  // [sp-0x138]
    char v15;  // [bp-0x130], Other Possible Types: unsigned long long
    struct_1 *v16;  // [sp-0x128], Other Possible Types: unsigned long long
    unsigned long long v17;  // [sp-0x120]
    unsigned long long v18;  // [sp-0x118]
    void* v19;  // [sp-0x110]
    unsigned long long v20;  // [sp-0x100]
    unsigned long v21;  // [sp-0xf8], Other Possible Types: unsigned long long
    unsigned long v22;  // [sp-0xf0], Other Possible Types: unsigned long long
    int v23;  // [bp-0xe8], Other Possible Types: char, unsigned long long
    unsigned long long v24;  // [sp-0xe0]
    int v25;  // [sp-0xd8]
    unsigned long long v26;  // [sp-0xc8]
    unsigned long long v27;  // [sp-0xc0]
    unsigned long v28;  // [sp-0xb8], Other Possible Types: unsigned long long
    unsigned long long v29;  // [sp-0xb0]
    unsigned long long v30;  // [sp-0xa8]
    int v31;  // [sp-0xa0]
    unsigned long long v32;  // [sp-0x90]
    unsigned long v33;  // [sp-0x88], Other Possible Types: unsigned long long
    unsigned long long v34;  // [sp-0x80]
    struct_1 *v35;  // [sp-0x78]
    char v36;  // [bp-0x70]
    int v37;  // [sp-0x58]
    int v38;  // [sp-0x48]
    void* v39;  // [sp-0x38]
    unsigned long long v41;  // r15
    void* v42;  // rax
    int v43;  // xmm0
    int v44;  // ymm0
    int v45;  // ymm0
    void* v46;  // r15
    unsigned long long v47;  // rbp
    unsigned long long v48;  // rbx
    int v49;  // ymm1
    unsigned long long v50;  // rcx
    unsigned long long v51;  // rax
    unsigned long long v52;  // rdx
    unsigned long long v53;  // rsi
    int v54;  // xmm0
    int v55;  // xmm1
    unsigned long long v58;  // rbp
    struct_1 *v59;  // rbx
    struct_1 *v60;  // rbx
    unsigned long long v61;  // rbp
    unsigned long long v62;  // rax
    struct_1 *v64;  // rbx
    unsigned int v66;  // ecx
    unsigned long long v68;  // rax

    *((int128_t *)&v38) = 0;
    *((int128_t *)&v37) = 0;
    v39 = 0;
    v41 = a1->field_1d;
    v20 = 1;
    if ((unsigned int)v41 != 2)
        v20 = uu_wc::compute_number_width::h96f119acb0ab455c(a0, a1, a2);
    uu_wc::Inputs::try_iter::h7ede1801ec729206(v6, a0, a1);
    v42 = v7;
    if (v28 == 9223372036854775811)
        return v42;
    v22 = v41;
    v32 = *((long long *)&v11);
    v43 = *((int128_t *)&v9);
    v45 = v44 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v43;
    v31 = v43;
    v28 = v6;
    v29 = v42;
    v27 = v8;
    v30 = v27;
    v46 = 0;
    v47 = &v23;
    v48 = &v15;
    while (true)
    {
        uu_wc::Inputs::try_iter::_$u7b$$u7b$closure$u7d$$u7d$::h99347f84e930fcca(&v36, &v28);
        v50 = *((long long *)&v36);
        if (v50 == 9223372036854775811)
            break;
        if (v50 == 9223372036854775810)
        {
            v0 = v34;
            v1 = v35;
            v1->field_60(v0);
            uucore::mods::error::set_exit_code::h6705c4226a43fa90();
            v23 = uucore::util_name::h412db5e565a079f3();
            v24 = v52;
            v15 = v47;
            v16 = &_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::ha8518a51b7c9ba19;
            v17 = &v0;
            v18 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hfc8b3a2877871f19;
            v6 = &g_5321d8;
            v7 = 3;
            v10 = 0;
            v8 = v48;
            v9 = 2;
            std::io::stdio::_eprint::hcdfeec148c7134f7(v6, v53, v52);
            ::0x4b76d0::core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::hf86ddfc9e9a58c14(v0, v1);
            v0 = v0;
            v1 = v1;
            goto LABEL_4bda70;
        }
        else
        {
            v33 = v50;
            v34 = v0;
            v35 = v1;
            uu_wc::word_count_from_input::h33c620b3314b8dfa(v6, &v33, a1);
            v51 = v6;
            if (!v51)
            {
LABEL_4bdcf8:
                v26 = *((long long *)&v11);
                v54 = *((int128_t *)&v7);
                v45 = v45 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v54;
                v55 = (int128_t)(&v8)[8];
                v49 = v49 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v55;
                v25 = v55;
                v23 = v54;
                v10 = v26;
                v8 = v25;
                v6 = v54;
                _$LT$uu_wc..word_count..WordCount$u20$as$u20$core..ops..arith..AddAssign$GT$::add_assign::h068fdeab844f4ae2(&v37, v6);
                if ((int)v22 != 2)
                {
                    uu_wc::Input::to_title::he33bf424dc21ff4a(&v0, &v33);
                    if (v0 == 0x8000000000000000 || v0 != 9223372036854775809)
                    {
                        v58 = v2;
                        v59 = v1;
                    }
                    v60 = v59;
                    v61 = v58;
                    v62 = uu_wc::print_stats::he7246d47db314e98(a1, &v23, v60, v61, v20);
                    if (v62)
                    {
                        if (!v60)
                            v61 = 7;
                        v4 = v64;
                        v5 = v61;
                        v21 = _$LT$std..io..error..Error$u20$as$u20$uucore..mods..error..FromIo$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$$GT$::map_err_context::h38cbbe080c1381dc(v62, &v4);
                        uucore::mods::error::set_exit_code::h6705c4226a43fa90();
                        v13 = uucore::util_name::h412db5e565a079f3();
                        v14 = v52;
                        v15 = &v13;
                        v16 = &_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::ha8518a51b7c9ba19;
                        v17 = &v21;
                        v18 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hf097abb7883e2e26;
                        v6 = &g_5321d8;
                        v7 = 3;
                        v10 = 0;
                        v8 = &v15;
                        v9 = 2;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(v6, v53, v52);
                        core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$::h9106c2047c67eef5(v21);
                    }
                    core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..borrow..Cow$LT$str$GT$$GT$$GT$::h3da56ea8c723bc91(&v0);
                    v47 = &v23;
                    v48 = &v15;
                }
                ::0x4b6c60::core::ptr::drop_in_place$LT$uu_wc..Input$GT$::h399756a57630d428(&v33);
                v46 += 1;
            }
            else
            {
                if ((unsigned int)v51 == 2)
                {
                    v4 = _$LT$std..io..error..Error$u20$as$u20$uucore..mods..error..FromIo$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$$GT$::map_err_context::hc9bdd4eb3d55cc7c(v7, &v33);
                    uucore::mods::error::set_exit_code::h6705c4226a43fa90();
                    v13 = uucore::util_name::h412db5e565a079f3();
                    v14 = v52;
                    v0 = &v13;
                    v1 = &_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::ha8518a51b7c9ba19;
                    v2 = &v4;
                    v3 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hf097abb7883e2e26;
                    v15 = &g_5321d8;
                    v16 = 3;
                    v19 = 0;
                    v17 = &v0;
                    v18 = 2;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(v48, v53, v52);
                    core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$::h9106c2047c67eef5(v4);
                    ::0x4b6c60::core::ptr::drop_in_place$LT$uu_wc..Input$GT$::h399756a57630d428(&v33);
                    v0 = v0;
                    v1 = v1;
                }
                else
                {
                    v4 = _$LT$std..io..error..Error$u20$as$u20$uucore..mods..error..FromIo$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$$GT$::map_err_context::h67514db824cc807b(*((long long *)&v12), &v33);
                    uucore::mods::error::set_exit_code::h6705c4226a43fa90();
                    v13 = uucore::util_name::h412db5e565a079f3();
                    v14 = v52;
                    v0 = &v13;
                    v1 = &_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::ha8518a51b7c9ba19;
                    v2 = &v4;
                    v3 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hf097abb7883e2e26;
                    v15 = &g_5321d8;
                    v16 = 3;
                    v19 = 0;
                    v17 = &v0;
                    v18 = 2;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(v48, v53, v52);
                    core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$::h9106c2047c67eef5(v4);
                    goto LABEL_4bdcf8;
                }
LABEL_4bda70:
                v1 = v1;
                v0 = v0;
                v46 += 1;
            }
        }
    }
    core::ptr::drop_in_place$LT$core..iter..sources..from_fn..FromFn$LT$uu_wc..Inputs..try_iter..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$::h57a86eae3537dcc1(&v28);
    v66 = v22;
    if (!(v66 - 1 < 2 || !v66 && v46 >= 2))
        return 0;
    v68 = uu_wc::print_stats::he7246d47db314e98(a1, &v37, (v66 != 2 ? "total: \n" : 0), 5, v20);
    if (v68)
    {
        v23 = _$LT$std..io..error..Error$u20$as$u20$uucore..mods..error..FromIo$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$$GT$::map_err_context::hbb4401c72a34c546(v68);
        uucore::mods::error::set_exit_code::h6705c4226a43fa90();
        v28 = uucore::util_name::h412db5e565a079f3();
        v29 = v52;
        v15 = &v28;
        v16 = &_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::ha8518a51b7c9ba19;
        v17 = v47;
        v18 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hf097abb7883e2e26;
        v6 = &g_5321d8;
        v7 = 3;
        v10 = 0;
        v8 = &v15;
        v9 = 2;
        std::io::stdio::_eprint::hcdfeec148c7134f7(v6, v53, v52);
        core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$::h9106c2047c67eef5(v23);
    }
}
