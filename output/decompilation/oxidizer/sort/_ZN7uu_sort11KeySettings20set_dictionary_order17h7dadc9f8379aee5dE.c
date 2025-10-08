fn uu_sort::KeySettings::set_dictionary_order(a0: i64, a1: i64) -> long long {
    let v0: Option<struct24>;  // [bp-0x28]
    let v2: struct17;  // rax

    v0 = uu_sort::KeySettings::check_compatibility(*((a1 + 5) as &i8), *((a1 + 3) as &i8), 1);
    if !((((0 ^ v0 as i64) & (0 ^ -(v0 as i64))) >> 63) as char) {
        v2 = *((&v0 as &char + 16) as &i64);
        return struct24 {
            field_0: v0 as i128
            field_16: v2
        };
    }
    *((a1 + 2) as &i8) = 1;
    return struct8 {
        field_0: 0x8000000000000000
    };
}
