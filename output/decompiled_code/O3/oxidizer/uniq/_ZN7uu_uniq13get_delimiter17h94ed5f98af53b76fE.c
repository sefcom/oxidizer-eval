fn uu_uniq::get_delimiter(a0: void*) -> u64 {
    let v0: i8;  // [bp-0xc8]
    let v1: i64;  // [sp-0xc0]
    let v2: i64;  // [sp-0xb8]
    let v3: i64;  // [sp-0xb0], Other Possible Types: struct40
    let v4: i64;  // [sp-0xa8]
    let v5: i64;  // [sp-0xa0]
    let v6: i128;  // [sp-0x98]
    let v7: i64;  // [sp-0x90]
    let v8: i64;  // [sp-0x80]
    let v9: i64;  // [sp-0x78]
    let v10: i64;  // [sp-0x70]
    let v11: i64;  // [sp-0x68]
    let v12: i8;  // [bp-0x60]
    let v13: i8;  // [bp-0x58]
    let v14: i8;  // [bp-0x50]
    let v15: i8;  // [bp-0x40]
    let v16: i128;  // [sp-0x38]
    let v17: i128;  // [sp-0x28]
    let v18: i64;  // [sp-0x18]
    let v20: i64;  // rax
    let v21: i64;  // rdx
    let v22: i64;  // rcx
    let v23: i64;  // rax
    let v24: i64;  // rcx
    let v25: i64;  // rdx
    let v26: i64;  // rsi
    let v27: i64;  // rdi

    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v12, a0, &anon.f9427813c0255ce4c25516664eb43cb9.8.llvm.11736109415790202195, 12);
    v1 = &anon.f9427813c0255ce4c25516664eb43cb9.8.llvm.11736109415790202195;
    v2 = 12;
    if v12 != 2 {
        v18 = v15;
        v17 = v14;
        v16 = v12;
        v8 = &v1;
        v9 = <&T as core::fmt::Display>::fmt;
        v10 = &v16;
        v11 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
        v3 = "Mismatch between definition and access of `";
        v4 = 2;
        v7 = 0;
        v5 = &v8;
        v6 = 2;
        v3 = core::panicking::panic_fmt();
    }
    v20 = v13;
    if !v20 {
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v12, a0, &anon.f9427813c0255ce4c25516664eb43cb9.17.llvm.11736109415790202195, 5);
        v1 = &anon.f9427813c0255ce4c25516664eb43cb9.17.llvm.11736109415790202195;
        v2 = 5;
        if v12 != 2 {
            vvar_259{stack -24} = v15;
            vvar_260{stack -40} = v14;
            vvar_261{stack -56} = v12;
            vvar_262{stack -128} = &v1;
            vvar_263{stack -120} = <&T as core::fmt::Display>::fmt;
            vvar_264{stack -112} = &v16;
            vvar_265{stack -104} = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
            vvar_266{stack -176} = "Mismatch between definition and access of `";
            vvar_267{stack -168} = 2;
            vvar_268{stack -144} = 0;
            vvar_269{stack -160} = &v8;
            vvar_270{stack -152} = 2;
            vvar_271{stack -176} = core::panicking::panic_fmt();
        }
        v20 = v13;
        if !v20 {
            v22 = *((a0 + 16) as &i64);
            v23 = v20 | -0x100 | 4;
            if !v22 {
                return v23;
            }
            v25 = *((a0 + 8) as &i64);
            v26 = 0;
            loop {
                if *((v25 + v26 + 8) as &i64) == 5 {
                    v27 = *((v25 + v26) as &i64);
                    if !(*((v27 + 4) as &i8) ^ 112) && !(*(v27 as &i32) ^ 1970238055) {
                        v23 = v23 | -0x100 | 2;
                        return v23;
                    }
                }
                v26 += 16;
                if v22 << 4 == v26 {
                    return v23;
                }
            }
        }
    }
    v21 = *((v20 + 16) as &i64) - 4;
    switch (v21) {
    case 0:
        switch (*(v24 as &i32)) {
        case 1752461154:
            return -33;
        case 1701736302:
            return -36;
        default:
            v3 = "internal error: entered unreachable code: Should have been caught by possible values in clap";
            v4 = 1;
            v5 = &v0;
            v6 = 0;
            v3 = core::panicking::panic_fmt();
        }
    case 2:
        if !(*((v24 + 4) as &i16) ^ 25710) && !(1701867617 ^ *(v24 as &i32)) {
            return 0;
        }
    case 3:
        if !(1684956528 ^ *((v24 + 3) as &i32)) && !(1885696624 ^ *(v24 as &i32)) {
            return -35;
        }
    case 4:
        if *(v24 as &i64) == 7310575239018079603 {
            return -34;
        }
    }
}
