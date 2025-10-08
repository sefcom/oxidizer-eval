fn starship::modules::os::get_type(a0: u32, a1: u8, a2: u64) -> long long {
    let v0: u8;  // [bp-0x41]
    let v1: struct16;  // [bp-0x40]
    let v2: struct16;  // [bp-0x38]
    let v3: &str;  // [bp-0x30]
    let v4: i64;  // [bp-0x20]
    let v5: &mut [u8];  // [bp-0x18]
    let v6: void*;  // [bp-0x10]

    v0 = a1;
    v1 = &v0;
    v2 = <os_info::os_type::Type as core::fmt::Debug>::fmt;
    v3 = "\x01";
    v6 = 0;
    v4 = &v1;
    v5 = 1;
    return core::option::Option<T>::map_or_else(a0, 0, a2, &v3 as u64);
}
