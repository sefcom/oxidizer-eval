fn uu_od::prn_float::format_item_flo64() -> : struct24 {
    let a0: i64;  // rdi
    let v0: i64;  // [bp-0x80]
    let v1: u64;  // [bp-0x78]
    let v2: u128;  // [bp-0x70]
    let v3: u64;  // [bp-0x60]
    let v4: struct24;  // [bp-0x58], Other Possible Types: u64
    let v5: u64;  // [bp-0x50]
    let v6: i64;  // [bp-0x48]
    let v7: u64;  // [bp-0x40]
    let v8: void*;  // [bp-0x38]
    let v9: u8;  // [bp-0x28]
    let v11: u64;  // rdx

    uu_od::prn_float::format_flo64(&v9);
    v0 = &v9;
    v1 = <alloc::string::String as core::fmt::Display>::fmt;
    v4 = " ";
    v5 = 1;
    v8 = 0;
    v6 = &v0;
    v7 = 1;
    v4 = core::option::Option<T>::map_or_else(v11);
    return struct24 {
        field_0: v2
        field_16: v3
    };
}
