fn uu_rm::prompt_dir(a0: i64, a1: i64, a2: i8) -> long long {
    let v0: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0xd0]
    let v2: u32;  // ebx
    let v3: u32;  // ebx
    let v4: u32;  // ebx

    if !a2 {
        return v4 & -0x100 | 1;
    }
    v0 = std::fs::metadata(a0, a1);
    v3 = v2 & -0x100 | 1;
    if let Err(_) = v0 {
        return v3 as u64;
    }
    v3 = uu_rm::handle_writable_directory(a0, a1, a2, *((&v0 as &char + 56) as &i32)) as i32;
    return v3;
}
