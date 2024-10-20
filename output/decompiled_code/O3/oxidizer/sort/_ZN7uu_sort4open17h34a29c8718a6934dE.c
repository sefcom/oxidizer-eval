fn uu_sort::open(a0: i64, a1: i64) -> u64 {
    let v0: Enum;  // [sp-0x98], Other Possible Types: i64
    let v1: i8;  // [bp-0x90]
    let v2: i64;  // [sp-0x88]
    let v3: i64;  // [bp-0x80]
    let v4: i32;  // [bp-0x78]
    let v5: i16;  // [sp-0x74]
    let v6: i128;  // [bp-0x70]
    let v7: i128;  // [bp-0x60]
    let v8: i8;  // [bp-0x50]
    let v9: i192;  // [sp-0x40], Other Possible Types: struct24
    let v11: i64;  // r14
    let v12: i64;  // r15
    let v13: i64;  // rax
    let v15: i64;  // rax
    let v16: i64;  // rax
    let v17: i64;  // rax
    let v18: i128;  // xmm0
    let v19: i128;  // xmm2

    v11 = *((a1 + 8) as &i64);
    v12 = *((a1 + 16) as &i64);
    if v12 != 1 || *(v11 as &i8) != 45 {
        v3 = 0x1b600000000;
        v4 = 0;
        v5 = 0;
        v4 = 1;
        v0 = std::fs::OpenOptions::_open(&v3, v11, v12);
        if v0 {
            v2 = v1;
            v9 = std::sys::pal::unix::os::split_paths::bytes_to_path(v11, v12);
            v6 = v9;
            v4 = v2;
            v3 = 2;
            v17 = __rust_alloc(64, 8);
            v18 = v3;
            v19 = v7;
            *((v17 + 48) as &i8) = v8;
            *((v17 + 32) as &i128) = v19;
            *((v17 + 16) as &i128) = v6;
            *(v17 as &i128) = v18;
            *((a0 + 8) as &i64) = v17;
            *((a0 + 16) as &&i64) = &anon.d7f70ae2e91d4deb3ee5c65537f9ec21.36.llvm.14646808445695166917;
            *(a0 as &i64) = 1;
            return a0;
        }
        v15 = __rust_alloc(4, 4);
        *(v15 as &i32) = *((&v0 as &char + 4) as &i32);
        *((a0 + 8) as &i64) = v15;
        v16 = &anon.d7f70ae2e91d4deb3ee5c65537f9ec21.227.llvm.14646808445695166917;
    } else {
        v13 = __rust_alloc(8, 8);
        *(v13 as &long long) = std::io::stdio::stdin();
        *((a0 + 8) as &i64) = v13;
        v16 = &anon.d7f70ae2e91d4deb3ee5c65537f9ec21.228.llvm.14646808445695166917;
    }
    *((a0 + 16) as &i64) = v16;
    *(a0 as &i64) = 0;
    return a0;
}
