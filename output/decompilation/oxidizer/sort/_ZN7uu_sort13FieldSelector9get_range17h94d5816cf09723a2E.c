fn uu_sort::FieldSelector::get_range(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64) -> long long {
    let v0: i8;  // [bp-0x68]
    let v1: struct40;  // [bp-0x60]
    let v4: u64;  // rdx

    match (uu_sort::FieldSelector::get_range::resolve_index(a1, a2, a3, a4, a0 + 24)) {
        0 => {
            if *((a0 + 16) as &i8) != 2 {
                goto ((&g_42eb30.field_0)[uu_sort::FieldSelector::get_range::resolve_index(a1, a2, a3, a4, a0)] + &g_42eb30.field_0) as i64;
            } else {
                return v4;
            }
        }
        3 => {
            return a2;
        }
        _ => {
            v1 = struct40 {
                field_0: "internal error: entered unreachable code: This should only happen if the field start index is 0, but that should already have caused an error."
                field_8: 1
                field_16: &v0
                field_24: 0
            };
            panic!("internal error: entered unreachable code: This should only happen if the field start index is 0, but that should already have caused an error.");
        }
    }
}
