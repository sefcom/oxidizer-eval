long long uu_tsort::uumain::uumain::hff4558af46a5d226(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long a3, unsigned long a4, unsigned long a5)
{
    char v0;  // [sp-0x4fd]
    unsigned int v1;  // [sp-0x4fc]
    struct struct_0 **v2;  // [sp-0x4f8]
    unsigned long v3;  // [sp-0x4f0], Other Possible Types: unsigned long long
    char *v4;  // [bp-0x4e8], Other Possible Types: struct struct_0 **, char, unsigned long long
    unsigned int v5;  // [bp-0x4e0], Other Possible Types: unsigned long long, unsigned long
    void* v6;  // [bp-0x4d8], Other Possible Types: char
    struct struct_1 **v7;  // [bp-0x4c8], Other Possible Types: struct struct_0 **
    struct struct_0 **v8;  // [sp-0x4c0], Other Possible Types: unsigned long, unsigned long long
    unsigned long v9;  // [sp-0x4b8], Other Possible Types: unsigned long long
    struct_2 *v10;  // [sp-0x4b0]
    struct struct_0 **v11;  // [sp-0x4a8]
    unsigned long long v12;  // [sp-0x4a0]
    unsigned long long v13;  // [sp-0x498]
    struct struct_0 **v14;  // [sp-0x488], Other Possible Types: struct struct_1 **
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
    struct struct_0 **v29;  // [sp-0x400]
    char v30;  // [sp-0x3f0]
    struct struct_0 **v31;  // [sp-0x3e8]
    struct struct_0 **v32;  // [sp-0x3d8]
    unsigned long long v33;  // [sp-0x3c8]
    unsigned long long v34;  // [sp-0x3c0]
    unsigned long v35;  // [sp-0x3b8], Other Possible Types: unsigned long long
    unsigned long long v36;  // [sp-0x3b0]
    struct struct_0 **v37;  // [sp-0x3a8]
    struct struct_0 **v38;  // [sp-0x398]
    unsigned long long v39;  // [sp-0x388]
    char v40;  // [bp-0x380]
    char v41;  // [bp-0x370]
    char v42;  // [bp-0x368]
    char v43;  // [bp-0x358]
    char v44;  // [bp-0x350]
    char v45;  // [bp-0x340]
    void* v46;  // [bp-0x338], Other Possible Types: struct struct_0 **
    unsigned long long v47;  // [sp-0x330]
    struct struct_0 **v48;  // [sp-0x328], Other Possible Types: struct struct_1 **, unsigned long, unsigned long long
    struct struct_0 **v49;  // [bp-0x320], Other Possible Types: unsigned long long, unsigned int
    void* v50;  // [bp-0x318], Other Possible Types: struct struct_0 **
    struct struct_0 **v51;  // [sp-0x308]
    unsigned short v52;  // [sp-0x2f8]
    char v53;  // [bp-0x2f0]
    void* v54;  // [sp-0x70]
    unsigned long long v55;  // [sp-0x68]
    char v56;  // [bp-0x60]
    unsigned short v57;  // [sp-0x38]
    unsigned long long v59;  // r8
    unsigned long long v60;  // r9
    struct struct_0 **v63;  // rax
    struct_2 *v64;  // rax
    struct_2 *v65;  // rax
    unsigned long long v66;  // r14
    unsigned long long v67;  // r15
    unsigned long long v68;  // rcx
    char *v69;  // rdx
    unsigned long long v70;  // rdx
    unsigned long long v71;  // rsi
    unsigned long long v72;  // rdx
    struct struct_0 **v73;  // xmm0
    unsigned long long v75;  // rax
    unsigned long long v76;  // rax
    unsigned long long v77[4];  // rax
    unsigned long long v78;  // rdx
    unsigned long long v79;  // rcx
    unsigned long long v80;  // rdx
    unsigned long long v81;  // rax
    unsigned long long v82;  // rsi
    unsigned long long v83;  // rdx

    uu_tsort::uu_app::he13fe654e24171eb(&v46, a1, a2);
    clap_builder::builder::command::Command::try_get_matches_from::hff2c0943be558db2(&v19, &v46, a0, a1, v59, v60);
    if (v35 == 0x8000000000000000)
    {
        v63 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(v36);
        return v63;
    }
    v39 = *((long long *)&v23);
    *((int128_t *)&v38) = *((int128_t *)&v22);
    *((int128_t *)&v37) = *((int128_t *)&v21);
    v35 = *((long long *)&v19);
    v36 = *((long long *)&v20);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h28e7d3f2482c50b0(&v46, &v35, "filei128", 4);
    v64 = clap_builder::parser::error::MatchesError::unwrap::h3a667534f1abdb57("filei128", 4, &v46);
    if (!v64)
        core::option::expect_failed::h9e03a1f6ff88dbcf(); /* do not return */
    v10 = v64;
    v0 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hd39b3327ae2a3504(v64->field_8, v64[1].padding_0, "-", 1);
    if (v0)
    {
        v24 = std::io::stdio::stdin::h7215cc131abb55d8();
        v68 = &g_51e940;
        v69 = &v24;
        goto LABEL_4673e4;
    }
    else
    {
        v65 = v10;
        v66 = v65->field_8;
        v67 = v65[1].padding_0;
        if ((char)std::path::Path::is_dir::h9ac0db933706da51(v66, v67))
        {
            v2 = &v10;
            v3 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h93a685a2101b800f;
            v46 = &g_51e788;
            v47 = 2;
            v50 = 0;
            v48 = &v2;
            v49 = 1;
            core::option::Option$LT$T$GT$::map_or_else::h61e9aa31ff763042(&v40, &v46);
            v49 = 1;
            *((int128_t *)&v46) = *((int128_t *)&v40);
            v48 = *((long long *)&v41);
            v63 = alloc::boxed::Box$LT$T$GT$::new::h0a6e41ca1ff4979a(&v46);
        }
        else
        {
            std::fs::File::open::hb4ea70bf20a6c4bc(&v46, v66, v67);
            _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::haddad720e02ad751(&v2, &v46, v10);
            v63 = v2;
            if (!v63)
            {
                v1 = v3;
                v68 = &g_51e840;
                v69 = &v1;
LABEL_4673e4:
                std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::hda7e672eb5fcc9f0(&v19, 0x2000, v69, v68);
                v16 = 0;
                v17 = 1;
                v18 = 0;
                if (_$LT$std..io..buffered..bufreader..BufReader$LT$R$GT$$u20$as$u20$std..io..Read$GT$::read_to_string::h6b6a1c6d1bfd242d(&v19, &v16))
                {
                    v63 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v70);
                }
                else
                {
                    std::thread::local::LocalKey$LT$T$GT$::try_with::hce9af829f85cbcd2(&v46, v71, v72);
                    *((int128_t *)&v31) = *((int128_t *)&g_51e9b0);
                    *((int128_t *)&v32) = *((int128_t *)&g_51e9c0);
                    v33 = core::result::Result$LT$T$C$E$GT$::expect::hcf1ae938213ad007(&v46);
                    v34 = v72;
                    ::0x466080::_$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h77b0cfb9226a3587(&v2, v17, v47);
                    v73 = *((int128_t *)&v2);
                    *((int128_t *)&v51) = *((int128_t *)&v6);
                    *((int128_t *)&v50) = *((int128_t *)&v4);
                    v48 = v73;
                    v46 = 0;
                    v47 = v18;
                    v52 = 0;
                    while (true)
                    {
                        v12 = v12;
                        v75 = core::str::iter::SplitInternal$LT$P$GT$::next_inclusive::h62b04e9d485bb710(&v46);
                        if (!(v75) || !((v76 = core::ops::function::impls::_$LT$impl$u20$core..ops..function..FnOnce$LT$A$GT$$u20$for$u20$$RF$mut$u20$F$GT$::call_once::hff25601417aa14a1(&v53, v75, v72), v76)))
                        {
LABEL_467861:
                            uu_tsort::Graph::run_tsort::h2621dd5cdb4faf5a(&v28, &v31, v78, v79);
                            if (!v28)
                            {
                                v80 = *((long long *)&v30);
                                v13 = *((long long *)&v30);
                                v11 = v29;
                                alloc::str::join_generic_copy::h06f086fa24266c97(&v46, v12, v80, "\nTry ' --help' for more information.\n", 1);
                                v4 = v48;
                                *((int128_t *)&v2) = *((int128_t *)&v46);
                                v7 = &v2;
                                v8 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                                v46 = &g_51e730;
                                v47 = 2;
                                v50 = 0;
                                v48 = &v7;
                                v49 = 1;
                                std::io::stdio::_print::he918bceb0c89db46(&v46, v71, v72);
                                ::0x465a80::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h55282bba1fb61ecd(&v2);
                                ::0x465b00::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::h468c94d3c415e8e3(&v11);
                                v63 = 0;
                            }
                            else
                            {
                                v9 = *((long long *)&v30);
                                v7 = v29;
                                v11 = uucore::util_name::h60d842bf27b05e82();
                                v12 = v72;
                                v2 = &v11;
                                v3 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb3b4f0bde3248f91;
                                v4 = &v10;
                                v5 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h93a685a2101b800f;
                                v46 = &g_51e7c8;
                                v47 = 3;
                                v50 = 0;
                                v48 = &v2;
                                v49 = 2;
                                core::option::Option$LT$T$GT$::map_or_else::h61e9aa31ff763042(&v44, &v46);
                                *((int128_t *)&v11) = *((int128_t *)&v44);
                                v13 = *((long long *)&v45);
                                v25 = v8;
                                v26 = v9 * 16 + v25;
                                v81 = ::0x467e20::_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h8e4486873f05d014(&v25);
                                if (v81)
                                {
                                    do
                                    {
                                        v27 = v81;
                                        v14 = uucore::util_name::h60d842bf27b05e82();
                                        v15 = v72;
                                        v2 = &v14;
                                        v3 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb3b4f0bde3248f91;
                                        v4 = &v27;
                                        v5 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hdeab228c8bd01923;
                                        v46 = &g_51e7f8;
                                        v47 = 3;
                                        v50 = 0;
                                        v48 = &v2;
                                        v49 = 2;
                                        core::result::Result$LT$T$C$E$GT$::unwrap::h81a18be82a0e08f6((unsigned int)::0x466ed0::_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::hb0059971e59db927(&v11, &v46));
                                        v81 = ::0x467e20::_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h8e4486873f05d014(&v25);
                                    } while (v81);
                                }
                                v2 = &v11;
                                v3 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                                v46 = &g_414af0;
                                v47 = 1;
                                v50 = 0;
                                v48 = &v2;
                                v49 = 1;
                                std::io::stdio::_eprint::hcdfeec148c7134f7(&v46, v82, v83);
                                alloc::str::join_generic_copy::h06f086fa24266c97(&v46, v8, v9, "\nTry ' --help' for more information.\n", 1);
                                v4 = v48;
                                *((int128_t *)&v2) = *((int128_t *)&v46);
                                v14 = &v2;
                                v15 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                                v46 = &g_51e730;
                                v47 = 2;
                                v50 = 0;
                                v48 = &v14;
                                v49 = 1;
                                std::io::stdio::_print::he918bceb0c89db46(&v46, v71, v72);
                                ::0x465a80::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h55282bba1fb61ecd(&v2);
                                ::0x466030::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hfc4b2f6c5cbecadb(&v2);
                                v48 = v4;
                                *((int128_t *)&v46) = *((int128_t *)&v2);
                                v49 = 1;
                                v63 = alloc::boxed::Box$LT$T$GT$::new::h0a6e41ca1ff4979a(&v46);
                                ::0x465a80::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h55282bba1fb61ecd(&v11);
                                ::0x465b00::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::h468c94d3c415e8e3(&v7);
                            }
                            core::ptr::drop_in_place$LT$uu_tsort..Graph$GT$::hfb1817077245a538(&v31);
                            ::0x465a80::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h55282bba1fb61ecd(&v16);
                            core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$$RF$mut$u20$dyn$u20$std..io..Read$GT$$GT$::h6cf9e678dd9a4b95(*((long long *)&v19), *((long long *)&v20));
                            if (!v0)
                                core::ptr::drop_in_place$LT$std..fs..File$GT$::hf29264b319478393(&v1);
                            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h0a4c6af42426ce0a(&v35);
                            return v63;
                        }
                        _$LT$core..str..pattern..MultiCharEqPattern$LT$C$GT$$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h86df839be1b2713b(&v56, v76, v72);
                        v54 = 0;
                        v55 = v72;
                        v57 = 1;
                        _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h3d3838e8c745c526(&v7, &v54, v72);
                        if (v12)
                        {
                            v11 = v8;
                            v12 = v9;
                            v13 = 2;
                            while (true)
                            {
                                v77 = _$LT$core..slice..iter..Chunks$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h89c26ee6dbdc37df(&v11);
                                if (!v77)
                                    break;
                                if (v72 == 2)
                                {
                                    uu_tsort::Graph::add_edge::h8f24cab5b427ccb3(&v31, v77[0], v77[1], v77[2], v77[3]);
                                }
                                else
                                {
                                    v28 = 0;
                                    *((int128_t *)&v29) = *((int128_t *)&v10->field_8);
                                    v30 = 0;
                                    v14 = &v28;
                                    v15 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                                    v2 = &g_51e7a8;
                                    v3 = 2;
                                    v6 = 0;
                                    v4 = &v14;
                                    v5 = 1;
                                    core::option::Option$LT$T$GT$::map_or_else::h61e9aa31ff763042(&v42, &v2);
                                    v5 = 1;
                                    *((int128_t *)&v2) = *((int128_t *)&v42);
                                    v4 = *((long long *)&v43);
                                    v63 = alloc::boxed::Box$LT$T$GT$::new::h0a6e41ca1ff4979a(&v2);
                                    ::0x465b00::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::h468c94d3c415e8e3(&v7);
                                    core::ptr::drop_in_place$LT$uu_tsort..Graph$GT$::hfb1817077245a538(&v31);
                                    goto LABEL_4677e3;
                                }
                            }
                            ::0x465b00::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::h468c94d3c415e8e3(&v7);
                            v12 = v12;
                        }
                        else
                        {
                            ::0x465b00::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::h468c94d3c415e8e3(&v7);
                            goto LABEL_467861;
                        }
                    }
                }
LABEL_4677e3:
                ::0x465a80::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h55282bba1fb61ecd(&v16);
                core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$$RF$mut$u20$dyn$u20$std..io..Read$GT$$GT$::h6cf9e678dd9a4b95(*((long long *)&v19), *((long long *)&v20));
                if (!v0)
                    core::ptr::drop_in_place$LT$std..fs..File$GT$::hf29264b319478393(&v1);
            }
        }
    }
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h0a4c6af42426ce0a(&v35);
    return v63;
}
