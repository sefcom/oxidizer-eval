fn uu_rmdir::remove_single(a1: i64, a2: i64, a3: i32) -> : struct24 {
    let a0: u64;  // rsi
    let v0: u64;  // [bp-0x98]
    let v1: u64;  // [bp-0x90]
    let v2: u64;  // [bp-0x68]
    let v3: u64;  // [bp-0x60]
    let v4: u64;  // [bp-0x58]
    let v5: u8;  // [bp-0x50]
    let v7: u64;  // rdx
    let v8: u64;  // rax
    let v9: i64;  // rdi

    if (a2 & 0x10000) {
        v0 = uucore::util_name();
        v1 = v7;
        v2 = 1;
        v3 = a0;
        v4 = a1;
        v5 = 1;
        println!("{}: removing directory, {}", &v0, &v2);
    }
    v8 = std::fs::remove_dir(a0, a1);
    if v8 {
        *((v9 + 8) as &u64) = a0;
        *((v9 + 16) as &u64) = a1;
    }
    *(v9 as &u64) = v8;
    return;
}
