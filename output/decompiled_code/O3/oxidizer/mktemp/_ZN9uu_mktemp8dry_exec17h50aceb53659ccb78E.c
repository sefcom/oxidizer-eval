fn uu_mktemp::dry_exec(a0: u32, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i64;  // [sp-0xb8], Other Possible Types: struct8
    let v1: i64;  // [sp-0xb0]
    let v2: i64;  // [sp-0xa8]
    let v3: i64;  // [sp-0xa0], Other Possible Types: Result<struct40, struct32>, struct16
    let v4: i64;  // [sp-0x98]
    let v5: i192;  // [bp-0x68]
    let v6: struct24;  // [sp-0x48], Other Possible Types: i192
    let v7: i64;  // [bp+0x8]
    let v8: i8;  // [bp+0x10]
    let v9: i64;  // rbp
    let v10: i64;  // r13
    let v11: i64;  // rdx
    let v13: i64;  // rax
    let v14: i64;  // rcx
    let v16: i8;  // cl

    v9 = v8;
    v10 = a5 + a4;
    v3 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(v10 + v9, 0);
    v0 = v4;
    v1 = *((&v3 as &char + 16) as &i64);
    v2 = 0;
    v0 = <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(a3, a3 + a4);
    <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<T,I>>::spec_extend(&v0, a5, 88);
    v0 = <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(v7, v9 + v7);
    v3 = rand::rngs::thread::thread_rng();
    rand::rng::Rng::fill(&v3, <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index_mut(a4, v10, v1, v2, "src/uu/mktemp/src/mktemp.rs"), v11);
    v3 = struct16 {
        field_0: v12
        field_8: v12 + v11
    };
    v13 = <core::slice::iter::IterMut<T> as core::iter::traits::iterator::Iterator>::next(&v3);
    if v13 {
        do {
            v14 = *(v13 as &i8);
            v16 = v14 - (((v14 & 4294967295 & 255 & 255) >> 1) * 133 >> 12) * 62;
        } while ((*(v13 as &i8) = v16 | 48, v13 = <core::slice::iter::IterMut<T> as core::iter::traits::iterator::Iterator>::next(&v3), v13));
    }
    v5 = v0;
    v3 = alloc::string::String::from_utf8(&v5);
    v6 = core::result::Result<T,E>::unwrap(&v3);
    std::path::Path::join(a0, a1, a2, &v6);
    return a0;
}
