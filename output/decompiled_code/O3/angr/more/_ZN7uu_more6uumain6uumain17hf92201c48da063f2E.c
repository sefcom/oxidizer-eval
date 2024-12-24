long long uu_more::uumain::uumain::hf92201c48da063f2(unsigned long long a0, unsigned long long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5)
{
    unsigned long long v0;  // [sp-0x4e8]
    unsigned long long v1;  // [sp-0x4e0]
    char v2;  // [bp-0x4d0], Other Possible Types: unsigned long long
    unsigned long long v3;  // [sp-0x4c8]
    char v4;  // [bp-0x4c0], Other Possible Types: unsigned long long
    unsigned long long v5;  // [sp-0x4b8]
    unsigned long long v6;  // [sp-0x4b0]
    char v7;  // [bp-0x4a8], Other Possible Types: unsigned long
    unsigned long v8;  // [sp-0x4a0], Other Possible Types: unsigned long long
    unsigned long long v9;  // [sp-0x498]
    unsigned long long v10;  // [sp-0x490]
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
    unsigned long long v49;  // [sp-0x2e8]
    unsigned int v50;  // [bp-0x2e0], Other Possible Types: unsigned long long
    void* v51;  // [sp-0x2d8]
    unsigned long long v53;  // rsi
    unsigned long long v54;  // rdx
    void* v55;  // rax
    int v56;  // xmm0
    unsigned long long v57;  // rbx
    unsigned long long v58;  // rdi
    unsigned long long v59;  // rcx
    unsigned long long v60;  // r8
    unsigned long long v61;  // r9
    int v62;  // xmm0
    int v63;  // ymm0
    int v64;  // ymm0
    void* v65;  // rax
    unsigned long long v66;  // rbp
    unsigned long long v67;  // rsi
    unsigned long long v68;  // rdx
    void* v69;  // rbx
    unsigned long long v70;  // r13
    unsigned long long v71;  // rdx
    unsigned long long v72;  // r13
    unsigned long long v73[3];  // rax
    unsigned long long v74;  // r13
    unsigned long long v75[2];  // rax
    unsigned long long v76[2];  // r12
    unsigned long long v77;  // r14
    int v78;  // xmm0
    unsigned long long v79;  // rax
    int v80;  // xmm0
    unsigned long long v81;  // rax
    unsigned long long v82;  // rax
    int v83;  // xmm0
    unsigned long long v84;  // rax
    void* v85;  // r8
    unsigned long long v86;  // rsi
    unsigned long long v87;  // rdi
    unsigned long long v88;  // rcx
    unsigned long long v89;  // r8
    unsigned long long v90;  // r9

    std::panicking::set_hook::h088dd0fc26a2f66c(alloc::boxed::Box$LT$T$GT$::new::hc0ee4c2f042a4782(), &g_5602a8);
    uu_more::uu_app::h5b3af37e48060d61(&v47, v53, v54);
    clap_builder::builder::command::Command::try_get_matches_from::ha2e873b978a6b56b(&v18, &v47, a0, a1);
    if (v18 == 0x8000000000000000)
    {
        v55 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7cfa18d1f977710c(*((long long *)&v19));
        return v55;
    }
    v34 = *((long long *)&v24);
    v56 = *((int128_t *)&v18);
    *((int128_t *)&v33) = *((int128_t *)&v22);
    *((int128_t *)&v32) = *((int128_t *)&v20);
    v31 = v56;
    uu_more::Options::from::h02a73a512a647498(&v35, &v31);
    v12 = 0;
    v13 = 1;
    v14 = 0;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h27281e0cf7d0f465(&v47, &v31, "filescannot open : No such file or directory\rcapacity overflow/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/vec/spec_from_iter_nested.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/vec/mod.rs", 5);
    clap_builder::parser::error::MatchesError::unwrap::ha68512730225e245(&v42, "filescannot open : No such file or directory\rcapacity overflow/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/vec/spec_from_iter_nested.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/vec/mod.rs", 5, &v47);
    if (!*((long long *)&v42))
    {
        v47 = std::io::stdio::stdin::h7215cc131abb55d8();
        core::result::Result$LT$T$C$E$GT$::unwrap::h447a3be0657c6756(_$LT$std..io..stdio..Stdin$u20$as$u20$std..io..Read$GT$::read_to_string::h09ca7fad329b13bb(&v47, &v12, v54), v54, &g_560548);
        if (!v14)
        {
            ::0x4837d0::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h9e22d97a211ed7c4(&v18);
            v49 = *((long long *)&v20);
            *((int128_t *)&v47) = *((int128_t *)&v18);
            v50 = 1;
            v55 = alloc::boxed::Box$LT$T$GT$::new::h35488ccd4b066b4b(&v47);
            goto LABEL_4851b7;
        }
        v47 = uu_more::setup_term::h031646106e32ed8d(v87, v53, v54, v88, v89, v90);
        v55 = uu_more::more::had1b5d51e49d4730(v13, v14, &v47, 0, 0, v90, 0, v1, &v35);
        if (v55)
            goto LABEL_4851b7;
        else
            uu_more::reset_term::h72144b9a07ffbd5e(&v47, v53, v54, v88, v89, v90);
    }
    else
    {
        v57 = *((long long *)&v46);
        v15 = uu_more::setup_term::h031646106e32ed8d(v58, v53, v54, v59, v60, v61);
        v17 = core::iter::traits::exact_size::ExactSizeIterator::len::h6f6472d48739b7a6(v57);
        v26 = *((long long *)&v45);
        v62 = *((int128_t *)&v42);
        v64 = v63 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v56 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v62;
        *((int128_t *)&v25) = *((int128_t *)&v44);
        *((int128_t *)&v23) = *((int128_t *)&v43);
        v21 = v62;
        v27 = v57;
        v66 = &v4;
        while (true)
        {
            v69 = (&v18)[1];
            v70 = *((long long *)&v20);
            v18 = 0;
            if (!0)
            {
                v73 = _$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hd46dae384835074f(&v21, v67, v68);
                if (!v73)
                    v69 = 0;
                else
                    v69 = core::ops::function::impls::_$LT$impl$u20$core..ops..function..FnOnce$LT$A$GT$$u20$for$u20$$RF$mut$u20$F$GT$::call_once::hb5ab0aab582526c4(v73[1], v73[2]);
            }
            v74 = v72;
            v75 = core::option::Option$LT$T$GT$::get_or_insert_with::h249b1c6e8105fd4f(&v18, &v21, v71);
            if (!v69)
                break;
            v76 = v75;
            v77 = v75[0];
            if ((char)std::path::Path::is_dir::h9ac0db933706da51(v69, v74))
            {
                core::result::Result$LT$T$C$E$GT$::unwrap::hca1a2fe59f79bb26(crossterm::terminal::disable_raw_mode::he72d811b39383d39(v58, v53, v54, v59, v60, v61), &g_560450);
                v4 = 1;
                v5 = v69;
                v6 = v74;
                v7 = 1;
                v8 = v66;
                v9 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
                v47 = &g_560468;
                v48 = 2;
                v51 = 0;
                v49 = &v8;
                v50 = 1;
                core::option::Option$LT$T$GT$::map_or_else::h2183e70ef5e68516(&v36, &v47);
                v50 = 0;
                v78 = *((int128_t *)&v36);
                v64 = v64 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v78;
                v47 = v78;
                v49 = *((long long *)&v37);
                v79 = alloc::boxed::Box$LT$T$GT$::new::h35488ccd4b066b4b(&v47);
                v2 = v79;
                v3 = &g_5604c0;
                _$LT$uucore..mods..error..UUsageError$u20$as$u20$uucore..mods..error..UError$GT$::code::h53cdb3afe457b8f4(v79);
                uucore::mods::error::set_exit_code::h6705c4226a43fa90();
                v8 = uucore::util_name::h412db5e565a079f3();
                v9 = v54;
                v4 = &v8;
                v5 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h6e3a50df42d440a1;
                v6 = &v2;
                v7 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hcb6f7cca1e47c8ed;
                v47 = &g_5603b8;
                v48 = 3;
                v51 = 0;
                v49 = v66;
                v50 = 2;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v47, v53, v54);
                ::0x4832a0::core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$::hecdc39d9d1f61300(v2, v3);
                v82 = crossterm::terminal::enable_raw_mode::hc6df6bfb89565959(v58, v53, v54, v59, v60, v61);
                v86 = &g_560530;
                goto LABEL_484997;
            }
            std::fs::metadata::h32ec64524a9b52c8(&v47, v69, v74);
            if ((int)v47 == 2)
            {
                core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h50318dc667d0b935(&v47);
                core::result::Result$LT$T$C$E$GT$::unwrap::hca1a2fe59f79bb26(crossterm::terminal::disable_raw_mode::he72d811b39383d39(v58, v53, v54, v59, v60, v61), &g_560400);
                v4 = 1;
                v5 = v69;
                v6 = v74;
                v7 = 1;
                v8 = v66;
                v9 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
                v47 = &g_560418;
                v48 = 2;
                v51 = 0;
                v49 = &v8;
                v50 = 1;
                core::option::Option$LT$T$GT$::map_or_else::h2183e70ef5e68516(&v38, &v47);
                v50 = 0;
                v80 = *((int128_t *)&v38);
                v64 = v64 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v80;
                v47 = v80;
                v49 = *((long long *)&v39);
                v81 = alloc::boxed::Box$LT$T$GT$::new::h35488ccd4b066b4b(&v47);
                v2 = v81;
                v3 = &g_560348;
                _$LT$uucore..mods..error..UUsageError$u20$as$u20$uucore..mods..error..UError$GT$::code::h53cdb3afe457b8f4(v81);
                uucore::mods::error::set_exit_code::h6705c4226a43fa90();
                v8 = uucore::util_name::h412db5e565a079f3();
                v9 = v54;
                v4 = &v8;
                v5 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h6e3a50df42d440a1;
                v6 = &v2;
                v7 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hcb6f7cca1e47c8ed;
                v47 = &g_5603b8;
                v48 = 3;
                v51 = 0;
                v49 = v66;
                v50 = 2;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v47, v53, v54);
                ::0x4832a0::core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$::hecdc39d9d1f61300(v2, v3);
                v82 = crossterm::terminal::enable_raw_mode::hc6df6bfb89565959(v58, v53, v54, v59, v60, v61);
                v86 = &g_560438;
LABEL_484997:
                core::result::Result$LT$T$C$E$GT$::unwrap::hca1a2fe59f79bb26(v82, v86);
                goto LABEL_48499f;
            }
            core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h50318dc667d0b935(&v47);
            std::fs::File::open::hcf9f44a8bc5beb4c(&v28, v69, v74);
            if (*((int *)&v28))
            {
                v16 = *((long long *)&v30);
                core::result::Result$LT$T$C$E$GT$::unwrap::hca1a2fe59f79bb26(crossterm::terminal::disable_raw_mode::he72d811b39383d39(v58, v53, v54, v59, v60, v61), &g_5602f0);
                v4 = 1;
                v5 = v69;
                v6 = v74;
                v7 = 1;
                v2 = ::0x483100::std::io::error::Error::kind::hb2ff5fa058639b3d(v16);
                v8 = v66;
                v9 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
                v10 = &v2;
                v11 = _$LT$std..io..error..ErrorKind$u20$as$u20$core..fmt..Display$GT$::fmt::ha1aa9f6bc9a7f1d5;
                v47 = &g_560308;
                v48 = 2;
                v51 = 0;
                v49 = &v8;
                v50 = 2;
                core::option::Option$LT$T$GT$::map_or_else::h2183e70ef5e68516(&v40, &v47);
                v50 = 0;
                v83 = *((int128_t *)&v40);
                v64 = v64 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v83;
                v47 = v83;
                v49 = *((long long *)&v41);
                v84 = alloc::boxed::Box$LT$T$GT$::new::h35488ccd4b066b4b(&v47);
                v2 = v84;
                v3 = &g_560348;
                _$LT$uucore..mods..error..UUsageError$u20$as$u20$uucore..mods..error..UError$GT$::code::h53cdb3afe457b8f4(v84);
                uucore::mods::error::set_exit_code::h6705c4226a43fa90();
                v8 = uucore::util_name::h412db5e565a079f3();
                v9 = v54;
                v4 = &v8;
                v5 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h6e3a50df42d440a1;
                v6 = &v2;
                v7 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hcb6f7cca1e47c8ed;
                v47 = &g_5603b8;
                v48 = 3;
                v51 = 0;
                v49 = v66;
                v50 = 2;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v47, v53, v54);
                ::0x4832a0::core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$::hecdc39d9d1f61300(v2, v3);
                core::result::Result$LT$T$C$E$GT$::unwrap::hca1a2fe59f79bb26(crossterm::terminal::enable_raw_mode::hc6df6bfb89565959(v58, v53, v54, v59, v60, v61), &g_5603e8);
                ::0x483360::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h7db57649a2e147db(&v16);
                goto LABEL_48499f;
            }
            std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::h04152a044461369d(&v47, 0x2000, *((int *)&v29));
            core::result::Result$LT$T$C$E$GT$::unwrap::h447a3be0657c6756(_$LT$std..io..buffered..bufreader..BufReader$LT$R$GT$$u20$as$u20$std..io..Read$GT$::read_to_string::hb525eefe9002871e(&v47, &v12), v54, &g_5602d8);
            std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::h660bab9c45707695(&v4, v69, v74);
            if (!v4)
            {
                v85 = v5;
                if (!v77)
                    goto LABEL_48501d;
            }
            else
            {
                v85 = 0;
                if (!v77)
                    goto LABEL_48501d;
            }
            v77 = v76[0];
LABEL_48501d:
            v1 = v76[1];
            v0 = v77;
            v55 = uu_more::more::had1b5d51e49d4730(v13, v14, &v15, -0x100 | 2 <= v17, v85, v6, v0, v1, &v35);
            if (v55)
            {
                core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$std..fs..File$GT$$GT$::h1ed747a29d20f634(&v47);
LABEL_4851b7:
                ::0x483350::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd6087bb217d3db06(&v12);
                core::ptr::drop_in_place$LT$uu_more..Options$GT$::h9a0dde321bc957e7(&v35);
                core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h7532203ac69783bd(&v31);
                return v55;
            }
            v14 = 0;
            core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$std..fs..File$GT$$GT$::h1ed747a29d20f634(&v47);
            v66 = &v4;
LABEL_48499f:
            v65 = v18;
        }
        uu_more::reset_term::h72144b9a07ffbd5e(&v15, v53, v54, v59, v60, v61);
    }
    ::0x483350::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd6087bb217d3db06(&v12);
    core::ptr::drop_in_place$LT$uu_more..Options$GT$::h9a0dde321bc957e7(&v35);
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h7532203ac69783bd(&v31);
    return 0;
}
