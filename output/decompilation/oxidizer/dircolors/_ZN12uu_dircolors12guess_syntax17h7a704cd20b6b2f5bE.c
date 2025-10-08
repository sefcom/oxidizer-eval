fn uu_dircolors::guess_syntax() -> u64 {
    let v0: core::result::Result<alloc::string::String, std::env::VarError>;  // [bp-0x30]
    let v1: &u8;  // [bp-0x20]
    let v3: u64;  // rsi
    let v4: u32;  // rdx
    let v5: u32;  // ebx
    let v6: u32;  // ebx
    let v7: void*;  // rbx

    v0 = std::env::var(v3, v4);
    v6 = v5 & -0x100 | 3;
    if let Ok(_) = v0 {
        if *((&v0 as &char + 24) as &i64) {
            v7 = std::path::Path::file_name(v1, *((&v0 as &char + 24) as &i64));
        }
    }
    return v6;
}
