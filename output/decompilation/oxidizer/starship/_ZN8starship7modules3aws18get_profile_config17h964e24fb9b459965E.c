fn starship::modules::aws::get_profile_config(a0: u64, a1: u64, a2: u64) -> long long {
    let v0: u64;  // [bp-0x70]
    let v1: i64;  // [bp-0x68]
    let v2: struct40;  // [bp-0x60]
    let v3: struct24;  // [bp-0x58]
    let v4: struct19;  // [bp-0x50]
    let v5: Result<struct32, struct16>;  // [bp-0x48]
    let v6: core::fmt::Arguments;  // [bp-0x40]
    let v7: struct24;  // [bp-0x38]
    let v8: u64;  // [bp-0x28]
    let v9: struct40;  // [bp-0x10]
    let v10: u64;  // [bp-0x8]
    let v12: u64;  // r14
    let v13: struct40;  // rbx

    if !a1 {
        return ini::Ini::section(a0, "default");
    }
    v10 = v12;
    v9 = v13;
    v0 = a1;
    v1 = &v0;
    v2 = <&T as core::fmt::Display>::fmt;
    v3 = "profile ";
    v4 = 1;
    v7 = 0;
    v5 = &v1;
    v6 = 1;
    core::option::Option<T>::map_or_else(&v8, 0, a2, &v3);
    return ini::Ini::section(a0, &v8);
}
