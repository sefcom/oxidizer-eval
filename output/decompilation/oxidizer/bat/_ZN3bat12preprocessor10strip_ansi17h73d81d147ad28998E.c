fn bat::preprocessor::strip_ansi(a0: i64, a1: i192, a2: u64) -> long long {
    let v0: u64;  // [bp-0xc0]
    let v1: struct8;  // [bp-0xb8], Other Possible Types: u64
    let v2: struct16;  // [bp-0xb0]
    let v3: struct16;  // [bp-0xa8]
    let v4: i64;  // [bp-0xa0]
    let v5: struct24;  // [bp-0x98]
    let v6: struct56;  // [bp-0x90]
    let v7: struct24;  // [bp-0x88]
    let v8: u64;  // [bp-0x80]
    let v9: void*;  // [bp-0x78]
    let v10: u32;  // [bp-0x68]
    let v11: struct48;  // [bp-0x60]
    let v12: struct32;  // [bp-0x58]
    let v14: struct16;  // rdx
    let v15: struct24;  // r14

    v1 = alloc::raw_vec::RawVecInner<A>::with_capacity_in(a2, 1, 1, "/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/alloc/src/string.rs");
    v2 = v14;
    v3 = 0;
    v5 = a1;
    v0 = a2;
    v6 = a2;
    v15 = a1;
    v7 = a1;
    v8 = a1 + a2;
    v9 = 0;
    v10 = 1114113;
    loop {
        v11 = <bat::vscreen::EscapeSequenceOffsetsIterator as core::iter::traits::iterator::Iterator>::next(&v5);
        if !v11.field_0 {
            v1 = <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(v12, v11.field_16, v15, v0) as u64);
        } else if v11.field_0 == 5 {
            break;
        }
    }
    *((v4 + 16) as &i64) = 0;
    *(v4 as &i128) = *(&v1 as &i128);
    return 0;
}
