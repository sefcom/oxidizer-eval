fn uu_sort::KeySettings::set_ignore_non_printing(a0: &Option<struct24>, a1: &struct1) -> u64 {
    let v2: struct8;  // rax

    v2 = uu_sort::KeySettings::check_compatibility(*((a1 as &char + 5) as &i8), 1, *((a1 as &char + 2) as &i8));
    return Some(struct24 {
        field_0: v0
        field_16: v2
    });
}
