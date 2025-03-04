fn uu_shred::do_remove(a0: u32, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: struct24;  // [sp-0xc8], Other Possible Types: unsigned long
    let v1: i64;  // [sp-0x80]
    let v2: i64;  // [sp-0x78]
    let v3: i64;  // [sp-0x70]
    let v4: i8;  // [sp-0x68]
    let v5: i64;  // [sp-0x50]
    let v6: struct24;  // [sp-0x48]
    let v8: i64;  // r13
    let v9: i64;  // rbp
    let v10: i64;  // rdx
    let v11: i64;  // rdx
    let v12: i64;  // rax
    let v13: i64;  // rax
    let v14: i64;  // rax

    v8 = a5 as u64;
    v9 = a4 as u64;
    v10 = a1;
    if a4 {
        v5 = a1;
        v2 = v11;
        v1 = 0;
        v2 = a2;
        v3 = a3;
        v4 = 0;
        show_error!("{}: removing", &v1);
        v10 = v5;
    }
    if v8 as u8 != 1 {
        v0 = uu_shred::wipe_name(a0, v10, v9 & 4294967295, v8 & 4294967295);
    } else {
        v0 = std::path::Path::with_file_name(a0, v10, a2, a3);
    }
    if v12 != 0x8000000000000000 {
        v6 = v0;
        v13 = std::fs::remove_file(&v6);
        if v13 {
            return v13;
        }
    }
    v14 = v0;
    if v9 as u8 {
        v2 = v11;
        v1 = 0;
        v2 = a2;
        v3 = a3;
        v4 = 0;
        show_error!("{}: removed", &v1);
    }
    return 0;
}
