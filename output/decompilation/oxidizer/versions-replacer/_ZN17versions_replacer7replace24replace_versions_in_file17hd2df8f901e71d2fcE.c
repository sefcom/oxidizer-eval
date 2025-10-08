fn versions_replacer::replace::replace_versions_in_file(a0: u64, a1: u64, a2: u64) -> long long {
    let v0: Result<struct24, struct16>;  // [bp-0x78]
    let v1: u64;  // [bp-0x70]
    let v2: u64;  // [bp-0x68]
    let v3: u64;  // [bp-0x58]
    let v4: u64;  // [bp-0x48]
    let v5: u64;  // [bp-0x40]
    let v6: u64;  // [bp-0x38]
    let v7: Result<struct24, struct16>;  // [bp-0x30]
    let v8: struct8;  // [bp-0x30]
    let v9: u64;  // [bp-0x20]

    v3 = <&T as core::convert::AsRef<U>>::as_ref(a0, a1);
    v7 = std::fs::read_to_string(v3, a2);
    v0 = eyre::context::<impl eyre::WrapErr<T,E> for core::result::Result<T,E>>::wrap_err_with(&v7, &v3);
    if (((0 ^ v0 as i64) & (0 ^ -(v0 as i64))) >> 63) as char {
        return 1;
    }
    v4 = v0 as i64;
    v5 = v1;
    v6 = v2;
    v8 = versions_replacer::replace::replace_versions_in_string(v1, v2, a2);
    v2 = v9;
    *(&v0 as &struct8) = v8;
    return 0;
}
