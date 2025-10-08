fn uu_base32::base_common::fast_encode::write_with_line_breaks(a0: i64, a1: void*, a2: u64, a3: i64, a4: u32) -> long long {
    let v0: u32;  // [bp-0x64]
    let v1: void*;  // [bp-0x58], Other Possible Types: struct40
    let v2: struct16;  // [bp-0x50]
    let v3: void*;  // [bp-0x48]
    let v4: u64;  // [bp-0x40]
    let v5: struct16;  // [bp-0x38]
    let v7: u64;  // rax
    let v8: u64;  // rax
    let v9: void*;  // r13
    let v10: u64;  // rdx
    let v11: u64;  // rax
    let v12: u64;  // rbx
    let v13: struct16;  // rax

    v0 = a4;
    v7 = alloc::collections::vec_deque::VecDeque<T,A>::make_contiguous(a1);
    v1 = core::slice::<impl [T]>::chunks_exact(v7, a2, *((a0 + 24) as &i64), "src/uu/base32/src/base_common.rs");
    v8 = <core::slice::iter::ChunksExact<T> as core::iter::traits::iterator::Iterator>::next(&v1);
    v9 = 0;
    if v8 {
        do {
            v9 += v10;
            <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(a0, v8, v10 + v8);
            alloc::vec::Vec<T,A>::push(a0, 10, "src/uu/base32/src/base_common.rs");
            v8 = <core::slice::iter::ChunksExact<T> as core::iter::traits::iterator::Iterator>::next(&v1);
        } while (v8);
    }
    v11 = a3(a2, *((a0 + 8) as &i64), *((a0 + 16) as &i64)) as i64;
    if v11 {
        return v11;
    }
    v12 = a1[24] as i64;
    v13 = core::slice::index::range(v9, v12);
    *(&a1[24] as &i64) = 0;
    v1 = a1;
    v2 = v13;
    v3 = 0;
    v4 = v12 - v13;
    v5 = v13;
    if !v0 as i8 {
        *((a0 + 16) as &i64) = 0;
    } else if a1[24] as i64 {
        return a3(a2, alloc::collections::vec_deque::VecDeque<T,A>::make_contiguous(a1)) as i64;
    }
    return 0;
}
