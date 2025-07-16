fn uu_sort::KeySettings::set_ignore_non_printing(a1: i64) -> Option<struct24> {
    let a0: i64;  // rdi
    let v0: i8;  // [bp-0x30], Other Possible Types: u128
    let v1: i8;  // [bp-0x20]
    let v3: u8;  // r8b
    let v4: struct8;  // rax

    v4 = uu_sort::KeySettings::check_compatibility(*((a1 + 5) as &i8), 1, *((a1 + 2) as &i8), v3);
    if *(&v0 as &i64) != 0x8000000000000000 {
        return Some(struct24 {
            field_0: v0
            field_16: *(&v1 as &i64)
        });
    }
    *((a1 + 3) as &i8) = 1;
    return struct8 {
        field_0: 0x8000000000000000
    };
}
