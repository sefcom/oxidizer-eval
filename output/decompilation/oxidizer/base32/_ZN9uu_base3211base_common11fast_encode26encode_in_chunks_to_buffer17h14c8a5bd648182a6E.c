fn uu_base32::base_common::fast_encode::encode_in_chunks_to_buffer(a0: u64, a1: i64, a2: u64, a3: u32, a4: u64, a5: u64, a6: i64, a7: i64) -> long long {
    let v0: u64;  // [bp-0xc8]
    let v1: u64;  // [bp-0xb8]
    let v2: void*;  // [bp-0xa8]
    let v3: struct32;  // [bp-0x78]
    let v4: u64;  // [bp-0x70]
    let v5: u64;  // [bp-0x68]
    let v6: u64;  // [bp-0x60]
    let v7: struct40;  // [bp-0x58]
    let v8: u64;  // [bp-0x48]
    let v9: u64;  // rbp
    let v10: u64;  // rax
    let v11: struct48;  // rax
    let v12: u64;  // rdx
    let v13: u64;  // rax

    v9 = a5;
    v0 = a2;
    if a3 {
        if a3 <= a5 {
            v3 = core::slice::<impl [T]>::split_at_unchecked(a4, a5, a3);
            a4 = v5;
            v9 = v6;
            <alloc::collections::vec_deque::VecDeque<T,A> as alloc::collections::vec_deque::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(a7, v3.field_0, v4 + v3.field_0, "src/uu/base32/src/base_common.rs");
            v1 = *((a7 + 24) as &i64);
            if *((a7 + 24) as &i64) != a2 {
                v2 = 0;
                core::panicking::assert_failed(0, &v1, &v0, &v2, "src/uu/base32/src/base_common.rs"); /* do not return */
            }
            v10 = a1(a0, alloc::collections::vec_deque::VecDeque<T,A>::make_contiguous(a7)) as i64;
            if v10 {
                return v10;
            }
            alloc::collections::vec_deque::VecDeque<T,A>::truncate(a7);
            *((a7 + 16) as &i64) = 0;
        } else {
            panic!("mid > len");
        }
    }
    v7 = core::slice::<impl [T]>::chunks_exact(a4, v9, a2, "src/uu/base32/src/base_common.rs");
    loop {
        v11 = <core::slice::iter::ChunksExact<T> as core::iter::traits::iterator::Iterator>::next(&v7);
        if !v11 {
            <alloc::collections::vec_deque::VecDeque<T,A> as alloc::collections::vec_deque::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(a7, v8, *((&v7.field_16 as &char + 8) as &i64) + v8, "src/uu/base32/src/base_common.rs");
            return 0;
        } else if v12 == v0 {
            v13 = a1(a0, v11) as i64;
            if v13 {
                return v13;
            }
        } else {
            v2 = 0;
            core::panicking::assert_failed(0, &vvar_139{reg 32}, &v0, &v2, "src/uu/base32/src/base_common.rs"); /* do not return */
        }
    }
}
