fn uu_cp::aligned_ancestors(a0: &struct24, a1: u32, a2: u32, a3: u32, a4: u32) -> u64 {
    let v0: i64;  // [sp-0xc0], Other Possible Types: struct16
    let v1: i64;  // [sp-0xb8]
    let v2: i64;  // [sp-0xb0]
    let v3: i192;  // [sp-0xa8], Other Possible Types: struct24
    let v4: struct24;  // [sp-0x90], Other Possible Types: i192
    let v5: struct56;  // [bp-0x78], Other Possible Types: struct17
    let v6: struct32;  // [bp-0x40]
    let v8: i64;  // r14
    let v9: i64;  // rdx
    let v10: i64;  // rax
    let v11: struct8;  // rax
    let v12: i64;  // rdx
    let v14: i256;  // ymm0
    let v16: i256;  // ymm1

    v3 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(a1, a2);
    v4 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(a3, a4);
    v8 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(1, *((&v3 as &char + 16) as &i64) - 1, *((&v3 as &char + 8) as &i64), *((&v3 as &char + 16) as &i64), "src/uu/cp/src/cp.rs");
    v5 = struct17 {
        field_0: 1
        field_8: v9
        field_16: 0
    };
    v10 = <core::ops::range::RangeInclusive<usize> as core::slice::index::SliceIndex<[T]>>::index(&v5, *((&v4 as &char + 8) as &i64), *((&v4 as &char + 16) as &i64));
    v0 = 0;
    v1 = 8;
    v2 = 0;
    v5 = core::iter::traits::iterator::Iterator::zip(v8, v9 * 16 + v8, v10, v9 * 16 + v10);
    v11 = <core::iter::adapters::zip::Zip<A,B> as core::iter::adapters::zip::ZipImpl<A,B>>::next();
    return struct24 {
        field_0: v0
        field_16: v2
    };
    loop {
        v14 = v14 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *(v11 as &i128);
        v16 = v16 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *(v12 as &i128);
        v6 = struct32 {
            field_0: v13 as u128
            field_16: v15 as u128
        };
        v0 = alloc::vec::Vec<T,A>::push(&v6);
        v11 = <core::iter::adapters::zip::Zip<A,B> as core::iter::adapters::zip::ZipImpl<A,B>>::next();
        return struct24 {
            field_0: v0
            field_16: v2
        };
    }
}
