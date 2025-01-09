fn uu_cut::cut_files(a0: &struct24, a1: &struct80) -> u64 {
    let v2: struct24;  // [bp-0xd8]
    let v7: struct24;  // [sp-0xb0]
    let v14: i64;  // [sp-0x50]
    let v15: i64;  // [sp-0x48]
    let v16: i64;  // [sp-0x40]
    let v19: i64;  // rbx
    let v20: i64;  // rax

    v19 = a0;
    v20 = *((a0 + 16) as &i64);
    v14 = a0;
    if !v20 {
        v7 = <T as alloc::slice::hack::ConvertVec>::to_vec("-");
        *(&v2.field_0 as &struct24) = struct24 {
            field_0: v7
            field_16: v8
        };
        alloc::vec::Vec<T,A>::push(v19, &v2);
        v20 = *((v19 + 16) as &i64);
    }
    v15 = *((v19 + 8) as &i64);
    v16 = v15 + v20 * 24;
    if !<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next() {
        goto LABEL_0x4b72c8;
    } else {
        goto LABEL_0x4b6e2a;
    }
}
