fn starship::modules::rust::RustToolingEnvironmentInfo::get_rustc_verbose_version(a0: i64, a1: u64, a2: u64) -> long long {
    let v0: &str;  // [bp-0x30]
    let v3: i64;  // rax
    let v4: struct72;  // rcx
    let v5: &mut [u8];  // rax
    let v7: struct24;  // rcx
    let v8: struct24;  // rsi
    let v9: struct192;  // rax
    let v10: u64;  // rcx

    v3 = starship::modules::rust::RustToolingEnvironmentInfo::get_rustup_settings(a1, a2);
    v0 = v4;
    v5 = std::sync::once_lock::OnceLock<T>::get_or_try_init(a1 + 200, a2, &v0);
    v7 = *((v5 + 8) as &i64);
    v8 = *((v5 + 32) as &i64);
    v9 = *((v5 + 40) as &i64);
    return struct32 {
        field_0: v10
        field_8: *((v5 + 16) as &i64)
        field_16: v8
        field_24: v9
    };
}
