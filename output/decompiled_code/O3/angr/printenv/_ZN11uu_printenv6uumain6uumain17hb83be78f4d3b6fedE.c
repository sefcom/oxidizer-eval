long long uu_printenv::uumain::uumain::hb83be78f4d3b6fed(unsigned long long a0, unsigned long long a1)
{
    int v0;  // [sp-0x468]
    unsigned long long v1;  // [sp-0x458]
    void* v2;  // [sp-0x448], Other Possible Types: int
    unsigned long long v3;  // [sp-0x440]
    unsigned long long v4;  // [sp-0x438]
    int v5;  // [sp-0x428]
    unsigned long long v6;  // [sp-0x418]
    char v7;  // [bp-0x408]
    char v8;  // [bp-0x3f8]
    char v9;  // [bp-0x3f0]
    char v10;  // [bp-0x3e0]
    int v11;  // [bp-0x3d8], Other Possible Types: char
    int v12;  // [sp-0x3c8]
    char v13;  // [bp-0x3b8], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v14;  // [sp-0x3b0]
    char v15;  // [bp-0x3a8], Other Possible Types: unsigned long long
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
    int v26;  // [bp-0x2f8], Other Possible Types: char, unsigned long long
    unsigned long long v27;  // [sp-0x2f0]
    int v28;  // [bp-0x2e8], Other Possible Types: unsigned long long
    unsigned long long v29;  // [sp-0x2e0]
    int v30;  // [bp-0x2d8], Other Possible Types: void*, unsigned long long
    unsigned long long v31;  // [sp-0x2d0]
    int v32;  // [sp-0x2c8]
    unsigned long long v34;  // rdx
    int v35;  // xmm0
    int v36;  // xmm1
    int v37;  // xmm0
    int v38;  // ymm0
    int v39;  // ymm0
    int v41;  // xmm0
    int v42;  // ymm0
    int v43;  // xmm0
    int v44;  // xmm0
    unsigned long long v45;  // rsi
    void* v46;  // rbx
    unsigned long long v47;  // rbp
    int v48;  // xmm0
    int v49;  // xmm0
    int v50;  // ymm0
    int v51;  // xmm0
    unsigned long long v52;  // rsi

    uu_printenv::uu_app::h61dab0a4c271ee66(&v26, a1, v34);
    clap_builder::builder::command::Command::get_matches_from::he3d35bb3558a2557(&v25, &v26, a0, a1);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h0d01e4f1ec9f51ca(&v26, &v25, _ZN11uu_printenv13ARG_VARIABLES17h5a396e4034c2336eE, g_503c68);
    clap_builder::parser::error::MatchesError::unwrap::he034984eeb2b3cbb(&v13, _ZN11uu_printenv13ARG_VARIABLES17h5a396e4034c2336eE, g_503c68, &v26);
    if (!v13)
    {
        v2 = 0;
        v3 = 8;
        v4 = 0;
    }
    else
    {
        v35 = *((int128_t *)&v13);
        v36 = *((int128_t *)&v15);
        *((int128_t *)&v32) = *((int128_t *)&v18);
        *((int128_t *)&v30) = *((int128_t *)&v17);
        v28 = v36;
        v26 = v35;
        _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h60f095ae8c303cbb(&v7, &v26, v34);
        v37 = *((int128_t *)&v7);
        v39 = v38 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v35 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v37;
        v2 = v37;
        v4 = *((long long *)&v8);
    }
    *((int *)&v19) = ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(&v25, _ZN11uu_printenv8OPT_NULL17hb0358e931f4a1346E, g_503c58) ? &g_412397 : "\nTry ' --help' for more information.\n");
    v20 = 1;
    if (v4)
    {
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::hae9033c871854859(&v11, &v2);
        _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3e512a6c412eb8ad(&v21, &v11);
        if (*((long long *)&v21) != 0x8000000000000000)
        {
            v46 = 0;
            do
            {
                v48 = *((int128_t *)&v21);
                v39 = v39 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v48;
                v0 = v48;
                v1 = *((long long *)&v22);
                if ((char)::0x4587d0::_$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::hf6fa57beb1c3cfdf((long long)(&v0)[8], *((long long *)&v22)))
                {
                    ::0x4584e0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h71f316c9b6167136(&v0);
                    v46 = v46 | -0x100 | 1;
                }
                else
                {
                    v28 = v1;
                    v49 = v0;
                    v50 = v39 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v49;
                    v26 = v49;
                    std::env::var::hff2887d8d5b662fd(&v7, &v26, v34);
                    v47 = v47 | -0x100 | 1;
                    if (!*((long long *)&v7))
                    {
                        v6 = *((long long *)&v9);
                        v51 = *((int128_t *)&(&v7)[8]);
                        v50 = v50 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v51;
                        v5 = v51;
                        v13 = &v5;
                        v14 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                        v15 = &v19;
                        v16 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h00acab739e8a2c1c;
                        v26 = &g_4123a0;
                        v27 = 2;
                        v30 = 0;
                        v28 = &v13;
                        v29 = 2;
                        std::io::stdio::_print::he918bceb0c89db46(&v26, v52, v34);
                        ::0x4584e0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h71f316c9b6167136(&v5);
                        v47 = v46 & 4294967295;
                        if (!*((long long *)&v7))
                            continue;
                    }
                    core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..env..VarError$GT$$GT$::h48ca9cc232e5595c(&v7);
                    v46 = v47 & 4294967295;
                }
            } while ((_$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3e512a6c412eb8ad(&v21, &v11), *((long long *)&v21) != 0x8000000000000000));
        }
        core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$alloc..string..String$GT$$GT$::h8317bd3d858e6e45(&v11);
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::ha9088fefff3c8051(&v25);
        return (!1 ? uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$i32$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h42be6d6e2087a7b3(1) : 0);
    }
    else
    {
        std::env::vars::h104f59bf3851ffdb(&v23);
        v41 = *((int128_t *)&v23);
        v42 = v39 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v41;
        *((int128_t *)&v12) = *((int128_t *)&v24);
        v11 = v41;
        while (true)
        {
            _$LT$std..env..Vars$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0b476a668b5d347e(&v7, &v11);
            if (*((long long *)&v7) == 0x8000000000000000)
                break;
            v1 = *((long long *)&v8);
            v43 = *((int128_t *)&v7);
            v0 = v43;
            v6 = *((long long *)&v10);
            v44 = *((int128_t *)&v9);
            v42 = v42 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v43 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v44;
            v5 = v44;
            v26 = &v0;
            v27 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            v28 = &v5;
            v29 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            v30 = &v19;
            v31 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h00acab739e8a2c1c;
            v13 = &g_501490;
            v14 = 3;
            v17 = 0;
            v15 = &v26;
            v16 = 3;
            std::io::stdio::_print::he918bceb0c89db46(&v13, v45, v34);
            ::0x4584e0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h71f316c9b6167136(&v5);
            ::0x4584e0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h71f316c9b6167136(&v0);
        }
        core::ptr::drop_in_place$LT$std..env..Vars$GT$::hc762d790a88d5fb8(&v11);
        ::0x458560::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h792b056128a79e94(&v2);
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::ha9088fefff3c8051(&v25);
        return 0;
    }
}
