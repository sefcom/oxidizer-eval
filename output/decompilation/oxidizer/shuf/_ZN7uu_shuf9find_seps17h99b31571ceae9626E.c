fn uu_shuf::find_seps(a1: i64) -> : struct8 {
    let a0: u64;  // rsi
    let v0: u32;  // [bp-0x68]
    let v1: u32;  // [bp-0x64]
    let v2: u64;  // [bp-0x58]
    let v3: u200;  // [bp-0x50]
    let v4: u8;  // [bp-0x38]
    let v6: i64;  // rdi
    let v7: u64;  // r14
    let v8: i64;  // rdi
    let v9: i64;  // rbx
    let v10: u64;  // r14
    let v11: i64;  // r13
    let v13: u64;  // rbp
    let v14: u32;  // rdx
    let v15: i64;  // r14
    let v16: void*;  // r15
    let v17: u64;  // rdx
    let v18: i64;  // rdi
    let v20: u64;  // rax
    let v21: core::option::Option<usize>;  // rax:rdx

    v0 = a0;
    v7 = *((v6 + 16) as &i64);
    if !v7 {
        return;
    }
    if v7 == 1 && !*((*((v6 + 8) as &i64) + 8) as &i64) {
        *((v6 + 16) as &i64) = 0;
        return;
    }
    v11 = &v4;
    v1 = v0;
    v8 = v6;
    do {
        v9 = v8;
        v10 = <usize as core::iter::range::Step>::backward_unchecked(v10, a0);
        v21 = core::slice::memchr::memchr(v1, *((*((v9 + 8) as &i64) + v10 * 16) as &i64), *((*((v9 + 8) as &i64) + v10 * 16 + 8) as &i64));
        if let Some(_) = v21 {
            v2 = v10;
            v13 = alloc::vec::Vec<T,A>::swap_remove(v9, v10);
            v3 = struct25 {
                field_0: v13
                field_8: v13
                field_16: v13 + v14
                field_24: v0 as u8
            };
            v15 = v11;
            if memchr::arch::generic::memchr::Iter::next(&v3, v11) {
                v16 = 0;
                v17 = v14;
                do {
                    v20 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v16, v17, v13, v14, "src/uu/shuf/src/shuf.rs");
                } while ((alloc::vec::Vec<T,A>::push(v6, v20, a1), v17 = v14, v18 = v6, memchr::arch::generic::memchr::Iter::next(&v3, v15)));
            } else {
                v16 = 0;
                v18 = v6;
            }
            v9 = v18;
            v7 = v2;
            v11 = v15;
            if v14 > v16 {
                alloc::vec::Vec<T,A>::push(v9, v13 + v16, v14 - v16);
                v7 = v2;
                v11 = v15;
            }
        }
        v8 = v9;
    } while (v7);
    return;
}
