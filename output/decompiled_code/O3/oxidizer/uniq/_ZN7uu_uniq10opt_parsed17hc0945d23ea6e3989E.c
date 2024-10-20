fn uu_uniq::opt_parsed(a0: &u64, a1: u32, a2: u32, a3: u32) -> u64 {
    let v0: i64;  // [sp-0xe8], Other Possible Types: Enum
    let v1: i64;  // [sp-0xe0]
    let v2: i64;  // [sp-0xd8], Other Possible Types: Argument
    let v3: i64;  // [sp-0xd0], Other Possible Types: Argument
    let v4: i64;  // [sp-0xc8]
    let v5: i64;  // [sp-0xc0]
    let v6: i128;  // [sp-0xb8], Other Possible Types: String
    let v7: i128;  // [bp-0xa8]
    let v8: i32;  // [sp-0xa0]
    let v9: i64;  // [sp-0x98]
    let v10: i64;  // [bp-0x88]
    let v11: i64;  // [sp-0x80]
    let v12: i8;  // [bp-0x78]
    let v13: i8;  // [sp-0x70]
    let v14: i8;  // [bp-0x68]
    let v15: i64;  // [sp-0x60], Other Possible Types: struct40, Arguments
    let v16: i64;  // [sp-0x58]
    let v17: i64;  // [sp-0x50]
    let v18: i64;  // [sp-0x48]
    let v19: i64;  // [sp-0x40]
    let v20: i64;  // [sp-0x30]
    let v21: i64;  // [sp-0x28]
    let v23: i64;  // rax
    let v24: i128;  // xmm0
    let v25: i64;  // r15
    let v26: i64;  // r12
    let v27: i64;  // rax
    let v28: i64;  // rax

    v20 = a1;
    v21 = a2;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v10, a3, v0, v1);
    v0 = a1;
    v1 = a2;
    if v10 != 2 {
        v9 = v14;
        v24 = v10;
        v7 = v12;
        v6 = v24;
        v2 = &v0;
        v3 = <&T as core::fmt::Display>::fmt;
        v4 = &v6;
        v5 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
        v15 = "Mismatch between definition and access of `";
        v16 = 2;
        v19 = 0;
        v17 = &v2;
        v18 = 2;
        v15 = core::panicking::panic_fmt();
    }
    v23 = v11;
    if !v23 {
        *(a0 as &i128) = 0;
        return a0;
    }
    v25 = *((v23 + 8) as &i64);
    v26 = *((v23 + 16) as &i64);
    v0 = core::num::<impl core::str::traits::FromStr for usize>::from_str(v25, v26);
    switch (v0) {
    case 0:
        *((a0 + 8) as &i64) = 1;
        *((a0 + 16) as &i64) = v1;
        goto LABEL_4890cd;
    case 2:
        *((a0 + 8) as &i64) = 1;
        *((a0 + 16) as &i64) = -1;
LABEL_4890cd:
        v27 = 0;
        break;
    default:
        v10 = 0;
        v11 = v25;
        v12 = v26;
        v13 = 0;
        v2 = Argument {
            value: &v20
            formatter: <&T as core::fmt::Display>::fmt
        };
        v3 = Argument {
            value: <&T as core::fmt::Display>::fmt
            formatter: &v10
        };
        v5 = <os_display::Quoted as core::fmt::Display>::fmt;
        v15 = Arguments {
            pieces: ["Invalid argument for ", ": "]
            args: [&v2, &v3]
            fmt: None
        };
        v6 = alloc::fmt::format::format_inner(&v15);
        v8 = 1;
        v28 = __rust_alloc(32, 8);
        *((v28 + 16) as &i128) = v7;
        *(v28 as &i128) = v6;
        *((a0 + 8) as &i64) = v28;
        *((a0 + 16) as &&i64) = &g_4f2c80;
        v27 = 1;
        break;
    }
    *(a0 as &i64) = v27;
    return a0;
}
