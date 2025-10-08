fn just::platform::unix::<impl just::platform_interface::PlatformInterface for just::platform::Platform>::set_execute_permission(a0: &std::path::Path) -> u64 {
    let v0: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0xc0]
    let v2: u64;  // rsi

    v0 = std::fs::metadata(a0);
    match v0 {
        Ok(_) => {
            return std::fs::set_permissions(a0, v2);
        },
        Err(_) => {
            return *((&v0 as &char + 8) as &i64);
        },
    }
}
