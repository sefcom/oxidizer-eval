fn uu_sort::FieldSelector::get_range(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64) -> u64 {
    let v0: i8;  // [bp-0x68]
    let v1: struct40;  // [sp-0x60], Other Possible Types: i64
    let v2: i64;  // [sp-0x58]
    let v3: i64;  // [sp-0x50]
    let v4: i128;  // [sp-0x48]

    switch (uu_sort::FieldSelector::get_range::resolve_index(a1, a2, a3, a4, a0 + 24)) {
    case 0:
        if *((a0 + 16) as &i8) != 2 {
            goto *((4362120 + uu_sort::FieldSelector::get_range::resolve_index(vvar_1, vvar_2, vvar_3, vvar_4, a0) * 4) as &i32) + 4362120;
        } else {
            if a2 > a2 {
                break;
            } else {
                break;
            }
            return a2;
        }
    case 3:
        return a2;
    default:
        v1 = "internal error: entered unreachable code: This should only happen if the field start index is 0, but that should already have caused an error.";
        v2 = 1;
        v3 = &v0;
        v4 = 0;
        v1 = core::panicking::panic_fmt();
    }
}
