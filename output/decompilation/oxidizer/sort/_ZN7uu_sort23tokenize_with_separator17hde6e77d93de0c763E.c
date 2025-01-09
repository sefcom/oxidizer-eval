fn uu_sort::tokenize_with_separator(a0: u32, a1: u32, a2: u32, a3: &u64) -> u64 {
    let v0: u32;  // [sp-0x54]
    let v1: u64;  // [sp-0x50]
    let v2: u64;  // [sp-0x48]
    let v3: void*;  // [sp-0x40]
    let v4: &u8;  // [sp-0x38]
    let v8: struct8;  // rax
    let v9: void*;  // r12
    let v10: u64;  // rbp
    let v11: u64;  // rdx
    let v12: u64;  // rbp

    v0 = a2;
    v1 = a0;
    v2 = a0 + a1;
    v3 = 0;
    v4 = &v0;
    v8 = core::iter::traits::iterator::Iterator::try_fold(&v4);
    if !v8 {
        v9 = 0;
        if 0 >= a1 {
            return v8;
        }
    } else {
        v9 = 0;
        do {
            v10 = v12;
            alloc::vec::Vec<T,A>::push(a3, v9, v10);
            v9 = v10 + 1;
            v8 = core::iter::traits::iterator::Iterator::try_fold(&v4);
            v12 = v11;
        } while (v8);
        if v9 >= a1 {
            return v8;
        }
    }
    v8 = alloc::vec::Vec<T,A>::push(a3, v9, a1);
    return v8;
}
