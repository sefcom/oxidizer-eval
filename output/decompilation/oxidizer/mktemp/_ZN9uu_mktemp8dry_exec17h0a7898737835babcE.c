fn uu_mktemp::dry_exec(a0: &struct24, a1: u32, a2: u32, a3: u32, a4: u64, a5: u32, a6: u32, a7: u32) -> u64 {
    let v0: struct8;  // [sp-0xb8], Other Possible Types: unsigned long
    let v1: i64;  // [sp-0xb0]
    let v2: i64;  // [sp-0xa8]
    let v3: Result<struct16, struct16>;  // [sp-0xa0], Other Possible Types: unsigned long, struct16
    let v4: i64;  // [sp-0x98]
    let v5: iNone;  // [sp-0x68]
    let v6: struct24;  // [sp-0x48]
    let v7: i64;  // r13
    let v9: i64;  // rdx
    let v10: i64;  // rax
    let v11: i64;  // rcx
    let v13: i8;  // cl

    v7 = a5 + a4;
    v3 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(v7 + a7, 0);
    v0 = v4;
    v1 = *((&v3 as &char + 16) as &i64);
    v2 = 0;
    v0 = <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(a3, a3 + a4);
    <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<T,I>>::spec_extend(&v0, a5, 88);
    v0 = <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(a6, a7 + a6);
    v3 = rand::rngs::thread::thread_rng();
    rand::rng::Rng::fill(&v3, <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index_mut(a4, v7, v1, v2, "src/uu/mktemp/src/mktemp.rs"), v9);
    v3 = struct16 {
        field_0: v8
        field_8: v8 + v9
    };
    v10 = <core::slice::iter::IterMut<T> as core::iter::traits::iterator::Iterator>::next(&v3);
    if v10 {
        do {
            v11 = *(v10 as &i8);
            v13 = v11 - (((((v11 & 4294967295 & 255 & 255) >> 1) as u32 * 133 >> 12) * 64 & 4294967295) - ((((v11 & 4294967295 & 255 & 255) >> 1) as u32 * 133 >> 12) * 2 & 4294967295) & 4294967295);
        } while ((*(v10 as &char) = v13 | 48, v10 = <core::slice::iter::IterMut<T> as core::iter::traits::iterator::Iterator>::next(&v3), v10));
    }
    v5 = *(&v0 as &i192);
    v3 = alloc::string::String::from_utf8(&v5);
    v6 = core::result::Result<T,E>::unwrap(&v3);
    std::path::Path::join(a0, a1, a2, &v6);
    return a0;
}
