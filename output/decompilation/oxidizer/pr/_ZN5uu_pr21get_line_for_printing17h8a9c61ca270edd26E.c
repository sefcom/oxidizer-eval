fn uu_pr::get_line_for_printing(a0: u32, a1: void*, a2: void*, a3: u32, a4: u32, a5: u32, a6: u32, a7: u32) -> u64 {
    let v0: i8;  // [bp-0x168]
    let v1: iNone;  // [sp-0x168], Other Possible Types: String, unsigned long
    let v2: i8;  // [bp-0x160]
    let v3: i64;  // [sp-0x138], Other Possible Types: int
    let v4: i64;  // [sp-0x128]
    let v5: iNone;  // [sp-0x118]
    let v6: i64;  // [sp-0x108]
    let v7: iNone;  // [bp-0xf8]
    let v8: i64;  // [sp-0xc8]
    let v9: i64;  // [sp-0xc0]
    let v10: i64;  // [sp-0xb8]
    let v11: i64;  // [sp-0xb0]
    let v12: i64;  // [sp-0xa8]
    let v13: i64;  // [sp-0xa0]
    let v14: i64;  // [sp-0x98]
    let v15: String;  // [sp-0x90]
    let v16: String;  // [sp-0x78]
    let v17: i64;  // [sp-0x60]
    let v18: i64;  // [sp-0x58]
    let v19: i64;  // [sp-0x50]
    let v20: struct24;  // [sp-0x48]
    let v22: i64;  // rbp
    let v24: i64;  // rax

    v8 = a3;
    v9 = 0;
    v10 = 1;
    v11 = 0;
    v20 = uu_pr::get_formatted_line_number(a1, *((a2 + 32) as &i64), a4);
    core::result::Result<T,E>::unwrap(*(a2 as &i64) == 0x8000000000000000, v3);
    v3 = a2 + (*(a2 as &i64) == 0x8000000000000000) * 8;
    v15 = format!("{}{}", &v20, &v3);
    v5 = *(&v15.ptr as &i128);
    v22 = v15.len;
    v6 = v22;
    v12 = a1 + 168;
    v24 = a1 + 192;
    if *((a1 + 323) as &i8) {
        v24 = &v9;
    }
    v13 = core::iter::traits::iterator::Iterator::fold((&v5)[8] as i64, (&v5)[8] as i64 + v22) * 7 + v22;
    if a4 + 1 == a7 {
        v24 = &v9;
    }
    v14 = v24;
    v17 = &v8;
    v18 = &v13;
    v19 = &v5;
    if !a5 {
        v1 = v15;
        goto LABEL_5c8434;
    } else {
        uu_pr::get_line_for_printing::{{closure}}(&v0, &v17, a6);
        *(&v7 as &i128) = *(&v2 as &i128);
        v1 = v6;
        v1 = v5;
        if v3 == 0x8000000000000000 {
LABEL_5c8434:
            v4 = v1;
            *(&v3 as &i128) = v1 as i128;
        }
    }
    v16 = format!("{}{}{}", &v12, &v3, &v14);
    return;
}
