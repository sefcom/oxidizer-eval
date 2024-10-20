long long uu_dd::uumain::he7575a93b79774f5(unsigned long long a0, unsigned long long a1)
{
    uint128_t v0[2];  // [bp-0x550], Other Possible Types: char, unsigned int
    unsigned int v1;  // [sp-0x54d]
    struct_1 *v2;  // [sp-0x548]
    char v3;  // [bp-0x540]
    char v4;  // [bp-0x530]
    char v5;  // [bp-0x520]
    char v6;  // [bp-0x518]
    char v7;  // [bp-0x510]
    char v8;  // [bp-0x508]
    char v9;  // [bp-0x500]
    unsigned long v10;  // [sp-0x4f8], Other Possible Types: unsigned long long
    int v11;  // [bp-0x4f0], Other Possible Types: unsigned long
    int v12;  // [sp-0x4e0]
    int v13;  // [sp-0x4d0]
    int v14;  // [sp-0x4c0]
    int v15;  // [sp-0x4b0]
    int v16;  // [sp-0x4a0]
    int v17;  // [sp-0x490]
    int v18;  // [sp-0x480]
    int v19;  // [sp-0x470]
    int v20;  // [sp-0x460]
    char v21;  // [bp-0x450], Other Possible Types: unsigned long long
    unsigned long long v22;  // [sp-0x448]
    int v23;  // [sp-0x440]
    int v24;  // [sp-0x430]
    unsigned long long v25;  // [sp-0x420]
    unsigned long long v26;  // [sp-0x418]
    int v27;  // [sp-0x408]
    int v28;  // [sp-0x3f8]
    int v29;  // [bp-0x3e8], Other Possible Types: struct struct_2 **, uint128_t [2], char, unsigned long
    struct_1 *v30;  // [sp-0x3e0], Other Possible Types: unsigned long, unsigned long long
    char v31;  // [bp-0x3d8], Other Possible Types: unsigned long long
    char v32;  // [bp-0x3c8]
    char v33;  // [bp-0x3b8]
    char v34;  // [bp-0x3b0]
    char v35;  // [bp-0x3a0]
    char v36;  // [bp-0x390]
    char v37;  // [bp-0x380]
    char v38;  // [bp-0x370]
    char v39;  // [bp-0x360]
    char v40;  // [bp-0x350]
    unsigned long v41;  // [sp-0x340], Other Possible Types: unsigned long long
    unsigned long long v42;  // [sp-0x338]
    int v43;  // [sp-0x330]
    int v44;  // [sp-0x320]
    unsigned long long v45;  // [sp-0x310]
    int v46;  // [bp-0x308], Other Possible Types: void*, char, unsigned long
    unsigned int v47;  // [bp-0x307]
    unsigned int v48;  // [sp-0x304], Other Possible Types: unsigned long long
    int v49;  // [sp-0x300], Other Possible Types: uint128_t [2], unsigned long long
    int v50;  // [sp-0x2f8], Other Possible Types: struct struct_3 **, struct_1 *, unsigned long long
    unsigned long long v51;  // [sp-0x2f0]
    void* v52;  // [sp-0x2e8]
    void* v53;  // [sp-0x2d8]
    int v54;  // [sp-0x2c8]
    int v55;  // [sp-0x2b8]
    unsigned long long v56;  // [sp-0x2a8]
    unsigned long long v57;  // [sp-0x298]
    unsigned long long v58;  // [sp-0x280]
    int v59;  // [sp-0x268]
    int v60;  // [sp-0x258]
    int v61;  // [sp-0x248]
    char v62;  // [sp-0x238]
    char v63;  // [bp-0x40]
    char v64;  // [bp-0x30]
    uint128_t v66[2];  // r12
    unsigned long long v67;  // rax
    unsigned long long v71;  // rdx
    int v73;  // xmm0
    unsigned long long v74;  // rdx
    uint128_t v76[2];  // r15
    struct_1 *v77;  // r14
    struct_1 *v78;  // r14
    uint128_t v79[2];  // r15
    int v80;  // xmm0
    unsigned int v81;  // eax
    unsigned long long v82;  // rsi
    uint128_t v83[2];  // r14
    struct_1 *v84;  // r15
    struct struct_0 **v85;  // rax

    uu_dd::uu_app::hd29eb5855028cb48(&v46);
    clap_builder::builder::command::Command::try_get_matches_from::ha933451fc2242d06(&v29, &v46, a0, a1);
    if (v41 == 0x8000000000000000)
    {
        v66 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h0cdf31ef837cc412(v42);
        if (!(!v66))
            goto LABEL_445888;
    }
    else
    {
        v45 = *((long long *)&v33);
        *((int128_t *)&v44) = *((int128_t *)&v32);
        *((int128_t *)&v43) = *((int128_t *)&v31);
        v41 = v29;
        v42 = v30;
        v57 = 0x8000000000000000;
        v58 = 0x8000000000000000;
        v46 = 0;
        v50 = 0;
        v52 = 0;
        v53 = 0;
        *((int128_t *)&v54) = 0;
        *((int128_t *)&v55) = 0;
        v56 = 2;
        *((int128_t *)&v59) = 0;
        *((int128_t *)&v60) = 0;
        *((int128_t *)&v61) = 0;
        v62 = 3;
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hdcf7ea81cb4d0b3e(&v21, &v41, "operandsNotFoundTimedOut", 8);
        clap_builder::parser::error::MatchesError::unwrap::hce074dc3f73a1c13(&v0, "operandsNotFoundTimedOut", 8, &v21);
        v67 = *((long long *)&v0);
        if (!v67)
        {
            v67 = core::ops::function::FnOnce::call_once::hd17fdad7f09b0555;
            v71 = 0;
        }
        else
        {
            v71 = *((long long *)&v6);
        }
        v21 = v67;
        v22 = "&";
        *((int128_t *)&v23) = *((int128_t *)&v3);
        *((int128_t *)&v24) = *((int128_t *)&v4);
        v25 = *((long long *)&v5);
        v26 = v71;
        _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::hd1fc7e132197e36b(&v7, &v21, v26);
        uu_dd::parseargs::Parser::parse::hcc67fdd65650ec0c(&v29, &v46, *((long long *)&v8), *((long long *)&v9));
        *((int128_t *)&v27) = *((int128_t *)&v30);
        *((int128_t *)&v28) = *((int128_t *)&(&v31)[8]);
        if (v10 != 3)
        {
            *((int128_t *)&v20) = *((int128_t *)&v40);
            *((int128_t *)&v19) = *((int128_t *)&v39);
            *((int128_t *)&v18) = *((int128_t *)&v38);
            *((int128_t *)&v17) = *((int128_t *)&v37);
            *((int128_t *)&v16) = *((int128_t *)&v36);
            *((int128_t *)&v15) = *((int128_t *)&v35);
            *((int128_t *)&v14) = *((int128_t *)&v34);
            *((int128_t *)&v13) = *((int128_t *)&(&v32)[8]);
            v11 = v27;
            v12 = v28;
            v10 = v29;
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h065f2ac05fae3ac1();
            _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hb55795ae47eb6b88(&v7);
            if ((long long)(&v11)[8] == 0x8000000000000000)
            {
                uu_dd::Input::new_stdin::h88a947f442bf95b4(&v46, &v10, v74);
            }
            else if (!(char)uu_dd::is_fifo::haaf0b3789cb02788((long long)v12, (long long)(&v12)[8]))
            {
                uu_dd::Input::new_file::h6e4aec957b26c885(&v46, (long long)v12, (long long)(&v12)[8], &v10);
            }
            else
            {
                uu_dd::Input::new_fifo::h82209e6cf15b0002(&v46, (long long)v12, (long long)(&v12)[8], &v10);
            }
            v76 = v49;
            v77 = v50;
            if (v46)
            {
LABEL_445f5d:
                core::ptr::drop_in_place$LT$uu_dd..Settings$GT$::h846c8271e4930cac(&v10);
            }
            else
            {
                if ((long long)v13 != 0x8000000000000000)
                {
                    if (!(char)uu_dd::is_fifo::haaf0b3789cb02788((long long)(&v13)[8], (long long)v14))
                        uu_dd::Output::new_file::h03bd6691f1b2e614(&v46, (long long)(&v13)[8], (long long)v14, &v10);
                    else
                        uu_dd::Output::new_fifo::h6127eb40fd5922d0(&v46, (long long)(&v13)[8], (long long)v14, &v10);
                }
                else
                {
                    if (!(char)uu_dd::is_stdout_redirected_to_seekable_file::hbefb38990e043ce2())
                        uu_dd::Output::new_stdout::h40e44c8bce348b67(&v46, &v10, v74);
                    else
                        uu_dd::Output::new_file_from_stdout::he14de4c7db5814e3(&v46, &v10, v74);
                }
                if (v46 != 4)
                {
                    *((unsigned long long *)&v1) = v48;
                    v0 = *((int *)((char *)&v46 + 1));
                    v80 = *((int128_t *)&v49);
                    *((uint128_t *[2])&v29[0]) = v76;
                    v30 = v77;
                    v46 = v46;
                    v47 = v0;
                    v48 = v1;
                    v49 = v80;
                    v66 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h82e548572d8c7a7c(uu_dd::dd_copy::h7cdcbe8eb7c98959(&v29, &v46, v48));
                    core::ptr::drop_in_place$LT$uu_dd..Settings$GT$::h846c8271e4930cac(&v10);
                }
                else
                {
                    close(v76 >> 32 & 4294967295);
                    v78 = v50;
                    *((uint128_t *[2])&v79[0]) = v49;
                    goto LABEL_445f5d;
                }
            }
        }
        else
        {
            v50 = v28;
            v46 = v27;
            v66 = __rust_alloc(32, 8);
            if (!v66)
                alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
            v73 = (int128_t)v46;
            v66[1] = (int128_t)v50;
            *((void*)&v66[0]) = v73;
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h065f2ac05fae3ac1();
            _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hb55795ae47eb6b88(&v7);
        }
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hfdcf448c2763f3fe(&v41);
        if (v66)
        {
LABEL_445888:
            *((uint128_t *[2])&v0[0]) = v66;
            v2 = &g_512858.field_0;
            v29 = &v0;
            v30 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hac88f3e9c865ebc9;
            v46 = &anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654;
            v49 = 1;
            v52 = 0;
            v50 = &v29;
            v51 = 1;
            alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v63, &v46);
            *((int128_t *)&v29) = *((int128_t *)&v63);
            v31 = *((long long *)&v64);
            if (!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hd99a6261c5188cd1(v30, *((long long *)&v64), 1, 0))
            {
                v10 = uucore::util_name::h359eff083fe53467();
                v11 = v74;
                v21 = &v10;
                v22 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h764be955d47c3b74;
                v46 = &g_5127c0;
                v49 = 2;
                v52 = 0;
                v50 = &v21;
                v51 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v46, v82, v74);
                v10 = &v29;
                v11 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                v46 = &g_5127e0;
                v49 = 2;
                v52 = 0;
                v50 = &v10;
                v51 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v46, v82, v74);
            }
            if ((char)v2->field_68(v0))
            {
                v10 = uucore::execution_phrase::hded5ccd87df1fcab();
                v11 = v74;
                v21 = &v10;
                v22 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h764be955d47c3b74;
                v46 = &g_512800;
                v49 = 2;
                v52 = 0;
                v50 = &v21;
                v51 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v46, v82, v74);
            }
            v81 = v2->field_60(v0);
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h065f2ac05fae3ac1();
            _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h696b082c9b88d986(&v29);
            v83 = v0;
            v84 = v2;
            if (v84->field_0)
                v85(v83);
            if (v84->field_8)
            {
                __rust_dealloc(v83);
                return v81;
            }
            return v81;
        }
    }
    v81 = uucore::mods::error::get_exit_code::hf050de69600a682c();
    return v81;
}
