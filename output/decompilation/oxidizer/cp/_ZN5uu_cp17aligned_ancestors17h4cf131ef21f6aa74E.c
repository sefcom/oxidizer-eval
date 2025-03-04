fn uu_cp::aligned_ancestors(a0: u32, a1: u32, a2: u32, a3: u32, a4: u32) -> u64 {
    let v0: struct16;  // [sp-0xc0], Other Possible Types: unsigned long
    let v1: i64;  // [sp-0xb8]
    let v2: i64;  // [sp-0xb0]
    let v3: struct24;  // [sp-0xa8]
    let v4: struct24;  // [sp-0x90]
    let v5: struct17;  // [bp-0x78], Other Possible Types: struct56
    let v6: struct32;  // [bp-0x40]
    let v8: i64;  // r14
    let v9: i64;  // rdx
    let v10: i64;  // rax
    let v11: struct8;  // rax
    let v12: i64;  // rdx
    let v13: iNone;  // ymm0
    let v14: iNone;  // ymm1

    v3 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(a1, a2);
    v4 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(a3, a4);
    v8 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(1, v3.field_16 - 1, v3.field_8, v3.field_16, "src/uu/cp/src/cp.rs");
    v5 = struct17 {
        field_0: 1
        field_8: v9
        field_16: 0
    };
    v10 = <core::ops::range::RangeInclusive<usize> as core::slice::index::SliceIndex<[T]>>::index(&v5, v4.field_8, v4.field_16);
    v0 = 0;
    v1 = 8;
    v2 = 0;
    v5 = core::iter::traits::iterator::Iterator::zip(v8, v9 * 16 + v8, v10, v9 * 16 + v10);
    v11 = <core::iter::adapters::zip::Zip<A,B> as core::iter::adapters::zip::ZipImpl<A,B>>::next();
    if !v11 {
        return a0;
    }
    do {
        v13 = v13 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *(v11 as &i128);
        v14 = v14 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *(v12 as &i128);
        v6 = struct32 {
            field_0: v15
            field_16: v16
        };
        v0 = alloc::vec::Vec<T,A>::push(&v6);
        v11 = <core::iter::adapters::zip::Zip<A,B> as core::iter::adapters::zip::ZipImpl<A,B>>::next();
    } while (v11);
    return a0;
}
