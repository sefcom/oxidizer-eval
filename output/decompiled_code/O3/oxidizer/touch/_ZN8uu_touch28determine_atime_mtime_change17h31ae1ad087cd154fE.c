fn uu_touch::determine_atime_mtime_change(a0: i64) -> u64 {
    let v0: i64;  // [sp-0xd0]
    let v1: i64;  // [sp-0xc8]
    let v2: i64;  // [sp-0xc0]
    let v3: i64;  // [sp-0xb8]
    let v4: i64;  // [sp-0xb0]
    let v5: i64;  // [sp-0xa8]
    let v6: i8;  // [bp-0xa0]
    let v7: i8;  // [bp-0x98]
    let v8: i8;  // [bp-0x90]
    let v9: i8;  // [bp-0x80]
    let v10: i64;  // [sp-0x78], Other Possible Types: struct40
    let v11: i64;  // [sp-0x70]
    let v12: i64;  // [sp-0x68]
    let v13: i64;  // [sp-0x60]
    let v14: i64;  // [sp-0x58]
    let v15: i128;  // [sp-0x48]
    let v16: i128;  // [sp-0x38]
    let v17: i64;  // [sp-0x28]
    let v19: i64;  // rax
    let v20: i64;  // rcx
    let v21: i64;  // rdx
    let v22: i64;  // rax
    let v23: i64;  // r14
    let v24: i64;  // r15
    let v25: i64;  // rbp
    let v26: i8;  // al
    let v28: i64;  // rax
    let v29: i64;  // rcx

    v19 = *((a0 + 16) as &i64);
    if !v19 {
LABEL_53f784:
        v25 = vvar_68{reg 56} | -0x100 | 2;
        if !(!clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, &anon.a8009f0f96d850c1c46a2cf3287456a4.20.llvm.17503802422331354604, 6) as i8) {
            goto LABEL_53f7a0;
        }
        v26 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, &anon.a8009f0f96d850c1c46a2cf3287456a4.21.llvm.17503802422331354604, 12) as i8;
        v25 = 0;
LABEL_53f7e5:
        v29 = v29 | -0x100 | 2 - (!(v25 & 255 & 255) & v26);
        return v29 & 4294967295;
    }
    v20 = *((a0 + 8) as &i64);
    v21 = 0;
    while (!(*((v20 + v21 + 8) as &i64) == 4) || !(*(*((v20 + v21) as &i64) as &i32) == 1701669236)) {
        v21 += 16;
        if v19 << 4 == v21 {
            goto LABEL_53f784;
        }
    }
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v6, a0, &anon.a8009f0f96d850c1c46a2cf3287456a4.24.llvm.17503802422331354604, 4);
    v0 = &anon.a8009f0f96d850c1c46a2cf3287456a4.24.llvm.17503802422331354604;
    v1 = 4;
    if v6 != 2 {
        v17 = v9;
        v16 = v8;
        v15 = v6;
        v2 = &v0;
        v3 = <&T as core::fmt::Display>::fmt;
        v4 = &v15;
        v5 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
        v10 = "Mismatch between definition and access of `";
        v11 = 2;
        v14 = 0;
        v12 = &v2;
        v13 = 2;
        v10 = core::panicking::panic_fmt();
    }
    v22 = v7;
    if v22 {
        v23 = *((v22 + 8) as &i64);
        v24 = *((v22 + 16) as &i64);
        v25 = vvar_68{reg 56} | -0x100 | 1;
        if !<&str as core::str::pattern::Pattern>::is_contained_in(&g_46b161, 6, v23, v24) as i8 && !<&str as core::str::pattern::Pattern>::is_contained_in(&g_46b15c, 5, v23, v24) as i8 {
            v25 = <&str as core::str::pattern::Pattern>::is_contained_in(&g_46b167, 3, v23, v24) as i32;
        }
        if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, &anon.a8009f0f96d850c1c46a2cf3287456a4.20.llvm.17503802422331354604, 6) as i8 {
            if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, &anon.a8009f0f96d850c1c46a2cf3287456a4.21.llvm.17503802422331354604, 12) as i8 {
                return v29 & 4294967295;
            } else if true {
                return 0 & 4294967295;
            } else {
                return v29 & 4294967295;
            }
        }
    }
LABEL_53f7a0:
    v28 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, &anon.a8009f0f96d850c1c46a2cf3287456a4.21.llvm.17503802422331354604, 12);
    v29 = v28 & 4294967295;
    v26 = v28 | -0x100 | 1;
    if !v29 {
        v25 = v25 | -0x100 | 1;
        return 0 & 4294967295;
    }
    v25 = v25 | -0x100 | 1;
    goto LABEL_53f7e5;
}
