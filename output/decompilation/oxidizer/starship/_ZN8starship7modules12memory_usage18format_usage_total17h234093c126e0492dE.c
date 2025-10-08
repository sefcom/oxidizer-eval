fn starship::modules::memory_usage::format_usage_total(a0: u32, a1: u64, a2: u64) -> void {
    let v0: struct92;  // [bp-0xa0]
    let v1: u64;  // [bp-0x98]
    let v2: i64;  // [bp-0x90]
    let v3: core::option::Option<u8>;  // [bp-0x88]
    let v4: struct72;  // [bp-0x80]
    let v5: &mut [u8];  // [bp-0x78]
    let v6: struct24;  // [bp-0x70]
    let v7: struct24;  // [bp-0x68]
    let v8: struct24;  // [bp-0x60]
    let v9: struct24;  // [bp-0x50]
    let v10: struct24;  // [bp-0x38]
    let v12: struct56;  // rax

    v12 = a1 - a2;
    v9 = starship::modules::memory_usage::display_bs(v12);
    v10 = starship::modules::memory_usage::display_bs(a1);
    v0 = &v9;
    v1 = <alloc::string::String as core::fmt::Display>::fmt;
    v2 = &v10;
    v3 = <alloc::string::String as core::fmt::Display>::fmt;
    v4 = &g_11f4318.field_0;
    v5 = 2;
    v8 = 0;
    v6 = &v0;
    v7 = 2;
    core::option::Option<T>::map_or_else(a0, 0, a2, &v4);
    return;
}
