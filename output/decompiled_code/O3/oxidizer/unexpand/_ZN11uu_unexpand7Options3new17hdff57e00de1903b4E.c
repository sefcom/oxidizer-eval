fn uu_unexpand::Options::new(a0: void*, a1: void*) -> u64 {
    let v0: i32;  // [bp-0x1e8]
    let v1: i64;  // [sp-0x1e0]
    let v2: i64;  // [sp-0x1d8]
    let v4: i64;  // [bp-0x1c8], Other Possible Types: struct24
    let v5: i64;  // [bp-0x1c0]
    let v6: i8;  // [bp-0x1b8]
    let v7: i8;  // [bp-0x1b0]
    let v8: i8;  // [bp-0x1a8]
    let v9: i8;  // [bp-0x1a0]
    let v10: i8;  // [bp-0x198]
    let v11: i8;  // [bp-0x188]
    let v12: i64;  // [sp-0x180]
    let v13: i128;  // [bp-0x178], Other Possible Types: struct32
    let v14: i64;  // [sp-0x170]
    let v15: i128;  // [bp-0x168]
    let v16: i64;  // [sp-0x160]
    let v17: i128;  // [bp-0x158]
    let v18: i64;  // [sp-0x148]
    let v19: i64;  // [sp-0x138], Other Possible Types: struct32
    let v20: i64;  // [sp-0x130]
    let v21: i64;  // [sp-0x128]
    let v22: i64;  // [sp-0x120]
    let v23: i64;  // [sp-0x118]
    let v24: i64;  // [bp-0x108]
    let v25: i64;  // [sp-0x100]
    let v26: i64;  // [bp-0xf8]
    let v27: i64;  // [sp-0xf0]
    let v28: i64;  // [sp-0xe8]
    let v29: i64;  // [sp-0xe0]
    let v30: i64;  // [sp-0xd8]
    let v31: i64;  // [sp-0xd0]
    let v32: i64;  // [sp-0xc8]
    let v33: i64;  // [sp-0xc0]
    let v34: i64;  // [sp-0xb8]
    let v35: i64;  // [sp-0xb0], Other Possible Types: Enum
    let v36: i64;  // [sp-0x70], Other Possible Types: Enum
    let v38: i128;  // xmm0
    let v39: i64;  // rax
    let v40: i64;  // r15
    let v41: i64;  // rbp
    let v42: i64;  // r13
    let v44: i64;  // 4096
    let v98: i64;  // rbp
    let v99: i64;  // rax
    let v100: i64;  // rcx
    let v101: i64;  // rdx
    let v102: i64;  // rax
    let v104: i128;  // xmm0
    let v105: i64;  // r12
    let v106: i64;  // rax

    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v4, a1, &g_412d94, 4);
    v33 = &g_412d94;
    v34 = 4;
    if v4 {
        v28 = v9;
        v38 = v5;
        v26 = v7;
        v24 = v38;
        v29 = &v33;
        v30 = <&T as core::fmt::Display>::fmt;
        v31 = &v24;
        v32 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
        v19 = "Mismatch between definition and access of `";
        v20 = 2;
        v23 = 0;
        v21 = &v29;
        v22 = 2;
        v19 = core::panicking::panic_fmt();
    }
    v13 = v6;
    v15 = v8;
    v17 = v10;
    v18 = v11;
    if v35 {
        a0 = a0;
        v35 = Enum {
            field_0: v5
            field_8: <UNKNOWN>
            field_24: <UNKNOWN>
            field_40: <UNKNOWN>
            field_56: <UNKNOWN>
        };
        <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v19, &v35);
        v12 = v20;
        v4 = alloc::str::join_generic_copy(v20, v21, &g_419567, 1);
        v2 = v4;
        v0 = v5;
        v40 = v6;
        v4 = 0;
        v5 = 8;
        v6 = 0;
        v41 = 0;
        v42 = 0;
    } else {
        v39 = __rust_alloc(8, 8);
        *(v39 as &i64) = 8;
        v1 = 1;
        v98 = v44;
        if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v98, &g_419568, 3) as i8 {
            v0 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v98, &g_41956b, 10) as i32;
            v102 = v0;
            v0 = v102 | -0x100 | v102 ^ 1;
        } else {
            v99 = *((v98 + 16) as &i64);
            if !v99 {
LABEL_483ac2:
                v0 = 0;
            } else {
                v100 = *((v98 + 8) as &i64);
                v101 = 0;
                while (!(*((v100 + v101 + 8) as &i64) == 4) || !(*(*((v100 + v101) as &i64) as &i32) == 1935827316)) {
                    v101 += 16;
                    if v99 << 4 == v101 {
                        goto LABEL_483ac2;
                    }
                }
            }
        }
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v4, a1, &g_412df4, 4);
        v29 = &g_412df4;
        v30 = 4;
        if v4 {
            v23 = (&v8)[8];
            v104 = v5;
            v21 = (&v6)[8];
            v19 = v104;
            v24 = &v29;
            v25 = <&T as core::fmt::Display>::fmt;
            v26 = &v19;
            v27 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
            v13 = "Mismatch between definition and access of `";
            v14 = 2;
            v17 = 0;
            v15 = &v24;
            v16 = 2;
            v13 = core::panicking::panic_fmt();
        }
        v13 = v6;
        v15 = v8;
        v17 = v10;
        v18 = v11;
        if v36 {
            v36 = Enum {
                field_0: v5
                field_8: <UNKNOWN>
                field_24: <UNKNOWN>
                field_40: <UNKNOWN>
                field_56: <UNKNOWN>
            };
            v4 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v36);
        } else {
            a0 = a0;
            v105 = __rust_alloc(24, 8);
            v106 = __rust_alloc(1, 1);
            *(v106 as &i8) = 45;
            *(v105 as &i64) = 1;
            *((v105 + 8) as &i64) = v106;
            *((v105 + 16) as &i64) = 1;
            v4 = 1;
            v5 = v105;
            v6 = 1;
        }
        *((a0 + 16) as &i64) = v6;
        *(a0 as &i64) = v4;
        *((a0 + 8) as &i64) = v5;
        *((a0 + 24) as &i64) = v1;
        *((a0 + 32) as &i64) = v39;
        *((a0 + 40) as &i64) = 1;
        *((a0 + 48) as &i8) = v0;
        *((a0 + 49) as &i8) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, &g_419575, 7) as i32 ^ 1;
        return a0;
    }
}
