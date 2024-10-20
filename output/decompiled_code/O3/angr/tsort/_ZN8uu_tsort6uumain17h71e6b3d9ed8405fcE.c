long long uu_tsort::uumain::h71e6b3d9ed8405fc(unsigned long long a0, unsigned long long a1)
{
    unsigned int v1;  // [sp-0x4ec]
    struct struct_0 **v2;  // [sp-0x4e8], Other Possible Types: int, unsigned long long
    unsigned long long v3;  // [sp-0x4e0]
    struct struct_0 **v4;  // [sp-0x4d8], Other Possible Types: struct struct_5 **, unsigned long, unsigned long long
    unsigned int v5;  // [bp-0x4d0], Other Possible Types: unsigned long long, unsigned long
    void* v6;  // [sp-0x4c8]
    int v7;  // [bp-0x4b8], Other Possible Types: unsigned long, unsigned long long
    unsigned long v8;  // [sp-0x4b0], Other Possible Types: unsigned long long
    unsigned long v9;  // [sp-0x4a8], Other Possible Types: unsigned long long
    struct_0 *v10;  // [sp-0x498]
    void* v11;  // [sp-0x490]
    unsigned long long v12;  // [sp-0x488]
    void* v13;  // [sp-0x480]
    void* v14;  // [bp-0x478], Other Possible Types: uint128_t [2], char, unsigned long
    unsigned long v15;  // [sp-0x470], Other Possible Types: unsigned long long
    char v16;  // [bp-0x468], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v17;  // [sp-0x460]
    char v18;  // [bp-0x458], Other Possible Types: unsigned long long
    unsigned long long v19;  // [sp-0x450]
    void* v20;  // [sp-0x448], Other Possible Types: unsigned long
    unsigned short v21;  // [sp-0x440]
    int v22;  // [sp-0x438], Other Possible Types: unsigned long long
    unsigned long long v23;  // [sp-0x430]
    unsigned long long v24;  // [sp-0x428]
    int v25;  // [bp-0x418]
    unsigned long long v26;  // [sp-0x408], Other Possible Types: unsigned long
    unsigned long v27;  // [sp-0x3f8], Other Possible Types: unsigned long long
    unsigned long long v28;  // [sp-0x3f0]
    char v29;  // [bp-0x3e8], Other Possible Types: unsigned long long
    unsigned long v30;  // [sp-0x3e0]
    unsigned long v31;  // [sp-0x3b0], Other Possible Types: unsigned long long
    unsigned long long v32;  // [sp-0x3a8]
    int v33;  // [sp-0x3a0]
    int v34;  // [sp-0x390]
    unsigned long long v35;  // [sp-0x380]
    unsigned long v36;  // [sp-0x378], Other Possible Types: unsigned long long
    unsigned long v37;  // [sp-0x370], Other Possible Types: unsigned long long
    void* v38;  // [sp-0x368], Other Possible Types: char, unsigned long
    int v39;  // [sp-0x360]
    char v40;  // [sp-0x350]
    int v41;  // [sp-0x348]
    int v42;  // [sp-0x338]
    int v43;  // [sp-0x328]
    void* v44;  // [bp-0x318], Other Possible Types: int, char, unsigned long, unsigned long long
    unsigned long long v45;  // [sp-0x310]
    struct struct_5 **v46;  // [sp-0x308], Other Possible Types: unsigned long, unsigned long long
    unsigned long v47;  // [bp-0x300], Other Possible Types: unsigned int, unsigned long long
    void* v48;  // [sp-0x2f8]
    unsigned long v49;  // [sp-0x2f0], Other Possible Types: unsigned long long
    unsigned long long v50;  // [sp-0x2e8]
    char v51;  // [sp-0x2e0]
    unsigned short v52;  // [bp-0x2d8]
    char v53;  // [sp-0x2d7]
    char v54;  // [bp-0x2d0]
    uint128_t v58[2];  // r14
    struct_0 *v59;  // rax
    char v60;  // bl
    struct_0 *v61;  // rax
    unsigned long long v62;  // r14
    unsigned long long v63;  // r15
    unsigned long long v64;  // rdx
    unsigned long long v65;  // rcx
    uint128_t v66[2];  // rax
    int v67;  // xmm0
    struct_2 *v68;  // r15
    unsigned long long v69;  // rdx
    unsigned long long *v70;  // fs
    unsigned long long *v71;  // rax
    unsigned long long *v72;  // fs
    int v73;  // xmm0
    unsigned long long v74;  // r8
    unsigned long long v75;  // rdi
    unsigned long long v76;  // r9
    unsigned long long v77;  // rax
    char *v78;  // rsi
    unsigned long long v79;  // r10
    unsigned long long v80;  // rcx
    unsigned long long v81;  // r11
    unsigned long long v82;  // rax
    char *v83;  // rdx
    unsigned long long v84;  // r8
    char *v85;  // rdx
    unsigned long long v86;  // rdi
    unsigned long long v87;  // r13
    unsigned long long v88;  // r13
    unsigned long long v89;  // rax
    unsigned long long v90;  // rbx
    struct_4 *v92;  // r13
    int v94;  // xmm0
    unsigned long long v95;  // rsi
    unsigned long long v96;  // rbx
    unsigned long long v98;  // rbx
    unsigned long long v99;  // rbx
    unsigned long long v100;  // rsi
    unsigned long long v101;  // rdx
    int v102;  // xmm0
    struct_2 *v103;  // r15

    uu_tsort::uu_app::h6dccc4be61c1d918(&v44);
    clap_builder::builder::command::Command::try_get_matches_from::hf438fa9a2e63d361(&v14, &v44, a0, a1);
    if (v31 == 0x8000000000000000)
        v58 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h0cdf31ef837cc412(v32);
    v35 = v20;
    *((int128_t *)&v34) = *((int128_t *)&v18);
    *((int128_t *)&v33) = *((int128_t *)&v16);
    v31 = v14;
    v32 = v15;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hb0d01fb5050104f8(&v44, &v31, "filei128", 4);
    v59 = clap_builder::parser::error::MatchesError::unwrap::h5a4bcc8b39c2894e("filei128", 4, &v44);
    if (!v59)
        core::option::expect_failed::h9e03a1f6ff88dbcf(); /* do not return */
    v10 = v59;
    v60 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hf2f7bc3b949dec0a(v59->field_8, v59[1].padding_0, "-: read error: Is a directorycannot access a Thread Local Storage value during or after destruction/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/std/src/thread/local.rs: input contains a loop:\n: input contains an odd number of tokens/home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/clap_builder-4.4.2/src/util/flat_map.rs", 1);
    if (v60)
    {
        v36 = std::io::stdio::stdin::h7215cc131abb55d8();
        v64 = &v36;
        v65 = &g_4e4bb8;
        goto LABEL_437ffa;
    }
    v61 = v10;
    v62 = v61->field_8;
    v63 = v61[1].padding_0;
    if ((char)std::path::Path::is_dir::h9ac0db933706da51(v62, v63))
    {
        v2 = &v10;
        v3 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::he01114c095f3b796;
        v44 = &g_4e4af0;
        v45 = 2;
        v48 = 0;
        v46 = &v2;
        v47 = 1;
        alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v14, &v44);
        v47 = 1;
        *((int128_t *)&v44) = *((int128_t *)&v14);
        v46 = v16;
        v66 = __rust_alloc(32, 8);
        if (!v66)
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
        v67 = (int128_t)v44;
        v66[1] = *((int128_t *)&v46);
        *((void*)&v66[0]) = v67;
        v68 = &g_4e4b48.field_0;
    }
    std::fs::File::open::hd10cfb1c40309682(&v44, v62, v63);
    _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::hc8257c416e102e3d(&v14, &v44, v10);
    v66 = v14;
    v1 = v15;
    v64 = &v1;
    v65 = &g_4e4a98;
LABEL_437ffa:
    std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::hec15a1a1ce0605c8(&v29, 0x2000, v64, v65);
    v11 = 0;
    v12 = 1;
    v13 = 0;
    if (_$LT$std..io..buffered..bufreader..BufReader$LT$R$GT$$u20$as$u20$std..io..Read$GT$::read_to_string::h09009deabb73f9dc(&v29, &v11))
    {
        v66 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h1e47f2ada1a82a7a(v69);
        goto LABEL_43865b;
    }
    else
    {
        v60 = v60;
        if (vvar_1450)
        {
            v71 = -48 + *(v70) + 8;
        }
        else
        {
            v71 = std::sys::thread_local::native::lazy::Storage$LT$T$C$D$GT$::initialize::h14d3939594b50452(*(v72) - 48, 0);
            if (!v71)
                core::result::unwrap_failed::h39784290e544308e(); /* do not return */
        }
        v73 = *((int128_t *)&v71);
        *(v71) = *(v71) + 1;
        *((uint128_t *)&v42) = g_4e4c38;
        *((uint128_t *)&v41) = g_4e4c28;
        v43 = v73;
        v44 = 0;
        v45 = v13;
        v46 = v12;
        v47 = v45;
        v48 = 0;
        v49 = v45;
        v50 = 42949672970;
        v51 = 1;
        v52 = 0;
    }
    while (true)
    {
        v74 = v48;
        v75 = v49;
        if (!(v75 >= v74) || !((v76 = v47, v75 <= v76)))
        {
LABEL_4383dc:
            if (!(!v53) || !((v53 = 1, v88 = v44, (char)v52 || v45 != v88)))
                goto LABEL_438950;
            v87 = v88 + v46;
            goto LABEL_438420;
        }
        v77 = v75 - v74;
        v78 = v46 + v74;
        v79 = v51;
        v80 = v79 & 4294967295;
        v81 = *((char *)&v49 + v80);
        if (v77 <= 15)
        {
            if (v75 == v74)
            {
LABEL_4383d4:
                v48 = v75;
                goto LABEL_4383dc;
            }
            else
            {
                v83 = 0;
                while (*((char *)(v78 + v83)) != (char)v81)
                {
                    v83 += 1;
                    if (v77 == v83)
                        goto LABEL_4383d4;
                }
            }
        }
        v82 = core::slice::memchr::memchr_aligned::hd7c7abb492a5eb9c(v81 & 4294967295, v78);
        if (v82 != 1)
        {
            v48 = v49;
            if (!v82)
                goto LABEL_4383dc;
            v87 = v46 + v44;
            v44 = v74;
        }
        else
        {
            v76 = v47;
            v79 = v51;
            v80 = v79 & 4294967295;
            v84 = v48;
            v74 = &v85[v84 + 1];
            v48 = v74;
            v86 = v74;
            if (!(v86 >= v80) || !(v74 <= v76))
            {
                v75 = v49;
                if (!(v75 >= v74) || !(v75 <= v76))
                    goto LABEL_4383dc;
            }
            else
            {
                if ((v79 & 255) >= 5)
                    core::slice::index::slice_end_index_len_fail::hb96f779f51482844(); /* do not return */
                v74 = v48;
                if (!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hf2f7bc3b949dec0a(v86 - v80 + v46, v80, &v50, v80))
                    v76 = v47;
            }
            continue;
        }
LABEL_438420:
        v89 = core::ops::function::impls::_$LT$impl$u20$core..ops..function..FnOnce$LT$A$GT$$u20$for$u20$$RF$mut$u20$F$GT$::call_once::hcdf7f51ef678fdd6(&v54, v87);
        if (!v89)
        {
LABEL_438950:
            uu_tsort::Graph::run_tsort::h26bfb03b6d41d9be(&v38, &v41);
            if (!v38)
            {
                v26 = *((long long *)&v40);
                v25 = v39;
                alloc::str::join_generic_copy::hd7dc5308a025157a(&v44, (long long)(&v25)[8], *((long long *)&v40), "\nTry ' --help' for more information.\n", 1);
                v4 = v46;
                *((int128_t *)&v2) = *((int128_t *)&v44);
                v7 = &v2;
                v8 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                v44 = &g_4e4a40;
                v45 = 2;
                v48 = 0;
                v46 = &v7;
                v47 = 1;
                std::io::stdio::_print::he918bceb0c89db46(&v44, v95, v69);
                ::0x4378f0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::he6e1d5d4b131fff5(&v2);
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::h6dde0e8228aed8ea(&v25);
                v58 = 0;
            }
            else
            {
                v24 = *((long long *)&v40);
                v22 = v39;
                v7 = uucore::util_name::h359eff083fe53467();
                v8 = v69;
                v2 = &v7;
                v3 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h7d8c8854706edb45;
                v4 = &v10;
                v5 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::he01114c095f3b796;
                v44 = &g_4e4c48;
                v45 = 3;
                v48 = 0;
                v46 = &v2;
                v47 = 2;
                alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v25, &v44);
                v7 = v25;
                v9 = v26;
                v96 = v24;
                if (v96)
                {
                    do
                    {
                        v98 = v96 * 16;
                        v37 += 16;
                        v27 = uucore::util_name::h359eff083fe53467();
                        v28 = v69;
                        v2 = &v27;
                        v3 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h7d8c8854706edb45;
                        v4 = &v37;
                        v5 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h7dd2c563386acb0b;
                        v44 = &g_4e4c78;
                        v45 = 3;
                        v48 = 0;
                        v46 = &v2;
                        v47 = 2;
                        if ((char)core::fmt::write::h1b95545231c46caf(&v7, &g_4e49d8, &v44))
                            core::result::unwrap_failed::h39784290e544308e(); /* do not return */
                    } while ((v99 = v98 - 16, v98 != 16));
                }
                v2 = &v7;
                v3 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                v44 = &anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654;
                v45 = 1;
                v48 = 0;
                v46 = &v2;
                v47 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v44, v100, v101);
                alloc::str::join_generic_copy::hd7dc5308a025157a(&v44, v23, v24, "\nTry ' --help' for more information.\n", 1);
                v4 = v46;
                *((int128_t *)&v2) = *((int128_t *)&v44);
                v27 = &v2;
                v28 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                v44 = &g_4e4a40;
                v45 = 2;
                v48 = 0;
                v46 = &v27;
                v47 = 1;
                std::io::stdio::_print::he918bceb0c89db46(&v44, v95, v69);
                ::0x4378f0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::he6e1d5d4b131fff5(&v2);
                _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h4870c1fde33712bd(&v2);
                v46 = v4;
                *((int128_t *)&v44) = (int128_t)v2;
                v47 = 1;
                v58 = alloc::alloc::exchange_malloc::hfb1e4e27cc1d1260();
                v102 = (int128_t)v44;
                v58[1] = *((int128_t *)&v46);
                *((void*)&v58[0]) = v102;
                ::0x4378f0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::he6e1d5d4b131fff5(&v7);
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::h6dde0e8228aed8ea(&v22);
            }
            _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h080069f1523da2f6(&v41);
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h3e491e745ce69f7e();
            _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h0e396006af5d5686(&v11);
            if (v30)
                __rust_dealloc(v29);
            if (!v60)
                close(v1);
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h528b3d112364a53b(&v31);
            v103 = &g_4e4b48.field_0;
        }
        else
        {
            v14 = 0;
            v15 = v69;
            v16 = v89;
            v17 = v69;
            v18 = v89;
            v19 = v89 + v69;
            v20 = 0;
            v21 = 1;
            _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h754d5ed3204ead74(&v7, &v14, v69);
            v90 = v9;
            if (!v90)
            {
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::h6dde0e8228aed8ea(&v7);
                goto LABEL_438950;
            }
            while (true)
            {
                v92 = v8 + 24;
                if (!v90)
                    break;
                if (v90 != 1)
                {
                    v90 -= 2;
                    uu_tsort::Graph::add_edge::h9abc5681d73c775b(&v41, v92->field_0, v92->field_-8, v92->field_-10, v92->field_-18);
                }
                else
                {
                    v38 = 0;
                    *((int128_t *)&v39) = *((int128_t *)&v10->field_8);
                    v40 = 0;
                    v22 = &v38;
                    v23 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
                    v2 = &g_4e4cc0;
                    v3 = 2;
                    v6 = 0;
                    v4 = &v22;
                    v5 = 1;
                    alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v25, &v2);
                    v5 = 1;
                    v2 = v25;
                    v4 = v26;
                    v66 = __rust_alloc(32, 8);
                    if (!v66)
                        alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
                    v94 = (int128_t)v2;
                    v66[1] = *((int128_t *)&v4);
                    *((void*)&v66[0]) = v94;
                    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h3e491e745ce69f7e();
                    _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::heb53575a432d23b1(&v7);
                    _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h080069f1523da2f6(&v41);
                    v68 = &g_4e4b48.field_0;
LABEL_43865b:
                    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h3e491e745ce69f7e();
                    _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h0e396006af5d5686(&v11);
                    if (v30)
                        __rust_dealloc(v29);
                    if (!v60)
                        close(v1);
                }
            }
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h3e491e745ce69f7e();
            _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::heb53575a432d23b1(&v7);
            if (!(!v53))
                goto LABEL_438950;
        }
    }
}
