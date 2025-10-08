fn zoxide::config::maxage(a0: u64) -> long long {
    let v0: struct16;  // [bp-0x38]
    let v1: struct24;  // [bp-0x28]

    v1 = std::env::var_os("_ZO_MAXAGE");
    v0 = struct16 {
        field_0: 0
        field_8: 0x40c3880000000000
    };
    return core::option::Option<T>::map_or(a0, &v1, &v0) as u64;
}
