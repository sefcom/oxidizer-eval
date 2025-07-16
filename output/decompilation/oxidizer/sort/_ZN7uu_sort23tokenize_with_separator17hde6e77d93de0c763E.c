fn uu_sort::tokenize_with_separator(a0: i64, a1: i32, a2: i192, a3: i32) -> long long {
    let v0: u64;  // [bp-0x54]
    let v1: u64;  // [bp-0x50]
    let v2: u64;  // [bp-0x48]
    let v3: void*;  // [bp-0x40]
    let v4: i64;  // [bp-0x38]
    let v6: u64;  // rax
    let v7: void*;  // r12
    let v8: u64;  // rdx
    let v9: u64;  // rbp
    let v10: u64;  // rbp
    let v11: u64;  // rax

    v0 = a2;
    v1 = a0;
    v2 = a0 + a1;
    v3 = 0;
    v4 = &v0;
    v6 = core::iter::traits::iterator::Iterator::try_fold(&v1, &v4);
    if !v6 {
        return v6;
    }
    do {
        alloc::vec::Vec<T,A>::push(v7, v9, a3);
    } while ((v7 = v10 + 1, v11 = core::iter::traits::iterator::Iterator::try_fold(&v1, &v4), v8 = v8, v11));
    return v11;
}
