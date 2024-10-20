fn uu_sort::open(a0: i64, a1: i64, a2: i64) -> u64 {
    let v0: i64;  // [sp-0x98], Other Possible Types: Enum
    let v1: i8;  // [bp-0x90]
    let v2: i64;  // [sp-0x88]
    let v3: i8;  // [bp-0x80]
    let v4: i32;  // [bp-0x78]
    let v5: i16;  // [sp-0x74]
    let v6: i192;  // [bp-0x70]
    let v7: i128;  // [bp-0x60]
    let v8: i8;  // [bp-0x50]
    let v9: i192;  // [sp-0x40], Other Possible Types: struct24
    let v11: i64;  // rax
    let v13: i64;  // rax
    let v14: i64;  // rax
    let v15: i64;  // rax
    let v16: i128;  // xmm0
    let v17: i128;  // xmm2

    if a2 != 1 || *(a1 as &i8) != 45 {
        v3 = 0x1b600000000;
        v4 = 0;
        v5 = 0;
        v4 = 1;
        v0 = std::fs::OpenOptions::_open(&v3, a1, a2);
        if v0 {
            v2 = v1;
            v9 = std::sys::pal::unix::os::split_paths::bytes_to_path(a1, a2);
            v6 = v9;
            v4 = v2;
            v3 = 2;
            v15 = __rust_alloc(64, 8);
            v16 = v3;
            v17 = v7;
            *((v15 + 48) as &i8) = v8;
            *((v15 + 32) as &i128) = v17;
            *((v15 + 16) as &i128) = v6;
            *(v15 as &i128) = v16;
            *((a0 + 8) as &i64) = v15;
            *((a0 + 16) as &&i64) = &anon.d7f70ae2e91d4deb3ee5c65537f9ec21.36.llvm.14646808445695166917;
            *(a0 as &i64) = 1;
            return a0;
        }
        v13 = __rust_alloc(4, 4);
        *(v13 as &i32) = *((&v0 as &char + 4) as &i32);
        *((a0 + 8) as &i64) = v13;
        v14 = &anon.d7f70ae2e91d4deb3ee5c65537f9ec21.227.llvm.14646808445695166917;
    } else {
        v11 = __rust_alloc(8, 8);
        *(v11 as &long long) = std::io::stdio::stdin();
        *((a0 + 8) as &i64) = v11;
        v14 = &anon.d7f70ae2e91d4deb3ee5c65537f9ec21.228.llvm.14646808445695166917;
    }
    *((a0 + 16) as &i64) = v14;
    *(a0 as &i64) = 0;
    return a0;
}
