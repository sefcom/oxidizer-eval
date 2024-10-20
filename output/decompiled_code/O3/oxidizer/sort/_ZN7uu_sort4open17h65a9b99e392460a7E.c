fn uu_sort::open(a0: i64, a1: i64) -> u64 {
    let v0: Enum;  // [sp-0x98], Other Possible Types: i64
    let v1: i64;  // [sp-0x88]
    let v2: i8;  // [sp-0x80]
    let v3: i64;  // [sp-0x78]
    let v4: i192;  // [bp-0x70]
    let v5: i128;  // [bp-0x60]
    let v6: i8;  // [bp-0x50]
    let v7: i192;  // [sp-0x40], Other Possible Types: struct24
    let v9: i64;  // r14
    let v10: i64;  // r15
    let v11: i64;  // rax
    let v13: i64;  // rax
    let v14: i64;  // rax
    let v15: i64;  // rax
    let v16: i128;  // xmm0
    let v17: i128;  // xmm2

    v9 = *((a1 + 8) as &i64);
    v10 = *((a1 + 16) as &i64);
    if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v9, v10, &g_41edd9, 1) as i8 {
        v11 = __rust_alloc(8, 8);
        *(v11 as &long long) = std::io::stdio::stdin();
        *((a0 + 8) as &i64) = v11;
        v14 = &g_58f108;
    } else {
        v0 = std::fs::File::open(v9, v10);
        if v0 {
            v1 = v3;
            v7 = std::sys::pal::unix::os::split_paths::bytes_to_path(v9, v10);
            v4 = v7;
            v3 = v1;
            v2 = 2;
            v15 = __rust_alloc(64, 8);
            v16 = v2;
            v17 = v5;
            *((v15 + 48) as &i8) = v6;
            *((v15 + 32) as &i128) = v17;
            *((v15 + 16) as &i128) = v4;
            *(v15 as &i128) = v16;
            *((a0 + 8) as &i64) = v15;
            *((a0 + 16) as &&i64) = &g_58f098;
            *(a0 as &i64) = 1;
            return &g_58f098;
        }
        v13 = __rust_alloc(4, 4);
        *(v13 as &i32) = *((&v0 as &char + 4) as &i32);
        *((a0 + 8) as &i64) = v13;
        v14 = &g_58f008;
    }
    *((a0 + 16) as &i64) = v14;
    *(a0 as &i64) = 0;
    return v14;
}
