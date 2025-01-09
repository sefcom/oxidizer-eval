long long uu_printenv::uumain::uumain::h9c419dd350239eab(unsigned long long a0, unsigned long long a1)
{
    struct struct_0 **v0;  // [sp-0x458]
    unsigned long long v1;  // [sp-0x448]
    void* v2;  // [sp-0x440], Other Possible Types: unsigned long, unsigned long long
    struct struct_0 **v3;  // [sp-0x438], Other Possible Types: unsigned long long
    void* v4;  // [sp-0x430]
    struct struct_0 **v5;  // [sp-0x428]
    unsigned long long v6;  // [sp-0x418]
    char v7;  // [bp-0x408]
    char v8;  // [bp-0x400]
    char v9;  // [bp-0x3f0]
    char v10;  // [bp-0x3e0]
    struct struct_0 **v11;  // [bp-0x3d8]
    struct struct_0 **v12;  // [sp-0x3c8]
    struct struct_0 **v13;  // [bp-0x3b8], Other Possible Types: unsigned long
    unsigned long long v14;  // [sp-0x3b0]
    char *v15;  // [bp-0x3a8], Other Possible Types: struct struct_0 **, char
    unsigned long long v16;  // [sp-0x3a0]
    void* v17;  // [bp-0x398], Other Possible Types: char
    char v18;  // [bp-0x388]
    unsigned long v19;  // [sp-0x378], Other Possible Types: unsigned long long
    unsigned long long v20;  // [sp-0x370]
    char v21;  // [bp-0x368]
    char v22;  // [bp-0x358]
    char v23;  // [bp-0x350]
    char v24;  // [bp-0x340]
    char v25;  // [bp-0x330]
    struct struct_0 **v26;  // [bp-0x2f8]
    unsigned long long v27;  // [sp-0x2f0]
    struct struct_1 **v28;  // [bp-0x2e8], Other Possible Types: struct struct_0 **, unsigned long long
    unsigned long long v29;  // [sp-0x2e0]
    void* v30;  // [bp-0x2d8], Other Possible Types: char *, struct struct_0 **
    unsigned long long v31;  // [sp-0x2d0]
    struct struct_0 **v32;  // [sp-0x2c8]
    struct struct_0 **v34;  // xmm0
    struct struct_0 **v37;  // xmm0
    int v38;  // ymm0
    int v39;  // ymm0
    struct struct_0 **v40;  // xmm0
    struct struct_0 **v42;  // xmm0
    int v43;  // ymm0
    struct struct_0 **v44;  // xmm0
    struct struct_0 **v45;  // xmm0
    unsigned long long v46;  // rbx
    struct struct_0 **v47;  // xmm0
    struct struct_0 **v48;  // xmm0
    int v49;  // ymm0
    struct struct_0 **v50;  // xmm0

    uu_printenv::uu_app::hf1331131741036ed(&v26);
    clap_builder::builder::command::Command::get_matches_from::h513927fcdb2d9a9a(&v25, &v26, a0, a1);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h147f1cf25fd8ae8e(&v26, &v25, _ZN11uu_printenv13ARG_VARIABLES17h7bed74cb6698e695E, g_503590);
    clap_builder::parser::error::MatchesError::unwrap::hbf01985c69d4c13e(&v13, _ZN11uu_printenv13ARG_VARIABLES17h7bed74cb6698e695E, g_503590, &v26);
    if (!v13 || (v34 = *((int128_t *)&v13), *((int128_t *)&v32) = *((int128_t *)&v18), *((int128_t *)&v30) = *((int128_t *)&v17), *((int128_t *)&v28) = *((int128_t *)&v15), v26 = v34, _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h65e73dfc47f1c957(&v7, &v26), v37 = *((int128_t *)&v8), v39 = (v38 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v34) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v37, v26 = v37, v2 == 0x8000000000000000))
    {
        v2 = 0;
        v3 = 8;
        v4 = 0;
    }
    else
    {
        v40 = *((int128_t *)&v26);
        v39 = v39 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v40;
        v3 = v40;
        v2 = *((long long *)&v7);
    }
    *((int *)&v19) = ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v25, _ZN11uu_printenv8OPT_NULL17h6012a15648cb6e92E, g_503580) ? &g_4123b0 : "\nTry ' --help' for more information.\n");
    v20 = 1;
    if (v4)
    {
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::hde4ad9fc0cae4dbd(&v11, &v2);
        _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h2a888fb598bf45e4(&v21, &v11);
        if (*((long long *)&v21) != 0x8000000000000000)
        {
            v46 = 0;
            do
            {
                v47 = *((int128_t *)&v21);
                v39 = v39 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v47;
                v0 = v47;
                v1 = *((long long *)&v22);
                if (::0x4585e0::_$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::hf6fa57beb1c3cfdf((&v0)[1], *((long long *)&v22)))
                {
                    ::0x4582f0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h9e7cd20c527a8eb1(&v0);
                    v46 = v46 & 0xffffffffffffff00 | 1;
                }
                else
                {
                    v28 = v1;
                    v48 = v0;
                    v49 = v39 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v48;
                    v26 = v48;
                    std::env::var::hd00663f2ee81a0d5(&v7, &v26);
                    a0 = a0 & 0xffffffffffffff00 | 1;
                    if (!*((long long *)&v7))
                    {
                        v6 = *((long long *)&v9);
                        v50 = *((int128_t *)&v8);
                        v49 = v49 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v50;
                        v5 = v50;
                        v13 = &v5;
                        v14 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                        v15 = &v19;
                        v16 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::ha20f7cd80dde8271;
                        v26 = &g_4122f0;
                        v27 = 2;
                        v30 = 0;
                        v28 = &v13;
                        v29 = 2;
                        std::io::stdio::_print::he918bceb0c89db46(&v26);
                        ::0x4582f0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h9e7cd20c527a8eb1(&v5);
                        a0 = v46 & 4294967295;
                        if (!*((long long *)&v7))
                            continue;
                    }
                    core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..env..VarError$GT$$GT$::h6178202d1b7b8af5(&v7);
                    v46 = a0 & 4294967295;
                }
            } while ((_$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h2a888fb598bf45e4(&v21, &v11), *((long long *)&v21) != 0x8000000000000000));
        }
        core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$alloc..string..String$GT$$GT$::h7ca05d8393a14950(&v11);
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::ha29e73f210cabebc(&v25);
        return (0 ? uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$i32$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h0b17f6d5d891df77() : 0);
    }
    else
    {
        std::env::vars::h104f59bf3851ffdb(&v23);
        v42 = *((int128_t *)&v23);
        v43 = v39 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v42;
        *((int128_t *)&v12) = *((int128_t *)&v24);
        v11 = v42;
        while (true)
        {
            _$LT$std..env..Vars$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0b476a668b5d347e(&v7, &v11);
            if (*((long long *)&v7) == 0x8000000000000000)
                break;
            v1 = *((long long *)&(&v8)[8]);
            v44 = *((int128_t *)&v7);
            v0 = v44;
            v6 = *((long long *)&v10);
            v45 = *((int128_t *)&v9);
            v43 = (v43 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v44) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v45;
            v5 = v45;
            v26 = &v0;
            v27 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            v28 = &v5;
            v29 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            v30 = &v19;
            v31 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::ha20f7cd80dde8271;
            v13 = &g_500dd0;
            v14 = 3;
            v17 = 0;
            v15 = &v26;
            v16 = 3;
            std::io::stdio::_print::he918bceb0c89db46(&v13);
            ::0x4582f0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h9e7cd20c527a8eb1(&v5);
            ::0x4582f0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h9e7cd20c527a8eb1(&v0);
        }
        core::ptr::drop_in_place$LT$std..env..Vars$GT$::h43b81f51e3f95869();
        ::0x458370::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h0871000d35d5b31a(&v2);
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::ha29e73f210cabebc(&v25);
        return 0;
    }
}
