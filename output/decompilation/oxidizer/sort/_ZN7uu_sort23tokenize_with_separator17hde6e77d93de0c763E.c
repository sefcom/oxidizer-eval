fn uu_sort::tokenize_with_separator(a0: u32, a1: u32, a2: u32, a3: &u64) -> u64 {
    let v0: u32;  // [sp-0x54]
    let v1: u64;  // [sp-0x50]
    let v2: u64;  // [sp-0x48]
    let v3: void*;  // [sp-0x40]
    let v4: &u8;  // [sp-0x38]
    let v6: struct8;  // rax
    let v7: u64;  // rdx
    let v8: u64;  // rbp
    let v9: void*;  // r12

    v0 = a2;
    v1 = a0;
    v2 = a0 + a1;
    v3 = 0;
    v4 = &v0;
    v6 = core::iter::traits::iterator::Iterator::try_fold(&v4);
    if !v6 {
        v9 = 0;
        if 0 >= a1 {
            return v6;
        }
    } else {
        v8 = v7;
        v9 = 0;
        do {
            alloc::vec::Vec<T,A>::push(a3, v9, v8);
            v9 = v8 + 1;
            v6 = core::iter::traits::iterator::Iterator::try_fold(&v4);
            v8 = v7;
        } while (v6);
        if v9 >= a1 {
            return v6;
        }
    }
    v6 = alloc::vec::Vec<T,A>::push(a3, v9, a1);
    return v6;
}
