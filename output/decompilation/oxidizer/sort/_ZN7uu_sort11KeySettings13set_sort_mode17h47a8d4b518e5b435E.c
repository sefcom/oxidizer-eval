fn uu_sort::KeySettings::set_sort_mode(a0: &Option<struct24>, a1: &struct1, a2: u32) -> u64 {
    let v0: u32;  // [sp-0x78]
    let v1: u32;  // [sp-0x74]
    let v2: u64;  // [sp-0x70]
    let v3: u64;  // [sp-0x68]
    let v4: &&struct_0;  // [sp-0x60]
    let v5: u64;  // [sp-0x58]
    let v6: void*;  // [sp-0x50]
    let v7: &u8;  // [sp-0x40]
    let v8: u64;  // [sp-0x38]
    let v9: &u8;  // [sp-0x30]
    let v10: u64;  // [sp-0x28]
    let v12: u64;  // rbx
    let v13: u64;  // rax

    v12 = a2;
    v13 = *((a1 as &char + 5) as &i8);
    if v13 != 6 && v13 != v12 {
        v0 = *((&g_42fac0 + 4 * v13) as &i32);
        v1 = *((&g_42fac0 + 4 * (v12 & 255)) as &i32);
        v7 = &v0;
        v8 = <char as core::fmt::Display>::fmt;
        v9 = &v1;
        v10 = <char as core::fmt::Display>::fmt;
        v2 = "options '-";
        v3 = 3;
        v6 = 0;
        v4 = &v7;
        v5 = 2;
        core::option::Option<T>::map_or_else();
    }
    uu_sort::KeySettings::check_compatibility(v12 & 4294967295, *((a1 as &char + 3) as &i8), *((a1 as &char + 2) as &i8));
    if v2 != 0x8000000000000000 {
        return Some(struct24 {
            field_0: *(&v2 as &i128)
            field_16: v14
        });
    }
    *((a1 as &char + 5) as &u8) = v12;
    return struct8 {
        field_0: 0x8000000000000000
    };
}
