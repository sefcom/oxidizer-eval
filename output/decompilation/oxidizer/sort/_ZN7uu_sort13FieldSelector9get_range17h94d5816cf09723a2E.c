fn uu_sort::FieldSelector::get_range(a0: void*, a1: u32, a2: u32, a3: u32, a4: u32) -> u64 {
    let v1: u64;  // rax
    let v2: u64;  // rcx
    let v3: u64;  // rdx

    v1 = uu_sort::FieldSelector::get_range::resolve_index(a1, a2, a3, a4, &a0[1].padding_0[7] as &struct_0);
    if v1 {
        v2 = a2;
        if v1 == 3 {
            return v2;
        }
        panic!("internal error: entered unreachable code: This should only happen if the field start index is 0, but that should already have caused an error.");
    } else {
        v2 = v3;
        if a0->field_10 == 2 {
            return v2;
        }
        goto *((4385584 + uu_sort::FieldSelector::get_range::resolve_index(vvar_1, vvar_2, vvar_3, vvar_4, vvar_0) * 4) as &i32) + 4385584;
    }
}
