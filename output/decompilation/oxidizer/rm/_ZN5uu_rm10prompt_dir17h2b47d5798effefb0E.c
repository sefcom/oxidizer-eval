fn uu_rm::prompt_dir(a0: &std::path::Path, a1: i8, a2: i32) -> u64 {
    let v0: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0xd8]
    let v2: u64;  // rbp
    let v3: u32;  // ebp
    let v4: u64;  // rsi

    v2 = a2;
    if !v2 {
        return v2 & -0x100 | 1;
    }
    v0 = std::fs::metadata(a0);
    if let Err(_) = v0 {
        return v3 as u64;
    }
    v3 = uu_rm::handle_writable_directory(a0, v4, a1, v2);
    return v3;
}
