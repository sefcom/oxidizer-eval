fn uu_sort::KeySettings::check_compatibility(a0: &struct8, a1: u32, a2: u8, a3: u8) -> u64 {
    let v0: u32;  // [sp-0x54]
    let v1: u64;  // [sp-0x50]
    let v2: u64;  // [sp-0x48]
    let v3: &u8;  // [sp-0x40]
    let v4: u64;  // [sp-0x38]
    let v5: u64;  // [sp-0x30]
    let v6: u64;  // [sp-0x28]
    let v7: &u8;  // [sp-0x20]
    let v8: u64;  // [sp-0x18]
    let v9: void*;  // [sp-0x10]
    let v11: u64;  // rax

    if (a1 & 255) > 3 {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    if a3 {
        v0 = *((&g_424b00 + 4 * (a1 & 4294967295)) as &i32);
        v11 = &g_4242c8;
    } else if a2 {
        v0 = *((&g_424b00 + 4 * (a1 & 4294967295)) as &i32);
        v11 = &g_424344;
    } else {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v1 = v11;
    v2 = <char as core::fmt::Display>::fmt;
    v3 = &v0;
    v4 = <char as core::fmt::Display>::fmt;
    v5 = "options '-";
    v6 = 3;
    v9 = 0;
    v7 = &v1;
    v8 = 2;
    return core::option::Option<T>::map_or_else();
}
