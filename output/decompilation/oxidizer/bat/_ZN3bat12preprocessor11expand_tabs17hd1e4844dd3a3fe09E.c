fn bat::preprocessor::expand_tabs(a0: i64, a1: i64, a2: i1280, a3: i64, a4: i64) -> long long {
    let v0: struct160;  // [bp-0xf8]
    let v1: Result<struct80, struct9>;  // [bp-0xf0]
    let v2: struct24;  // [bp-0xe8]
    let v3: void*;  // [bp-0xe0]
    let v4: i64;  // [bp-0xd8]
    let v5: Result<struct4, struct8>;  // [bp-0xd0]
    let v6: struct48;  // [bp-0xb0]
    let v7: struct40;  // [bp-0x80]
    let v8: struct16;  // [bp-0x50]
    let v9: struct24;  // [bp-0x10]
    let v11: struct24;  // r15
    let v12: struct24;  // rdx

    v9 = v11;
    v1 = alloc::raw_vec::RawVecInner<A>::with_capacity_in(a2 * 2, 1, 1, "/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/alloc/src/string.rs");
    v2 = v12;
    v3 = 0;
    v0 = a2;
    v7 = struct40 {
        field_0: a1
        field_8: a2
        field_16: a1
        field_24: a1 + a2
        field_32: 0
    };
    v8 = 1114113;
    v5 = a1;
    v6 = <bat::vscreen::EscapeSequenceOffsetsIterator as core::iter::traits::iterator::Iterator>::next(&v7);
    *((v4 + 16) as &i64) = 0;
    *(v4 as &i128) = v1 as i128;
    return 0;
}
