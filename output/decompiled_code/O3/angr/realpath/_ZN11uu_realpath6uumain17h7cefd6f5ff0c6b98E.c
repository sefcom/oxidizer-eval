long long uu_realpath::uumain::h7cefd6f5ff0c6b98(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v0;  // [sp-0x460]
    int v1;  // [bp-0x448], Other Possible Types: struct_2 *, unsigned long
    struct_1 *v2;  // [sp-0x440], Other Possible Types: unsigned long
    unsigned long long v3;  // [sp-0x438]
    unsigned int v4;  // [sp-0x430]
    unsigned int v5;  // [sp-0x42c]
    unsigned long v6;  // [sp-0x428], Other Possible Types: unsigned long long
    struct_1 *v8;  // [sp-0x418]
    unsigned int v9;  // [sp-0x40c]
    int v10;  // [bp-0x408], Other Possible Types: struct struct_2 **, char, unsigned long long, unsigned long
    unsigned long long v11;  // [sp-0x400]
    char v12;  // [bp-0x3f8], Other Possible Types: unsigned long long
    char v13;  // [bp-0x3f4]
    unsigned long long v14;  // [sp-0x3f0]
    char v15;  // [bp-0x3e4]
    int v16;  // [bp-0x3d8]
    char v17;  // [bp-0x3d4]
    unsigned long v18;  // [sp-0x3c8], Other Possible Types: unsigned long long
    char v19;  // [bp-0x3b8]
    char v20;  // [bp-0x3b0]
    char v21;  // [bp-0x3a8]
    unsigned long v22;  // [sp-0x3a0], Other Possible Types: unsigned long long
    unsigned long long v23;  // [sp-0x398]
    unsigned int v24;  // [sp-0x390]
    int v25;  // [sp-0x38c]
    int v26;  // [sp-0x37c]
    unsigned int v27;  // [sp-0x36c]
    int v28;  // [bp-0x368], Other Possible Types: unsigned long long
    unsigned long long v29;  // [sp-0x360]
    int v30;  // [sp-0x358]
    int v31;  // [sp-0x348]
    int v32;  // [sp-0x338]
    unsigned long v33;  // [sp-0x320], Other Possible Types: unsigned long long
    struct_4 *v34;  // [sp-0x318]
    char v35;  // [bp-0x310]
    char v36;  // [bp-0x300]
    char v37;  // [bp-0x2f8], Other Possible Types: unsigned long, unsigned long long
    unsigned int v38;  // [bp-0x2f0], Other Possible Types: unsigned long long
    struct struct_6 **v39;  // [sp-0x2e8], Other Possible Types: struct_1 *, unsigned long long
    char v40;  // [bp-0x2e0], Other Possible Types: unsigned long long
    void* v41;  // [sp-0x2d8]
    char v42;  // [bp-0x2d0]
    struct_2 *v44;  // rax
    unsigned long long v45;  // rbx
    unsigned long long v46;  // r15
    struct_1 *v47;  // r14
    unsigned int v49;  // ebx
    char v50;  // al
    unsigned int v52;  // r12d
    unsigned int v53;  // ebp
    struct_2 *v54;  // r15
    unsigned long long v55;  // rax
    unsigned long long v56[3];  // r14
    unsigned long long v57;  // rax
    void* v58;  // r15
    struct struct_0 **v59;  // r13
    unsigned int v61;  // r12d
    struct_2 *v63;  // r9
    unsigned long long v66;  // rax
    struct_5 *v67;  // rax
    unsigned int v68;  // ebp
    unsigned long long v70;  // rcx
    unsigned long long v71;  // rbp
    struct_3 *v72;  // r12
    struct struct_0 **v73;  // rax
    unsigned long long v74;  // r13
    struct_2 *v76;  // r9
    unsigned long long v79;  // rax
    unsigned long long v80;  // rax
    struct_4 *v81;  // rdx
    unsigned long long v82;  // rsi
    unsigned long long v83;  // rbx
    struct struct_0 **v84;  // rax
    unsigned long long v86;  // rdx
    unsigned long long v87;  // rsi
    unsigned int v88;  // eax
    struct_2 *v89;  // r15
    struct_1 *v90;  // r12
    struct struct_0 **v91;  // rax

    uu_realpath::uu_app::h447138237669ebf4(&v37);
    clap_builder::builder::command::Command::try_get_matches_from::hbbab413b08425064(&v10, &v37, a0, a1);
    if (v22 != 0x8000000000000000)
    {
        *((int128_t *)&v25) = *((int128_t *)&v13);
        *((int128_t *)&v26) = *((int128_t *)&v15);
        v27 = *((int *)&v17);
        v22 = v10;
        v23 = v37;
        v24 = *((int *)&v12);
        v45 = _ZN11uu_realpath9ARG_FILES17h7a401aab61d23825E;
        v46 = g_4ea210;
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h82af5ad162d148b4(&v37, &v22, v45, v46);
        clap_builder::parser::error::MatchesError::unwrap::h682ad5ebf2fe92cf(&v10, v45, v46, &v37);
        if (!v10)
            core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
        *((int128_t *)&v32) = (int128_t)v16;
        *((int128_t *)&v31) = *((int128_t *)&(&v13)[12]);
        *((int128_t *)&v30) = *((int128_t *)&v12);
        *((int128_t *)&v28) = *((int128_t *)&v10);
        _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h0d2fdf24fb566e23(&v19, &v28);
        v49 = ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v22, _ZN11uu_realpath8OPT_ZERO17h4456fb53980bfabfE, g_4ea1f0) ? 10 : 0);
        v50 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v22, _ZN11uu_realpath9OPT_QUIET17hef794925461044b0E, g_4ea1d0);
        if (!(char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v22, "canonicalize-existingcanonicalize-missingdescription() is deprecated; use Displayerror", 21))
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v22, "canonicalize-missingdescription() is deprecated; use Displayerror", 20);
        v52 = (!(char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v22, _ZN11uu_realpath9OPT_STRIP17hf781af9f95a77b68E, g_4ea1e0) ? 0 : (char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v22, _ZN11uu_realpath11OPT_LOGICAL17h7ad4af4ad20a3cc6E, g_4ea200) + 1);
        v53 = 1;
        uu_realpath::prepare_relative_options::ha960aaefa565d72c(&v37, &v22, 1, v52);
        v54 = *((long long *)&v38);
        v47 = v39;
        if (v6 != 9223372036854775809)
        {
            v3 = *((long long *)&v42);
            *((int128_t *)&v1) = *((int128_t *)&v40);
            v6 = v37;
            v44 = v54;
            v8 = v47;
            v55 = *((long long *)&v21);
            if (v55)
            {
                v56 = *((long long *)&v20);
                v4 = v49;
                v5 = v52;
                v57 = v55 * 8;
                if (v50)
                {
                    v58 = 0;
                    v59 = uu_realpath::resolve_path::h7226dba9d97b313c;
                    v9 = 1;
                    v4 = v4;
                    do
                    {
                        v61 = v4;
                        if (v6 != 0x8000000000000000)
                            v63 = v44;
                        if (v1 != 0x8000000000000000)
                            v66 = v2;
                        v0 = v66;
                        v67 = v59(*((long long *)(v56 + v58 + 8)), *((long long *)(v56 + v58 + 16)), v61, v5, v53, v63, v8, v0);
                        if (v67)
                        {
                            v70 = (unsigned int)v67 & 3;
                            if (v70 - 2 >= 2 && v70)
                            {
                                v71 = *((long long *)((char *)&v67->field_-1 + 1));
                                v72 = *((long long *)((char *)&v67->field_-1 + 7));
                                if (v72->field_0)
                                    v73(v71);
                                if (v72->field_8)
                                    __rust_dealloc(v71);
                                __rust_dealloc((char *)&v67->field_-1 + 1);
                                v59 = uu_realpath::resolve_path::h7226dba9d97b313c;
                                v68 = v9;
                                v4 = v4;
                            }
                        }
                        v58 += 24;
                    } while (v57 + (v57 << 1) != v58);
                }
                else
                {
                    do
                    {
                        v74 = v57 * 3;
                        if (v6 != 0x8000000000000000)
                            v76 = v44;
                        if (v1 != 0x8000000000000000)
                            v79 = v2;
                        v0 = v79;
                        v80 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h36d5f70020ec2f85(uu_realpath::resolve_path::h7226dba9d97b313c(v56[1], v56[2], v4, v5, 1, v76, v8, v0, v3), v56);
                        if (v80)
                        {
                            v18 = v80;
                            v81->field_60(v80);
                            uucore::mods::error::set_exit_code::h0565497d88d725e1();
                            v33 = uucore::util_name::h359eff083fe53467();
                            v34 = v81;
                            v10 = &v33;
                            v11 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb0c018b88020740f;
                            v12 = &v18;
                            v14 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::he107ede913a088dd;
                            v37 = &g_4e78a0;
                            v38 = 3;
                            v41 = 0;
                            v39 = &v10;
                            v40 = 2;
                            std::io::stdio::_eprint::hcdfeec148c7134f7(&v37, v82, v81);
                            v83 = v18;
                            if (v81->field_0)
                                v84(v83);
                            if (v81->field_8)
                                __rust_dealloc(v83);
                        }
                        v56 += 1;
                    } while (v74 != 24);
                }
            }
            if (v1 != 0x8000000000000000)
            {
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h306de8c739f673de();
                _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h33db55172aaeb0ee(&v1);
            }
            if (v6 != 0x8000000000000000)
            {
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h306de8c739f673de();
                _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h33db55172aaeb0ee(&v6);
            }
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h7f2f8c45975fe916(&v19);
            _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h82894bf34a81ceab(&v19);
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h2e162edb32498107(&v22);
            v88 = uucore::mods::error::get_exit_code::hf050de69600a682c();
            return v88;
        }
        else
        {
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h7f2f8c45975fe916(&v19);
            _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h82894bf34a81ceab(&v19);
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h2e162edb32498107(&v22);
            if (!v44)
            {
                vvar_1005{reg 16} = uucore::mods::error::get_exit_code::hf050de69600a682c();
                return v88;
            }
        }
    }
    else
    {
        v37 = v23;
        v38 = 1;
        v44 = __rust_alloc(16, 8);
        if (!v44)
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
        v44->field_0 = v37;
        v44->field_8 = 1;
        v47 = &g_4e7908.field_0;
    }
    v1 = v44;
    v2 = v47;
    v10 = &v1;
    v11 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::he107ede913a088dd;
    v37 = &g_411090;
    v38 = 1;
    v41 = 0;
    v39 = &v10;
    v40 = 1;
    alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v35, &v37);
    *((int128_t *)&v10) = *((int128_t *)&v35);
    v12 = *((long long *)&v36);
    if (!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hfb44a555e2dfa9a3(v11, *((long long *)&v36), 1, 0))
    {
        v28 = uucore::util_name::h359eff083fe53467();
        v29 = v86;
        v22 = &v28;
        v23 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb0c018b88020740f;
        v37 = &g_4e7828;
        v38 = 2;
        v41 = 0;
        v39 = &v22;
        v40 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&v37, v87, v86);
        v28 = &v10;
        v29 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        v37 = &g_4e7848;
        v38 = 2;
        v41 = 0;
        v39 = &v28;
        v40 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&v37, v87, v86);
    }
    if ((char)v2->field_68(v1))
    {
        v28 = uucore::execution_phrase::hded5ccd87df1fcab();
        v29 = v86;
        v22 = &v28;
        v23 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb0c018b88020740f;
        v37 = &g_4e7868;
        v38 = 2;
        v41 = 0;
        v39 = &v22;
        v40 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&v37, v87, v86);
    }
    v88 = v2->field_60(v1);
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h306de8c739f673de();
    _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h33db55172aaeb0ee(&v10);
    v89 = v1;
    v90 = v2;
    if (v90->field_0)
        v91(v89);
    if (v90->field_8)
    {
        __rust_dealloc(v89);
        return v88;
    }
    return v88;
}
