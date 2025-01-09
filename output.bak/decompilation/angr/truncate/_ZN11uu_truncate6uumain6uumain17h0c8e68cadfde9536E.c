long long uu_truncate::uumain::uumain::h0c8e68cadfde9536(unsigned long long a0, unsigned long long a1)
{
    void* v0;  // [sp-0x660], Other Possible Types: unsigned long, unsigned long long
    int v1;  // [sp-0x658], Other Possible Types: unsigned long long
    void* v2;  // [sp-0x650], Other Possible Types: unsigned long, unsigned long long
    char v3;  // [bp-0x648], Other Possible Types: unsigned long long
    unsigned long long v4;  // [bp-0x640]
    char v5;  // [bp-0x63c]
    unsigned long long v6;  // [sp-0x638]
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
    unsigned long long v27;  // rax
    unsigned int v28;  // ecx
    unsigned long long v29;  // rax
    unsigned long long v30;  // rax
    unsigned int v31;  // eax
    unsigned int v32;  // eax
    unsigned long long v33;  // r13

    uu_truncate::uu_app::h12570e18f36d91c3(&v15);
    clap_builder::builder::command::Command::after_help::h49df330ec5fede9a(&v21, &v15, "SIZE is an integer with an optional prefix and optional unit.\nThe available units (K, M, G, T, P, E, Z, and Y) use the following format:\n    'KB' =>           1000 (kilobytes)\n    'K'  =>           1024 (kibibytes)\n    'MB' =>      1000*1000 (megabytes)\n    'M'  =>      1024*1024 (mebibytes)\n    'GB' => 1000*1000*1000 (gigabytes)\n    'G'  => 1024*1024*1024 (gibibytes)\nSIZE may also be prefixed by one of the following to adjust the size of each\nfile based on its current size:\n    '+'  => extend by\n    '-'  => reduce by\n    '<'  => at most\n    '>'  => at least\n    '/'  => round down to multiple of\n    '%'  => round up to multiple of", 638);
    clap_builder::builder::command::Command::try_get_matches_from::h1037b302bbbe881d(&v3, &v21, a0, a1);
    v27 = *((long long *)&v3);
    if (v9 == 0x8000000000000000)
    {
        uu_truncate::uumain::uumain::_$u7b$$u7b$closure$u7d$$u7d$::hd9fe050d90548bac(v4);
        v29 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$i32$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h0b17f6d5d891df77();
        return v29;
    }
    v28 = v4;
    *((int128_t *)&v11) = *((int128_t *)&v5);
    *((int128_t *)&v12) = *((int128_t *)&v7);
    *((int128_t *)&v13) = (int128_t)v8;
    v9 = v27;
    v10 = v28;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h3e7c2a7a3a63bbf0(&v15, &v9, _ZN11uu_truncate7options9ARG_FILES17hc74d5664c242eaf0E, g_516900);
    clap_builder::parser::error::MatchesError::unwrap::h6e8d32f6c2c83abb(&v21, _ZN11uu_truncate7options9ARG_FILES17hc74d5664c242eaf0E, g_516900, &v15);
    if (!*((long long *)&v21))
    {
        v0 = 0;
        v1 = 8;
        v2 = 0;
        goto LABEL_46566a;
    }
    else
    {
        *((int128_t *)&v20) = *((int128_t *)&v24);
        *((int128_t *)&v19) = *((int128_t *)&v23);
        *((int128_t *)&v17) = *((int128_t *)&v22);
        v15 = v21;
        _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h7b2255f83d8edb92(&v3, &v15);
        v30 = *((long long *)&v3);
        *((int128_t *)&v1) = *((int128_t *)&v4);
        v0 = v30;
        if (!v2)
        {
LABEL_46566a:
            ::0x465ef0::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h8cb729a4d94b595f(&v21);
            v17 = v22;
            v15 = v21;
            v18 = 1;
            v29 = alloc::boxed::Box$LT$T$GT$::new::h85a8fb1d47923e38(&v15);
        }
        else
        {
            v31 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v9, _ZN11uu_truncate7options9IO_BLOCKS17ha2b1febcfcfbcee0E, g_5168c0);
            v32 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v9, _ZN11uu_truncate7options9NO_CREATE17hb6d5a1980fdf49e5E, g_5168d0);
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h468bfd82c89ebd5d(&v15, &v9, _ZN11uu_truncate7options9REFERENCE17h6c70a849f5a595beE, g_5168e0);
            if (!clap_builder::parser::error::MatchesError::unwrap::hf82e8f120b72c731(_ZN11uu_truncate7options9REFERENCE17h6c70a849f5a595beE, g_5168e0, &v15))
            {
                v3 = 0x8000000000000000;
            }
            else
            {
                core::ops::function::FnOnce::call_once::h4b133a0e04674206();
                v6 = v17;
                *((int128_t *)&v3) = (int128_t)v15;
            }
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h468bfd82c89ebd5d(&v15, &v9, _ZN11uu_truncate7options4SIZE17h8592621bba85a515E, g_5168f0);
            v33 = 0x8000000000000000;
            if (clap_builder::parser::error::MatchesError::unwrap::hf82e8f120b72c731(_ZN11uu_truncate7options4SIZE17h8592621bba85a515E, g_5168f0, &v15))
            {
                core::ops::function::FnOnce::call_once::h4b133a0e04674206();
                *((int128_t *)&v14) = (int128_t)(&v15)[8];
                v33 = v15;
            }
            v22 = v6;
            *((int128_t *)&v21) = *((int128_t *)&v3);
            v15 = v33;
            v16 = v14;
            v29 = uu_truncate::truncate::hee69817ccf70944a(v32, v31, &v21, &v15, v1, v2);
        }
    }
    ::0x465b60::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h0308458d1b814ddd(&v0);
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h6e2ae3c626541b13(&v9);
    return v29;
}
