fn uu_shuf::find_seps(a0: &struct8, a1: u32) -> u64 {
    let v0: u8;  // [bp-0x68]
    let v1: u32;  // [sp-0x64]
    let v2: u64;  // [sp-0x58]
    let v3: u64;  // [sp-0x50]
    let v4: u64;  // [sp-0x48]
    let v5: u64;  // [sp-0x40]
    let v6: u8;  // [bp-0x38]
    let v8: u64;  // r14
    let v9: struct8;  // rax
    let v10: u64;  // r13
    let v11: &struct_0;  // 4096
    let v12: &struct_0;  // rbx
    let v13: u64;  // r14
    let v14: &&u8;  // rax
    let v15: u64;  // r14
    let v16: u64;  // r13
    let v17: u64;  // rbp
    let v18: u64;  // rdx
    let v19: u64;  // r14
    let v20: void*;  // r15
    let v21: u64;  // rdx
    let v22: &struct_0;  // 4096
    let v23: u64;  // r13

    v8 = a0[2];
    if !v8 {
        return v9;
    }
    if v8 == 1 {
        v9 = a0[1];
        if !*((v9 + 8) as &i64) {
            a0[2] = 0;
            return v9;
        }
    }
    v10 = &v6;
    v1 = v0;
    v11 = a0;
    do {
        v12 = v11;
        v13 = <usize as core::iter::range::Step>::backward_unchecked(v8);
        v14 = v12->field_8;
        v9 = core::slice::memchr::memchr(v1, v14[2 * v13], v14[1 + 2 * v13]);
        v15 = v13;
        v16 = v10;
        if v9 == 1 {
            v2 = v13;
            v17 = alloc::vec::Vec<T,A>::swap_remove(v12, v13);
            v3 = v17;
            v4 = v17;
            v5 = v17 + v18;
            v6 = a1;
            v19 = v10;
            v9 = memchr::arch::generic::memchr::Iter::next(v10);
            if !v9 {
                v20 = 0;
                v22 = a0;
            } else {
                v20 = 0;
                v21 = v18;
                do {
                    v23 = v21;
                    alloc::vec::Vec<T,A>::push(a0, <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v20, v23, v17, v18, "src/uu/shuf/src/shuf.rs"), v18);
                    v20 = v23 + 1;
                    v9 = memchr::arch::generic::memchr::Iter::next(v19);
                    v21 = v18;
                } while (v9);
            }
            v12 = v22;
            v15 = v2;
            v16 = v19;
            if v18 > v20 {
                v9 = alloc::vec::Vec<T,A>::push(v12, v17 + v20, v18 - v20);
                v2 = v2;
            }
        }
        v11 = v12;
    } while (v15);
    return v9;
}
