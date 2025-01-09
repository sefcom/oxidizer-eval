long long uu_basename::uumain::uumain::hafa1ff2c988de7cb(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [sp-0x411]
    void* v1;  // [bp-0x410], Other Possible Types: struct struct_0 **, char
    struct struct_0 **v2;  // [sp-0x408], Other Possible Types: unsigned long long
    void* v3;  // [sp-0x400]
    void* v4;  // [bp-0x3f8], Other Possible Types: struct struct_0 **, unsigned long
    int v5;  // [sp-0x3f0], Other Possible Types: unsigned long, unsigned long long
    char *v6;  // [bp-0x3e8], Other Possible Types: char, unsigned long
    char v7;  // [bp-0x3e0], Other Possible Types: unsigned long
    char v8;  // [bp-0x3d8]
    char v9;  // [bp-0x3c8]
    char v10;  // [bp-0x3c0]
    char v11;  // [bp-0x3b0]
    char v12;  // [bp-0x3a8]
    unsigned long long v13;  // [sp-0x3a0], Other Possible Types: unsigned long
    struct struct_0 **v14;  // [bp-0x398]
    unsigned long long v15;  // [sp-0x390]
    unsigned long long v16;  // [sp-0x388]
    unsigned long v17;  // [sp-0x378], Other Possible Types: unsigned long long
    unsigned long long v18;  // [sp-0x370]
    struct struct_0 **v19;  // [sp-0x368]
    struct struct_0 **v20;  // [sp-0x358]
    unsigned long long v21;  // [sp-0x348]
    char v22;  // [bp-0x340]
    char v23;  // [bp-0x330]
    char v24;  // [bp-0x328]
    char v25;  // [bp-0x318]
    char v26;  // [bp-0x310]
    struct struct_0 **v27;  // [bp-0x2f8]
    unsigned long v28;  // [sp-0x2f0], Other Possible Types: unsigned long long
    struct struct_0 **v29;  // [bp-0x2e8], Other Possible Types: unsigned long long
    struct struct_0 **v30;  // [bp-0x2e0], Other Possible Types: unsigned int
    void* v31;  // [bp-0x2d8], Other Possible Types: struct struct_0 **
    unsigned long long v32;  // [sp-0x2c8]
    unsigned long long v33;  // [sp-0x2c0]
    void* v35;  // rax
    struct struct_0 **v37;  // rax
    struct struct_0 **v39;  // xmm0
    unsigned long long v40;  // rsi
    unsigned long long v41;  // rdx
    unsigned long long v43;  // rax
    unsigned long long v44;  // rax
    unsigned long long v45[3];  // rax

    uucore::Args::collect_lossy::h23c2a3e3ca25697a(&v22, a0, a1);
    uu_basename::uu_app::h0b657963404f564a(&v27);
    v16 = *((long long *)&v23);
    *((int128_t *)&v14) = *((int128_t *)&v22);
    clap_builder::builder::command::Command::try_get_matches_from::he6bf499b6a746767(&v4, &v27, &v14);
    if (v17 == 0x8000000000000000)
    {
        v35 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(v18);
        return v35;
    }
    v21 = *((long long *)&v9);
    *((int128_t *)&v20) = *((int128_t *)&v8);
    *((int128_t *)&v19) = *((int128_t *)&v6);
    v17 = v4;
    v18 = v5;
    *((int *)&v0) = ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v17, _ZN11uu_basename7options4ZERO17h4ed660ca995a2601E, g_50eae8) ? 0 : 10);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h78ff5d19ca8609fd(&v27, &v17, _ZN11uu_basename7options4NAME17h2a13bbd3253d77d4E, g_50eac8);
    clap_builder::parser::error::MatchesError::unwrap::h9a0d3a6d2e9de983(&v4, _ZN11uu_basename7options4NAME17h2a13bbd3253d77d4E, g_50eac8, &v27);
    v37 = v4;
    if (!v37)
    {
        v37 = core::ops::function::FnOnce::call_once::h1749e4eba30ca774;
        v41 = 0;
    }
    else
    {
        v39 = *((int128_t *)&v8);
        v40 = *((long long *)&v9);
        v41 = *((long long *)&v10);
    }
    v27 = v37;
    v28 = "a Display implementation returned an error unexpectedly/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/string.rs";
    *((int128_t *)&v29) = *((int128_t *)&v6);
    v31 = v39;
    v32 = v40;
    v33 = v41;
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h2380b6632f2686cc(&v11, &v27);
    if (!v13)
    {
        ::0x463c40::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h4f222ef6d9974619(&v4);
        v29 = v6;
        *((int128_t *)&v27) = *((int128_t *)&v4);
        v30 = 1;
        v35 = alloc::boxed::Box$LT$T$GT$::new::h75d2f99a8ee9cadd(&v27);
        ::0x463a00::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$alloc..string..String$GT$$GT$::h800e991a5f8ef942(&v11);
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hce81d941c7def3f2(&v17);
        return v35;
    }
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h6b765cbc81459d91(&v27, &v17, _ZN11uu_basename7options6SUFFIX17h153db8b06c29f268E, g_50ead8);
    if (!clap_builder::parser::error::MatchesError::unwrap::hb9e5bc066166ebb5(_ZN11uu_basename7options6SUFFIX17h153db8b06c29f268E, g_50ead8, &v27) && !(char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v17, _ZN11uu_basename7options8MULTIPLE17h83f341c200c46a09E, g_50eab8))
    {
        v43 = v13;
        if (v43 != 1)
        {
            if (v43 == 2)
            {
                v13 = 1;
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&v1, *((long long *)(*((long long *)&v12) + 8)));
            }
            else if (!v43)
            {
                v27 = &g_50c2b0;
                v28 = 1;
                v29 = 8;
                *((uint128_t *)&v30) = 0;
                core::panicking::panic_fmt::he12d0d7468628bb4(&v27, &g_50c378); /* do not return */
            }
            else
            {
                v4 = 0;
                *((int128_t *)&v5) = *((int128_t *)(*((long long *)(*((long long *)&v12) + 16)) + 8));
                v7 = 1;
                v14 = &v4;
                v15 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                v27 = &g_50c2c0;
                v28 = 1;
                v31 = 0;
                v29 = &v14;
                v30 = 1;
                core::option::Option$LT$T$GT$::map_or_else::hccb2c5237b9a5f11();
                v30 = 1;
                *((int128_t *)&v27) = *((int128_t *)&v24);
                v29 = *((long long *)&v25);
                v35 = alloc::boxed::Box$LT$T$GT$::new::h75d2f99a8ee9cadd(&v27);
                ::0x463a00::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$alloc..string..String$GT$$GT$::h800e991a5f8ef942(&v11);
                core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hce81d941c7def3f2(&v17);
                return v35;
            }
LABEL_463589:
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h89482ec4a8f60c59(&v14, &v11);
            v45 = _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h5b9010a19a1a5647(&v14);
            if (v45)
            {
                do
                {
                    uu_basename::basename::h5fea76ad93274f11(&v26, v45[1], v45[2], v2, v3);
                    v4 = &v26;
                    v5 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                    v6 = &v0;
                    v7 = _$LT$uucore..mods..line_ending..LineEnding$u20$as$u20$core..fmt..Display$GT$::fmt::h6643b2132dca5a5b;
                    v27 = &g_413768;
                    v28 = 2;
                    v31 = 0;
                    v29 = &v4;
                    v30 = 2;
                    std::io::stdio::_print::he918bceb0c89db46(&v27);
                    ::0x463950::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hec0dbaa5dc26e973(&v26);
                    v45 = _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h5b9010a19a1a5647(&v14);
                } while (v45);
            }
            core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$RF$alloc..string..String$GT$$GT$::h44d76e55d49ad863(&v14);
            ::0x463950::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hec0dbaa5dc26e973(&v1);
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hce81d941c7def3f2(&v17);
            return 0;
        }
    }
    else
    {
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h6b765cbc81459d91(&v27, &v17, _ZN11uu_basename7options6SUFFIX17h153db8b06c29f268E, g_50ead8);
        v44 = clap_builder::parser::error::MatchesError::unwrap::hb9e5bc066166ebb5(_ZN11uu_basename7options6SUFFIX17h153db8b06c29f268E, g_50ead8, &v27);
        if (v44 && (_$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&v27, v44), *((int128_t *)&v4) = *((int128_t *)&v28), v1 != 0x8000000000000000))
        {
            *((int128_t *)&v2) = *((int128_t *)&v4);
            v1 = v27;
            goto LABEL_463589;
        }
    }
    v1 = 0;
    v2 = 1;
    v3 = 0;
    goto LABEL_463589;
}
