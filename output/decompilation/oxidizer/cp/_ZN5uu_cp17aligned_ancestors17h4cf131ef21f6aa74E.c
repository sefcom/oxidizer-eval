fn uu_cp::aligned_ancestors(a1: i64, a2: i64, a3: i64, a4: i64) -> : struct24 {
    let a0: u64;  // rsi
    let v0: core::result::Result<(), std::io::error::Error>;  // [bp-0xc0]
    let v1: struct16;  // [bp-0xc0]
    let v2: u64;  // [bp-0xb8]
    let v3: void*;  // [bp-0xb0]
    let v4: Result<struct24, struct24>;  // [bp-0xa8]
    let v5: u64;  // [bp-0xa0]
    let v6: u32;  // [bp-0x98]
    let v7: Result<struct24, struct24>;  // [bp-0x90]
    let v8: u64;  // [bp-0x88]
    let v9: u64;  // [bp-0x80]
    let v10: struct56;  // [bp-0x78], Other Possible Types: u64
    let v11: u64;  // [bp-0x70]
    let v12: u8;  // [bp-0x68]
    let v13: u256;  // [bp-0x40]
    let v15: u64;  // r14
    let v16: u64;  // rdx
    let v18: i64;  // rax
    let v19: i64;  // rdx
    let v20: i64;  // rdi
    let v21: &[u8];  // rax:rdx

    v4 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(a0, a1);
    v7 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(a2, a3);
    v15 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(0x1, v6 - 1, v5, v6, "src/uu/cp/src/cp.rs");
    v10 = 1;
    v11 = v16;
    v12 = 0;
    v21 = <core::ops::range::RangeInclusive<usize> as core::slice::index::SliceIndex<[T]>>::index(&v10, v8, v9);
    v0 = 0;
    v2 = 8;
    v3 = 0;
    v10 = core::iter::traits::iterator::Iterator::zip(v15, v16 * 16 + v15, v21.ptr, &v21.ptr[16 * v21.len]);
    v18 = <core::iter::adapters::zip::Zip<A,B> as core::iter::adapters::zip::ZipImpl<A,B>>::next(&v10);
    if v18 {
        do {
            v13 = struct32 {
                field_0: *(v18 as &i128)
                field_16: *(v19 as &i128)
            };
            v1 = alloc::vec::Vec<T,A>::push(&v13);
        } while ((v18 = <core::iter::adapters::zip::Zip<A,B> as core::iter::adapters::zip::ZipImpl<A,B>>::next(&v10), v18));
    }
    *((v20 + 16) as &i64) = 0;
    *(v20 as &i128) = *(&v1.field_0 as &i128);
    return;
}
