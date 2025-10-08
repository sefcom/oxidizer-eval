fn starship::modules::rust::format_semver(a0: i32, a1: i64, a2: i64) -> u64 {
    let v0: struct92;  // [bp-0x68]
    let v1: Option<struct24>;  // [bp-0x60]
    let v2: struct192;  // [bp-0x58]
    let v3: &str;  // [bp-0x50]
    let v4: &str;  // [bp-0x48]
    let v5: struct16;  // [bp-0x40]
    let v6: struct24;  // [bp-0x38]
    let v7: Option<struct48>;  // [bp-0x30]
    let v8: core::option::Option<&str>;  // [bp-0x28]
    let v10: u64;  // rdx

    v2 = core::option::Option<T>::map_or(core::str::<impl str>::find(a1, a2, 45) as i8, v10, a1, a2, a1, a2);
    v3 = v10;
    v0 = &v2;
    v1 = <&T as core::fmt::Display>::fmt;
    v4 = "v";
    v5 = 1;
    v8 = 0;
    v6 = &v0;
    v7 = 1;
    return core::option::Option<T>::map_or_else(a0, 0, a2, &v4);
}
