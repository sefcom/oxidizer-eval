fn metal_crusher::fun::is_gnome() -> u64 {
    let v0: struct24;  // [bp-0x40]
    let v1: u64;  // [bp-0x38]
    let v2: u64;  // [bp-0x30]
    let v3: core::result::Result<alloc::string::String, std::env::VarError>;  // [bp-0x28]

    v3 = std::env::var("XDG_CURRENT_DESKTOP");
    match v3 {
        Ok(_) => {
            v0 = core::result::Result<T,E>::unwrap(&v3, "src/fun.rs");
            return <&str as core::str::pattern::Pattern>::is_contained_in("GNOME", v1, v2) as u32 as u64;
        },
        Err(_) => {
            return 0;
        },
    }
}
