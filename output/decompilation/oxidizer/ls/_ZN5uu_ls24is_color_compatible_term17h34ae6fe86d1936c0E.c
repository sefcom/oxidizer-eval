fn uu_ls::is_color_compatible_term() -> long long {
    let v0: core::result::Result<alloc::string::String, std::env::VarError>;  // [bp-0x88]
    let v1: Result<struct24, struct24>;  // [bp-0x68]
    let v5: Result<struct24, struct24>;  // [bp-0x40]
    let v7: u32;  // ebx

    v0 = std::env::var("TERM");
    v0 = std::env::var("COLORTERM");
    v0 = std::env::var("TERM");
    v1 = core::result::Result<T,E>::unwrap_or_default(&v0);
    v0 = std::env::var("COLORTERM");
    v5 = core::result::Result<T,E>::unwrap_or_default(&v0);
    return v7;
}
