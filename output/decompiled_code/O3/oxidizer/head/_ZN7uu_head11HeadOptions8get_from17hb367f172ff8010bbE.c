fn uu_head::HeadOptions::get_from(a0: u32, a1: u32) -> u64 {
    let v0: i64;  // [sp-0x178], Other Possible Types: Argument
    let v1: i64;  // [sp-0x170]
    let v2: i64;  // [sp-0x168], Other Possible Types: String
    let v3: i64;  // [sp-0x160]
    let v4: i64;  // [sp-0x158]
    let v5: i64;  // [sp-0x150]
    let v6: i256;  // [bp-0x148], Other Possible Types: Enum
    let v7: i8;  // [bp-0x140]
    let v8: i128;  // [sp-0x138]
    let v9: i64;  // [sp-0x128]
    let v10: i128;  // [bp-0x118]
    let v11: i128;  // [sp-0x108]
    let v12: i64;  // [bp-0xf8]
    let v13: i64;  // [sp-0xe8]
    let v14: i384;  // [bp-0xd8], Other Possible Types: struct24, Arguments
    let v15: i64;  // [sp-0xd0]
    let v16: i64;  // [sp-0xc8]
    let v17: i8;  // [bp-0xa8]
    let v18: i8;  // [bp-0x98]
    let v19: i64;  // [sp-0x90]
    let v20: i64;  // [sp-0x88]
    let v21: i64;  // [sp-0x80]
    let v22: i64;  // [sp-0x78]
    let v23: i64;  // [sp-0x70]
    let v24: i32;  // [bp-0x68]
    let v25: i8;  // [sp-0x67]
    let v26: i8;  // [sp-0x66]
    let v27: i8;  // [sp-0x65]
    let v28: i64;  // [sp-0x60], Other Possible Types: Enum
    let v31: i64;  // rax
    let v32: i64;  // rdx
    let v33: i64;  // rax
    let v34: i64;  // rax
    let v35: i64;  // rdi
    let v36: i64;  // rcx
    let v37: i64;  // r14
    let v38: i64;  // rax
    let v39: i128;  // xmm0
    let v40: i128;  // xmm1

    v24 = 0xa000000;
    v19 = 0;
    v20 = 10;
    v21 = 0;
    v22 = 8;
    v23 = 0;
    v24 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, &g_419dc3, 5) as i8;
    v25 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, &g_419df8, 7) as i8;
    v27 = (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, &g_410f14, 4) as i8 ? 10 : 0);
    v26 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, &g_419e2c, 19) as i8;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v6, a1, &g_419cc8, 5);
    v0 = &g_419cc8;
    v1 = 5;
    if v6 != 2 {
        v12 = v9;
        v11 = v8;
        v10 = v6;
        v2 = &v0;
        v3 = <&T as core::fmt::Display>::fmt;
        v4 = &v10;
        v5 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
        v14 = "Mismatch between definition and access of `";
        (&v14)[1] = 2;
        (&v14)[4] = 0;
        (&v14)[2] = &v2;
        (&v14)[3] = 2;
        core::panicking::panic_fmt(&v14); /* do not return */
    }
    v31 = v7;
    if !v31 {
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v6, a1, &g_419d43, 5);
        v0 = &g_419d43;
        v1 = 5;
        if v6 != 2 {
            v12 = v9;
            vvar_528{stack -264} = v8;
            v10 = v6;
            vvar_529{stack -360} = &v0;
            vvar_530{stack -352} = <&T as core::fmt::Display>::fmt;
            vvar_531{stack -344} = &v10;
            vvar_532{stack -336} = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
            vvar_533{stack -216} = "Mismatch between definition and access of `";
            (&v14)[1] = 2;
            (&v14)[4] = 0;
            (&v14)[2] = &v2;
            (&v14)[3] = 2;
            core::panicking::panic_fmt(&v14); /* do not return */
        }
        v34 = v7;
        if !v34 {
            v32 = 10;
            v33 = 0;
            goto LABEL_4886d0;
        }
        v6 = uu_head::parse::parse_num(*((v34 + 8) as &i64), *((v34 + 16) as &i64));
        if v6 == 3 {
            v32 = *((&v6 as &char + 8) as &i64);
            v33 = *((&v6 as &char + 16) as &i8);
            goto LABEL_4886d0;
        } else {
            v11 = v8;
            v10 = v6;
            v0 = &v10;
            v14 = Arguments {
                pieces: ["invalid number of lines: "]
                args: [&v0]
                fmt: None
            };
            v16 = &v0;
            v2 = alloc::fmt::format::format_inner(&v14);
        }
    } else {
        v6 = uu_head::parse::parse_num(*((v31 + 8) as &i64), *((v31 + 16) as &i64));
        if v6 == 3 {
            v32 = *((&v6 as &char + 8) as &i64);
            v33 = 3 - (*((&v6 as &char + 16) as &i8) < 1);
            goto LABEL_4886d0;
        } else {
            v11 = v8;
            v10 = v6;
            v0 = Argument {
                value: &v10
                formatter: <uucore::parser::parse_size::ParseSizeError as core::fmt::Display>::fmt
            };
            v14 = Arguments {
                pieces: ["invalid number of bytes: "]
                args: [&v0]
                fmt: None
            };
            v2 = alloc::fmt::format::format_inner(&v14);
        }
    }
    v36 = v2;
    v33 = v3;
    v32 = *((&v2 as &char + 16) as &i8) | (*((&v2 as &char + 17) as &i32) | (*((&v2 as &char + 21) as &i16) | *((&v2 as &char + 23) as &i8) * 0x10000) * 0x100000000) * 0x100;
    if v36 != 0x8000000000000000 {
        *((a0 + 8) as &i64) = v36;
        *((a0 + 16) as &i64) = v33;
        *((a0 + 24) as &i64) = v32;
        *(a0 as &i64) = 4;
        return a0;
    }
LABEL_4886d0:
    v19 = v33;
    v20 = v32;
    v14 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(a1, &g_410f68, 4);
    v0 = &g_410f68;
    v1 = 4;
    if v14 {
        v9 = *((&v14 as &char + 40) as &i64);
        v8 = *((&v14 as &char + 24) as &i128);
        v6 = *((&v14 as &char + 8) as &i128);
        v2 = &v0;
        v3 = <&T as core::fmt::Display>::fmt;
        v4 = &v6;
        v5 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
        *(&v10 as &&str) = "Mismatch between definition and access of `";
        v35 = &v10;
        *((v35 + 8) as &i64) = 2;
        *((v35 + 32) as &i64) = 0;
        *((v35 + 16) as &&i64) = &v2;
        *((v35 + 24) as &i64) = 2;
        core::panicking::panic_fmt(v35); /* do not return */
    }
    v10 = *((&v14 as &char + 16) as &i128);
    v11 = *((&v14 as &char + 32) as &i128);
    v12 = v17;
    v13 = v18;
    if v28 {
        *(&v28 as &Enum) = Enum {
            field_0: v15
            field_8: <UNKNOWN>
            field_24: <UNKNOWN>
            field_40: <UNKNOWN>
            field_56: <UNKNOWN>
        };
        v14 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v28);
    } else {
        v37 = __rust_alloc(24, 8);
        v38 = __rust_alloc(1, 1);
        *(v38 as &i8) = 45;
        *(v37 as &i64) = 1;
        *((v37 + 8) as &i64) = v38;
        *((v37 + 16) as &i64) = 1;
        v14 = 1;
        v15 = v37;
        v16 = 1;
    }
    v23 = v16;
    v21 = v14;
    v22 = v15;
    v39 = v19;
    v40 = v21;
    *((a0 + 32) as &i64) = v23;
    *((a0 + 16) as &i128) = v40;
    *(a0 as &i128) = v39;
    return a0;
}
