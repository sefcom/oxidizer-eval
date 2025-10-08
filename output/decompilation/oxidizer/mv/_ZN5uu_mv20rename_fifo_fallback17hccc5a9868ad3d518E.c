fn uu_mv::rename_fifo_fallback(a0: u32, a1: u32, a2: u64, a3: u32) -> long long {
    let v0: u8;  // [bp-0x30]
    let v1: u8;  // [bp-0x2f]
    let v2: i8;  // [bp-0x28]
    let v4: u64;  // rax
    let v5: u64;  // rax
    let v6: core::result::Result<bool, std::io::error::Error>;  // rax:rdx

    v6 = std::fs::exists(&v0);
    if v0 == 1 {
        return *(&v2 as &i64);
    }
    if v1 == 1 {
        v4 = std::fs::remove_file(a2, a3);
        if v4 {
            return v4;
        }
    }
    v5 = uucore::features::fs::make_fifo(a2, a3);
    if !v5 {
        return std::fs::remove_file(a0, a1);
    }
    return v5;
}
