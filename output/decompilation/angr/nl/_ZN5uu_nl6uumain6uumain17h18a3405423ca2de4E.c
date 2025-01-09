long long uu_nl::uumain::uumain::h18a3405423ca2de4(unsigned long long a0, unsigned long long a1)
{
    int v0;  // [bp-0x468], Other Possible Types: char, unsigned long, unsigned long long
    unsigned long long v1;  // [sp-0x460]
    unsigned long v2;  // [sp-0x458], Other Possible Types: unsigned long long
    int v3;  // [bp-0x448], Other Possible Types: char, unsigned long, unsigned long long
    unsigned long v4;  // [sp-0x440], Other Possible Types: unsigned long long
    struct struct_0 **v5;  // [bp-0x438], Other Possible Types: char, unsigned long long, unsigned long
    unsigned int v6;  // [bp-0x430], Other Possible Types: unsigned long long
    void* v7;  // [bp-0x428], Other Possible Types: char
    char v8;  // [bp-0x418]
    char *v9;  // [sp-0x400]
    unsigned long v10;  // [sp-0x3f8], Other Possible Types: unsigned long long
    char v11;  // [bp-0x3f0]
    char *v12;  // [sp-0x3e8]
    unsigned long long v13;  // [sp-0x3e0]
    unsigned long long v14[3];  // [bp-0x3d8], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v15;  // [sp-0x3d0]
    void* v16;  // [sp-0x3c8], Other Possible Types: unsigned long, unsigned long long
    char v17;  // [bp-0x3b8]
    char v18;  // [bp-0x3a8]
    char v19;  // [bp-0x398]
    char v20;  // [bp-0x390]
    char v21;  // [bp-0x388]
    unsigned long v22;  // [sp-0x380], Other Possible Types: unsigned long long
    unsigned long long v23;  // [sp-0x378]
    unsigned long v24;  // [sp-0x370], Other Possible Types: unsigned long long
    unsigned long long v25;  // [sp-0x368]
    int v26;  // [sp-0x360]
    int v27;  // [sp-0x350]
    unsigned long long v28;  // [sp-0x340]
    int v29;  // [sp-0x338]
    int v30;  // [sp-0x328]
    int v31;  // [sp-0x318]
    int v32;  // [sp-0x308]
    char v33;  // [bp-0x2f8]
    char v34;  // [bp-0x298]
    void* v36;  // rax
    struct_1 *v38;  // rax
    struct_1 *v39;  // r14
    int v40;  // xmm0
    unsigned long long v41[3];  // rax
    unsigned long long v42;  // rbp
    unsigned long long v43;  // r12
    unsigned long v44;  // rdx

    uu_nl::uu_app::h62e86bf6f8f43d48(&v33);
    clap_builder::builder::command::Command::try_get_matches_from::h033a09a389891337(&v3, &v33, a0, a1);
    if (v24 == 0x8000000000000000)
    {
        v36 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(v25);
        return v36;
    }
    v28 = *((long long *)&v8);
    *((int128_t *)&v27) = *((int128_t *)&v7);
    *((int128_t *)&v26) = *((int128_t *)&v5);
    v24 = v3;
    v25 = v4;
    _$LT$uu_nl..Settings$u20$as$u20$core..default..Default$GT$::default::h47e143bb2e6f00be(&v33);
    uu_nl::helper::parse_options::h06a5fa1f1b26e68c(&v19, &v33, &v24);
    if (*((long long *)&v21))
    {
        alloc::str::join_generic_copy::heb883ebb97bebee6(&v3, *((long long *)&v20), *((long long *)&v21), "\nline number overflow/home/34r7hm4n/dev/oxidizer/oxidizer-eval/dataset-src/coreutils/src/uu/nl/src/nl.rs", 1);
        v16 = v5;
        *((int128_t *)v14) = *((int128_t *)&v3);
        *((unsigned long long [3])&v9) = v14;
        v10 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        v3 = &g_6d6e10;
        v4 = 1;
        v7 = 0;
        v5 = &v9;
        v6 = 1;
        core::option::Option$LT$T$GT$::map_or_else::h2afcfe8c4e1744ed();
        ::0x558880::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h70d12d72ce7260f9(v14);
        v5 = v2;
        *((int128_t *)&v3) = *((int128_t *)&v0);
        v6 = 1;
        v36 = alloc::boxed::Box$LT$T$GT$::new::h02c3afd2888e012a(&v3);
        goto LABEL_55a415;
    }
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hd841e96b2ed2d7b8(&v3, &v24, "fileEDOMmode{", 4);
    clap_builder::parser::error::MatchesError::unwrap::h2c4cd7150173c076(v14, "fileEDOMmode{", 4, &v3);
    if (v14)
    {
        *((int128_t *)&v32) = *((int128_t *)&v18);
        *((int128_t *)&v31) = *((int128_t *)&v17);
        *((int128_t *)&v30) = *((int128_t *)&v16);
        *((int128_t *)&v29) = *((int128_t *)&v14);
        _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::he4cba287fed817ee(&v9, &v29);
    }
    else
    {
        v38 = ::0x5594f0::alloc::alloc::Global::alloc_impl::hf61749d460433fff();
        if (!v38)
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(8, 24); /* do not return */
        v39 = v38;
        ::0x5593d0::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hccf532128df738d2(&v3, "-: Is a directory\nUnknownErrnoEPERMENOENTESRCHEINTREIOENXIOE2BIGENOEXECEBADFECHILDEAGAINENOMEMEACCESEFAULTENOTBLKEBUSYEEXISTEXDEVENODEVENOTDIREISDIREINVALENFILEEMFILEENOTTYETXTBSYEFBIGENOSPCESPIPEEROFSEMLINKEPIPEERANGEEDEADLKENAMETOOLONGENOLCKENOSYSENOTEMP", 1);
        v2 = v5;
        v40 = (int128_t)v3;
        v0 = v40;
        v39->field_10 = v2;
        *((void*)&v39->field_0) = v40;
        alloc::slice::hack::into_vec::h6086311a78a256e6(&v9, v39, 1);
    }
    v14 = 1;
    v15 = *((long long *)&v34);
    v16 = 0;
    v22 = v10;
    v23 = v22 + *((long long *)&v11) * 24;
    v41 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h86a1599bc622aaf5(&v22);
    if (!v41)
    {
        ::0x558cf0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h74fac2caa12dacfc(&v9);
        ::0x558cf0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h74fac2caa12dacfc(&v19);
        core::ptr::drop_in_place$LT$uu_nl..Settings$GT$::h5000854313336602(&v33);
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h00ca7bfe9d9c54d0(&v24);
        return 0;
    }
    do
    {
        v42 = v41[1];
        v43 = v41[2];
        if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hfc8f8342c6b12a3e(v42, v43, "-: Is a directory\nUnknownErrnoEPERMENOENTESRCHEINTREIOENXIOE2BIGENOEXECEBADFECHILDEAGAINENOMEMEACCESEFAULTENOTBLKEBUSYEEXISTEXDEVENODEVENOTDIREISDIREINVALENFILEEMFILEENOTTYETXTBSYEFBIGENOSPCESPIPEEROFSEMLINKEPIPEERANGEEDEADLKENAMETOOLONGENOLCKENOSYSENOTEMP", 1))
        {
            std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::hd28ab478f7e713df(&v3, 0x2000, std::io::stdio::stdin::h7215cc131abb55d8());
            v36 = uu_nl::nl::h577667c2138e41ae(&v3, v14, &v33);
            if (v36)
            {
                core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$std..io..stdio..Stdin$GT$$GT$::h5f137f6a111fb9c8();
                goto LABEL_55a7fb;
            }
            else
            {
                core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$std..io..stdio..Stdin$GT$$GT$::h5f137f6a111fb9c8();
                continue;
            }
        }
        if ((char)std::path::Path::is_dir::h9ac0db933706da51(v42, v43))
        {
            v0 = uucore::util_name::h60d842bf27b05e82();
            v1 = v44;
            v12 = &v0;
            v13 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::he930d6131e526b78;
            v3 = &g_6d6d98;
            v4 = 2;
            v7 = 0;
            v5 = &v12;
            v6 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v3);
            v0 = v42;
            v1 = v43;
            v12 = &v0;
            v13 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76;
            v3 = &g_6d6e20;
            v4 = 2;
            v7 = 0;
            v5 = &v12;
            v6 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v3);
            uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(1);
            continue;
        }
        std::fs::File::open::hf1f071da76d1106b(&v3, v42, v43);
        _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h6473cf8ad0bdd484(&v0, &v3, v41);
        v36 = v0;
        if (v36)
        {
            goto LABEL_55a7fb;
        }
        else
        {
            std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::hc950eb83a0d53243(&v3, 0x2000, (int)(&v0)[8]);
            v36 = uu_nl::nl::hef3517d7e99c9fcf(&v3, v14, &v33);
            if (!v36)
            {
                core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$std..fs..File$GT$$GT$::h260c121303b9dae7(&v3);
            }
            else
            {
                core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$std..fs..File$GT$$GT$::h260c121303b9dae7(&v3);
LABEL_55a7fb:
                ::0x558cf0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h74fac2caa12dacfc(&v9);
                goto LABEL_55a415;
            }
        }
    } while ((v41 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h86a1599bc622aaf5(&v22), v41));
LABEL_55a415:
    ::0x558cf0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h74fac2caa12dacfc(&v19);
    core::ptr::drop_in_place$LT$uu_nl..Settings$GT$::h5000854313336602(&v33);
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h00ca7bfe9d9c54d0(&v24);
    return v36;
}
