fn uu_sort::FieldSelector::get_range(a0: void*, a1: u32, a2: u32, a3: u32, a4: u32) -> u64 {
    switch (uu_sort::FieldSelector::get_range::resolve_index(a1, a2, a3, a4, &a0[1].padding_0[7] as &struct_0)) {
    case 0:
        if a0->field_10 != 2 {
            goto *((4385248 + uu_sort::FieldSelector::get_range::resolve_index(vvar_1, vvar_2, vvar_3, vvar_4, a0) * 4) as &i32) + 4385248;
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
        panic!("internal error: entered unreachable code: This should only happen if the field start index is 0, but that should already have caused an error.");
    }
}
