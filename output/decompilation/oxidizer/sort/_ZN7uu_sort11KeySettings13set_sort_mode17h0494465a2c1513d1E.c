fn uu_sort::KeySettings::set_sort_mode(a0: i64, a1: i64, a2: u32) -> long long {
    let v0: u32;  // [bp-0x70]
    let v1: u32;  // [bp-0x6c]
    let v2: Option<struct24>;  // [bp-0x68]
    let v3: u64;  // [bp-0x68]
    let v4: u64;  // [bp-0x58]
    let v6: u64;  // rbx
    let v7: u64;  // rax

    v6 = a2;
    v7 = *((a1 + 5) as &i8);
    if (v7 != v6 & v7 != 6) {
        v0 = (&g_42c2a0.field_0)[v7];
        v1 = (&g_42c2a0.field_0)[v6 & 4294967295];
        return format!("options '-{}{}' are incompatible", &v0, &v1);
    }
    v2 = uu_sort::KeySettings::check_compatibility(v6, *((a1 + 3) as &i8), *((a1 + 2) as &i8));
    if !((((0 ^ v2 as i64) & (0 ^ -(v3))) >> 63) as char) {
        return struct24 {
            field_0: v2 as i128
            field_16: v4
        };
    }
    *((a1 + 5) as &u8) = v6;
    return struct8 {
        field_0: 0x8000000000000000
    };
}
