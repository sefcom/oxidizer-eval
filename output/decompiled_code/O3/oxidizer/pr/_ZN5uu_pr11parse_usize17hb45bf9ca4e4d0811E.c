fn uu_pr::parse_usize(a0: i64, a1: i64, a2: i64, a3: i64) -> u64 {
    let v0: i128;  // [sp-0x118]
    let v1: i64;  // [sp-0x110]
    let v2: i64;  // [sp-0x108]
    let v3: i64;  // [sp-0xf8], Other Possible Types: Arguments, struct40
    let v4: i64;  // [sp-0xf0]
    let v5: i64;  // [sp-0xe8]
    let v6: i64;  // [sp-0xe0]
    let v7: i64;  // [sp-0xd8]
    let v8: Argument;  // [bp-0xc0], Other Possible Types: struct24, i8
    let v9: i64;  // [sp-0xb8], Other Possible Types: Argument
    let v10: i64;  // [bp-0xb0]
    let v11: i64;  // [sp-0xa8]
    let v12: i8;  // [bp-0xa0]
    let v13: i64;  // [sp-0x98], Other Possible Types: Argument
    let v14: i64;  // [sp-0x90], Other Possible Types: String
    let v15: i64;  // [sp-0x88]
    let v16: i64;  // [sp-0x80]
    let v17: i128;  // [bp-0x78], Other Possible Types: String
    let v18: i64;  // [sp-0x70]
    let v19: i128;  // [bp-0x68]
    let v20: i8;  // [sp-0x60]
    let v21: i64;  // [sp-0x58]
    let v22: i64;  // [sp-0x50]
    let v23: i64;  // [sp-0x48]
    let v24: i8;  // [bp-0x40]
    let v25: i8;  // [bp-0x38]
    let v27: i128;  // xmm0
    let v28: i64;  // rax
    let v29: i64;  // r15
    let v30: i64;  // rbp
    let v31: i64;  // r12
    let v32: i64;  // r13

    v22 = a2;
    v23 = a3;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v8, a1, a2, a3);
    v0 = a2;
    v1 = a3;
    if v8 != 2 {
        v21 = v12;
        v27 = v8;
        v19 = v10;
        v17 = v27;
        v13 = &v0;
        v14 = <&T as core::fmt::Display>::fmt;
        v15 = &v17;
        v16 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
        v3 = "Mismatch between definition and access of `";
        v4 = 2;
        v7 = 0;
        v5 = &v13;
        v6 = 2;
        v3 = core::panicking::panic_fmt();
    } else if v9 {
        v8 = <alloc::string::String as core::clone::Clone>::clone(v9);
        v13 = Argument {
            value: &v22
            formatter: <&T as core::fmt::Display>::fmt
        };
        v14 = String {
            ptr: <&T as core::fmt::Display>::fmt
            cap: <UNKNOWN>
            len: <UNKNOWN>
        };
        v3 = Arguments {
            pieces: ["-"]
            args: [&v13]
            fmt: None
        };
        v17 = alloc::fmt::format::format_inner(&v3);
        v29 = v9;
        v30 = v10;
        v2 = v19;
        v0 = v17;
        v28 = core::num::<impl core::str::traits::FromStr for usize>::from_str(&v24, v29, v30);
        if !v24 {
            v31 = v25;
            v32 = 9223372036854775813;
        } else {
            v17 = 0;
            v18 = v29;
            v19 = v30;
            v20 = 1;
            v8 = Argument {
                value: &v0
                formatter: <alloc::string::String as core::fmt::Display>::fmt
            };
            v9 = Argument {
                value: <alloc::string::String as core::fmt::Display>::fmt
                formatter: &v17
            };
            v11 = <os_display::Quoted as core::fmt::Display>::fmt;
            v3 = Arguments {
                pieces: ["invalid ", " argument "]
                args: [&v8, &v9]
                fmt: None
            };
            v28 = alloc::fmt::format::format_inner(&v14, &v3);
            v32 = 9223372036854775809;
            v3 = *(&v14.cap as &i128);
        }
        *(a0 as &i64) = v32;
        *((a0 + 8) as &i64) = v31;
        *((a0 + 16) as &i384) = v3;
        return v28;
    } else {
        *(a0 as &i64) = 9223372036854775814;
        return 9223372036854775814;
    }
}
