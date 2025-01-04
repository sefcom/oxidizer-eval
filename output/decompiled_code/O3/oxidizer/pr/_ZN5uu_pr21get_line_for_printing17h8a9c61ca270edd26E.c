fn uu_pr::get_line_for_printing(a0: &struct24, a1: void*, a2: void*, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i192;  // [bp-0x168]
    let v1: i8;  // [bp-0x160]
    let v2: i64;  // [sp-0x158]
    let v3: i64;  // [sp-0x138]
    let v4: i128;  // [bp-0x130]
    let v5: i64;  // [sp-0x128]
    let v6: i128;  // [sp-0x118]
    let v7: i64;  // [sp-0x108]
    let v8: i128;  // [bp-0xf8]
    let v9: i64;  // [sp-0xc8]
    let v10: i64;  // [sp-0xc0]
    let v11: i64;  // [sp-0xb8]
    let v12: i64;  // [sp-0xb0]
    let v13: i64;  // [sp-0xa8]
    let v14: i64;  // [sp-0xa0]
    let v15: i64;  // [sp-0x98]
    let v16: i192;  // [sp-0x90]
    let v17: i192;  // [sp-0x78]
    let v18: i64;  // [sp-0x60]
    let v19: i64;  // [sp-0x58]
    let v20: i64;  // [sp-0x50]
    let v21: struct24;  // [sp-0x48]
    let v22: i64;  // [bp+0x8]
    let v23: i8;  // [bp+0x10]
    let v26: i64;  // rbp
    let v27: i64;  // rdx
    let v31: i64;  // rdx
    let v33: i64;  // rdx

    v9 = a3;
    v10 = 0;
    v11 = 1;
    v12 = 0;
    v21 = uu_pr::get_formatted_line_number(a1, *((a2 + 32) as &i64), a4);
    core::result::Result<T,E>::unwrap(-0x100 | *(a2 as &i64) == 0x8000000000000000, v3);
    v3 = a2 + (-0x100 | *(a2 as &i64) == 0x8000000000000000) * 8;
    v16 = format!("{:?}{:?}", &v21, &v3);
    v6 = v16;
    v26 = *((&v16 as &char + 16) as &i64);
    v7 = v26;
    v13 = a1 + 168;
    if *((a1 + 323) as &i8) {
        v31 = stack_base + -192;
    } else {
        v31 = a1 + 192;
    }
    v14 = core::iter::traits::iterator::Iterator::fold(*((&v6 as &char + 8) as &i64), *((&v6 as &char + 8) as &i64) + v26, v27) * 7 + v26;
    if a4 + 1 == v23 {
        v33 = stack_base + -192;
    }
    v15 = v33;
    v18 = &v9;
    v19 = &v14;
    v20 = &v6;
    if !a5 {
        v0 = v16;
        goto LABEL_5c8434;
    } else {
        uu_pr::get_line_for_printing::{{closure}}(&v0, &v18, v22);
        v8 = v1;
        v2 = v7;
        v0 = v6;
        if v3 == 0x8000000000000000 {
LABEL_5c8434:
            v5 = v2;
            v3 = v0;
        } else {
            v4 = v8;
            v3 = v0;
        }
    }
    v17 = format!("{:?}{:?}{:?}", &v13, &v3, &v15);
    *((a0 + 16) as &i64) = *((&v17 as &char + 16) as &i64);
    *(a0 as &i192) = v17;
    return;
}
