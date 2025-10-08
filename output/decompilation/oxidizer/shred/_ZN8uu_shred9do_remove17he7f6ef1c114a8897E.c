fn uu_shred::do_remove(a0: u64, a1: u64, a2: u64, a3: u64, a4: u32, a5: u32) -> long long {
    let v0: void*;  // [bp-0x68], Other Possible Types: u64
    let v1: u64;  // [bp-0x60]
    let v2: u64;  // [bp-0x58]
    let v3: u8;  // [bp-0x50]
    let v4: struct24;  // [bp-0x48]
    let v6: u64;  // r13
    let v7: u64;  // rbp
    let v8: u64;  // rdx
    let v9: u64;  // rax

    v6 = a5;
    v7 = a4;
    if a4 {
        v0 = uucore::util_name();
        v1 = v8;
        eprint!("{}: ", &v0);
        v0 = 0;
        v1 = a2;
        v2 = a3;
        v3 = 0;
        eprintln!("{}: removing", &v0);
    }
    if v6 == 1 {
        v4 = std::path::Path::with_file_name(a0, a1, a2, a3);
        if (((0 ^ v4.field_0 as i64) & (0 ^ -(v4.field_0 as i64))) >> 63) as char {
            goto LABEL_4657b0;
        }
LABEL_465775:
        v9 = std::fs::remove_file(&v4);
        if !(v7 & !v9) {
            return v9;
        }
    } else {
        uu_shred::wipe_name(&v4 as u8, a0, a1, v7, v6);
        if !((((0 ^ v4.field_0 as i64) & (0 ^ -(v4.field_0 as i64))) >> 63) as char) {
            goto LABEL_465775;
        }
LABEL_4657b0:
        if !v7 {
            return 0;
        }
    }
    v0 = uucore::util_name();
    v1 = v8;
    eprint!("{}: ", &v0);
    v0 = 0;
    v1 = a2;
    v2 = a3;
    v3 = 0;
    eprintln!("{}: removed", &v0);
    return 0;
}
