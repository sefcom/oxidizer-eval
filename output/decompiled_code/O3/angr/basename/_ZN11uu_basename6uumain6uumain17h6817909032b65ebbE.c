long long uu_basename::uumain::uumain::h6817909032b65ebb(unsigned long long a0, unsigned long long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5)
{
    char v0;  // [sp-0x411]
    void* v1;  // [bp-0x410], Other Possible Types: char, unsigned long long
    int v2;  // [sp-0x408], Other Possible Types: unsigned long long
    void* v3;  // [sp-0x400]
    int v4;  // [bp-0x3f8], Other Possible Types: void*, char, unsigned long long, unsigned long
    int v5;  // [sp-0x3f0], Other Possible Types: unsigned long, unsigned long long
    char v6;  // [bp-0x3e8], Other Possible Types: unsigned long, unsigned long long
    char v7;  // [bp-0x3e0], Other Possible Types: unsigned long
    char v8;  // [bp-0x3d8]
    char v9;  // [bp-0x3c8]
    char v10;  // [bp-0x3c0]
    char v11;  // [bp-0x3b0]
    char v12;  // [bp-0x3a8]
    unsigned long long v13;  // [sp-0x3a0], Other Possible Types: unsigned long
    int v14;  // [bp-0x398], Other Possible Types: unsigned long long
    unsigned long long v15;  // [sp-0x390]
    unsigned long long v16;  // [sp-0x388]
    unsigned long v17;  // [sp-0x378], Other Possible Types: unsigned long long
    unsigned long long v18;  // [sp-0x370]
    int v19;  // [sp-0x368]
    int v20;  // [sp-0x358]
    unsigned long long v21;  // [sp-0x348]
    char v22;  // [bp-0x340]
    char v23;  // [bp-0x330]
    char v24;  // [bp-0x328]
    char v25;  // [bp-0x318]
    char v26;  // [bp-0x310]
    int v27;  // [bp-0x2f8], Other Possible Types: char, unsigned long long
    unsigned long v28;  // [sp-0x2f0], Other Possible Types: unsigned long long
    int v29;  // [bp-0x2e8], Other Possible Types: unsigned long long
    int v30;  // [bp-0x2e0], Other Possible Types: unsigned int, unsigned long long
    int v31;  // [bp-0x2d8], Other Possible Types: void*
    unsigned long long v32;  // [sp-0x2c8]
    unsigned long long v33;  // [sp-0x2c0]
    unsigned long long v35;  // rsi
    unsigned long long v36;  // rdx
    unsigned long long v37;  // rcx
    void* v38;  // rax
    unsigned long long v40;  // rax
    int v42;  // xmm0
    unsigned long long v43;  // rsi
    unsigned long long v44;  // rdx
    unsigned long long v46;  // rax
    unsigned long long v47;  // rax
    unsigned long long v48[3];  // rax
    unsigned long long v49;  // r9

    uucore::Args::collect_lossy::hca4cc8cfec436eb0(&v22, a0, a1);
    uu_basename::uu_app::habcea9f450e537b1(&v27, v35, v36);
    v16 = *((long long *)&v23);
    *((int128_t *)&v14) = *((int128_t *)&v22);
    clap_builder::builder::command::Command::try_get_matches_from::h714685daf389ac78(&v4, &v27, &v14, v37);
    if (v17 == 0x8000000000000000)
    {
        v38 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7cfa18d1f977710c(v18);
        return v38;
    }
    v21 = *((long long *)&v9);
    *((int128_t *)&v20) = *((int128_t *)&v8);
    *((int128_t *)&v19) = *((int128_t *)&v6);
    v17 = v4;
    v18 = v5;
    *((int *)&v0) = ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(&v17, _ZN11uu_basename7options4ZERO17h1fd2dc99c0bea167E, g_50f098) ? 0 : 10);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::he31ba45d40d983c8(&v27, &v17, _ZN11uu_basename7options4NAME17hffa80714624b78eeE, g_50f078);
    clap_builder::parser::error::MatchesError::unwrap::h7b2cdce14dd39cf3(&v4, _ZN11uu_basename7options4NAME17hffa80714624b78eeE, g_50f078, &v27);
    v40 = v4;
    if (!v40)
    {
        v40 = core::ops::function::FnOnce::call_once::h70120c720414a62f;
        v44 = 0;
    }
    else
    {
        v42 = *((int128_t *)&v8);
        v43 = *((long long *)&v9);
        v44 = *((long long *)&v10);
    }
    v27 = v40;
    v28 = "&";
    *((int128_t *)&v29) = *((int128_t *)&v6);
    v31 = v42;
    v32 = v43;
    v33 = v44;
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h13fa19b752319a99(&v11, &v27, v33);
    if (!v13)
    {
        ::0x463c90::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hf288e96573e797c5(&v4);
        v29 = v6;
        *((int128_t *)&v27) = *((int128_t *)&v4);
        v30 = 1;
        v38 = alloc::boxed::Box$LT$T$GT$::new::h46b75b77066fd178(&v27);
        ::0x463a50::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$alloc..string..String$GT$$GT$::h525cc6ad1484df98(&v11);
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hf4cf8e9194fa0496(&v17);
        return v38;
    }
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h3747e09afd7583f2(&v27, &v17, _ZN11uu_basename7options6SUFFIX17he7024b27dc4b669dE, g_50f088);
    if (!clap_builder::parser::error::MatchesError::unwrap::he620a83dc95eadca(_ZN11uu_basename7options6SUFFIX17he7024b27dc4b669dE, g_50f088, &v27) && !(char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(&v17, _ZN11uu_basename7options8MULTIPLE17h365b7b01c1c22105E, g_50f068))
    {
        v46 = v13;
        if (v46 != 1)
        {
            if (v46 == 2)
            {
                v13 = 1;
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&v1, *((long long *)(*((long long *)&v12) + 8)));
            }
            else if (!v46)
            {
                v27 = &g_50c908;
                v28 = 1;
                v29 = 8;
                *((int128_t *)&v30) = 0;
                core::panicking::panic_fmt::he12d0d7468628bb4(&v27); /* do not return */
            }
            else
            {
                v4 = 0;
                *((int128_t *)&v5) = *((int128_t *)(*((long long *)(*((long long *)&v12) + 16)) + 8));
                v7 = 1;
                v14 = &v4;
                v15 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
                v27 = &g_50c930;
                v28 = 1;
                v31 = 0;
                v29 = &v14;
                v30 = 1;
                core::option::Option$LT$T$GT$::map_or_else::h26a483666c61000c(&v24, &v27);
                v30 = 1;
                *((int128_t *)&v27) = *((int128_t *)&v24);
                v29 = *((long long *)&v25);
                v38 = alloc::boxed::Box$LT$T$GT$::new::h46b75b77066fd178(&v27);
                ::0x463a50::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$alloc..string..String$GT$$GT$::h525cc6ad1484df98(&v11);
                core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hf4cf8e9194fa0496(&v17);
                return v38;
            }
LABEL_4635d9:
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h348ab8d82eb463c8(&v14, &v11);
            v48 = _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h134f0098716b3bc6(&v14);
            if (v48)
            {
                do
                {
                    uu_basename::basename::h340d9775d596c5be(&v26, v48[1], v48[2], v2, v3, v49);
                    v4 = &v26;
                    v5 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                    v6 = &v0;
                    v7 = _$LT$uucore..mods..line_ending..LineEnding$u20$as$u20$core..fmt..Display$GT$::fmt::h1cda345fbd5bfac0;
                    v27 = &g_413868;
                    v28 = 2;
                    v31 = 0;
                    v29 = &v4;
                    v30 = 2;
                    std::io::stdio::_print::he918bceb0c89db46(&v27, v35, v36);
                    ::0x4639a0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h2da5225bd4c4e386(&v26);
                    v48 = _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h134f0098716b3bc6(&v14);
                } while (v48);
            }
            core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$RF$alloc..string..String$GT$$GT$::h9502a1834e08282a(&v14);
            ::0x4639a0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h2da5225bd4c4e386(&v1);
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hf4cf8e9194fa0496(&v17);
            return 0;
        }
    }
    else
    {
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h3747e09afd7583f2(&v27, &v17, _ZN11uu_basename7options6SUFFIX17he7024b27dc4b669dE, g_50f088);
        v47 = clap_builder::parser::error::MatchesError::unwrap::he620a83dc95eadca(_ZN11uu_basename7options6SUFFIX17he7024b27dc4b669dE, g_50f088, &v27);
        if (v47 && (_$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&v27, v47), *((int128_t *)&v4) = *((int128_t *)&v28), v1 != 0x8000000000000000))
        {
            *((int128_t *)&v2) = (int128_t)v4;
            v1 = v27;
            goto LABEL_4635d9;
        }
    }
    v1 = 0;
    v2 = 1;
    v3 = 0;
    goto LABEL_4635d9;
}
