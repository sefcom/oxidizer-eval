fn uu_fmt::extract_files(a0: &u64, a1: void*) -> u64 {
    let v0: i8;  // [sp-0x1d2]
    let v1: i8;  // [bp-0x1d1]
    let v2: i64;  // [sp-0x1d0]
    let v3: i64;  // [sp-0x1c8]
    let v4: i64;  // [sp-0x1c0]
    let v5: i64;  // [sp-0x1b8]
    let v6: i64;  // [sp-0x1b0]
    let v7: i64;  // [sp-0x1a8]
    let v8: i8;  // [bp-0x1a0], Other Possible Types: struct24
    let v9: i8;  // [bp-0x198]
    let v10: i8;  // [bp-0x188]
    let v11: i8;  // [bp-0x178]
    let v13: i64;  // [sp-0x158], Other Possible Types: struct40
    let v14: i64;  // [sp-0x150]
    let v15: i64;  // [sp-0x148]
    let v16: i64;  // [sp-0x140]
    let v17: i64;  // [sp-0x138]
    let v18: i128;  // [sp-0x128]
    let v19: i128;  // [sp-0x118]
    let v20: i64;  // [sp-0x108]
    let v21: struct80;  // [bp-0xf8]
    let v22: i64;  // [sp-0x70]
    let v23: i64;  // [sp-0x30]
    let v24: i64;  // [sp-0x28]
    let v25: i64;  // [sp-0x20]
    let v27: i64;  // rax
    let v28: i64;  // rdx
    let v29: i64;  // rcx
    let v30: i64;  // r8
    let v31: i64;  // rdi
    let v32: i64;  // r10
    let v33: i64;  // rax
    let v34: i8;  // cl
    let v35: i64;  // r14
    let v36: i64;  // rax

    v27 = *((a1 + 16) as &i64);
    if !v27 {
LABEL_484318:
    } else {
        v28 = *((a1 + 8) as &i64);
        v29 = 40;
        v30 = 0;
        v31 = 0;
        while (!(*((v28 + v30 + 8) as &i64) == 5) || !(!(*((v32 + 4) as &i8) ^ 115)) || !(!(*(v32 as &i32) ^ 1701603686))) {
            v30 += 16;
            v29 += 104;
            v31 += 1;
            if v27 << 4 == v30 {
                goto LABEL_484318;
            }
        }
        if v31 >= *((a1 + 40) as &i64) {
            core::panicking::panic_bounds_check(); /* do not return */
        }
        v33 = *((a1 + 32) as &i64);
        if *((v33 + v29) as &i64) {
            v34 = *(*((v33 + v29 - 8) as &i64) as &i64) == 1;
            goto LABEL_48431a;
        }
        goto LABEL_484318;
    }
LABEL_48431a:
    v0 = v34 & 1;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v8, a1, &g_419672, 5);
    v2 = &g_419672;
    v3 = 5;
    if v8 {
        v20 = v11;
        v19 = v10;
        v18 = v9;
        v4 = &v2;
        v5 = <&T as core::fmt::Display>::fmt;
        v6 = &v18;
        v7 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
        v13 = "Mismatch between definition and access of `";
        v14 = 2;
        v17 = 0;
        v15 = &v4;
        v16 = 2;
        v13 = core::panicking::panic_fmt();
    }
    v21 = struct80 {
        field_0: 1
        field_8: v9
        field_24: v10
        field_40: v11
        field_56: v12
        field_72: 0
    };
    v22 = 0;
    v23 = 0;
    v24 = &v1;
    v25 = &v0;
    v8 = core::iter::adapters::try_process(&v21);
    switch (v8) {
    case 0:
        v35 = __rust_alloc(24, 8);
        v36 = __rust_alloc(1, 1);
        *(v36 as &i8) = 45;
        *(v35 as &i64) = 1;
        *((v35 + 8) as &i64) = v36;
        *((v35 + 16) as &i64) = 1;
        *(a0 as &i64) = 1;
        *((a0 + 8) as &i64) = v35;
        *((a0 + 16) as &i64) = 1;
        return a0;
    default:
        *((a0 + 16) as &i64) = *((&v8 as &char + 16) as &i64);
        *(a0 as &i192) = v8;
        return a0;
    }
}
