long long uu_wc::wc::hd5e1121da6170855(unsigned long long a0[4], struct_4 *a1)
{
    char *v0;  // [sp-0x1a8]
    struct_2 *v1;  // [sp-0x1a0]
    struct struct_3 **v2;  // [sp-0x198]
    unsigned long long v3;  // [sp-0x190]
    struct_2 *v4;  // [sp-0x188]
    struct struct_3 **v5;  // [sp-0x180]
    int v6;  // [sp-0x178], Other Possible Types: char, unsigned long
    unsigned long v7;  // [sp-0x170], Other Possible Types: unsigned long long
    int v8;  // [sp-0x168], Other Possible Types: struct struct_3 **, char, unsigned long long
    struct struct_3 **v9;  // [sp-0x168], Other Possible Types: unsigned long
    unsigned long long v10;  // [sp-0x160]
    void* v11;  // [sp-0x158], Other Possible Types: unsigned long long
    char v12;  // [bp-0x150]
    char v13;  // [bp-0x148]
    unsigned long v14;  // [sp-0x140]
    unsigned long long v15;  // [sp-0x138]
    char *v16;  // [sp-0x130], Other Possible Types: unsigned long long
    char *v17;  // [bp-0x130], Other Possible Types: char, unsigned long long
    struct_2 *v18;  // [sp-0x128], Other Possible Types: unsigned long long
    char *v19;  // [sp-0x120], Other Possible Types: struct struct_0 **
    unsigned long long v20;  // [sp-0x118]
    void* v21;  // [sp-0x110]
    unsigned long long v22;  // [sp-0x100]
    unsigned long v23;  // [sp-0xf8]
    unsigned long v24;  // [sp-0xf0]
    int v25;  // [bp-0xe8], Other Possible Types: char, unsigned long long
    unsigned long long v26;  // [sp-0xe0]
    int v27;  // [sp-0xd8]
    unsigned long long v28;  // [sp-0xc8]
    unsigned long long v29;  // [sp-0xc0]
    unsigned long v30;  // [sp-0xb8]
    unsigned long long v31;  // [sp-0xb0]
    unsigned long long v32;  // [sp-0xa8]
    int v33;  // [sp-0xa0]
    unsigned long long v34;  // [sp-0x90]
    unsigned long v35;  // [sp-0x88]
    char *v36;  // [sp-0x80]
    struct_2 *v37;  // [sp-0x78]
    char v38;  // [bp-0x70]
    int v39;  // [sp-0x58]
    int v40;  // [sp-0x48]
    void* v41;  // [sp-0x38]
    unsigned long long v43;  // r15
    void* v44;  // rax
    int v45;  // xmm0
    int v46;  // ymm0
    int v47;  // ymm0
    void* v48;  // r15
    char *v49;  // rbp
    int v50;  // ymm1
    unsigned long long v51;  // rcx
    unsigned long long v52;  // rax
    unsigned long v53;  // rdx
    int v54;  // xmm0
    int v55;  // xmm1
    struct_2 *v57;  // rbp
    unsigned long long v58;  // rax
    struct_2 *v60;  // rbp
    struct struct_3 **v62;  // rbx
    unsigned int v63;  // ecx
    unsigned long long v65;  // rax

    *((uint128_t *)&v40) = 0;
    *((uint128_t *)&v39) = 0;
    v41 = 0;
    v43 = a1->field_1d;
    v22 = 1;
    if ((unsigned int)v43 != 2)
        v22 = uu_wc::compute_number_width::h0dc7206969488842(a0, a1);
    uu_wc::Inputs::try_iter::he58c0dff5beb00a3(&v6, a0);
    v44 = v7;
    if (v30 == 9223372036854775811)
        return v44;
    v24 = v43;
    v34 = *((long long *)&v12);
    v45 = *((int128_t *)&v8);
    v47 = v46 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v45;
    v33 = v45;
    v30 = v6;
    v31 = v44;
    v29 = v9;
    v32 = v29;
    v48 = 0;
    v49 = &v25;
    v62 = &v17;
    while (true)
    {
        uu_wc::Inputs::try_iter::_$u7b$$u7b$closure$u7d$$u7d$::h72e90ebe24b5b113(&v38, &v30);
        v51 = *((long long *)&v38);
        if (v51 == 9223372036854775811)
            break;
        if (v51 == 9223372036854775810)
        {
            v0 = v36;
            v1 = v37;
            uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(v1->field_60(v0));
            v25 = uucore::util_name::h60d842bf27b05e82();
            v26 = v53;
            v16 = v49;
            v18 = &_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf11328e4cb3e1baf;
            v19 = &v0;
            v20 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h9d4509789875f497;
            v6 = &g_5311c8;
            v7 = 3;
            v11 = 0;
            v8 = v62;
            v10 = 2;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v6);
            ::0x4b72e0::core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::h547312d815f977f1(v0, v1);
            v0 = v0;
            v1 = v1;
            goto LABEL_4bd6a0;
        }
        else
        {
            v35 = v51;
            v36 = v0;
            v37 = v1;
            uu_wc::word_count_from_input::h9c6b7f02841e6225(&v6, &v35, a1);
            v52 = v6;
            if (!v52)
            {
LABEL_4bd928:
                v28 = *((long long *)&v12);
                v54 = *((int128_t *)&v7);
                v47 = v47 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v54;
                v55 = *((int128_t *)&v8);
                v50 = v50 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v55;
                v27 = v55;
                v25 = v54;
                v11 = v28;
                v8 = v27;
                v6 = v54;
                _$LT$uu_wc..word_count..WordCount$u20$as$u20$core..ops..arith..AddAssign$GT$::add_assign::h8a7b9039573b0b39(&v39, &v6);
                if ((int)v24 != 2)
                {
                    uu_wc::Input::to_title::hf944d4f2d9388afe(&v0, &v35);
                    if (v0 == 0x8000000000000000 || v0 != 9223372036854775809)
                    {
                        v57 = v1;
                        v62 = v2;
                    }
                    else
                    {
                        v57 = 0;
                    }
                    v58 = uu_wc::print_stats::hd63ccbcd2e38aece(a1, &v25, v57, v62, v22);
                    if (v58)
                    {
                        if (!v57)
                            v60 = "<stdin>";
                        if (!v57)
                            v62 = 7;
                        v4 = v60;
                        v5 = v62;
                        v23 = _$LT$std..io..error..Error$u20$as$u20$uucore..mods..error..FromIo$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$$GT$::map_err_context::hbee748f1525ffde1(v58, &v4);
                        uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(1);
                        v14 = uucore::util_name::h60d842bf27b05e82();
                        v15 = v53;
                        v17 = &v14;
                        v18 = &_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf11328e4cb3e1baf;
                        v19 = &v23;
                        v20 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hb416dfd1ca34992c;
                        v6 = &g_5311c8;
                        v7 = 3;
                        v11 = 0;
                        v8 = &v17;
                        v8 = 2;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&v6);
                        core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$::h28789891c4c0df25(v23);
                    }
                    core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..borrow..Cow$LT$str$GT$$GT$$GT$::h7b5c9b8dea2633d7(&v0);
                    v49 = &v25;
                    v62 = &v17;
                }
                ::0x4b6870::core::ptr::drop_in_place$LT$uu_wc..Input$GT$::hd370e224d5568eba(&v35);
                v48 += 1;
            }
            else
            {
                if ((unsigned int)v52 == 2)
                {
                    v4 = _$LT$std..io..error..Error$u20$as$u20$uucore..mods..error..FromIo$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$$GT$::map_err_context::h2da712d33864c64c(v7, &v35);
                    uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(1);
                    v14 = uucore::util_name::h60d842bf27b05e82();
                    v15 = v53;
                    v0 = &v14;
                    v1 = &_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf11328e4cb3e1baf;
                    v2 = &v4;
                    v3 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hb416dfd1ca34992c;
                    v16 = &g_5311c8;
                    v18 = 3;
                    v21 = 0;
                    v19 = &v0;
                    v20 = 2;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(v62);
                    core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$::h28789891c4c0df25(v4);
                    ::0x4b6870::core::ptr::drop_in_place$LT$uu_wc..Input$GT$::hd370e224d5568eba(&v35);
                    v0 = v0;
                    v1 = v1;
                }
                else
                {
                    v4 = _$LT$std..io..error..Error$u20$as$u20$uucore..mods..error..FromIo$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$$GT$::map_err_context::h6d2d9bfd1274cb46(*((long long *)&v13), &v35);
                    uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(1);
                    v14 = uucore::util_name::h60d842bf27b05e82();
                    v15 = v53;
                    v0 = &v14;
                    v1 = &_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf11328e4cb3e1baf;
                    v2 = &v4;
                    v3 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hb416dfd1ca34992c;
                    v17 = &g_5311c8;
                    v18 = 3;
                    v21 = 0;
                    v19 = &v0;
                    v20 = 2;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(v62);
                    core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$::h28789891c4c0df25(v4);
                    goto LABEL_4bd928;
                }
LABEL_4bd6a0:
                v1 = v1;
                v0 = v0;
                v48 += 1;
            }
        }
    }
    core::ptr::drop_in_place$LT$core..iter..sources..from_fn..FromFn$LT$uu_wc..Inputs..try_iter..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$::hb5a904caff70e7b6(&v30);
    v63 = v24;
    if (!(v63 - 1 < 2 || !v63 && v48 >= 2))
        return 0;
    v65 = uu_wc::print_stats::hd63ccbcd2e38aece(a1, &v39, (v63 != 2 ? "total" : 0), 5, v22);
    if (v65)
    {
        v25 = _$LT$std..io..error..Error$u20$as$u20$uucore..mods..error..FromIo$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$$GT$::map_err_context::hc10cf64853115943(v65);
        uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(1);
        v30 = uucore::util_name::h60d842bf27b05e82();
        v31 = v53;
        v16 = &v30;
        v18 = &_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf11328e4cb3e1baf;
        v19 = v49;
        v20 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hb416dfd1ca34992c;
        v6 = &g_5311c8;
        v7 = 3;
        v11 = 0;
        v9 = &v17;
        v10 = 2;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&v6);
        core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$::h28789891c4c0df25(v25);
    }
}
