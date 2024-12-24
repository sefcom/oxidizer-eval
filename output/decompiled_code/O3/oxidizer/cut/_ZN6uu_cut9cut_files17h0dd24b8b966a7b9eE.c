fn uu_cut::cut_files(a0: &u64, a1: &u64) -> u64 {
    let v2: i192;  // [bp-0xd8]
    let v7: i192;  // [sp-0xb0], Other Possible Types: struct24
    let v15: i64;  // [sp-0x50]
    let v16: i64;  // [sp-0x48]
    let v17: i64;  // [sp-0x40]
    let v20: i64;  // rdi
    let v21: i64;  // rbx
    let v22: i64;  // rax
    let v23: i64;  // rdx

    v20 = a0;
    v21 = a0;
    v22 = *((a0 + 16) as &i64);
    v15 = a0;
    if !v22 {
        v7 = <T as alloc::slice::hack::ConvertVec>::to_vec("-");
        v2 = v7;
        alloc::vec::Vec<T,A>::push(v21, &v2, v23);
        v22 = *((v21 + 16) as &i64);
    }
    v16 = *((v21 + 8) as &i64);
    v17 = v16 + v22 * 24;
    if !<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next() {
        goto LABEL_0x4b7688;
    } else {
        goto LABEL_0x4b71ea;
    }
}
