fn starship::modules::dotnet::map_str_to_lower(a1: &[u8]) -> Option<struct24> {
    let a0: u64;  // rdi
    let v0: core::result::Result<&str, core::str::error::Utf8Error>;  // [bp-0x20]
    let v1: u64;  // [bp-0x18]
    let v3: u64;  // rsi
    let v4: u64;  // rdx

    if v3 {
        v0 = core::str::converts::from_utf8(v3, v4);
        if let Ok(_) = v0 {
            alloc::str::<impl str>::to_ascii_lowercase(a0, v1, *((&v0 as &char + 16) as &i64) as i32);
            return;
        }
    }
    return struct8 {
        field_0: 0x8000000000000000
    };
}
