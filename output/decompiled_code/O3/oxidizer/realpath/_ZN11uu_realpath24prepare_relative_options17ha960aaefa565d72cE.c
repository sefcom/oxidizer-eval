fn uu_realpath::prepare_relative_options(a0: u32, a1: u32, a2: u32, a3: u32) -> u64 {
    let v0: i64;  // [sp-0x120]
    let v1: i64;  // [sp-0x118]
    let v2: i64;  // [sp-0x110]
    let v3: i64;  // [sp-0x108], Other Possible Types: struct24, struct40
    let v4: i64;  // [sp-0x100]
    let v5: i64;  // [sp-0xf8]
    let v6: i64;  // [sp-0xf0]
    let v7: i64;  // [sp-0xe8]
    let v8: i64;  // [sp-0xd8]
    let v9: i64;  // [sp-0xd0]
    let v10: i64;  // [sp-0xc8]
    let v11: i64;  // [sp-0xc0]
    let v12: i64;  // [sp-0xb8]
    let v13: i64;  // [sp-0xb0]
    let v14: i128;  // [sp-0xa8], Other Possible Types: struct24
    let v15: i128;  // [sp-0x98]
    let v16: i64;  // [sp-0x88]
    let v17: i8;  // [bp-0x78]
    let v18: i8;  // [bp-0x70]
    let v19: i8;  // [bp-0x68]
    let v20: i8;  // [bp-0x58]
    let v21: i64;  // [sp-0x50]
    let v22: i64;  // [sp-0x48], Other Possible Types: struct24
    let v24: i64;  // rax
    let v25: i64;  // rax
    let v26: i64;  // r12
    let v27: i64;  // rbp
    let v28: i64;  // r12
    let v29: i64;  // r13
    let v30: i64;  // r15

    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v17, a1, &g_41a161, 11);
    v8 = &g_41a161;
    v9 = 11;
    if v17 != 2 {
        v16 = v20;
        v15 = v19;
        v14 = v17;
        v10 = &v8;
        v11 = <&T as core::fmt::Display>::fmt;
        v12 = &v14;
        v13 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
        v3 = "Mismatch between definition and access of `";
        v4 = 2;
        v7 = 0;
        v5 = &v10;
        v6 = 2;
        v3 = core::panicking::panic_fmt();
    }
    v24 = v18;
    if !v24 {
        v22 = 0x8000000000000000;
    } else {
        v22 = std::sys::os_str::bytes::Slice::to_owned(*((v24 + 8) as &i64), *((v24 + 16) as &i64));
    }
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v17, a1, &g_41a196, 13);
    v8 = &g_41a196;
    v9 = 13;
    if v17 != 2 {
        v16 = v20;
        v15 = v19;
        v14 = v17;
        v10 = &v8;
        v11 = <&T as core::fmt::Display>::fmt;
        v12 = &v14;
        v13 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
        v3 = "Mismatch between definition and access of `";
        v4 = 2;
        v7 = 0;
        v5 = &v10;
        v6 = 2;
        v3 = core::panicking::panic_fmt();
    }
    v25 = v18;
    if !v25 {
        v26 = 0x8000000000000000;
    } else {
        v3 = std::sys::os_str::bytes::Slice::to_owned(*((v25 + 8) as &i64), *((v25 + 16) as &i64));
        v2 = v4;
        v21 = v5;
    }
    v3 = uu_realpath::canonicalize_relative_option(&v22, a2, a3);
    v27 = v5;
    v0 = v3;
    if v0 != 9223372036854775809 {
        v1 = v4;
        v3 = v26;
        v4 = v2;
        v5 = v21;
        v14 = uu_realpath::canonicalize_relative_option(&v3, a2, a3);
        v28 = v14;
        v29 = *((&v14 as &char + 8) as &i64);
        v30 = *((&v14 as &char + 16) as &i64);
        if v28 == 9223372036854775809 {
            *((a0 + 8) as &i64) = v29;
            *((a0 + 16) as &i64) = v30;
            *(a0 as &i64) = 9223372036854775809;
            if !v0 << 1 {
                return a0;
            }
        } else if !(v0 != 0x8000000000000000) || !(v28 != 0x8000000000000000) || !(!std::path::Path::_starts_with(v1, v27, v29, v30) as i8) {
            *(a0 as &i64) = v0;
            *((a0 + 8) as &i64) = v1;
            *((a0 + 16) as &i64) = v27;
            *((a0 + 24) as &i64) = v28;
            *((a0 + 32) as &i64) = v29;
            *((a0 + 40) as &i64) = v30;
            return a0;
        } else {
            *(a0 as &i64) = 0x8000000000000000;
            *((a0 + 24) as &i64) = 0x8000000000000000;
            if !v0 {
                return a0;
            }
        }
    } else {
        *((a0 + 8) as &i64) = v1;
        *((a0 + 16) as &i64) = v27;
        *(a0 as &i64) = 9223372036854775809;
        if !v26 << 1 {
            return a0;
        }
    }
    return a0;
}
