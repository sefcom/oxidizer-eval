long long uu_nl::uumain::uumain::h18a3405423ca2de4(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x468], Other Possible Types: unsigned long
    int v1;  // [bp-0x468], Other Possible Types: unsigned long long
    unsigned long long v2;  // [sp-0x460]
    unsigned long v3;  // [sp-0x458], Other Possible Types: unsigned long long
    int v4;  // [sp-0x448], Other Possible Types: char, unsigned long
    unsigned long v5;  // [sp-0x440], Other Possible Types: unsigned long long
    struct struct_0 **v6;  // [sp-0x438], Other Possible Types: char, unsigned long long, unsigned long
    unsigned int v7;  // [bp-0x430], Other Possible Types: unsigned long long
    void* v8;  // [sp-0x428], Other Possible Types: char
    char v9;  // [bp-0x418]
    char *v10;  // [sp-0x400]
    unsigned long v12;  // [sp-0x3f8], Other Possible Types: unsigned long long
    char v13;  // [bp-0x3f0]
    char *v14;  // [sp-0x3e8]
    unsigned long long v15;  // [sp-0x3e0]
    unsigned long long v16[3];  // [bp-0x3d8], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v17;  // [sp-0x3d0]
    void* v18;  // [sp-0x3c8], Other Possible Types: unsigned long long
    char v19;  // [bp-0x3b8]
    char v20;  // [bp-0x3a8]
    char v21;  // [bp-0x398]
    char v22;  // [bp-0x390]
    char v23;  // [bp-0x388]
    unsigned long v24;  // [sp-0x380]
    unsigned long long v25;  // [sp-0x378]
    unsigned long v26;  // [sp-0x370]
    unsigned long long v27;  // [sp-0x368]
    int v28;  // [sp-0x360]
    int v29;  // [sp-0x350]
    unsigned long long v30;  // [sp-0x340]
    int v31;  // [sp-0x338]
    int v32;  // [sp-0x328]
    int v33;  // [sp-0x318]
    int v34;  // [sp-0x308]
    char v35;  // [bp-0x2f8]
    char v36;  // [bp-0x298]
    void* v38;  // r15
    struct_1 *v40;  // rax
    struct_1 *v41;  // r14
    int v42;  // xmm0
    unsigned long long v43[3];  // rax
    unsigned long long v44[3];  // r15
    unsigned long long v45;  // rbp
    unsigned long long v46;  // r12
    unsigned long v47;  // rdx

    uu_nl::uu_app::h62e86bf6f8f43d48(&v35);
    clap_builder::builder::command::Command::try_get_matches_from::h033a09a389891337(&v4, &v35, a0, a1);
    if (v26 == 0x8000000000000000)
    {
        v38 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(v27);
        return v38;
    }
    v30 = *((long long *)&v9);
    *((int128_t *)&v29) = *((int128_t *)&v8);
    *((int128_t *)&v28) = *((int128_t *)&v6);
    v26 = v4;
    v27 = v5;
    _$LT$uu_nl..Settings$u20$as$u20$core..default..Default$GT$::default::h47e143bb2e6f00be(&v35);
    uu_nl::helper::parse_options::h06a5fa1f1b26e68c(&v21, &v35, &v26);
    if (*((long long *)&v23))
    {
        alloc::str::join_generic_copy::heb883ebb97bebee6(&v4, *((long long *)&v22), *((long long *)&v23), "\nline number overflow/home/34r7hm4n/dev/oxidizer/oxidizer-eval/dataset-src/coreutils/src/uu/nl/src/nl.rs", 1);
        v18 = v6;
        *((int128_t *)v16) = *((int128_t *)&v4);
        *((unsigned long long [3])&v10) = v16;
        v12 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        v4 = &g_6d6e10;
        v5 = 1;
        v8 = 0;
        v6 = &v10;
        v7 = 1;
        core::option::Option$LT$T$GT$::map_or_else::h2afcfe8c4e1744ed(&v0, &v4);
        ::0x558880::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h70d12d72ce7260f9(v16);
        v6 = v3;
        *((int128_t *)&v4) = *((int128_t *)&v0);
        v7 = 1;
        v38 = alloc::boxed::Box$LT$T$GT$::new::h02c3afd2888e012a(&v4);
        goto LABEL_55a415;
    }
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hd841e96b2ed2d7b8(&v4, &v26, "fileEDOMmode{", 4);
    clap_builder::parser::error::MatchesError::unwrap::h2c4cd7150173c076(v16, "fileEDOMmode{", 4, &v4);
    if (v16)
    {
        *((int128_t *)&v34) = *((int128_t *)&v20);
        *((int128_t *)&v33) = *((int128_t *)&v19);
        *((int128_t *)&v32) = *((int128_t *)&v18);
        *((int128_t *)&v31) = *((int128_t *)&v16);
        _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::he4cba287fed817ee(&v10, &v31);
    }
    else
    {
        v40 = ::0x5594f0::alloc::alloc::Global::alloc_impl::hf61749d460433fff(24);
        if (!v40)
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(8, 24); /* do not return */
        v41 = v40;
        ::0x5593d0::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hccf532128df738d2(&v4, "-: Is a directory\nUnknownErrnoEPERMENOENTESRCHEINTREIOENXIOE2BIGENOEXECEBADFECHILDEAGAINENOMEMEACCESEFAULTENOTBLKEBUSYEEXISTEXDEVENODEVENOTDIREISDIREINVALENFILEEMFILEENOTTYETXTBSYEFBIGENOSPCESPIPEEROFSEMLINKEPIPEERANGEEDEADLKENAMETOOLONGENOLCKENOSYSENOTEMP", 1);
        v3 = v6;
        v42 = (int128_t)v4;
        v1 = v42;
        v41->field_10 = v3;
        *((void*)&v41->field_0) = v42;
        alloc::slice::hack::into_vec::h6086311a78a256e6(&v10, v41, 1);
    }
    v16 = 1;
    v17 = *((long long *)&v36);
    v18 = 0;
    v24 = v12;
    v25 = v24 + *((long long *)&v13) * 24;
    v43 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h86a1599bc622aaf5(&v24);
    if (!v43)
    {
        ::0x558cf0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h74fac2caa12dacfc(&v10);
        ::0x558cf0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h74fac2caa12dacfc(&v21);
        core::ptr::drop_in_place$LT$uu_nl..Settings$GT$::h5000854313336602(&v35);
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h00ca7bfe9d9c54d0(&v26);
        return 0;
    }
    v44 = v43;
    do
    {
        v45 = v44[1];
        v46 = v44[2];
        if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hfc8f8342c6b12a3e(v45, v46, "-: Is a directory\nUnknownErrnoEPERMENOENTESRCHEINTREIOENXIOE2BIGENOEXECEBADFECHILDEAGAINENOMEMEACCESEFAULTENOTBLKEBUSYEEXISTEXDEVENODEVENOTDIREISDIREINVALENFILEEMFILEENOTTYETXTBSYEFBIGENOSPCESPIPEEROFSEMLINKEPIPEERANGEEDEADLKENAMETOOLONGENOLCKENOSYSENOTEMP", 1))
        {
            std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::hd28ab478f7e713df(&v4, 0x2000, std::io::stdio::stdin::h7215cc131abb55d8());
            v38 = uu_nl::nl::h577667c2138e41ae(&v4, v16, &v35);
            if (v38)
            {
                core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$std..io..stdio..Stdin$GT$$GT$::h5f137f6a111fb9c8(v4, v5);
                goto LABEL_55a7fb;
            }
            else
            {
                core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$std..io..stdio..Stdin$GT$$GT$::h5f137f6a111fb9c8(v4, v5);
                continue;
            }
        }
        if ((char)std::path::Path::is_dir::h9ac0db933706da51(v45, v46))
        {
            v0 = uucore::util_name::h60d842bf27b05e82();
            v2 = v47;
            v14 = &v0;
            v15 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::he930d6131e526b78;
            v4 = &g_6d6d98;
            v5 = 2;
            v8 = 0;
            v6 = &v14;
            v7 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v4);
            v0 = v45;
            v1 = v46;
            v14 = &v0;
            v15 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76;
            v4 = &g_6d6e20;
            v5 = 2;
            v8 = 0;
            v6 = &v14;
            v7 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v4);
            uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(1);
            continue;
        }
        std::fs::File::open::hf1f071da76d1106b(&v4, v45, v46);
        _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h6473cf8ad0bdd484(&v0, &v4, v44);
        v38 = v0;
        if (v38)
        {
            goto LABEL_55a7fb;
        }
        else
        {
            std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::hc950eb83a0d53243(&v4, 0x2000, (int)(&v1)[8]);
            v38 = uu_nl::nl::hef3517d7e99c9fcf(&v4, v16, &v35);
            if (!v38)
            {
                core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$std..fs..File$GT$$GT$::h260c121303b9dae7(&v4);
            }
            else
            {
                core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$std..fs..File$GT$$GT$::h260c121303b9dae7(&v4);
LABEL_55a7fb:
                ::0x558cf0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h74fac2caa12dacfc(&v10);
                goto LABEL_55a415;
            }
        }
    } while ((v44 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h86a1599bc622aaf5(&v24), v44));
LABEL_55a415:
    ::0x558cf0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h74fac2caa12dacfc(&v21);
    core::ptr::drop_in_place$LT$uu_nl..Settings$GT$::h5000854313336602(&v35);
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h00ca7bfe9d9c54d0(&v26);
    return v38;
}
