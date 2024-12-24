long long uu_tsort::uumain::uumain::h56d810435b029402(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [sp-0x4fd]
    unsigned int v1;  // [sp-0x4fc]
    struct struct_0 **v2;  // [sp-0x4f8], Other Possible Types: int, unsigned long, unsigned long long
    unsigned long v3;  // [sp-0x4f0], Other Possible Types: unsigned long long
    struct struct_0 **v4;  // [bp-0x4e8], Other Possible Types: char, unsigned long long
    unsigned int v5;  // [bp-0x4e0], Other Possible Types: unsigned long long, unsigned long
    void* v6;  // [bp-0x4d8], Other Possible Types: char
    int v7;  // [bp-0x4c8], Other Possible Types: unsigned long, unsigned long long
    unsigned long v8;  // [sp-0x4c0], Other Possible Types: unsigned long long
    unsigned long v9;  // [sp-0x4b8], Other Possible Types: unsigned long long
    struct_0 *v10;  // [sp-0x4b0]
    int v11;  // [sp-0x4a8], Other Possible Types: unsigned long long
    unsigned long long v12;  // [sp-0x4a0]
    unsigned long long v13;  // [sp-0x498]
    unsigned long v14;  // [sp-0x488], Other Possible Types: unsigned long long
    unsigned long long v15;  // [sp-0x480]
    void* v16;  // [sp-0x478]
    unsigned long long v17;  // [sp-0x470]
    void* v18;  // [sp-0x468]
    char v19;  // [bp-0x460]
    char v20;  // [bp-0x458]
    char v21;  // [bp-0x450]
    char v22;  // [bp-0x440]
    char v23;  // [bp-0x430]
    unsigned long v24;  // [sp-0x428], Other Possible Types: unsigned long long
    unsigned long v25;  // [sp-0x420], Other Possible Types: unsigned long long
    unsigned long long v26;  // [sp-0x418]
    unsigned long v27;  // [sp-0x410], Other Possible Types: unsigned long long
    void* v28;  // [sp-0x408], Other Possible Types: char, unsigned long
    int v29;  // [sp-0x400]
    char v30;  // [sp-0x3f0]
    int v31;  // [sp-0x3e8]
    int v32;  // [sp-0x3d8]
    unsigned long long v33;  // [sp-0x3c8]
    unsigned long long v34;  // [sp-0x3c0]
    unsigned long v35;  // [sp-0x3b8], Other Possible Types: unsigned long long
    unsigned long long v36;  // [sp-0x3b0]
    int v37;  // [sp-0x3a8]
    int v38;  // [sp-0x398]
    unsigned long long v39;  // [sp-0x388]
    char v40;  // [bp-0x380]
    char v41;  // [bp-0x370]
    char v42;  // [bp-0x368]
    char v43;  // [bp-0x358]
    char v44;  // [bp-0x350]
    char v45;  // [bp-0x340]
    int v46;  // [bp-0x338], Other Possible Types: void*, char, unsigned long, unsigned long long
    unsigned long long v47;  // [sp-0x330]
    int v48;  // [sp-0x328], Other Possible Types: struct struct_1 **, unsigned long, unsigned long long
    unsigned int v49;  // [bp-0x320], Other Possible Types: unsigned long long
    int v50;  // [bp-0x318], Other Possible Types: void*
    int v51;  // [sp-0x308]
    unsigned short v52;  // [sp-0x2f8]
    char v53;  // [bp-0x2f0]
    void* v54;  // [sp-0x70]
    unsigned long long v55;  // [sp-0x68]
    char v56;  // [bp-0x60]
    unsigned short v57;  // [sp-0x38]
    unsigned long long v59;  // rdx
    void* v62;  // rax
    struct_0 *v63;  // rax
    struct_0 *v64;  // rax
    unsigned long long v65;  // r14
    unsigned long long v66;  // r15
    unsigned long long v67;  // rdx
    unsigned long long v68;  // rcx
    unsigned long long v69;  // rsi
    int v70;  // xmm0
    unsigned long long v72;  // rax
    unsigned long long v73;  // rax
    unsigned long long v74[4];  // rax
    unsigned long long v75;  // rdx
    unsigned long long v76;  // rcx
    unsigned long long v77;  // rdx
    unsigned long long v78;  // rax
    unsigned long long v79;  // rsi
    unsigned long long v80;  // rdx

    uu_tsort::uu_app::hbffb2da829da9e5a(&v46, a1, v59);
    clap_builder::builder::command::Command::try_get_matches_from::h4ce435a71141dbc3(&v19, &v46, a0, a1);
    if (v35 == 0x8000000000000000)
    {
        v62 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7cfa18d1f977710c(v36);
        return v62;
    }
    v39 = *((long long *)&v23);
    *((int128_t *)&v38) = *((int128_t *)&v22);
    *((int128_t *)&v37) = *((int128_t *)&v21);
    v35 = *((long long *)&v19);
    v36 = *((long long *)&v20);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h2c7e5f40c96c26b2(&v46, &v35, "filei128", 4);
    v63 = clap_builder::parser::error::MatchesError::unwrap::h1d0fbad0f7bc4012("filei128", 4, &v46);
    if (!v63)
        core::option::expect_failed::h9e03a1f6ff88dbcf(); /* do not return */
    v10 = v63;
    v0 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h0550cd44a77a6e6c(v63->field_8, v63[1].padding_0, "-: read error: Is a directorycannot access a Thread Local Storage value during or after destruction/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/std/src/thread/local.rs: input contains a loop:\n: input contains an odd number of tokensmid > len/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/slice/iter.rs", 1);
    if (v0)
    {
        v24 = std::io::stdio::stdin::h7215cc131abb55d8();
        v67 = &v24;
        v68 = &g_51fa00;
        goto LABEL_4678f4;
    }
    else
    {
        v64 = v10;
        v65 = v64->field_8;
        v66 = v64[1].padding_0;
        if ((char)std::path::Path::is_dir::h9ac0db933706da51(v65, v66))
        {
            v2 = &v10;
            v3 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h3848b3af15eb0735;
            v46 = &g_51f938;
            v47 = 2;
            v50 = 0;
            v48 = &v2;
            v49 = 1;
            core::option::Option$LT$T$GT$::map_or_else::hefb88bb405983bd4(&v40, &v46);
            v49 = 1;
            *((int128_t *)&v46) = *((int128_t *)&v40);
            v48 = *((long long *)&v41);
            v62 = alloc::boxed::Box$LT$T$GT$::new::h2dbcd8f3d5e358e0(&v46);
        }
        else
        {
            std::fs::File::open::hfc8258364f3e077a(&v46, v65, v66);
            _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h8586439af7b3b0cf(&v2, &v46, v10);
            v62 = v2;
            if (!v62)
            {
                v1 = v3;
                v67 = &v1;
                v68 = &g_51f8e0;
LABEL_4678f4:
                std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::h3d7897ecf14145a2(&v19, 0x2000, v67, v68);
                v16 = 0;
                v17 = 1;
                v18 = 0;
                if (_$LT$std..io..buffered..bufreader..BufReader$LT$R$GT$$u20$as$u20$std..io..Read$GT$::read_to_string::h20b817362863232a(&v19, &v16))
                {
                    v62 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he9f0d7c8a30f7b86(v59);
                }
                else
                {
                    std::thread::local::LocalKey$LT$T$GT$::try_with::ha8df1bd18ef51428(&v46, v69, v59);
                    *((uint128_t *)&v31) = g_51fa70;
                    *((uint128_t *)&v32) = g_51fa80;
                    v33 = core::result::Result$LT$T$C$E$GT$::expect::hd5c48f5a9c5b0acf(&v46);
                    v34 = v59;
                    ::0x466590::_$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h77b0cfb9226a3587(&v2, v17, v47);
                    v70 = *((int128_t *)&v2);
                    *((int128_t *)&v51) = *((int128_t *)&v6);
                    *((int128_t *)&v50) = *((int128_t *)&v4);
                    v48 = v70;
                    v46 = 0;
                    v47 = v18;
                    v52 = 0;
                    while (true)
                    {
                        v12 = v12;
                        v72 = core::str::iter::SplitInternal$LT$P$GT$::next_inclusive::h828c770fb187e5d2(&v46);
                        if (!(v72) || !((v73 = core::ops::function::impls::_$LT$impl$u20$core..ops..function..FnOnce$LT$A$GT$$u20$for$u20$$RF$mut$u20$F$GT$::call_once::h2ac0299899f9994a(&v53, v72, v59), v73)))
                        {
LABEL_467d71:
                            uu_tsort::Graph::run_tsort::ha885cc55ef4f9e8a(&v28, &v31, v75, v76);
                            if (!v28)
                            {
                                v77 = *((long long *)&v30);
                                v13 = *((long long *)&v30);
                                v11 = v29;
                                alloc::str::join_generic_copy::hc20cb5d97129af09(&v46, v12, v77, "\nTry ' --help' for more information.\n", 1);
                                v4 = v48;
                                *((int128_t *)&v2) = *((int128_t *)&v46);
                                v7 = &v2;
                                v8 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                                v46 = &g_51f888;
                                v47 = 2;
                                v50 = 0;
                                v48 = &v7;
                                v49 = 1;
                                std::io::stdio::_print::he918bceb0c89db46(&v46, v69, v59);
                                ::0x465f90::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h64b2aec55e8e3252(&v2);
                                ::0x466010::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::hb576f94e03e97b51(&v11);
                                v62 = 0;
                            }
                            else
                            {
                                v9 = *((long long *)&v30);
                                v7 = v29;
                                v11 = uucore::util_name::h412db5e565a079f3();
                                v12 = v59;
                                v2 = &v11;
                                v3 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc31eb089e9fd2e70;
                                v4 = &v10;
                                v5 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h3848b3af15eb0735;
                                v46 = &g_51fa90;
                                v47 = 3;
                                v50 = 0;
                                v48 = &v2;
                                v49 = 2;
                                core::option::Option$LT$T$GT$::map_or_else::hefb88bb405983bd4(&v44, &v46);
                                *((int128_t *)&v11) = *((int128_t *)&v44);
                                v13 = *((long long *)&v45);
                                v25 = v8;
                                v26 = v9 * 16 + v25;
                                v78 = ::0x468330::_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h43d6d95426f3583b(&v25);
                                if (v78)
                                {
                                    do
                                    {
                                        v27 = v78;
                                        v14 = uucore::util_name::h412db5e565a079f3();
                                        v15 = v59;
                                        v2 = &v14;
                                        v3 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc31eb089e9fd2e70;
                                        v4 = &v27;
                                        v5 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h9db814ebfa41164f;
                                        v46 = &g_51fac0;
                                        v47 = 3;
                                        v50 = 0;
                                        v48 = &v2;
                                        v49 = 2;
                                        core::result::Result$LT$T$C$E$GT$::unwrap::h3ae17f3be69befea((unsigned int)::0x4673e0::_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::hbfa5358aa0e8c07f(&v11, &v46));
                                        v78 = ::0x468330::_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h43d6d95426f3583b(&v25);
                                    } while (v78);
                                }
                                v2 = &v11;
                                v3 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                                v46 = &g_414cf0;
                                v47 = 1;
                                v50 = 0;
                                v48 = &v2;
                                v49 = 1;
                                std::io::stdio::_eprint::hcdfeec148c7134f7(&v46, v79, v80);
                                alloc::str::join_generic_copy::hc20cb5d97129af09(&v46, v8, v9, "\nTry ' --help' for more information.\n", 1);
                                v4 = v48;
                                *((int128_t *)&v2) = *((int128_t *)&v46);
                                v14 = &v2;
                                v15 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                                v46 = &g_51f888;
                                v47 = 2;
                                v50 = 0;
                                v48 = &v14;
                                v49 = 1;
                                std::io::stdio::_print::he918bceb0c89db46(&v46, v69, v59);
                                ::0x465f90::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h64b2aec55e8e3252(&v2);
                                ::0x466540::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hf2f784d5a0be752f(&v2);
                                v48 = v4;
                                *((int128_t *)&v46) = (int128_t)v2;
                                v49 = 1;
                                v62 = alloc::boxed::Box$LT$T$GT$::new::h2dbcd8f3d5e358e0(&v46);
                                ::0x465f90::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h64b2aec55e8e3252(&v11);
                                ::0x466010::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::hb576f94e03e97b51(&v7);
                            }
                            core::ptr::drop_in_place$LT$uu_tsort..Graph$GT$::hb277ca88f555d6d0(&v31);
                            ::0x465f90::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h64b2aec55e8e3252(&v16);
                            core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$$RF$mut$u20$dyn$u20$std..io..Read$GT$$GT$::h13f78e7d43031ede(*((long long *)&v19), *((long long *)&v20));
                            if (!v0)
                                core::ptr::drop_in_place$LT$std..fs..File$GT$::hb2222169f252f845(&v1);
                            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hf583010622f94fe0(&v35);
                            return v62;
                        }
                        _$LT$core..str..pattern..MultiCharEqPattern$LT$C$GT$$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h302642e589407058(&v56, v73, v59);
                        v54 = 0;
                        v55 = v59;
                        v57 = 1;
                        _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::hbab52a844c323392(&v7, &v54, v59);
                        if (v12)
                        {
                            v11 = v8;
                            v12 = v9;
                            v13 = 2;
                            v74 = _$LT$core..slice..iter..Chunks$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h69368d034653f22e(&v11);
                            if (!v74)
                            {
                                ::0x466010::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::hb576f94e03e97b51(&v7);
                                v12 = v12;
                            }
                            else if (v59 != 2)
                            {
                                v28 = 0;
                                *((int128_t *)&v29) = *((int128_t *)&v10->field_8);
                                v30 = 0;
                                v14 = &v28;
                                v15 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
                                v2 = &g_51fb08;
                                v3 = 2;
                                v6 = 0;
                                v4 = &v14;
                                v5 = 1;
                                core::option::Option$LT$T$GT$::map_or_else::hefb88bb405983bd4(&v42, &v2);
                                v5 = 1;
                                *((int128_t *)&v2) = *((int128_t *)&v42);
                                v4 = *((long long *)&v43);
                                v62 = alloc::boxed::Box$LT$T$GT$::new::h2dbcd8f3d5e358e0(&v2);
                                ::0x466010::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::hb576f94e03e97b51(&v7);
                                core::ptr::drop_in_place$LT$uu_tsort..Graph$GT$::hb277ca88f555d6d0(&v31);
                                break;
                            }
                            else
                            {
                                uu_tsort::Graph::add_edge::h291c02ca2b894066(&v31, v74[0], v74[1], v74[2], v74[3]);
                            }
                        }
                        else
                        {
                            ::0x466010::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::hb576f94e03e97b51(&v7);
                            goto LABEL_467d71;
                        }
                    }
                }
                ::0x465f90::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h64b2aec55e8e3252(&v16);
                core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$$RF$mut$u20$dyn$u20$std..io..Read$GT$$GT$::h13f78e7d43031ede(*((long long *)&v19), *((long long *)&v20));
                if (!v0)
                    core::ptr::drop_in_place$LT$std..fs..File$GT$::hb2222169f252f845(&v1);
            }
        }
    }
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hf583010622f94fe0(&v35);
    return v62;
}
