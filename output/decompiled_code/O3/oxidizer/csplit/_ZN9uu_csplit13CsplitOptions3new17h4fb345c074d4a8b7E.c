fn uu_csplit::CsplitOptions::new(a0: u64, a1: u64) -> int {
    let v0: i8;  // [sp-0x15a]
    let v1: i8;  // [sp-0x159]
    let v2: i64;  // [sp-0x158], Other Possible Types: Argument
    let v3: i64;  // [sp-0x150]
    let v4: i64;  // [sp-0x148]
    let v5: i64;  // [sp-0x140]
    let v6: i64;  // [sp-0x138], Other Possible Types: Argument
    let v7: i64;  // [sp-0x130]
    let v8: i64;  // [sp-0x128]
    let v9: i64;  // [bp-0x118], Other Possible Types: Arguments
    let v10: i128;  // [bp-0x108]
    let v11: i64;  // [sp-0xf8]
    let v12: i128;  // [bp-0xe8]
    let v13: i8;  // [bp-0xe0]
    let v14: i128;  // [sp-0xd8]
    let v15: i64;  // [sp-0xc8]
    let v16: i64;  // [sp-0xb8], Other Possible Types: struct24, Enum
    let v17: i64;  // [sp-0xb0]
    let v18: i64;  // [sp-0xa8]
    let v19: i64;  // [sp-0xa0]
    let v20: i64;  // [sp-0x98]
    let v21: i192;  // [sp-0x58], Other Possible Types: struct24
    let v22: i64;  // [sp-0x40]
    let v23: i64;  // [sp-0x38]
    let v29: i128;  // xmm0
    let v30: i256;  // ymm0
    let v31: i256;  // ymm0
    let v33: i128;  // xmm0
    let v34: i128;  // xmm0
    let v35: i128;  // xmm0
    let v36: i128;  // xmm0
    let v37: i128;  // xmm1
    let v38: i128;  // xmm2
    let v39: i64;  // rdx

    v1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, &g_467bae, 5) as i8;
    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, &g_467bb3, 17) as i8;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v12, a1, &g_467bc4, 6);
    v6 = &g_467bc4;
    v7 = 6;
    if v12 != 2 {
        v11 = v15;
        v10 = v14;
        v9 = v12;
        v2 = &v6;
        v3 = <&T as core::fmt::Display>::fmt;
        v4 = &v9;
        v5 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
        v16 = "Mismatch between definition and access of `";
        v17 = 2;
        v20 = 0;
        v18 = &v2;
        v19 = 2;
        v16 = core::panicking::panic_fmt();
    }
    if !v13 {
        v21 = 0x8000000000000000;
    } else {
        v21 = <alloc::string::String as core::clone::Clone>::clone(v13);
    }
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v12, a1, &g_467bca, 13);
    v6 = &g_467bca;
    v7 = 13;
    if v12 != 2 {
        v11 = v15;
        v10 = v14;
        v9 = v12;
        v2 = &v6;
        v3 = <&T as core::fmt::Display>::fmt;
        v4 = &v9;
        v5 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
        v16 = "Mismatch between definition and access of `";
        v17 = 2;
        v20 = 0;
        v18 = &v2;
        v19 = 2;
        v16 = core::panicking::panic_fmt();
    }
    if !v13 {
        v6 = 0x8000000000000000;
    } else {
        v16 = <alloc::string::String as core::clone::Clone>::clone(v13);
        v8 = v18;
        v29 = v16;
        vvar_10{reg 224} = ((vvar_132{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_131{reg 224}))
        v6 = v29;
    }
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v12, a1, &g_467bd7, 6);
    v22 = &g_467bd7;
    v23 = 6;
    if v12 != 2 {
        v11 = v15;
        v10 = v14;
        v9 = v12;
        v2 = &v22;
        v3 = <&T as core::fmt::Display>::fmt;
        v4 = &v9;
        v5 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
        v16 = "Mismatch between definition and access of `";
        v17 = 2;
        v20 = 0;
        v18 = &v2;
        v19 = 2;
        v16 = core::panicking::panic_fmt();
    }
    if !v13 {
        v9 = 0x8000000000000000;
    } else {
        v16 = <alloc::string::String as core::clone::Clone>::clone(v13);
        v10 = v18;
        v33 = v16;
        vvar_10{reg 224} = ((vvar_10{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_168{reg 224}))
        v9 = v33;
    }
    v16 = uu_csplit::split_name::SplitName::new(&v21, &v6, &v9);
    if v16 == 0x8000000000000000 {
        v15 = *((&v16 as &char + 40) as &i64);
        v14 = *((&v16 as &char + 24) as &i128);
        v12 = *((&v16 as &char + 8) as &i128);
        v2 = uucore::util_name();
        v3 = v39;
        v6 = Argument {
            value: &v2
            formatter: <&T as core::fmt::Display>::fmt
        };
        v9 = Arguments {
            pieces: [&g_675b50, ": "]
            args: [&v6]
            fmt: None
        };
        std::io::stdio::_eprint(&v9);
        v2 = Argument {
            value: &v12
            formatter: <uu_csplit::csplit_error::CsplitError as core::fmt::Display>::fmt
        };
        v9 = Arguments {
            pieces: [&g_675b70, "\n"]
            args: [&v2]
            fmt: None
        };
        std::io::stdio::_eprint(&v9);
        std::process::exit(1); /* do not return */
    }
    v34 = *((&v16 as &char + 80) as &i128);
    *((a0 + 80) as &i128) = v34;
    v35 = *((&v16 as &char + 64) as &i128);
    *((a0 + 64) as &i128) = v35;
    v36 = v16;
    v37 = *((&v16 as &char + 16) as &i128);
    v38 = *((&v16 as &char + 32) as &i128);
    *((a0 + 48) as &i128) = *((&v16 as &char + 48) as &i128);
    *((a0 + 32) as &i128) = v38;
    *((a0 + 16) as &i128) = v37;
    *(a0 as &i128) = v36;
    *((a0 + 96) as &i8) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, &g_467ba4, 10) as i32;
    *((a0 + 97) as &i8) = v1;
    *((a0 + 98) as &i8) = v0;
    *((a0 + 99) as &i8) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, &g_459a00, 16) as i32;
    return Conv(256->64, ((((((vvar_14{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_180{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_182{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_184{reg 224})));
}
