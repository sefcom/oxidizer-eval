fn uu_shuf::find_seps(a0: &struct8, a1: u8) -> u64 {
    let v0: u32;  // [sp-0x68]
    let v1: u32;  // [sp-0x64]
    let v2: &struct_1;  // [sp-0x60]
    let v3: u64;  // [sp-0x58]
    let v4: u64;  // [sp-0x50]
    let v5: u64;  // [sp-0x48]
    let v6: u64;  // [sp-0x40]
    let v7: u8;  // [bp-0x38]
    let v9: u64;  // r14
    let v10: &struct_1;  // rbx
    let v11: struct8;  // rax
    let v12: u64;  // r13
    let v13: u64;  // r14
    let v14: &&u8;  // rax
    let v15: u64;  // rbp
    let v16: u64;  // rdx
    let v17: u64;  // r14
    let v18: u64;  // r13
    let v19: void*;  // r15

    v0 = a1;
    v9 = a0->field_10;
    if !v9 {
        return v11;
    }
    v10 = a0;
    if v9 == 1 {
        v11 = a0->field_8;
        if !*((v11 + 8) as &i64) {
            a0->field_10 = 0;
            return v11;
        }
    }
    v12 = &v7;
    v1 = v0;
    v2 = a0;
    do {
        v13 = <usize as core::iter::range::Step>::backward_unchecked(v9);
        v14 = v10->field_8;
        v11 = core::slice::memchr::memchr(v1, v14[2 * v13], v14[1 + 2 * v13]);
        v9 = v13;
        if v11 == 1 {
            v3 = v13;
            v15 = alloc::vec::Vec<T,A>::swap_remove(v10, v13);
            v4 = v15;
            v5 = v15;
            v6 = v15 + v16;
            v7 = v0;
            v17 = v12;
            v11 = memchr::arch::generic::memchr::Iter::next(v12);
            if !v11 {
                v19 = 0;
                v10 = v2;
            } else {
                v18 = v16;
                v19 = 0;
                v10 = v2;
                do {
                    alloc::vec::Vec<T,A>::push(v10, <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v19, v18, v15, v16, "src/uu/shuf/src/shuf.rs"), v16);
                    v19 = v18 + 1;
                    v11 = memchr::arch::generic::memchr::Iter::next(v17);
                    v18 = v16;
                } while (v11);
            }
            v9 = v3;
            v12 = v17;
            if v16 > v19 {
                v11 = alloc::vec::Vec<T,A>::push(v10, v15 + v19, v16 - v19);
                v3 = v3;
            }
        }
    } while (v9);
    return v11;
}
