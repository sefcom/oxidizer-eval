fn uu_dd::Output::new_file::open_dst(a0: &Result<struct4, struct8>, a1: u64, a2: u64, a3: u8, a4: u8, a5: &u8) -> u64 {
    let v0: u32;  // [bp-0x28]
    let v1: u32;  // [bp-0x20]
    let v2: u8;  // [sp-0x1e]
    let v3: u8;  // [sp-0x1c]
    let v4: u8;  // [sp-0x1b]
    let v6: u32;  // edx

    v0 = 0x1b600000000;
    v1 = 0x100;
    v3 = a4 ^ 1;
    v4 = a3;
    v2 = *(a5);
    if uu_dd::make_linux_oflags(a5) as i32 == 1 {
        v0 = v6;
    }
    return std::fs::OpenOptions::open(a0, &v0, a1, a2);
}
