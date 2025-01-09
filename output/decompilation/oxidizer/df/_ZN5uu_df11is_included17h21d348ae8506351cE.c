fn uu_df::is_included(a0: &u64, a1: void*) -> u64 {
    let v1: u64;  // rax

    if (!a0[18] as i8 || !a1->field_50) && (!*((&a0[18] as &char + 1) as &i8) || a1->field_51) && (!(a1->field_30 != 0x8000000000000000) || !((v1 = <T as core::slice::cmp::SliceContains>::slice_contains(a0 + 48, *(&a1->field_38 as &i64), *(&a1->field_40 as &i64)), v1 as u8))) {
        if a1->field_18 != 0x8000000000000000 {
            return <T as core::slice::cmp::SliceContains>::slice_contains(a0 + 6, *(&a1->field_20 as &i64), *(&a1->field_28 as &i64));
        }
        return v1 & -0x100 | 1;
    }
    return 0;
}
