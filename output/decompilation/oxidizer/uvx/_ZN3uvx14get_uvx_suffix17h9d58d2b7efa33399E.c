fn uvx::get_uvx_suffix(a0: &u8, a1: u64) -> long long {
    let v0: core::result::Result<&str, core::str::error::Utf8Error>;  // [bp-0x18]
    let v1: u64;  // [bp-0x10]
    let v3: u64;  // rax
    let v4: u64;  // rdx
    let v5: u64;  // rcx

    v3 = std::path::Path::file_name(a0, a1);
    if !v3 {
        return 0;
    }
    v0 = core::str::converts::from_utf8(v3, v4);
    match v0 {
        Ok(_) => {
            return <&str as core::str::pattern::Pattern>::strip_prefix_of(v1, *((&v0 as &char + 16) as &i64), v4, v5) as u64;
        },
        Err(_) => {
            return 0;
        },
    }
}
