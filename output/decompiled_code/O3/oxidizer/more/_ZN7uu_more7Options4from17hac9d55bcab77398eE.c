fn uu_more::Options::from(a0: void*, a1: u32) -> u64 {
    let v0: i8;  // [sp-0x112]
    let v1: i8;  // [sp-0x111]
    let v2: i64;  // [sp-0x110]
    let v3: i64;  // [sp-0x108]
    let v4: i32;  // [sp-0xfc]
    let v5: i64;  // [sp-0xf8], Other Possible Types: struct40, struct24
    let v6: i64;  // [sp-0xf0]
    let v7: i64;  // [sp-0xe8]
    let v8: i64;  // [sp-0xe0]
    let v9: i64;  // [sp-0xd8]
    let v10: i64;  // [sp-0xc8]
    let v11: i64;  // [sp-0xc0]
    let v12: i64;  // [sp-0xb8]
    let v13: i64;  // [sp-0xb0]
    let v14: i8;  // [bp-0xa8]
    let v15: i8;  // [bp-0xa0]
    let v16: i8;  // [bp-0x98]
    let v17: i8;  // [bp-0x88]
    let v18: i64;  // [sp-0x80]
    let v19: i128;  // [sp-0x78]
    let v20: i128;  // [sp-0x68]
    let v21: i64;  // [sp-0x58]
    let v22: i64;  // [sp-0x50]
    let v23: i64;  // [sp-0x48]
    let v24: i64;  // [sp-0x40]
    let v25: i64;  // [sp-0x38]
    let v26: i64;  // [sp-0x30]
    let v27: i64;  // [sp-0x28]
    let v28: i64;  // [sp-0x20]
    let v29: i64;  // [sp-0x18]
    let v30: i64;  // [sp-0x10]
    let v32: i64;  // r15
    let v33: i64;  // r14
    let v34: i64;  // r13
    let v35: i64;  // r12
    let v36: i64;  // rbx
    let v37: i64;  // r13
    let v38: i64;  // r12
    let v39: i32;  // eax
    let v40: i64;  // rbp
    let v41: i64;  // r13
    let v45: i16;  // si
    let v46: i16;  // cx
    let v48: i64;  // rdi
    let v49: i64;  // rdx
    let v50: i64;  // r13

    v30 = v32;
    v29 = v33;
    v28 = v34;
    v27 = v35;
    v26 = v36;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v14, a1, &g_41ef73, 5);
    v2 = &g_41ef73;
    v3 = 5;
    if v14 != 2 {
        v21 = v17;
        v20 = v16;
        v19 = v14;
        v10 = &v2;
        v11 = <&T as core::fmt::Display>::fmt;
        v12 = &v19;
        v13 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
        v5 = "Mismatch between definition and access of `";
        v6 = 2;
        v9 = 0;
        v7 = &v10;
        v8 = 2;
        v5 = core::panicking::panic_fmt();
    }
    v37 = v15;
    if v37 {
        v38 = *(v37 as &i16);
    }
    v39 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v14, a1, &g_41ef78, 6) as i32;
    v2 = &g_41ef78;
    v3 = 6;
    if v14 == 2 {
        v40 = v15;
        if v40 {
            v39 = *(v40 as &i16);
        }
        v4 = v39;
        v25 = v37;
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v14, a1, &g_41ef7e, 9);
        v2 = &g_41ef7e;
        v3 = 9;
        if v14 == 2 {
            v41 = v15;
            if v41 {
                v23 = *(v41 as &i64);
            }
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v14, a1, &g_41ef87, 7);
            v2 = &g_41ef87;
            v3 = 7;
            if v14 == 2 {
                if !v15 {
                    v5 = 0x8000000000000000;
                } else {
                    v5 = <alloc::string::String as core::clone::Clone>::clone(v15);
                }
                v1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, &g_41ef8e, 11) as i8;
                v18 = v5;
                v22 = v6;
                v24 = v7;
                v0 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, &g_41ef99, 10) as i8;
                v45 = v4;
                if v25 {
                    v46 = -0x100 | (v38 & 65535 & 65535);
                } else {
                    v46 = v45 & v40;
                }
                v48 = v23;
                v49 = v48 - 1;
                if 2 > v48 {
                    v49 = 0;
                }
                *((a0 + 36) as &i8) = v1;
                *((a0 + 24) as &i64) = v50;
                *((a0 + 32) as &i16) = v46;
                *((a0 + 34) as &i32) = (!v25 ? v45 : v38) + 1;
                *(a0 as &i64) = v18;
                *((a0 + 8) as &i64) = v22;
                *((a0 + 16) as &i64) = v24;
                *((a0 + 37) as &i8) = v0;
                *((a0 + 38) as &i8) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, &g_41efa3, 6) as i32;
                *((a0 + 39) as &i8) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, &g_41efa9, 7) as i8;
                return a0;
            }
        }
    }
}
