long long uu_dirname::uumain::uumain::he93e8122c80882f6(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long a3, unsigned long a4, unsigned long a5)
{
    char v0;  // [sp-0x689]
    unsigned long long v1;  // [sp-0x688]
    unsigned long long v2;  // [sp-0x680]
    char v3;  // [bp-0x678]
    char v4;  // [bp-0x670]
    char v5;  // [bp-0x668]
    char v6;  // [bp-0x658]
    char v7;  // [bp-0x648]
    unsigned long v8;  // [sp-0x640], Other Possible Types: unsigned long long
    unsigned long long v9;  // [sp-0x638]
    int v10;  // [sp-0x630]
    int v11;  // [sp-0x620]
    unsigned long long v12;  // [sp-0x610]
    unsigned long v13;  // [sp-0x608], Other Possible Types: unsigned long long
    unsigned long long v14;  // [sp-0x600]
    int v15;  // [sp-0x5f8]
    int v16;  // [sp-0x5e8]
    unsigned long long v17;  // [sp-0x5d8]
    unsigned long long v18;  // [sp-0x5d0]
    int v19;  // [bp-0x5c8], Other Possible Types: char, unsigned long long
    unsigned long long v20;  // [sp-0x5c0]
    unsigned long long v21;  // [sp-0x5b8]
    int v22;  // [bp-0x5b0], Other Possible Types: unsigned int, unsigned long long
    void* v23;  // [sp-0x5a8]
    char v24;  // [bp-0x2f8], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v25;  // [sp-0x2f0]
    char v26;  // [bp-0x2e8]
    char v27;  // [bp-0x2d8]
    char v28;  // [bp-0x2c8]
    char v29;  // [bp-0x2c0]
    void* v33;  // rax
    int v34;  // xmm0
    int v35;  // ymm0
    int v36;  // ymm0
    unsigned long long v38;  // rax
    int v40;  // xmm0
    int v41;  // ymm0
    unsigned long long v43;  // rdx
    unsigned long long v45;  // rax
    unsigned long long v46[3];  // rax
    unsigned long long v47;  // rdx
    unsigned long long v48;  // rcx
    int v49;  // ymm0
    unsigned long long v50;  // r15
    unsigned long long v51;  // r12
    unsigned long long v52;  // r13
    unsigned long long v53;  // rdx
    unsigned long long v54;  // rcx
    unsigned long long v55;  // r8
    unsigned long long v56;  // r9
    unsigned long long v57;  // rsi
    unsigned long long v58;  // rsi
    unsigned long long v59;  // rdx
    unsigned long long v60;  // rsi
    unsigned long long v61;  // rdx

    uu_dirname::uu_app::h926770293beb2382(&v19, a1, a2);
    clap_builder::builder::command::Command::after_help::hcff9fa144e3a9dbf(&v24, &v19, "Output each NAME with its last non-slash component and trailing slashes\nremoved; if NAME contains no /'s, output '.' (meaning the current directory).", 149);
    clap_builder::builder::command::Command::try_get_matches_from::hdb818971e676debf(&v3, &v24, a0, a1);
    if (v8 == 0x8000000000000000)
    {
        v33 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7cfa18d1f977710c(v9);
        return v33;
    }
    v12 = *((long long *)&v7);
    v34 = *((int128_t *)&v5);
    v36 = v35 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v34;
    *((int128_t *)&v11) = *((int128_t *)&v6);
    v10 = v34;
    v8 = *((long long *)&v3);
    v9 = *((long long *)&v4);
    *((int *)&v0) = ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(&v8, "zero", 4) ? 0 : 10);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::ha5282003ffd463a8(&v19, &v8, "dir", 3);
    clap_builder::parser::error::MatchesError::unwrap::h7f8738c5eaa61f41(&v24, "dir", 3, &v19);
    v38 = v24;
    if (!v38)
    {
        v41 = v36 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
        v38 = core::ops::function::FnOnce::call_once::h8412052a5f3b47bd;
        v43 = 0;
    }
    else
    {
        v40 = *((int128_t *)&v27);
        v41 = v36 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v40;
        v43 = *((long long *)&v29);
    }
    v13 = v38;
    v14 = "&";
    *((int128_t *)&v15) = *((int128_t *)&v26);
    v16 = v40;
    v17 = *((long long *)&v28);
    v18 = v43;
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::hc206d6ad3139c598(&v3, &v13, v18);
    v45 = *((long long *)&v5);
    if (!v45)
    {
        ::0x45ce90::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hc98e1cc2b2ac38c7(&v24);
        v21 = *((long long *)&v26);
        *((int128_t *)&v19) = *((int128_t *)&v24);
        v22 = 1;
        v33 = alloc::boxed::Box$LT$T$GT$::new::h995caac422d99f3c(&v19);
        ::0x45cc10::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h57d1c19cc5d3e652(&v3);
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h9e218a40b4dc9e07(&v8);
        return v33;
    }
    v1 = *((long long *)&v4);
    v2 = v1 + v45 * 24;
    v46 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hecd41c70846c21eb(&v1);
    if (v46)
    {
        do
        {
            v50 = v46[1];
            v51 = v46[2];
            v52 = std::path::Path::parent::h65c9a340a6266f2d(v50, v51, v47, v48);
            if (v52)
            {
                std::path::Path::components::h4f3217acf0fc8653(&v19, v52, v53);
                _$LT$std..path..Components$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h327ae97aa5bd0b06(&v24, &v19, v53, v54, v55, v56);
                if (v24 != 10)
                {
                    core::result::Result$LT$T$C$E$GT$::unwrap::hb37061b2c622f739(uucore::mods::display::print_verbatim::hf723bcbff4ffb5f0(v52, v53, v53));
                }
                else
                {
                    v19 = &g_5061f8;
                    v20 = 1;
                    v21 = 8;
                    v49 |= 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
                    *((int128_t *)&v22) = 0;
                    std::io::stdio::_print::he918bceb0c89db46(&v19, v57, v53);
                }
            }
            else if ((char)std::path::Path::is_absolute::h3431a23d91045560(v50, v51) || (char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h935f682d64e6797f(v50, v51, "/.", 1))
            {
                v19 = &g_5061e8;
                v20 = 1;
                v21 = 8;
                v49 |= 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
                *((int128_t *)&v22) = 0;
                std::io::stdio::_print::he918bceb0c89db46(&v19, v58, v59);
            }
            else
            {
                v19 = &g_5061f8;
                v20 = 1;
                v21 = 8;
                v49 |= 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
                *((int128_t *)&v22) = 0;
                std::io::stdio::_print::he918bceb0c89db46(&v19, v57, v53);
            }
            v24 = &v0;
            v25 = _$LT$uucore..mods..line_ending..LineEnding$u20$as$u20$core..fmt..Display$GT$::fmt::h1cda345fbd5bfac0;
            v19 = &g_409eb0;
            v20 = 1;
            v23 = 0;
            v21 = &v24;
            v22 = 1;
            std::io::stdio::_print::he918bceb0c89db46(&v19, v60, v61);
            v46 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hecd41c70846c21eb(&v1);
        } while (v46);
    }
    ::0x45cc10::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h57d1c19cc5d3e652(&v3);
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h9e218a40b4dc9e07(&v8);
    return 0;
}
