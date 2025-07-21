fn uu_shred::do_remove(a0: i64, a1: i64, a2: i64, a3: i64, a4: i32, a5: i32) -> long long {
    let v0: u64;  // [bp-0xc8]
    let v1: struct24;  // [bp-0xc8]
    let v2: void*;  // [bp-0x80], Other Possible Types: u64
    let v3: u64;  // [bp-0x78]
    let v4: u64;  // [bp-0x70]
    let v5: u8;  // [bp-0x68]
    let v6: struct24;  // [bp-0x48]
    let v8: u64;  // r13
    let v9: u64;  // rbp
    let v10: u64;  // rdx
    let v11: u64;  // rsi
    let v12: core::result::Result<(), std::io::error::Error>;  // rax

    v8 = a5;
    v9 = a4;
    if a4 {
        v2 = uucore::util_name();
        v3 = v10;
        eprint!("{}: ", &v2);
        v2 = 0;
        v3 = a2;
        v4 = a3;
        v5 = 0;
        eprintln!("{}: removing", &v2);
    }
    if v8 == 1 {
        std::path::Path::with_file_name(&v0, a0, a1, a2, a3);
    } else {
        uu_shred::wipe_name(&v0, a0, a1, v9, v8);
    }
    if v0 != 0x8000000000000000 {
        v6 = v1;
        v12 = std::fs::remove_file(&v6, v11);
        if let Err(_) = v12 {
            return v12;
        }
    }
    if v9 {
        v2 = uucore::util_name();
        v3 = v10;
        eprint!("{}: ", &v2);
        v2 = 0;
        v3 = a2;
        v4 = a3;
        v5 = 0;
        eprintln!("{}: removed", &v2);
    }
    return 0;
}
