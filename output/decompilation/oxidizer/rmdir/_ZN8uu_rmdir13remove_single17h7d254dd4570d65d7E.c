fn uu_rmdir::remove_single(a0: &struct24, a1: u32, a2: u32, a3: u32) -> u64 {
    let v0: u64;  // [sp-0x98]
    let v1: u64;  // [sp-0x90]
    let v2: u64;  // [sp-0x68]
    let v3: u64;  // [sp-0x60]
    let v4: u64;  // [sp-0x58]
    let v5: u8;  // [sp-0x50]
    let v7: u64;  // rdx

    if (a3 & 0x10000) {
        v0 = uucore::util_name();
        v1 = v7;
        v2 = 1;
        v3 = a1;
        v4 = a2;
        v5 = 1;
        println!("{}: removing directory, {}", &v0, &v2);
    }
    if std::fs::remove_dir(a1, a2) {
        a0[1] = a1;
        a0[2] = a2;
    }
    return struct8 {
        field_0: v8
    };
}
