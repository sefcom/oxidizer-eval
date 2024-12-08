fn uu_cp::aligned_ancestors(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64) -> u64 {
    let v0: i128;  // [sp-0xc0], Other Possible Types: struct16
    let v1: i64;  // [sp-0xb8]
    let v2: i64;  // [sp-0xb0]
    let v3: struct24;  // [sp-0xa8], Other Possible Types: i192
    let v4: i192;  // [sp-0x90], Other Possible Types: struct24
    let v5: struct17;  // [bp-0x78], Other Possible Types: struct56
    let v6: struct32;  // [bp-0x40]
    let v8: i64;  // rcx
    let v9: i64;  // r14
    let v10: i64;  // rdx
    let v11: i64;  // rax
    let v12: struct8;  // rax
    let v13: i64;  // rdx
    let v15: i256;  // ymm0
    let v17: i256;  // ymm1

    v3 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(a1, a2, a3);
    v4 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(a3, a4, v8);
    v9 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(1, *((&v3 as &char + 16) as &i64) - 1, *((&v3 as &char + 8) as &i64), *((&v3 as &char + 16) as &i64), "src/uu/cp/src/cp.rs");
    v5 = struct17 {
        field_0: 1
        field_8: v10
        field_16: 0
    };
    v11 = <core::ops::range::RangeInclusive<usize> as core::slice::index::SliceIndex<[T]>>::index(&v5, *((&v4 as &char + 8) as &i64), *((&v4 as &char + 16) as &i64));
    v0 = 0;
    v1 = 8;
    v2 = 0;
    v5 = core::iter::traits::iterator::Iterator::zip(v9, v10 * 16 + v9, v11, v10 * 16 + v11);
    v12 = <core::iter::adapters::zip::Zip<A,B> as core::iter::adapters::zip::ZipImpl<A,B>>::next();
    if v12 {
        do {
            v15 = v15 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *(v12 as &i128);
            v17 = v17 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *(v13 as &i128);
            v6 = struct32 {
                field_0: v14 as u128
                field_16: v16 as u128
            };
            v0 = alloc::vec::Vec<T,A>::push(&v6, v13);
            v12 = <core::iter::adapters::zip::Zip<A,B> as core::iter::adapters::zip::ZipImpl<A,B>>::next();
        } while (v12);
    }
    *((a0 + 16) as &i64) = v2;
    *(a0 as &i128) = v0;
    return a0;
}
