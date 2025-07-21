fn uu_dd::Output::new_file::open_dst(a1: i64, a2: i64, a3: i64, a4: i8, a5: i64) -> Result<struct4, struct8> {
    let a0: i64;  // rsi
    let v0: u64;  // [bp-0x28]
    let v2: u32;  // [bp-0x20]
    let v3: struct20;  // [bp-0x1e]
    let v4: i8;  // [bp-0x1c]
    let v5: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0x1b]
    let v7: u64;  // rdi

    v0 = 0x1b600000000;
    v2 = 0x100;
    v4 = a3 ^ 1;
    v5 = a2;
    v3 = *(a4 as &i8);
    std::fs::OpenOptions::open(v7, &v0);
    return;
}
