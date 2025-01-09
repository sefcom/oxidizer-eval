fn uu_sort::KeySettings::set_dictionary_order(a0: &Option<struct24>, a1: &struct1) -> u64 {
    let v2: struct8;  // rax

    v2 = uu_sort::KeySettings::check_compatibility(*((a1 as &char + 5) as &i8), *((a1 as &char + 3) as &i8), 1);
    return Some(struct24 {
        field_0: v0
        field_16: v2
    });
}
