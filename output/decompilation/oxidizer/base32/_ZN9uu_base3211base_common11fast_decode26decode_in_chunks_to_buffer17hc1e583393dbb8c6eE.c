fn uu_base32::base_common::fast_decode::decode_in_chunks_to_buffer(a0: u64, a1: i64, a2: u64, a3: u32, a4: u64, a5: u64, a6: u64, a7: i64) -> long long {
    let v0: u64;  // [bp-0xc8]
    let v1: void*;  // [bp-0xb8]
    let v2: void*;  // [bp-0xa8]
    let v3: struct32;  // [bp-0x78]
    let v4: u64;  // [bp-0x68]
    let v5: u64;  // [bp-0x60]
    let v6: struct40;  // [bp-0x58]
    let v7: u64;  // [bp-0x48]
    let v8: u64;  // rbp
    let v9: u64;  // rax
    let v10: u64;  // rax
    let v11: u64;  // rdx
    let v12: u64;  // rax

    v8 = a5;
    v0 = a2;
    if a3 {
        if a3 <= a5 {
            v3 = core::slice::<impl [T]>::split_at_unchecked(a4, a5, a3);
            a4 = v4;
            v8 = v5;
            <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(a7, v3.field_0);
            v1 = *((a7 + 16) as &i64);
            if *((a7 + 16) as &i64) != a2 {
                v2 = 0;
                core::panicking::assert_failed(0, &v1, &v0, &v2, "src/uu/base32/src/base_common.rs"); /* do not return */
            }
            v9 = a1(a0, *((a7 + 8) as &i64), a2, a6) as i64;
            if v9 {
                return v9;
            }
            *((a7 + 16) as &i64) = 0;
        } else {
            panic!("mid > len");
        }
    }
    v6 = core::slice::<impl [T]>::chunks_exact(a4, v8, a2, "src/uu/base32/src/base_common.rs");
    loop {
        v10 = <core::slice::iter::ChunksExact<T> as core::iter::traits::iterator::Iterator>::next(&v6);
        if !v10 {
            <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(a7, v7);
            return 0;
        } else if v11 == v0 {
            v12 = a1(a0, v10) as i64;
            if v12 {
                return v12;
            }
        } else {
            v2 = 0;
            core::panicking::assert_failed(0, &vvar_133{reg 32}, &v0, &v2, "src/uu/base32/src/base_common.rs"); /* do not return */
        }
    }
}
