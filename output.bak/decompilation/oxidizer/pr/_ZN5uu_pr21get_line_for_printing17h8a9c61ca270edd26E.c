fn uu_pr::get_line_for_printing(a0: &struct24, a1: void*, a2: void*, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i64;  // [sp-0x168]
    let v1: i64;  // [sp-0x160]
    let v2: i64;  // [sp-0x158]
    let v3: i64;  // [sp-0x150]
    let v4: i64;  // [sp-0x148]
    let v5: i64;  // [sp-0x140]
    let v6: i64;  // [sp-0x138]
    let v7: i128;  // [bp-0x130]
    let v8: i64;  // [sp-0x128]
    let v9: i128;  // [sp-0x118]
    let v10: i64;  // [sp-0x108]
    let v11: i64;  // [sp-0xf8]
    let v12: i64;  // [sp-0xf0]
    let v13: i64;  // [sp-0xe8]
    let v14: i64;  // [sp-0xe0]
    let v15: i64;  // [sp-0xd8]
    let v16: i64;  // [sp-0xc8]
    let v17: i64;  // [sp-0xc0]
    let v18: i64;  // [sp-0xb8]
    let v19: i64;  // [sp-0xb0]
    let v20: i64;  // [sp-0xa8]
    let v21: i64;  // [sp-0xa0]
    let v22: i64;  // [sp-0x98]
    let v23: i8;  // [bp-0x90]
    let v24: i8;  // [bp-0x80]
    let v27: i64;  // [sp-0x60]
    let v28: i64;  // [sp-0x58]
    let v29: i64;  // [sp-0x50]
    let v30: struct24;  // [sp-0x48], Other Possible Types: i192
    let v31: i64;  // [bp+0x8]
    let v32: i8;  // [bp+0x10]
    let v35: i64;  // rbp
    let v39: i64;  // rdx
    let v41: i64;  // rdx

    v16 = a3;
    v17 = 0;
    v18 = 1;
    v19 = 0;
    v30 = uu_pr::get_formatted_line_number(a1, *((a2 + 32) as &i64), a4);
    core::result::Result<T,E>::unwrap(-0x100 | *(a2 as &i64) == 0x8000000000000000, v6);
    v6 = a2 + (-0x100 | *(a2 as &i64) == 0x8000000000000000) * 8;
    v11 = &v30;
    v12 = <alloc::string::String as core::fmt::Display>::fmt;
    v13 = &v6;
    v14 = <&T as core::fmt::Display>::fmt;
    v0 = &g_46bf10;
    v1 = 2;
    v4 = 0;
    v2 = &v11;
    v3 = 2;
    core::option::Option<T>::map_or_else();
    v9 = v23;
    v35 = v24;
    v10 = v35;
    v20 = a1 + 168;
    if *((a1 + 323) as &i8) {
        v39 = stack_base + -192;
    } else {
        v39 = a1 + 192;
    }
    v21 = core::iter::traits::iterator::Iterator::fold(*((&v9 as &char + 8) as &i64), *((&v9 as &char + 8) as &i64) + v35) * 7 + v35;
    if a4 + 1 == v32 {
        v41 = stack_base + -192;
    }
    v22 = v41;
    v27 = &v16;
    v28 = &v21;
    v29 = &v9;
    if !a5 {
        v2 = v24;
        v0 = v23;
        goto LABEL_5c8434;
    } else {
        uu_pr::get_line_for_printing::{{closure}}(&v0, &v27, v31);
        v11 = v1;
        v2 = v10;
        v0 = v9;
        if v6 == 0x8000000000000000 {
LABEL_5c8434:
            v8 = v2;
            v6 = v0;
        } else {
            v7 = v11;
            v6 = v0;
        }
    }
    v0 = &v20;
    v1 = <&T as core::fmt::Display>::fmt;
    v2 = &v6;
    v3 = <alloc::string::String as core::fmt::Display>::fmt;
    v4 = &v22;
    v5 = <&T as core::fmt::Display>::fmt;
    v11 = &g_475660;
    v12 = 3;
    v15 = 0;
    v13 = &v0;
    v14 = 3;
    core::option::Option<T>::map_or_else();
    return struct24 {
        field_0: v25
        field_16: v26
    };
}
