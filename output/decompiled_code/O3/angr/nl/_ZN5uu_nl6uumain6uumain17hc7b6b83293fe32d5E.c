long long uu_nl::uumain::uumain::hc7b6b83293fe32d5(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long a3, unsigned long a4, unsigned long a5)
{
    int v0;  // [bp-0x468], Other Possible Types: char, unsigned long long
    int v1;  // [sp-0x460], Other Possible Types: unsigned long long
    unsigned long v2;  // [sp-0x458], Other Possible Types: unsigned long long
    int v3;  // [bp-0x448], Other Possible Types: char, unsigned long, unsigned long long
    unsigned long v4;  // [sp-0x440], Other Possible Types: unsigned long long
    char v5;  // [bp-0x438], Other Possible Types: unsigned long, unsigned long long
    unsigned int v6;  // [bp-0x430], Other Possible Types: unsigned long long
    void* v7;  // [bp-0x428], Other Possible Types: char
    char v8;  // [bp-0x418]
    unsigned long v9;  // [sp-0x400], Other Possible Types: unsigned long long
    unsigned long v10;  // [sp-0x3f8], Other Possible Types: unsigned long long
    char v11;  // [bp-0x3f0]
    unsigned long v12;  // [sp-0x3e8], Other Possible Types: unsigned long long
    unsigned long long v13;  // [sp-0x3e0]
    int v14;  // [bp-0x3d8], Other Possible Types: unsigned long, unsigned long long
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
    unsigned long long v37;  // rcx
    unsigned long long v38;  // r8
    unsigned long long v39;  // r9
    unsigned long long v41;  // rdx
    struct_0 *v42;  // rax
    struct_0 *v43;  // r14
    int v44;  // xmm0
    unsigned long long v45[3];  // rax
    unsigned long long v46;  // rbp
    unsigned long long v47;  // r12
    unsigned long long v48;  // rsi

    uu_nl::uu_app::hf81a53f27e6a1df5(&v33, a1, a2);
    clap_builder::builder::command::Command::try_get_matches_from::hd724b7b27bf9ee12(&v3, &v33, a0, a1);
    if (v24 == 0x8000000000000000)
    {
        v36 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7cfa18d1f977710c(v25);
        return v36;
    }
    v28 = *((long long *)&v8);
    *((int128_t *)&v27) = *((int128_t *)&v7);
    *((int128_t *)&v26) = *((int128_t *)&v5);
    v24 = v3;
    v25 = v4;
    _$LT$uu_nl..Settings$u20$as$u20$core..default..Default$GT$::default::he2bdf7b71a0c8cc5(&v33);
    uu_nl::helper::parse_options::h7f27cf1fb7f3c65a(&v19, &v33, &v24, v37, v38, v39);
    if (*((long long *)&v21))
    {
        alloc::str::join_generic_copy::hc2fbcb90cd022c46(&v3, *((long long *)&v20), *((long long *)&v21), "\n/home/34r7hm4n/dev/oxidizer/oxidizer-eval/dataset-src/coreutils/src/uu/nl/src/nl.rs", 1);
        v16 = v5;
        *((int128_t *)&v14) = *((int128_t *)&v3);
        v9 = &v14;
        v10 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        v3 = &g_6d79a0;
        v4 = 1;
        v7 = 0;
        v5 = &v9;
        v6 = 1;
        core::option::Option$LT$T$GT$::map_or_else::hf84bd5e7df87c3ce(&v0, &v3);
        ::0x558620::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h9cba010678f631fb(&v14);
        v5 = v2;
        *((int128_t *)&v3) = *((int128_t *)&v0);
        v6 = 1;
        v36 = alloc::boxed::Box$LT$T$GT$::new::hed4dc2d11923a5a4(&v3);
        goto LABEL_55a1b5;
    }
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h329825fcf1e2125a(&v3, &v24, "fileEDOMmode{", 4);
    clap_builder::parser::error::MatchesError::unwrap::h287dabcccf94cf04(&v14, "fileEDOMmode{", 4, &v3);
    if (v14)
    {
        *((int128_t *)&v32) = *((int128_t *)&v18);
        *((int128_t *)&v31) = *((int128_t *)&v17);
        *((int128_t *)&v30) = *((int128_t *)&v16);
        *((int128_t *)&v29) = *((int128_t *)&v14);
        _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::hfe2d78141892e631(&v9, &v29, v41);
    }
    else
    {
        v42 = ::0x559290::alloc::alloc::Global::alloc_impl::hf61749d460433fff(24);
        if (!v42)
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
        v43 = v42;
        ::0x559170::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::ha039f800fcb2cd44(&v3, "-: Is a directory\nInvalid arguments supplied.\n", 1);
        v2 = v5;
        v44 = (int128_t)v3;
        v0 = v44;
        v43->field_10 = v2;
        *((void*)&v43->field_0) = v44;
        alloc::slice::hack::into_vec::he0ce10ddf4a3fde8(&v9, v43, 1);
    }
    v14 = 1;
    v15 = *((long long *)&v34);
    v16 = 0;
    v22 = v10;
    v23 = v22 + *((long long *)&v11) * 24;
    v45 = ::0x55b300::_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h31a7453989ba5012(&v22);
    if (!v45)
    {
        ::0x558a90::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::hbebf10b671a970c7(&v9);
        ::0x558a90::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::hbebf10b671a970c7(&v19);
        core::ptr::drop_in_place$LT$uu_nl..Settings$GT$::h7c28f3bf80d23a39(&v33);
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h0ba37b2adb4dbba7(&v24);
        return 0;
    }
    do
    {
        v46 = v45[1];
        v47 = v45[2];
        if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h542f32dff6086807(v46, v47, "-: Is a directory\nInvalid arguments supplied.\n", 1))
        {
            std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::h16d566ada79c323c(&v3, 0x2000, std::io::stdio::stdin::h7215cc131abb55d8());
            v36 = uu_nl::nl::ha3a6f4ca0e67ac11(&v3, &v14, &v33);
            if (v36)
            {
                core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$std..io..stdio..Stdin$GT$$GT$::h7dfa36685279d97a(v3, v4);
                goto LABEL_55a59b;
            }
            else
            {
                core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$std..io..stdio..Stdin$GT$$GT$::h7dfa36685279d97a(v3, v4);
                continue;
            }
        }
        if ((char)std::path::Path::is_dir::h9ac0db933706da51(v46, v47))
        {
            v0 = uucore::util_name::h412db5e565a079f3();
            v1 = v41;
            v12 = &v0;
            v13 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h333277caa2ee453d;
            v3 = &g_6d7920;
            v4 = 2;
            v7 = 0;
            v5 = &v12;
            v6 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v3, v48, v41);
            v0 = v46;
            v1 = v47;
            v12 = &v0;
            v13 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76;
            v3 = &g_6d7980;
            v4 = 2;
            v7 = 0;
            v5 = &v12;
            v6 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v3, v48, v41);
            uucore::mods::error::set_exit_code::h6705c4226a43fa90();
            continue;
        }
        std::fs::File::open::h794f09fc031772c7(&v3, v46, v47);
        _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h2456c7fc3977f59c(&v0, &v3, v45);
        v36 = v0;
        if (v36)
        {
            goto LABEL_55a59b;
        }
        else
        {
            std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::hfa96dd9b06e7a89f(&v3, 0x2000, (int)v1);
            v36 = uu_nl::nl::h9f0dd0181f8174a9(&v3, &v14, &v33);
            if (!v36)
            {
                core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$std..fs..File$GT$$GT$::h0079d176795096dd(&v3);
            }
            else
            {
                core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$std..fs..File$GT$$GT$::h0079d176795096dd(&v3);
LABEL_55a59b:
                ::0x558a90::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::hbebf10b671a970c7(&v9);
                goto LABEL_55a1b5;
            }
        }
    } while ((v45 = ::0x55b300::_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h31a7453989ba5012(&v22), v45));
LABEL_55a1b5:
    ::0x558a90::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::hbebf10b671a970c7(&v19);
    core::ptr::drop_in_place$LT$uu_nl..Settings$GT$::h7c28f3bf80d23a39(&v33);
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h0ba37b2adb4dbba7(&v24);
    return v36;
}
