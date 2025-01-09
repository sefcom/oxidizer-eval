long long uu_more::uumain::uumain::h4c9d06880e616e90(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v0;  // [sp-0x4e8]
    unsigned long long v1;  // [sp-0x4e0]
    char v2;  // [bp-0x4d0], Other Possible Types: unsigned long long
    unsigned long long v3;  // [sp-0x4c8]
    struct struct_0 **v4;  // [bp-0x4c0], Other Possible Types: char, unsigned long long
    unsigned long long v5;  // [sp-0x4b8]
    char *v6;  // [sp-0x4b0], Other Possible Types: unsigned long long
    char v7;  // [bp-0x4a8], Other Possible Types: unsigned long
    struct struct_0 **v8;  // [sp-0x4a0]
    unsigned long long v9;  // [sp-0x498]
    char *v10;  // [sp-0x490]
    unsigned long long v11;  // [sp-0x488]
    void* v12;  // [sp-0x480]
    unsigned long long v13;  // [sp-0x478]
    void* v14;  // [sp-0x470]
    unsigned long v15;  // [sp-0x468], Other Possible Types: unsigned long long
    unsigned long long v16;  // [sp-0x460]
    unsigned long long v17;  // [sp-0x458]
    void* v18;  // [bp-0x450], Other Possible Types: char, unsigned long
    char v19;  // [bp-0x448]
    char v20;  // [bp-0x440]
    int v21;  // [sp-0x438]
    char v22;  // [bp-0x430]
    int v23;  // [sp-0x428]
    char v24;  // [bp-0x420]
    int v25;  // [sp-0x418]
    unsigned long long v26;  // [sp-0x408]
    unsigned long long v27;  // [sp-0x400]
    char v28;  // [bp-0x3f8]
    char v29;  // [bp-0x3f4]
    char v30;  // [bp-0x3f0]
    int v31;  // [sp-0x3e8]
    int v32;  // [sp-0x3d8]
    int v33;  // [sp-0x3c8]
    unsigned long long v34;  // [sp-0x3b8]
    char v35;  // [bp-0x3a8]
    char v36;  // [bp-0x380]
    char v37;  // [bp-0x370]
    char v38;  // [bp-0x368]
    char v39;  // [bp-0x358]
    char v40;  // [bp-0x350]
    char v41;  // [bp-0x340]
    char v42;  // [bp-0x338]
    char v43;  // [bp-0x328]
    char v44;  // [bp-0x318]
    char v45;  // [bp-0x308]
    char v46;  // [bp-0x300]
    int v47;  // [bp-0x2f8], Other Possible Types: char, unsigned long, unsigned long long
    unsigned long long v48;  // [sp-0x2f0]
    struct struct_0 **v49;  // [sp-0x2e8], Other Possible Types: unsigned long long
    unsigned int v50;  // [bp-0x2e0], Other Possible Types: unsigned long long
    void* v51;  // [sp-0x2d8]
    void* v53;  // rax
    int v54;  // xmm0
    unsigned long long v55;  // rbx
    int v56;  // xmm0
    int v57;  // ymm0
    int v58;  // ymm0
    void* v59;  // rax
    struct struct_0 **v60;  // rbp
    unsigned long long v61;  // rdx
    unsigned long long v62;  // rbx
    unsigned long long v63;  // r13
    unsigned long long v64;  // r13
    unsigned long long v65[3];  // rax
    unsigned long long v66;  // rdx
    unsigned long long v67;  // r13
    unsigned long long v68[2];  // rax
    unsigned long long v69[2];  // r12
    unsigned long long v70;  // r14
    int v71;  // xmm0
    unsigned long long v72;  // rax
    int v73;  // xmm0
    unsigned long long v74;  // rax
    unsigned long long v75;  // rax
    int v76;  // xmm0
    unsigned long long v77;  // rax
    void* v78;  // r8
    unsigned long long v79;  // rsi
    unsigned long long v80;  // r9

    std::panicking::set_hook::h088dd0fc26a2f66c(alloc::boxed::Box$LT$T$GT$::new::hbe5cdb06c2dfc463(), &g_55f3e8);
    uu_more::uu_app::h63e8d97b108584c5(&v47);
    clap_builder::builder::command::Command::try_get_matches_from::h4336a96216fc8b75(&v18, &v47, a0, a1);
    if (v18 == 0x8000000000000000)
    {
        v53 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(*((long long *)&v19));
        return v53;
    }
    v34 = *((long long *)&v24);
    v54 = *((int128_t *)&v18);
    *((int128_t *)&v33) = *((int128_t *)&v22);
    *((int128_t *)&v32) = *((int128_t *)&v20);
    v31 = v54;
    uu_more::Options::from::hc98fb754786f3522(&v35, &v31);
    v12 = 0;
    v13 = 1;
    v14 = 0;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::ha584c1f8ab2c43ae(&v47, &v31, "filescannot open : No such file or directory\r", 5);
    clap_builder::parser::error::MatchesError::unwrap::hc4c5d21c114f8312(&v42, "filescannot open : No such file or directory\r", 5, &v47);
    if (!*((long long *)&v42))
    {
        v47 = std::io::stdio::stdin::h7215cc131abb55d8();
        core::result::Result$LT$T$C$E$GT$::unwrap::h09e424b011fd4dc7(_$LT$std..io..stdio..Stdin$u20$as$u20$std..io..Read$GT$::read_to_string::h09ca7fad329b13bb(&v47, &v12), v61, &g_55f5f8);
        if (!v14)
        {
            ::0x483450::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h961c84a8721cb85e(&v18);
            v49 = *((long long *)&v20);
            *((int128_t *)&v47) = *((int128_t *)&v18);
            v50 = 1;
            v53 = alloc::boxed::Box$LT$T$GT$::new::h768fabb14d69f87e(&v47);
            goto LABEL_484e37;
        }
        v47 = uu_more::setup_term::hbb8a9341123ad1e0();
        v53 = uu_more::more::h8763b7f12892fd6b(v13, v14, &v47, 0, 0, v80, 0, v1, &v35);
        if (v53)
            goto LABEL_484e37;
        else
            uu_more::reset_term::h414dda587ba155f3(&v47);
    }
    else
    {
        v55 = *((long long *)&v46);
        v15 = uu_more::setup_term::hbb8a9341123ad1e0();
        v17 = core::iter::traits::exact_size::ExactSizeIterator::len::h3b01bf493a451249(v55);
        v26 = *((long long *)&v45);
        v56 = *((int128_t *)&v42);
        v58 = v57 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v54 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v56;
        *((int128_t *)&v25) = *((int128_t *)&v44);
        *((int128_t *)&v23) = *((int128_t *)&v43);
        v21 = v56;
        v27 = v55;
        v60 = &v4;
        while (true)
        {
            v62 = *((long long *)&(&v18)[8]);
            v63 = *((long long *)&v20);
            v18 = 0;
            v64 = v63;
            if (!0)
            {
                v65 = _$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hbb3d00fd695aef87(&v21);
                if (!v65)
                {
                    v62 = 0;
                    v64 = v63;
                }
                else
                {
                    v62 = core::ops::function::impls::_$LT$impl$u20$core..ops..function..FnOnce$LT$A$GT$$u20$for$u20$$RF$mut$u20$F$GT$::call_once::h77a234cc4792ba23(v65[1], v65[2]);
                    v64 = v66;
                }
            }
            v67 = v64;
            v68 = core::option::Option$LT$T$GT$::get_or_insert_with::hd5406e92df845752(&v18, &v21);
            if (!v62)
                break;
            v69 = v68;
            v70 = v68[0];
            if ((char)std::path::Path::is_dir::h9ac0db933706da51(v62, v67))
            {
                core::result::Result$LT$T$C$E$GT$::unwrap::ha63502d5ecd852eb(crossterm::terminal::disable_raw_mode::h305d553e1a48c02a(), &g_55f520);
                v4 = 1;
                v5 = v62;
                v6 = v67;
                v7 = 1;
                v8 = v60;
                v9 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                v47 = &g_55f358;
                v48 = 2;
                v51 = 0;
                v49 = &v8;
                v50 = 1;
                core::option::Option$LT$T$GT$::map_or_else::h80f1e74e99a52e3c();
                v50 = 0;
                v71 = *((int128_t *)&v36);
                v58 = v58 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v71;
                v47 = v71;
                v49 = *((long long *)&v37);
                v72 = alloc::boxed::Box$LT$T$GT$::new::h768fabb14d69f87e(&v47);
                v2 = v72;
                v3 = &g_55f570;
                uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0((unsigned int)_$LT$uucore..mods..error..UUsageError$u20$as$u20$uucore..mods..error..UError$GT$::code::he3a59f98489a3243(v72));
                v8 = uucore::util_name::h60d842bf27b05e82();
                v9 = v66;
                v4 = &v8;
                v5 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf5f786156cb2ce45;
                v6 = &v2;
                v7 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::he53398c8fff906b9;
                v47 = &g_55f378;
                v48 = 3;
                v51 = 0;
                v49 = v60;
                v50 = 2;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v47);
                core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$::h3fe0217d98661d13(v2, v3);
                v75 = crossterm::terminal::enable_raw_mode::h2b8809045542de71();
                v79 = &g_55f5e0;
                goto LABEL_484617;
            }
            std::fs::metadata::hfcb81de4f67bf64a(&v47, v62, v67);
            if ((int)v47 == 2)
            {
                core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h0dc49061fa491f70(&v47);
                core::result::Result$LT$T$C$E$GT$::unwrap::ha63502d5ecd852eb(crossterm::terminal::disable_raw_mode::h305d553e1a48c02a(), &g_55f4f0);
                v4 = 1;
                v5 = v62;
                v6 = v67;
                v7 = 1;
                v8 = v60;
                v9 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                v47 = &g_55f3a8;
                v48 = 2;
                v51 = 0;
                v49 = &v8;
                v50 = 1;
                core::option::Option$LT$T$GT$::map_or_else::h80f1e74e99a52e3c();
                v50 = 0;
                v73 = *((int128_t *)&v38);
                v58 = v58 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v73;
                v47 = v73;
                v49 = *((long long *)&v39);
                v74 = alloc::boxed::Box$LT$T$GT$::new::h768fabb14d69f87e(&v47);
                v2 = v74;
                v3 = &g_55f468;
                uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0((unsigned int)_$LT$uucore..mods..error..UUsageError$u20$as$u20$uucore..mods..error..UError$GT$::code::he3a59f98489a3243(v74));
                v8 = uucore::util_name::h60d842bf27b05e82();
                v9 = v66;
                v4 = &v8;
                v5 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf5f786156cb2ce45;
                v6 = &v2;
                v7 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::he53398c8fff906b9;
                v47 = &g_55f378;
                v48 = 3;
                v51 = 0;
                v49 = v60;
                v50 = 2;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v47);
                core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$::h3fe0217d98661d13(v2, v3);
                v75 = crossterm::terminal::enable_raw_mode::h2b8809045542de71();
                v79 = &g_55f508;
LABEL_484617:
                core::result::Result$LT$T$C$E$GT$::unwrap::ha63502d5ecd852eb(v75, v79);
                goto LABEL_48461f;
            }
            core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h0dc49061fa491f70(&v47);
            std::fs::File::open::h323ef9f190b156bf(&v28, v62, v67);
            if (*((int *)&v28))
            {
                v16 = *((long long *)&v30);
                core::result::Result$LT$T$C$E$GT$::unwrap::ha63502d5ecd852eb(crossterm::terminal::disable_raw_mode::h305d553e1a48c02a(), &g_55f430);
                v4 = 1;
                v5 = v62;
                v6 = v67;
                v7 = 1;
                v2 = ::0x482d80::std::io::error::Error::kind::hb2ff5fa058639b3d(v16);
                v8 = v60;
                v9 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                v10 = &v2;
                v11 = _$LT$std..io..error..ErrorKind$u20$as$u20$core..fmt..Display$GT$::fmt::ha1aa9f6bc9a7f1d5;
                v47 = &g_55f3c8;
                v48 = 2;
                v51 = 0;
                v49 = &v8;
                v50 = 2;
                core::option::Option$LT$T$GT$::map_or_else::h80f1e74e99a52e3c();
                v50 = 0;
                v76 = *((int128_t *)&v40);
                v58 = v58 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v76;
                v47 = v76;
                v49 = *((long long *)&v41);
                v77 = alloc::boxed::Box$LT$T$GT$::new::h768fabb14d69f87e(&v47);
                v2 = v77;
                v3 = &g_55f468;
                uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0((unsigned int)_$LT$uucore..mods..error..UUsageError$u20$as$u20$uucore..mods..error..UError$GT$::code::he3a59f98489a3243(v77));
                v8 = uucore::util_name::h60d842bf27b05e82();
                v9 = v66;
                v4 = &v8;
                v5 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf5f786156cb2ce45;
                v6 = &v2;
                v7 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::he53398c8fff906b9;
                v47 = &g_55f378;
                v48 = 3;
                v51 = 0;
                v49 = v60;
                v50 = 2;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v47);
                core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$::h3fe0217d98661d13(v2, v3);
                core::result::Result$LT$T$C$E$GT$::unwrap::ha63502d5ecd852eb(crossterm::terminal::enable_raw_mode::h2b8809045542de71(), &g_55f4d8);
                ::0x482fe0::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h46901b14184092d9(&v16);
                goto LABEL_48461f;
            }
            std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::h5dc0c383d62754c2(&v47, 0x2000, *((int *)&v29));
            core::result::Result$LT$T$C$E$GT$::unwrap::h09e424b011fd4dc7(_$LT$std..io..buffered..bufreader..BufReader$LT$R$GT$$u20$as$u20$std..io..Read$GT$::read_to_string::ha689075af2c7df98(&v47, &v12), v66, &g_55f418);
            std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::h660bab9c45707695(&v4, v62, v67);
            if (!v4)
            {
                v78 = v5;
                if (!v70)
                    goto LABEL_484c9d;
            }
            else
            {
                v78 = 0;
                if (!v70)
                    goto LABEL_484c9d;
            }
            v70 = v69[0];
LABEL_484c9d:
            v1 = v69[1];
            v0 = v70;
            v53 = uu_more::more::h8763b7f12892fd6b(v13, v14, &v15, -0x100 | 2 <= v17, v78, v6, v0, v1, &v35);
            if (v53)
            {
                core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$std..fs..File$GT$$GT$::hd977552b0a65e162(&v47);
LABEL_484e37:
                ::0x482fd0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::he781af9e0f3172db(&v12);
                core::ptr::drop_in_place$LT$uu_more..Options$GT$::hfbeede890f8e1fbd(&v35);
                core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hd23c2e9f40f94766(&v31);
                return v53;
            }
            v14 = 0;
            core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$std..fs..File$GT$$GT$::hd977552b0a65e162(&v47);
            v60 = &v4;
LABEL_48461f:
            v59 = v18;
        }
        uu_more::reset_term::h414dda587ba155f3(&v15);
    }
    ::0x482fd0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::he781af9e0f3172db(&v12);
    core::ptr::drop_in_place$LT$uu_more..Options$GT$::hfbeede890f8e1fbd(&v35);
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hd23c2e9f40f94766(&v31);
    return 0;
}
