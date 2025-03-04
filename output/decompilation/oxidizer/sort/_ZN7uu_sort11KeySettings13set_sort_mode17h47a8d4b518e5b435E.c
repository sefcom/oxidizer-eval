fn uu_sort::KeySettings::set_sort_mode(a0: &Option<struct24>, a1: &struct1, a2: u32) -> u64 {
    let v0: u32;  // [sp-0x78]
    let v1: u32;  // [sp-0x74]
    let v2: u64;  // [sp-0x70]
    let v5: u64;  // rbx
    let v6: u64;  // rax

    v5 = a2;
    v6 = *((a1 as &char + 5) as &i8);
    if v6 != 6 && v6 != v5 {
        v0 = *((&g_42fac0 + 4 * v6) as &i32);
        v1 = *((&g_42fac0 + 4 * (v5 & 255)) as &i32);
    }
    uu_sort::KeySettings::check_compatibility(v5 & 4294967295, *((a1 as &char + 3) as &i8), *((a1 as &char + 2) as &i8));
    if v2 != 0x8000000000000000 {
        return Some(struct24 {
            field_0: *(&v2 as &i128)
            field_16: v7
        });
    }
    *((a1 as &char + 5) as &u8) = v5;
    return struct8 {
        field_0: 0x8000000000000000
    };
}
