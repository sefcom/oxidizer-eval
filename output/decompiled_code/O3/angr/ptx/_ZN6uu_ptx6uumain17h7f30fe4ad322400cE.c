long long uu_ptx::uumain::h7f30fe4ad322400c(unsigned long long a0, unsigned long long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5)
{
    char v0;  // [bp-0x4d8]
    char v1;  // [bp-0x4d0]
    unsigned long v2;  // [sp-0x4c8], Other Possible Types: unsigned long long
    unsigned long v3;  // [sp-0x4c0], Other Possible Types: unsigned long long
    struct_1 *v4;  // [sp-0x4b8], Other Possible Types: unsigned long long
    int v5;  // [sp-0x4b0]
    int v6;  // [sp-0x4a0]
    unsigned long long v7;  // [sp-0x490]
    int v8;  // [bp-0x488], Other Possible Types: char, unsigned long long, unsigned long
    char v9;  // [sp-0x480], Other Possible Types: unsigned long, unsigned long long
    struct_1 *v10;  // [bp-0x478], Other Possible Types: char, unsigned long long
    int v11;  // [sp-0x470]
    char v12;  // [bp-0x468]
    int v13;  // [sp-0x460]
    char v14;  // [bp-0x458]
    int v15;  // [bp-0x450], Other Possible Types: char
    int v16;  // [sp-0x440]
    int v17;  // [sp-0x430]
    int v18;  // [sp-0x420]
    unsigned long long v19;  // [sp-0x410]
    unsigned long v20;  // [sp-0x408], Other Possible Types: unsigned long long
    unsigned long long v21;  // [sp-0x400]
    struct_1 *v22;  // [sp-0x3f8]
    int v23;  // [sp-0x3f0]
    int v24;  // [sp-0x3e0]
    int v25;  // [sp-0x3d0]
    int v26;  // [sp-0x3c0]
    unsigned long long v27;  // [sp-0x3b0]
    char v28;  // [bp-0x3a8]
    char v29;  // [bp-0x3a0]
    char v30;  // [bp-0x398]
    char v31;  // [bp-0x390]
    char v32;  // [bp-0x380]
    unsigned long v33;  // [sp-0x378], Other Possible Types: unsigned long long
    unsigned long long v34;  // [sp-0x370]
    int v35;  // [sp-0x368]
    int v36;  // [sp-0x358]
    unsigned long long v37;  // [sp-0x348]
    unsigned long long v38;  // [sp-0x340]
    unsigned long v39;  // [sp-0x338], Other Possible Types: unsigned long long
    unsigned long long v40;  // [sp-0x330]
    struct_1 *v41;  // [sp-0x328]
    int v42;  // [sp-0x320]
    unsigned long long v43;  // [sp-0x310]
    char v44;  // [bp-0x308]
    char v45;  // [bp-0x2f8]
    char v46;  // [bp-0x2f0], Other Possible Types: unsigned long, unsigned long long
    int v47;  // [bp-0x2e8], Other Possible Types: char *, char, unsigned long long, unsigned long
    char *v48;  // [bp-0x2e0], Other Possible Types: struct_1 *, char, unsigned long long
    unsigned long long v49;  // [sp-0x2d8]
    void* v50;  // [bp-0x2d0], Other Possible Types: char
    char v51;  // [bp-0x2c0]
    char v52;  // [bp-0x2b8]
    char v53;  // [bp-0x2a8]
    char v54;  // [bp-0x298]
    char v55;  // [bp-0x288]
    char v56;  // [bp-0x278]
    unsigned long long v58;  // r14
    unsigned long long v59;  // r15
    unsigned long long v60;  // r14
    unsigned long long v61[3];  // rax
    unsigned long long v62[3];  // r14
    char *v63;  // rax
    struct_1 *v64;  // r15
    unsigned long long v65;  // r8
    unsigned long long v66;  // r9
    struct_2 *v68;  // rax
    char *v70;  // rcx
    unsigned int v72;  // eax
    unsigned long long v73;  // rdx
    unsigned long long v74;  // rsi
    unsigned long long v75;  // r14
    struct_1 *v76;  // r15
    struct struct_0 **v77;  // rax

    uu_ptx::uu_app::hf8b98dce8f8c2b1e(&v46);
    clap_builder::builder::command::Command::try_get_matches_from::hcb96f08ae612d48f(&v8, &v46, a0, a1);
    if (v3 == 0x8000000000000000)
    {
        v60 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h0cdf31ef837cc412(v4);
        if (!(!v60))
            goto LABEL_4e76df;
    }
    else
    {
        v7 = *((long long *)&v14);
        *((int128_t *)&v6) = *((int128_t *)&v12);
        *((int128_t *)&v5) = *((int128_t *)&v10);
        v3 = v8;
        v4 = v9;
        v58 = _ZN6uu_ptx7options4FILE17h804513fe04843f8fE;
        v59 = g_67be48;
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h3149a2dc066b3d88(&v46, &v3, v58, v59);
        clap_builder::parser::error::MatchesError::unwrap::hc62b4baf005a915b(&v8, v58, v59, &v46);
        if (v8)
        {
            _$LT$core..iter..adapters..flatten..Flatten$LT$I$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h631066d351ab4604(&v47, &v9);
            v46 = v8;
            *((int128_t *)&v35) = *((int128_t *)&v48);
            *((int128_t *)&v36) = *((int128_t *)&v50);
            v37 = *((long long *)&v51);
            v33 = v46;
            v34 = v47;
            v38 = *((long long *)&v15);
            _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h157b758b25c1b5ab(&v0, &v33);
        }
        else
        {
            v61 = __rust_alloc(24, 8);
            if (!v61)
                alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
            v62 = v61;
            alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::h59cc199cb6c80714(&v46, 1, 0);
            if (v46)
                alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
            v63 = v48;
            *(v63) = 45;
            v62[0] = v47;
            v62[1] = v63;
            v62[2] = 1;
            alloc::slice::hack::into_vec::hf54450691852dac7(&v0, v62, 1);
        }
        uu_ptx::get_config::hdaa3e2ad3a6d91a2(&v46, &v3);
        v60 = v47;
        v64 = v48;
        if (v20 == 0x8000000000000000)
        {
LABEL_4e7d55:
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hb348217b9058a52f(&v0);
            _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hcf2e9c1751a98c9c(&v0);
            goto LABEL_4e7d65;
        }
        v27 = *((long long *)&v54);
        *((int128_t *)&v26) = *((int128_t *)&v53);
        *((int128_t *)&v25) = *((int128_t *)&v52);
        *((int128_t *)&v24) = *((int128_t *)&(&v50)[8]);
        *((int128_t *)&v23) = *((int128_t *)&(&v48)[8]);
        v20 = v46;
        v21 = v60;
        v22 = v64;
        uu_ptx::WordFilter::new::h1af8807b66bec64a(&v46, &v3, &v20, *((long long *)&v54), v65, v66);
        v60 = v47;
        v64 = v48;
        if (v8 == 0x8000000000000000)
        {
LABEL_4e7d48:
            core::ptr::drop_in_place$LT$uu_ptx..Config$GT$::h875a7ec44888a94d(&v20);
            goto LABEL_4e7d55;
        }
        else
        {
            v19 = *((long long *)&v56);
            *((int128_t *)&v18) = *((int128_t *)&v55);
            *((int128_t *)&v17) = *((int128_t *)&v54);
            *((int128_t *)&v16) = *((int128_t *)&v53);
            *((int128_t *)&v15) = *((int128_t *)&v52);
            *((int128_t *)&v13) = *((int128_t *)&(&v50)[8]);
            *((int128_t *)&v11) = *((int128_t *)&(&v48)[8]);
            v8 = v46;
            v9 = v60;
            v10 = v64;
            uu_ptx::read_input::h94ae8d09397df6f3(&v46, *((long long *)&v1), v2, &v20);
            _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h0fdbc4a504635a9e(&v28, &v46);
            v60 = *((long long *)&v29);
            v64 = *((long long *)&v30);
            if (v39)
            {
                v43 = *((long long *)&v32);
                *((int128_t *)&v42) = *((int128_t *)&v31);
                v39 = *((long long *)&v28);
                v40 = v60;
                v41 = v64;
                uu_ptx::create_word_set::hf2e8ed0eaf10bdc2(&v28, &v20, &v8, &v39);
                if ((char)v27 || v2 != 2)
                {
                    alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::h59cc199cb6c80714(&v46, 1, 0);
                    if (v46)
                        alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
                    v70 = v48;
                    *(v70) = 45;
                    v46 = v47;
                    v47 = v70;
                    v48 = 1;
                }
                else
                {
                    v2 = 1;
                    v68 = *((long long *)&v1);
                    if (v46 == 0x8000000000000000)
                        core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
                    v46 = v68->field_18;
                    *((uint128_t *)&v47) = v68->field_20;
                }
                v60 = uu_ptx::write_traditional_output::h9b27aefe32fd562c(&v20, &v39, &v28, v47, 1);
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hc1eefdff3a67b7bc();
                _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h52c994b50f93a524(&v46);
                _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h871a5da38abeb5b2(&v28);
                _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h9258b18286ca7a30(&v39);
                core::ptr::drop_in_place$LT$uu_ptx..WordFilter$GT$::h38416ab8db01c445(&v8);
                core::ptr::drop_in_place$LT$uu_ptx..Config$GT$::h875a7ec44888a94d(&v20);
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hb348217b9058a52f(&v0);
                _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hcf2e9c1751a98c9c(&v0);
LABEL_4e7d65:
                core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hd0b648b74c998d88(&v3);
                if (v60)
                {
LABEL_4e76df:
                    v3 = v60;
                    v4 = v64;
                    v8 = &v3;
                    v9 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h703497749bb847c9;
                    v46 = &anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654;
                    v47 = 1;
                    v50 = 0;
                    v48 = &v8;
                    v49 = 1;
                    alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v44, &v46);
                    *((int128_t *)&v8) = *((int128_t *)&v44);
                    v10 = *((long long *)&v45);
                    if (!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hecce69794008c9dc(v9, *((long long *)&v45), 1, 0))
                    {
                        v20 = uucore::util_name::h359eff083fe53467();
                        v21 = v73;
                        v33 = &v20;
                        v34 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h0a51f05e9a8aeac2;
                        v46 = &g_6786d8;
                        v47 = 2;
                        v50 = 0;
                        v48 = &v33;
                        v49 = 1;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&v46, v74, v73);
                        v20 = &v8;
                        v21 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                        v46 = &g_6786f8;
                        v47 = 2;
                        v50 = 0;
                        v48 = &v20;
                        v49 = 1;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&v46, v74, v73);
                    }
                    if ((char)v4->field_68(v3))
                    {
                        v20 = uucore::execution_phrase::hded5ccd87df1fcab();
                        v21 = v73;
                        v33 = &v20;
                        v34 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h0a51f05e9a8aeac2;
                        v46 = &g_678718;
                        v47 = 2;
                        v50 = 0;
                        v48 = &v33;
                        v49 = 1;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&v46, v74, v73);
                    }
                    v72 = v4->field_60(v3);
                    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hc1eefdff3a67b7bc();
                    _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h52c994b50f93a524(&v8);
                    v75 = v3;
                    v76 = v4;
                    if (v76->field_0)
                        v77(v75);
                    if (v76->field_8)
                    {
                        __rust_dealloc(v75);
                        return v72;
                    }
                    return v72;
                }
            }
            else
            {
                core::ptr::drop_in_place$LT$uu_ptx..WordFilter$GT$::h38416ab8db01c445(&v8);
                goto LABEL_4e7d48;
            }
        }
    }
    v72 = uucore::mods::error::get_exit_code::hf050de69600a682c();
    return v72;
}
