fn uu_sort::KeySettings::set_sort_mode(a1: i64, a2: i32) -> Option<struct24> {
    let a0: i64;  // rdi
    let v2: u64;  // [bp-0x70]
    let v4: u64;  // [bp-0x60]
    let v12: u64;  // rbx
    let v13: u64;  // rax
    let v14: u8;  // r8b
    let v15: struct8;  // rax

    v12 = a2;
    v13 = *((a1 + 5) as &i8);
    if v13 != 6 && v13 != v12 {
        return core::option::Option<T>::map_or_else(a2);
    }
    v15 = uu_sort::KeySettings::check_compatibility(v12 & 4294967295, *((a1 + 3) as &i8), *((a1 + 2) as &i8), v14);
    if v2 != 0x8000000000000000 {
        return Some(struct24 {
            field_0: *(&v2 as &i128)
            field_16: v4
        });
    }
    *((a1 + 5) as &u8) = v12;
    return struct8 {
        field_0: 0x8000000000000000
    };
}
