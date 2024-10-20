long long uu_head::uumain::h61577070b588d920(unsigned long a0, unsigned long a1)
{
    struct struct_3 **v0;  // [bp-0x4d8], Other Possible Types: int, char, unsigned long long, unsigned long
    uint128_t *v1;  // [sp-0x4d0], Other Possible Types: unsigned long, unsigned long long
    int v2;  // [sp-0x4c8], Other Possible Types: uint128_t *, unsigned long, unsigned long long
    unsigned long long v3;  // [bp-0x4c0], Other Possible Types: unsigned int, unsigned long
    int v4;  // [sp-0x4b8], Other Possible Types: void*, unsigned long, unsigned long long
    int v5;  // [sp-0x4b0]
    int v6;  // [sp-0x4a0]
    int v7;  // [sp-0x490]
    int v8;  // [sp-0x478]
    unsigned long long v9;  // [sp-0x468]
    struct_3 *v10;  // [bp-0x460], Other Possible Types: char, unsigned long
    struct_1 *v11;  // [sp-0x458], Other Possible Types: unsigned long
    char v12;  // [bp-0x450]
    char v13;  // [bp-0x448]
    int v14;  // [bp-0x438], Other Possible Types: void*
    unsigned long long v15;  // [sp-0x430]
    int v16;  // [bp-0x428], Other Possible Types: unsigned long long
    char v17;  // [sp-0x420]
    char v18;  // [bp-0x410]
    char v19;  // [bp-0x400]
    unsigned long v20;  // [sp-0x3f8], Other Possible Types: unsigned long long
    unsigned long long v21;  // [sp-0x3f0]
    int v22;  // [sp-0x3e8]
    unsigned long long v23;  // [sp-0x3d8]
    unsigned long v24;  // [sp-0x3c8], Other Possible Types: unsigned long long
    unsigned long long v25;  // [sp-0x3c0]
    int v26;  // [bp-0x3b8], Other Possible Types: char, unsigned long, unsigned long long
    struct_1 *v27;  // [sp-0x3b0], Other Possible Types: unsigned long, unsigned long long
    char v28;  // [bp-0x3a8], Other Possible Types: unsigned long, unsigned long long
    unsigned int v29;  // [sp-0x3a0]
    char v30;  // [bp-0x398]
    char v31;  // [bp-0x388]
    unsigned long v32;  // [sp-0x378], Other Possible Types: unsigned long long
    unsigned long long v33;  // [sp-0x370]
    int v34;  // [sp-0x368]
    int v35;  // [sp-0x358]
    unsigned long long v36;  // [sp-0x348]
    char v37;  // [bp-0x340]
    char v38;  // [bp-0x330]
    char v39;  // [bp-0x328]
    char v40;  // [bp-0x318]
    char v41;  // [bp-0x310]
    char v42;  // [bp-0x300]
    char v43;  // [bp-0x2f8], Other Possible Types: unsigned long long
    char v44;  // [bp-0x2f0], Other Possible Types: unsigned long long
    struct struct_5 **v45;  // [bp-0x2e8], Other Possible Types: char, unsigned long long
    unsigned long v46;  // [sp-0x2e0], Other Possible Types: unsigned long long
    void* v47;  // [bp-0x2d8], Other Possible Types: char
    struct_4 *v49;  // rax
    unsigned long long v50;  // r15
    unsigned long long v51;  // r14
    struct_3 *v52;  // rax
    uint128_t *v53;  // rax
    struct_2 *v54;  // rax
    int v55;  // xmm0
    int v56;  // xmm0
    struct_4 *v57;  // rax
    int v58;  // xmm0
    struct_1 *v60;  // r15
    unsigned long long v61;  // rcx
    struct_3 *v62;  // rax
    int v63;  // xmm0
    int v64;  // xmm1
    int v65;  // xmm0
    int v66;  // xmm1
    int v67;  // xmm2
    unsigned long long v68;  // rbx
    char v69;  // bpl
    struct_3 *v71;  // r14
    struct_1 *v72;  // rdx
    struct_3 *v73;  // rax
    int v74;  // xmm0
    int v75;  // xmm1
    int v76;  // xmm0
    unsigned int v77;  // eax
    unsigned long long v78;  // rsi
    struct_3 *v79;  // r14
    struct_1 *v80;  // r15
    struct struct_0 **v81;  // rax

    uu_head::uu_app::h3e3a21877dd6e4ab(&v43);
    v20 = a0;
    v21 = a1;
    _$LT$core..iter..adapters..cloned..Cloned$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h9187fd304b6977c5(&v0, &v20);
    if (v0 == 0x8000000000000000)
        core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
    v9 = v2;
    *((int128_t *)&v8) = *((int128_t *)&v0);
    _$LT$core..iter..adapters..cloned..Cloned$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h9187fd304b6977c5(&v18, &v20);
    if (*((long long *)&v18) == 0x8000000000000000)
    {
        v49 = __rust_alloc(24, 8);
        if (!v49)
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
        v49->field_10 = v9;
        *((void*)&v49->field_0) = v8;
        alloc::slice::hack::into_vec::he095cf9ba3180324(&v10, v49, 1);
        v0 = v11;
        v2 = v10;
        v1 = v0;
        v3 = v0 + *((long long *)&v12) * 24;
        v52 = __rust_alloc(32, 8);
        if (!v52)
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
        v55 = *((int128_t *)&v0);
        v52->field_10 = *((int128_t *)&v2);
        *((void*)&v52->field_0) = v55;
        if (*((long long *)&v18) != 0x8000000000000000)
        {
            _$LT$core..array..iter..IntoIter$LT$T$C$_$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h0a151fb4e8f661d3();
            _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h267dcf5f7ba80356(&v18);
        }
        v60 = &g_4ed500.field_0;
        goto LABEL_43d0d9;
        goto LABEL_43d0d9;
    }
    else
    {
        *((int128_t *)&v22) = *((int128_t *)&v18);
        v23 = *((long long *)&v19);
        std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::h660bab9c45707695(&v0, (long long)(&v22)[8], *((long long *)&v19));
        if (v0)
        {
            alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::hdf844a40892d26f8(&v0, 21, 0);
            if (v0)
                alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
            v53 = v2;
            *(v53) = 132166775331850393689390242466074222946;
            *((long long *)((char *)v53 + 13)) = 7453010313431182949;
            v3 = 1;
            v0 = v1;
            v1 = v53;
            v2 = 21;
            v52 = __rust_alloc(32, 8);
            if (!v52)
                alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
            v58 = *((int128_t *)&v0);
LABEL_43ce3a:
            v52->field_10 = *((int128_t *)&v2);
            *((void*)&v52->field_0) = v58;
            v69 = vvar_134{reg 56} | -0x100 | 1;
            v68 = 1;
            v60 = &g_4ed470.field_0;
            goto LABEL_43ce52;
        }
        v50 = v1;
        v51 = v2;
        uu_head::parse::parse_obsolete::hbf3035c8e19fcd3f(&v10, v50, v51);
        if (!v10)
        {
            v54 = __rust_alloc(48, 8);
            if (!v54)
                alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
            v54->field_10 = v9;
            *((void*)&v54->field_0) = v8;
            *((void*)&(&v54->field_10)[1]) = v22;
            *((unsigned long long *)((char *)&v54->field_18 + 8)) = v23;
            alloc::slice::hack::into_vec::he095cf9ba3180324(&v0, v54, 2);
            v0 = v1;
            v1 = v0;
            v2 = v0;
            v3 = v0 + (v2 + v2 * 2) * 8;
            *((int128_t *)&v4) = *((int128_t *)&v20);
            v52 = __rust_alloc(48, 8);
            if (!v52)
                alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
            v63 = *((int128_t *)&v0);
            v64 = *((int128_t *)&v2);
            v52->field_20 = (int128_t)v4;
            *((void*)&v52->field_10) = v64;
            *((void*)&v52->field_0) = v63;
            v60 = &g_4ed3b8.field_0;
            goto LABEL_43d0d9;
            goto LABEL_43d0d9;
        }
        if (!v11)
        {
            if (!v12)
            {
                v14 = 0;
                v15 = v50;
                v16 = v51;
                v17 = 1;
                v24 = &v14;
                v25 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
                v0 = &g_4ed428;
                v1 = 1;
                v4 = 0;
                v2 = &v24;
                v3 = 1;
                alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v39, &v0);
                v3 = 1;
                *((int128_t *)&v0) = *((int128_t *)&v39);
                v2 = *((long long *)&v40);
                v52 = __rust_alloc(32, 8);
                if (!v52)
                    alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
            }
            else
            {
                v14 = 0;
                v15 = v50;
                v16 = v51;
                v17 = 1;
                v24 = &v14;
                v25 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
                v0 = &g_4ed4e0;
                v1 = 2;
                v4 = 0;
                v2 = &v24;
                v3 = 1;
                alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v41, &v0);
                v3 = 1;
                *((int128_t *)&v0) = *((int128_t *)&v41);
                v2 = *((long long *)&v42);
                v52 = __rust_alloc(32, 8);
                if (!v52)
                    alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
            }
            goto LABEL_43ce3a;
        }
        v56 = *((int128_t *)&v11);
        *((int128_t *)&v16) = *((int128_t *)&v13);
        v14 = v56;
        v57 = __rust_alloc(24, 8);
        if (!v57)
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
        v57->field_10 = v9;
        *((void*)&v57->field_0) = v8;
        alloc::slice::hack::into_vec::he095cf9ba3180324(&v0, v57, 1);
        v61 = v1;
        *((int128_t *)&v5) = (int128_t)v14;
        *((int128_t *)&v6) = (int128_t)v16;
        v0 = 1;
        v1 = v61;
        v2 = v61;
        v3 = v0;
        v4 = v61 + (v2 + v2 * 2) * 8;
        *((int128_t *)&v7) = *((int128_t *)&v20);
        v62 = __rust_alloc(88, 8);
        if (!v62)
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
        v52 = v62;
        v52->field_50 = (long long)(&v7)[8];
        v52->field_40 = (int128_t)(&v6)[8];
        v65 = *((int128_t *)&v0);
        v66 = *((int128_t *)&v2);
        v67 = *((int128_t *)&v4);
        v52->field_30 = (int128_t)(&v5)[8];
        *((void*)&v52->field_20) = v67;
        *((void*)&v52->field_10) = v66;
        *((void*)&v52->field_0) = v65;
        v60 = &g_4ed3f0.field_0;
        v68 = 0;
        v69 = 0;
LABEL_43ce52:
        _$LT$core..array..iter..IntoIter$LT$T$C$_$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h0a151fb4e8f661d3();
        _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h267dcf5f7ba80356(&v22);
        if (v69)
        {
            _$LT$core..array..iter..IntoIter$LT$T$C$_$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h0a151fb4e8f661d3();
            _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h267dcf5f7ba80356(&v8);
        }
        if (v68)
        {
            ::0x43c0b0::core::ptr::drop_in_place$LT$clap_builder..builder..command..Command$GT$::h6c474c54d31c4dff(&v43);
            if (!(!v52))
                goto LABEL_43d20c;
        }
        else
        {
LABEL_43d0d9:
            clap_builder::builder::command::Command::try_get_matches_from::h50124ceaedfe06c9(&v26, &v43, v52, v60);
            if (v32 == 0x8000000000000000)
            {
                v71 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h0cdf31ef837cc412(v33);
                if (!(!v71))
                    goto LABEL_43d20c;
            }
            else
            {
                v36 = *((long long *)&v31);
                *((int128_t *)&v35) = *((int128_t *)&v30);
                *((int128_t *)&v34) = *((int128_t *)&v28);
                v32 = v26;
                v33 = v27;
                uu_head::HeadOptions::get_from::hb367f172ff8010bb(&v43, &v32);
                if (*((int *)&v43) != 4)
                {
                    v74 = *((int128_t *)&v43);
                    v75 = *((int128_t *)&v45);
                    *((int128_t *)&v4) = *((int128_t *)&v47);
                    v2 = v75;
                    v0 = v74;
                    v71 = uu_head::uu_head::h26503ea707851cab(&v0);
                    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hc22b25b40c9f66dd(&v2);
                    _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h9d8a78070b16eade(&v2);
                    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h1a99add0e906d25e(&v32);
                    if (!(!v71))
                        goto LABEL_43d20c;
                }
                else
                {
                    v28 = v46;
                    *((int128_t *)&v26) = *((int128_t *)&v44);
                    v29 = 1;
                    v73 = __rust_alloc(32, 8);
                    if (!v73)
                        alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
                    v71 = v73;
                    v76 = (int128_t)v26;
                    v73->field_10 = *((int128_t *)&v28);
                    *((void*)&v73->field_0) = v76;
                    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h1a99add0e906d25e(&v32);
                    if (v71)
                    {
LABEL_43d20c:
                        v10 = v71;
                        v11 = &g_4ed470.field_0;
                        v0 = &v10;
                        v1 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h4d132c6f0e6e48ec;
                        v43 = &anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654;
                        v44 = 1;
                        v47 = 0;
                        v45 = &v0;
                        v46 = 1;
                        alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v37, &v43);
                        *((int128_t *)&v0) = *((int128_t *)&v37);
                        v2 = *((long long *)&v38);
                        if (!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h13f409c273a97bd7(v1, *((long long *)&v38), 1, 0))
                        {
                            v26 = uucore::util_name::h359eff083fe53467();
                            v27 = v72;
                            v32 = &v26;
                            v33 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h10c5b76a36c3e5ea;
                            v43 = &g_4ed538;
                            v44 = 2;
                            v47 = 0;
                            v45 = &v32;
                            v46 = 1;
                            std::io::stdio::_eprint::hcdfeec148c7134f7(&v43, v78, v72);
                            v26 = &v0;
                            v27 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                            v43 = &g_4ed558;
                            v44 = 2;
                            v47 = 0;
                            v45 = &v26;
                            v46 = 1;
                            std::io::stdio::_eprint::hcdfeec148c7134f7(&v43, v78, v72);
                        }
                        if ((char)v11->field_68(v10))
                        {
                            v26 = uucore::execution_phrase::hded5ccd87df1fcab();
                            v27 = v72;
                            v32 = &v26;
                            v33 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h10c5b76a36c3e5ea;
                            v43 = &g_4ed578;
                            v44 = 2;
                            v47 = 0;
                            v45 = &v32;
                            v46 = 1;
                            std::io::stdio::_eprint::hcdfeec148c7134f7(&v43, v78, v72);
                        }
                        v77 = v11->field_60(v10);
                        _$LT$core..array..iter..IntoIter$LT$T$C$_$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h0a151fb4e8f661d3();
                        _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h267dcf5f7ba80356(&v0);
                        v79 = v10;
                        v80 = v11;
                        if (v80->field_0)
                            v81(v79);
                        if (v80->field_8)
                        {
                            __rust_dealloc(v79);
                            return v77;
                        }
                        return v77;
                    }
                }
            }
        }
        v77 = uucore::mods::error::get_exit_code::hf050de69600a682c();
        return v77;
    }
}
