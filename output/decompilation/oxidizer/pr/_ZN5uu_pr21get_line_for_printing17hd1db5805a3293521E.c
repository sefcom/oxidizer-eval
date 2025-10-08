fn uu_pr::get_line_for_printing(a0: &struct24, a1: i64, a2: i64, a3: i64, a4: i64, a5: i8, a6: i64, a7: i64) -> int {
    let v0: struct24;  // [bp-0x138]
    let v1: iNone;  // [bp-0x138], Other Possible Types: u128
    let v2: u64;  // [bp-0x128]
    let v3: alloc::string::String;  // [bp-0x108], Other Possible Types: u64
    let v4: u128;  // [bp-0x100]
    let v5: u64;  // [bp-0xf8]
    let v6: u64;  // [bp-0xe8]
    let v7: u128;  // [bp-0xe8]
    let v8: u64;  // [bp-0xe0]
    let v9: u64;  // [bp-0xd8]
    let v10: u128;  // [bp-0xc8]
    let v11: u64;  // [bp-0x98]
    let v12: void*;  // [bp-0x90]
    let v13: u64;  // [bp-0x88]
    let v14: void*;  // [bp-0x80]
    let v15: u64;  // [bp-0x78]
    let v16: u64;  // [bp-0x70]
    let v17: i64;  // [bp-0x68]
    let v18: i64;  // [bp-0x60]
    let v19: i64;  // [bp-0x58]
    let v20: i64;  // [bp-0x50]
    let v21: struct24;  // [bp-0x48]
    let v23: u64;  // r12
    let v24: u64;  // rbx
    let v26: i64;  // rax
    let v27: u64;  // rdi

    v11 = a3;
    v12 = 0;
    v13 = 1;
    v14 = 0;
    v21 = uu_pr::get_formatted_line_number(a1, *((a2 + 32) as &i64), a4);
    v23 = a2 + (((0 ^ *(a2 as &i64)) & (0 ^ -(*(a2 as &i64)))) >> 63 & 255) * 8;
    core::result::Result<T,E>::unwrap(((0 ^ *(a2 as &i64)) & (0 ^ -(*(a2 as &i64)))) >> 63, v23);
    v6 = v23;
    v3 = format!("{}{}", &v21, &v6);
    v7 = *(&v3.vec.buf.inner.cap as &i128);
    v24 = v5;
    v9 = v24;
    v15 = a1 + 168;
    v16 = core::iter::traits::iterator::Iterator::fold(v8, v8 + v24) * 7 + v24;
    v17 = v26;
    v18 = &v11;
    v19 = &v16;
    v20 = &v6;
    if (a5 & 1) {
        v0 = uu_pr::get_line_for_printing::{{closure}}(&v18, a6);
        v10 = *((&v0.field_0 as &char + 8) as &i128);
        v2 = v9;
        v1 = v7;
        v27 = a0;
        if 0 {
            goto LABEL_537b8c;
        }
        v4 = v10;
        v3 = &g_456960;
    } else {
        v2 = v9;
        *(&v1 as &u128) = v7;
        v27 = a0;
LABEL_537b8c:
        v5 = v2;
        v3 = v1 as i128;
    }
    format!("{}{}{}", &v15, &v3, &v17);
    return;
}
