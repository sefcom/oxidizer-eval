fn uu_shred::do_remove(a0: u32, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: struct24;  // [sp-0xc8], Other Possible Types: i64
    let v1: i64;  // [sp-0x80]
    let v2: i64;  // [sp-0x78]
    let v3: i64;  // [sp-0x70]
    let v4: i8;  // [sp-0x68]
    let v5: struct24;  // [bp-0x48]
    let v7: i64;  // r13
    let v8: i64;  // rbp
    let v9: i64;  // rdx
    let v10: i64;  // rsi
    let v12: i64;  // rax

    v7 = a5;
    v8 = a4;
    if a4 {
        v1 = uucore::util_name();
        v2 = v9;
        eprint!("{:?}: ", &v1);
        v1 = 0;
        v2 = a2;
        v3 = a3;
        v4 = 0;
        eprintln!("{:?}: removing", &v1);
    }
    if v7 != 1 {
        v0 = uu_shred::wipe_name(a0, a1, v8 & 4294967295, v7 & 4294967295);
    } else {
        v0 = std::path::Path::with_file_name(a0, a1, a2, a3);
    }
    if v0 != 0x8000000000000000 {
        v5 = struct24 {
            field_0: v0
            field_16: *((&v0 as &char + 16) as &i64)
        };
        v12 = std::fs::remove_file(&v5, v10, v9);
        if v12 {
            return v12;
        }
    }
    if v8 {
        v1 = uucore::util_name();
        v2 = v9;
        eprint!("{:?}: ", &v1);
        v1 = 0;
        v2 = a2;
        v3 = a3;
        v4 = 0;
        eprintln!("{:?}: removed", &v1);
    }
    return 0;
}
