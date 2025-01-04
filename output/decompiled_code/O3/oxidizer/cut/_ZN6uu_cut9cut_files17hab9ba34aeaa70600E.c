fn uu_cut::cut_files(a0: &struct24, a1: &struct80) -> u64 {
    let v2: i192;  // [bp-0xd8]
    let v7: i192;  // [sp-0xb0], Other Possible Types: struct24
    let v17: i64;  // [sp-0x50]
    let v18: i64;  // [sp-0x48]
    let v19: i64;  // [sp-0x40]
    let v22: i64;  // rdi
    let v23: i64;  // rbx
    let v24: i64;  // rax
    let v25: i64;  // rdx

    v22 = a0;
    v23 = a0;
    v24 = *((a0 + 16) as &i64);
    v17 = a0;
    if !v24 {
        v7 = <T as alloc::slice::hack::ConvertVec>::to_vec("-");
        v2 = v7;
        alloc::vec::Vec<T,A>::push(v23, &v2, v25);
        v24 = *((v23 + 16) as &i64);
    }
    v18 = *((v23 + 8) as &i64);
    v19 = v18 + v24 * 24;
    if !<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next() {
        goto LABEL_0x4b72c8;
    } else {
        goto LABEL_0x4b6e2a;
    }
}
