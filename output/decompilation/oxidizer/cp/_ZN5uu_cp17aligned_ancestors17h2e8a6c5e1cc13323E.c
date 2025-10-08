fn uu_cp::aligned_ancestors(a1: i64, a2: i64, a3: i64, a4: i64) -> : struct24 {
    let a0: i64;  // rdi
    let v0: struct16;  // [bp-0xc0]
    let v1: void*;  // [bp-0xc0]
    let v2: u64;  // [bp-0xb8]
    let v3: void*;  // [bp-0xb0]
    let v4: u8;  // [bp-0xa8]
    let v5: u32;  // [bp-0xa0]
    let v6: u32;  // [bp-0x98]
    let v7: u8;  // [bp-0x90]
    let v8: u64;  // [bp-0x88]
    let v9: u64;  // [bp-0x80]
    let v10: struct24;  // [bp-0x78], Other Possible Types: struct56
    let v11: struct32;  // [bp-0x40]
    let v13: struct16;  // r14
    let v14: u64;  // rdx
    let v16: core::fmt::Arguments;  // rax
    let v17: i64;  // rdx
    let v18: &[u8];  // rax:rdx

    core::iter::traits::iterator::Iterator::collect(&v4, a1, a2);
    core::iter::traits::iterator::Iterator::collect(&v7, a3, a4);
    v13 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(0x1, v6 - 1, v5, v6, "src/uu/cp/src/cp.rs");
    v10 = struct24 {
        field_0: 1
        field_8: v14
        field_16: 0
    };
    v18 = <core::ops::range::RangeInclusive<usize> as core::slice::index::SliceIndex<[T]>>::index(&v10, v8, v9);
    v1 = 0;
    v2 = 8;
    v3 = 0;
    v10 = core::iter::traits::iterator::Iterator::zip(v13, v14 * 16 + v13, v18.ptr, &v18.ptr[16 * v18.len]);
    v16 = <core::iter::adapters::zip::Zip<A,B> as core::iter::adapters::zip::ZipImpl<A,B>>::next(&v10);
    if v16 {
        do {
            v11 = struct32 {
                field_0: *(v16 as &i128)
                field_16: *(v17 as &i128)
            };
            v0 = alloc::vec::Vec<T,A>::push(&v11);
            v16 = <core::iter::adapters::zip::Zip<A,B> as core::iter::adapters::zip::ZipImpl<A,B>>::next(&v10);
        } while (v16);
    }
    return struct24 {
        field_0: *(&v0.field_0 as &i128)
        field_16: 0
    };
}
