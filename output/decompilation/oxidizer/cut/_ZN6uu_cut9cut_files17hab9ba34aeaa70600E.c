fn uu_cut::cut_files(a0: &struct24, a1: &struct80) -> u64 {
    let v3: struct24;  // [sp-0xd8]
    let v9: struct24;  // [sp-0xb0]
    let v15: struct16;  // [sp-0x48]

    if !*((a0 + 16) as &i64) {
        v9 = <T as alloc::slice::hack::ConvertVec>::to_vec("-");
        v3 = v9;
        alloc::vec::Vec<T,A>::push(a0, &v3);
    }
    v15 = struct16 {
        field_0: *((a0 + 8) as &i64)
        field_8: v15 + v18 * 24
    };
    if !<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v15) {
        goto LABEL_0x4b72c8;
    } else {
        goto LABEL_0x4b6e2a;
    }
}
