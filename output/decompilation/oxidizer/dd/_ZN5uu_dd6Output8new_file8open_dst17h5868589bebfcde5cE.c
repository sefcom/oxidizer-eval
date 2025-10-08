fn uu_dd::Output::new_file::open_dst(a1: i64, a2: i64, a3: i8, a4: i8, a5: i64) -> Result<struct4, struct8> {
    let a0: u64;  // rdi
    let v0: u64;  // [bp-0x28]
    let v1: u64;  // [bp-0x28]
    let v2: u32;  // [bp-0x20]
    let v3: u8;  // [bp-0x1f]
    let v4: u8;  // [bp-0x1e]
    let v5: i8;  // [bp-0x1c]
    let v6: u8;  // [bp-0x1b]
    let v8: u32;  // edx

    v0 = 0x1b600000000;
    v2 = 0;
    v3 = 1;
    v5 = a4 ^ 1;
    v6 = a3;
    v4 = *(a5 as &i8);
    v0 = v0;
    if (uu_dd::make_linux_oflags(a5) & 1) {
        v0 = v8;
        v0 = v1;
    }
    std::fs::OpenOptions::open(a0, &v0, a1, a2);
    return;
}
