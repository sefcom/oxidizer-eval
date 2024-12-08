fn uu_df::Options::get_intersected_types(a0: &u64, a1: u32, a2: u32, a3: u32, a4: u32) -> u64 {
    let v0: i64;  // [sp-0x80], Other Possible Types: struct16
    let v1: i64;  // [sp-0x78]
    let v2: i64;  // [sp-0x70]
    let v3: i128;  // [sp-0x68], Other Possible Types: struct24
    let v4: i64;  // [sp-0x58]
    let v5: i64;  // [sp-0x40]
    let v6: i64;  // [sp-0x38]
    let v8: struct8;  // rax
    let v9: i64;  // rax

    v0 = 0;
    v1 = 8;
    v2 = 0;
    v5 = a1;
    v6 = a1 + a2 * 24;
    v8 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
    if !v8 {
        v4 = v2;
        v3 = v0;
    } else {
        do {
            if <T as core::slice::cmp::SliceContains>::slice_contains(v8, a3, a4) as i8 {
                v3 = <alloc::string::String as core::clone::Clone>::clone(v8);
                v0 = alloc::vec::Vec<T,A>::push(&v3);
            }
        } while ((v8 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(), v8));
        v3.field_16 = vvar_154{stack -112};
        v3 = v0;
        if v3.field_16 {
            v9 = v2;
            return struct24 {
                field_0: v0
                field_16: v9
            };
        }
    }
    *(a0 as &i64) = 0x8000000000000000;
    return v9;
}
