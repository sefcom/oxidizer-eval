fn uu_sort::KeySettings::set_ignore_non_printing(a0: &u64, a1: &u64) -> u64 {
    let v0: i8;  // [bp-0x30]
    let v1: i8;  // [bp-0x20]
    let v3: Option<struct24>;  // rax

    v3 = uu_sort::KeySettings::check_compatibility(*((a1 as &char + 5) as &i8), 1, *((a1 as &char + 2) as &i8));
    if v0 == 0x8000000000000000 {
        *((a1 as &char + 3) as &i8) = 1;
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v3 = v1;
    return struct24 {
        field_0: v0
        field_16: v3
    };
}
