long long uu_truncate::uumain::uumain::h6ac3a84e349a0cc7(unsigned long long a0, unsigned long long a1)
{
    void* v0;  // [sp-0x668], Other Possible Types: int
    unsigned long long v1;  // [sp-0x660]
    void* v2;  // [sp-0x658], Other Possible Types: unsigned long long
    char v3;  // [bp-0x648], Other Possible Types: unsigned long long
    unsigned long long v4;  // [bp-0x640]
    char v5;  // [bp-0x63c]
    unsigned long v6;  // [sp-0x638], Other Possible Types: unsigned long long
    char v7;  // [bp-0x62c]
    int v8;  // [bp-0x620]
    unsigned long v9;  // [sp-0x610], Other Possible Types: unsigned long long
    unsigned int v10;  // [sp-0x608]
    int v11;  // [sp-0x604]
    int v12;  // [bp-0x5f4]
    int v13;  // [sp-0x5e8]
    int v14;  // [sp-0x5d8]
    int v15;  // [bp-0x5c8], Other Possible Types: char, unsigned long, unsigned long long
    int v16;  // [bp-0x5c0]
    int v17;  // [bp-0x5b8], Other Possible Types: unsigned long, unsigned long long
    unsigned int v18;  // [sp-0x5b0]
    int v19;  // [sp-0x5a8]
    int v20;  // [sp-0x598]
    int v21;  // [bp-0x2f8], Other Possible Types: char
    char v22;  // [bp-0x2e8], Other Possible Types: unsigned long, unsigned long long
    char v23;  // [bp-0x2d8]
    char v24;  // [bp-0x2c8]
    unsigned long long v27;  // rdx
    unsigned long long v28;  // rax
    unsigned int v29;  // ecx
    unsigned long long v30;  // rax
    unsigned int v31;  // eax
    unsigned int v32;  // eax
    unsigned long long v33;  // rax
    unsigned long long v34;  // rax
    unsigned long long v35;  // r13

    uu_truncate::uu_app::hbcccf36f8c8cedf2(&v15, a1, v27);
    clap_builder::builder::command::Command::after_help::h87831d806b84961e(&v21, &v15, "SIZE is an integer with an optional prefix and optional unit.\nThe available units (K, M, G, T, P, E, Z, and Y) use the following format:\n    'KB' =>           1000 (kilobytes)\n    'K'  =>           1024 (kibibytes)\n    'MB' =>      1000*1000 (megabytes)\n    'M'  =>      1024*1024 (mebibytes)\n    'GB' => 1000*1000*1000 (gigabytes)\n    'G'  => 1024*1024*1024 (gibibytes)\nSIZE may also be prefixed by one of the following to adjust the size of each\nfile based on its current size:\n    '+'  => extend by\n    '-'  => reduce by\n    '<'  => at most\n    '>'  => at least\n    '/'  => round down to multiple of\n    '%'  => round up to multiple of", 638);
    clap_builder::builder::command::Command::try_get_matches_from::h5119f5d5eab99631(&v3, &v21, a0, a1);
    v28 = *((long long *)&v3);
    if (v9 == 0x8000000000000000)
    {
        v30 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$i32$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h42be6d6e2087a7b3((unsigned int)uu_truncate::uumain::uumain::_$u7b$$u7b$closure$u7d$$u7d$::h45f4f93e6201ddd6(v4));
        return v30;
    }
    v29 = v4;
    *((int128_t *)&v11) = *((int128_t *)&v5);
    *((int128_t *)&v12) = *((int128_t *)&v7);
    *((int128_t *)&v13) = (int128_t)v8;
    v9 = v28;
    v10 = v29;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::ha197a27414304493(&v15, &v9, _ZN11uu_truncate7options9ARG_FILES17hf3ec740c5e2b1615E, g_516f30);
    clap_builder::parser::error::MatchesError::unwrap::h8566ab68d9a8af5b(&v21, _ZN11uu_truncate7options9ARG_FILES17hf3ec740c5e2b1615E, g_516f30, &v15);
    if (!*((long long *)&v21))
    {
        v0 = 0;
        v1 = 8;
        v2 = 0;
        goto LABEL_464b35;
    }
    else
    {
        *((int128_t *)&v20) = *((int128_t *)&v24);
        *((int128_t *)&v19) = *((int128_t *)&v23);
        *((int128_t *)&v17) = *((int128_t *)&v22);
        v15 = v21;
        _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h78576c47c75ee8ba(&v3, &v15, v27);
        *((int128_t *)&v0) = *((int128_t *)&v3);
        v2 = v6;
        if (!v2)
        {
LABEL_464b35:
            ::0x4653c0::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h42da30a3c1eb5ce7(&v21);
            v17 = v22;
            v15 = v21;
            v18 = 1;
            v30 = alloc::boxed::Box$LT$T$GT$::new::hf2126e133fd1d872(&v15);
        }
        else
        {
            v31 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(&v9, _ZN11uu_truncate7options9IO_BLOCKS17hd6feb77c74cfcab8E, g_516ef0);
            v32 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(&v9, _ZN11uu_truncate7options9NO_CREATE17h741bc53530c30fecE, g_516f00);
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hbb6e9c2df5848d78(&v15, &v9, _ZN11uu_truncate7options9REFERENCE17h5daca91ab4bcb2cfE, g_516f10);
            v33 = clap_builder::parser::error::MatchesError::unwrap::h086a38739b87c46c(_ZN11uu_truncate7options9REFERENCE17h5daca91ab4bcb2cfE, g_516f10, &v15);
            if (!v33)
            {
                v3 = 0x8000000000000000;
            }
            else
            {
                core::ops::function::FnOnce::call_once::hafbe67055de31592(&v15, v33);
                v6 = v17;
                *((int128_t *)&v3) = (int128_t)v15;
            }
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hbb6e9c2df5848d78(&v15, &v9, _ZN11uu_truncate7options4SIZE17h8ded0dbb7ece669aE, g_516f20);
            v34 = clap_builder::parser::error::MatchesError::unwrap::h086a38739b87c46c(_ZN11uu_truncate7options4SIZE17h8ded0dbb7ece669aE, g_516f20, &v15);
            if (v34)
            {
                core::ops::function::FnOnce::call_once::hafbe67055de31592(&v15, v34);
                *((int128_t *)&v14) = (int128_t)(&v15)[8];
                v35 = v15;
            }
            v22 = v6;
            *((int128_t *)&v21) = *((int128_t *)&v3);
            v15 = v35;
            v16 = v14;
            v30 = uu_truncate::truncate::h392328302bef8c2f(v32, v31, &v21, &v15, v1, v2);
        }
    }
    ::0x465030::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h9dc93064790a3679(&v0);
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h173436141e5be3b9(&v9);
    return v30;
}
