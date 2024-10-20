fn uu_wc::Settings::new(a0: void*, a1: u32) -> u64 {
    let v0: i32;  // [sp-0x104]
    let v1: i64;  // [sp-0x100]
    let v2: i64;  // [sp-0xf8]
    let v3: i64;  // [sp-0xf0]
    let v4: i64;  // [sp-0xe8]
    let v5: i64;  // [sp-0xe0], Other Possible Types: struct24
    let v6: i64;  // [sp-0xd8]
    let v7: i64;  // [sp-0xd0]
    let v8: i64;  // [sp-0xc8]
    let v9: i64;  // [sp-0xc0]
    let v10: i64;  // [sp-0xb0]
    let v11: i64;  // [sp-0xa8]
    let v12: i64;  // [sp-0xa0]
    let v13: i64;  // [sp-0x98]
    let v14: i8;  // [bp-0x90]
    let v15: i8;  // [bp-0x88]
    let v16: i8;  // [bp-0x80]
    let v17: i8;  // [bp-0x70]
    let v18: i64;  // [sp-0x68]
    let v19: i64;  // [sp-0x60]
    let v20: i128;  // [sp-0x58]
    let v21: i128;  // [sp-0x48]
    let v22: i64;  // [sp-0x38]
    let v24: i64;  // r12
    let v25: i64;  // rax
    let v26: i64;  // rcx
    let v28: i8;  // cc_dep1
    let v29: i64;  // rcx
    let v30: i64;  // rax
    let v31: i64;  // rcx
    let v32: i32;  // ecx
    let v33: i32;  // eax
    let v34: i64;  // rdx
    let v35: i32;  // edx
    let v36: i64;  // rdx
    let v37: i64;  // rdx
    let v38: i64;  // r12
    let v39: i64;  // r13
    let v40: i64;  // rbp
    let v41: i64;  // rax
    let v42: i64;  // rdi

    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v14, a1, &anon.777bb9d9a47a4fd760482fbc11f41de2.4.llvm.10162994613922154447, 11);
    v3 = &anon.777bb9d9a47a4fd760482fbc11f41de2.4.llvm.10162994613922154447;
    v4 = 11;
    if v14 != 2 {
        v22 = v17;
        v21 = v16;
        v20 = v14;
        v10 = &v3;
        v11 = <&T as core::fmt::Display>::fmt;
        v12 = &v20;
        v13 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
        v5 = "Mismatch between definition and access of `";
        v6 = 2;
        v9 = 0;
        v7 = &v10;
        v8 = 2;
        v5 = core::panicking::panic_fmt();
    }
    v24 = 0x8000000000000000;
    v25 = v15;
    if !v25 {
        v24 = 9223372036854775810;
    } else {
        v26 = *((v25 + 8) as &i64);
        if v1 != 1 {
            v1 = *((v25 + 16) as &i64);
            v2 = v26;
        } else {
            v28 = *(v26 as &i8);
            if *(v26 as &i8) == 45 {
                v26 = 0;
            }
            v2 = v26;
            v24 = 9223372036854775809;
            if v28 != 45 {
                v24 = 0x8000000000000000;
            }
            v1 = 1;
        }
    }
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v14, a1, &anon.777bb9d9a47a4fd760482fbc11f41de2.7.llvm.10162994613922154447, 5);
    v3 = &anon.777bb9d9a47a4fd760482fbc11f41de2.7.llvm.10162994613922154447;
    v4 = 5;
    if v14 == 2 {
        v29 = v15;
        v19 = v24;
        if !v29 {
            v0 = 0;
            goto LABEL_48453e;
        }
        v30 = *((v29 + 8) as &i64);
        v31 = *((v29 + 16) as &i64);
        if v31 == 6 {
            v32 = 1635216481 ^ *(v30 as &i32);
            v33 = *((v30 + 4) as &i16) ^ 29561;
            v35 = v34 | -0x100 | 1;
            goto LABEL_484532;
        }
        if v31 == 5 {
            v32 = 1702258030 ^ *(v30 as &i32);
            v33 = *((v30 + 4) as &i8) ^ 114;
            v35 = v36 | -0x100 | 3;
LABEL_484532:
            if !(!v33 && !v32) {
LABEL_4846cb:
                v5 = "internal error: entered unreachable code: Should have been caught by clap";
                v6 = 1;
                v7 = &v20;
                v8 = 0;
                v5 = core::panicking::panic_fmt();
            }
LABEL_48453a:
            v0 = v35;
LABEL_48453e:
            v18 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, &anon.777bb9d9a47a4fd760482fbc11f41de2.2.llvm.10162994613922154447, 5);
            v38 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, &anon.777bb9d9a47a4fd760482fbc11f41de2.3.llvm.10162994613922154447, 5) as i32;
            v39 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, &anon.777bb9d9a47a4fd760482fbc11f41de2.5.llvm.10162994613922154447, 5) as i32;
            v40 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, &anon.777bb9d9a47a4fd760482fbc11f41de2.8.llvm.10162994613922154447, 5) as i32;
            v41 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, &anon.777bb9d9a47a4fd760482fbc11f41de2.6.llvm.10162994613922154447, 15);
            v42 = v18;
            if (v41 + v39 & 4294967295) + (v38 + v42 & 4294967295) != !(v40 & 4294967295) {
                *(a0 as &i64) = v19;
                *((a0 + 8) as &i64) = v2;
                *((a0 + 16) as &i64) = v1;
                *((a0 + 24) as &i8) = v42;
                *((a0 + 25) as &i8) = v38;
                *((a0 + 26) as &i8) = v39;
                *((a0 + 27) as &i8) = v40;
                *((a0 + 28) as &i8) = v41;
                *((a0 + 29) as &i8) = v0;
                return a0;
            }
            v42 = v42 | -0x100 | 1;
            v38 = 0;
            v39 = v39 | -0x100 | 1;
            v40 = v40 | -0x100 | 1;
            v41 = 0;
        } else {
            if !(v31 == 4) {
                goto LABEL_4846cb;
            }
            switch (*(v30 as &i32)) {
            case 1869903201:
                v35 = 0;
                break;
            case 2037149295:
                v35 = v37 | -0x100 | 2;
                break;
            default:
                v35 = v37 | -0x100 | 2;
                break;
            }
            goto LABEL_48453a;
        }
    }
}
