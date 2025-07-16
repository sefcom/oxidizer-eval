fn uu_dircolors::guess_syntax() -> long long {
    let v0: core::result::Result<alloc::string::String, std::env::VarError>;  // [bp-0x30]
    let v1: u64;  // [bp-0x20]
    let v3: u32;  // ebx
    let v4: u32;  // ebx
    let v5: core::option::Option<&std::ffi::os_str::OsStr>;  // rbx

    v0 = std::env::var("SHELL");
    v4 = v3 & -0x100 | 3;
    if let Ok(_) = v0 {
        if *((&v0 as &char + 24) as &i64) {
            v5 = std::path::Path::file_name(v1, *((&v0 as &char + 24) as &i64)) as u64;
        }
    }
    return v4;
}
