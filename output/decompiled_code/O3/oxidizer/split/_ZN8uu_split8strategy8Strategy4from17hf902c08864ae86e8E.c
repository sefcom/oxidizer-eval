fn uu_split::strategy::Strategy::from(a0: u32, a1: u32, a2: u32) -> u64 {
    let v0: i192;  // [bp-0xf8], Other Possible Types: struct24, struct8
    let v1: i8;  // [sp-0xf0]
    let v2: i64;  // [sp-0xe8]
    let v3: i64;  // [sp-0xe0]
    let v4: i64;  // [sp-0xd8]
    let v5: i8;  // [sp-0xd6]
    let v6: i64;  // [sp-0xd0]
    let v7: i64;  // [sp-0xc8]
    let v8: i8;  // [sp-0xc0]
    let v9: i256;  // [sp-0xb8], Other Possible Types: Enum
    let v10: i64;  // [sp-0xb0]
    let v11: i64;  // [bp-0xa8]
    let v13: i128;  // [bp-0x88]
    let v15: i64;  // [bp-0x78]
    let v24: i64;  // rcx
    let v25: i64;  // r8
    let v26: i64;  // rcx
    let v27: i64;  // r9
    let v28: i64;  // rax
    let v29: i64;  // rdi
    let v30: i64;  // r10
    let v31: i8;  // r15b
    let v32: i8;  // bl
    let v33: i8;  // bpl
    let v34: i64;  // r11
    let v37: i64;  // rbp
    let v38: i64;  // r14
    let v39: i64;  // r14
    let v42: i8;  // r15b
    let v44: i64;  // r12
    let v45: i64;  // r15
    let v46: i64;  // r12
    let v47: i64;  // rax
    let v48: i64;  // rdi
    let v49: i64;  // r13
    let v50: i8;  // al
    let v51: i64;  // rbx
    let v52: i64;  // r14
    let v61: i128;  // xmm0
    let v62: i64;  // rax
    let v63: i128;  // xmm0

    v24 = *((a1 + 16) as &i64);
    if !v24 {
        if *(a2 as &i64) == 0x8000000000000000 {
            vvar_994{reg 40} = a0;
            *((v51 + 8) as &i64) = 6;
            *((v51 + 16) as &i64) = 1000;
            *(v51 as &i64) = 4;
            return v51;
        }
        v31 = 0;
        v32 = 0;
        v33 = 0;
LABEL_4a6b74:
        if !(!v33) || !(!v32) || !(!v31) {
            v51 = a0;
            *(v51 as &i64) = 3;
            return v51;
        }
    } else {
        v25 = *((a1 + 8) as &i64);
        v26 = v24 * 16;
        v27 = 97;
        v28 = 0;
        v29 = 0;
        do {
            if *((v25 + v28 + 8) as &i64) == 5 && !(*((v30 + 4) as &i8) ^ 115) && !(*(v30 as &i32) ^ 1701734764) {
                if v29 >= *((a1 + 40) as &i64) {
                    core::panicking::panic_bounds_check(); /* do not return */
                }
                goto LABEL_4a6903;
            }
        } while ((v28 += 16, v27 += 104, v29 += 1, v26 != v28));
LABEL_4a6903:
        v32 = a0 | -0x100;
        v34 = 97;
        do {
            if *((v25 + 0 + 8) as &i64) == 5 && !(*((v38 + 4) as &i8) ^ 115) && !v37 {
                if 0 >= *((a1 + 40) as &i64) {
                    core::panicking::panic_bounds_check(); /* do not return */
                }
                break;
            }
        } while ((v28 += 16, v27 += 104, v29 += 1, v26 != v28));
        v33 = v37 | -0x100;
        v39 = 97;
        do {
            if *((v25 + 0 + 8) as &i64) == 10 && !v45 && !v44 {
                if 0 >= *((a1 + 40) as &i64) {
                    core::panicking::panic_bounds_check(); /* do not return */
                }
                break;
            }
        } while ((v28 += 16, v27 += 104, v29 += 1, v26 != v28));
        v31 = v42 | -0x100;
        v46 = 97;
        v47 = 0;
        v48 = 0;
        while (!(*((v25 + v47 + 8) as &i64) == 6) || !(!(*((v49 + 4) as &i16) ^ 29285)) || !(!(*(v49 as &i32) ^ 1651340654))) {
            v47 += 16;
            v46 += 104;
            v48 += 1;
            if v26 == v47 {
                goto LABEL_4a6a5b;
            }
        }
        if v48 >= *((a1 + 40) as &i64) {
            core::panicking::panic_bounds_check(); /* do not return */
        }
        v50 = *((*((a1 + 32) as &i64) + v46) as &i8);
        if v50 == 3 {
LABEL_4a6a5b:
            if *(a2 as &i64) == 0x8000000000000000 {
                vvar_988{reg 40} = a0;
                *((v51 + 8) as &i64) = 6;
                *((v51 + 16) as &i64) = 1000;
                *(v51 as &i64) = 4;
                return v51;
            }
            goto LABEL_4a6b74;
        } else if *(a2 as &i64) != 0x8000000000000000 {
            if v50 == 2 {
                *(a0 as &i64) = 3;
                return v51;
            }
        } else {
            if v50 != 2 {
                v51 = a0;
                *((v51 + 8) as &i64) = 6;
                *((v51 + 16) as &i64) = 1000;
                *(v51 as &i64) = 4;
                return v51;
            }
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v0, a1, &anon.80a68c298b3244c7b6f64951acf55080.15.llvm.4507047988568940441, 6);
            if !clap_builder::parser::error::MatchesError::unwrap(&anon.80a68c298b3244c7b6f64951acf55080.15.llvm.4507047988568940441, 6, &v0) {
                core::option::unwrap_failed(); /* do not return */
            }
            uu_split::strategy::NumberType::from();
            v51 = a0;
            if v0 != 2 {
                v62 = v2;
                v11 = v62;
                v63 = v0;
                v13 = v63;
                v15 = v62;
                *((v51 + 24) as &i64) = v15;
                *((v51 + 8) as &i128) = v63;
                *(v51 as &i64) = 2;
                *((v51 + 32) as &i64) = v3;
                return v51;
            }
            v61 = v1;
            v13 = v61;
            v15 = v3;
            *((v51 + 24) as &i64) = v15;
            *((v51 + 8) as &i128) = v61;
            *(v51 as &i64) = 4;
            return v51;
        }
    }
    v4 = 0;
    v5 = 0;
    v0 = struct8 {
        field_0: 0
    };
    v2 = 0;
    v9 = uucore::parser::parse_size::Parser::parse_u64_max(&v0, *((a2 + 8) as &i64), *((a2 + 16) as &i64));
    v52 = v10;
    if v9 != 3 {
        v0 = <alloc::string::String as core::clone::Clone>::clone(a2);
        v51 = a0;
        *((v51 + 32) as &i64) = v2;
        *((v51 + 16) as &i192) = v0;
    } else {
        v13 = v52;
        v51 = a0;
        if v52 {
            *((v51 + 8) as &i64) = 6;
            *((v51 + 16) as &i64) = v52;
            *(v51 as &i64) = 4;
            return v51;
        }
        v9 = 0;
        v10 = 1;
        v11 = 0;
        v7 = 32;
        v8 = 3;
        v0 = 0;
        v2 = 0;
        v4 = &v9;
        v6 = &g_50bfc8;
        if core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt(&v13, &v0) as i8 {
            core::result::unwrap_failed(); /* do not return */
        }
        *((v51 + 32) as &i64) = v11;
        *((v51 + 16) as &i64) = v9;
    }
    *(v51 as &i64) = 0;
    *((v51 + 8) as &i64) = 1;
    return v51;
}
