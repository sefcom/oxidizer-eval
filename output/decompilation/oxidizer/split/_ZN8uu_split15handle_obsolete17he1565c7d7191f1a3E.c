fn uu_split::handle_obsolete(a0: &struct48, a1: u64, a2: u64) -> int {
    let v0: i8;  // [sp-0x82]
    let v1: i8;  // [sp-0x81]
    let v2: i64;  // [sp-0x80]
    let v4: struct24;  // [bp-0x68]
    let v5: struct24;  // [sp-0x50]
    let v6: struct40;  // [sp-0x38]
    let v8: iNone;  // xmm0
    let v9: iNone;  // xmm0

    v2 = 0x8000000000000000;
    v0 = 0;
    v1 = 0;
    v4 = struct24 {
        field_0: &v2
        field_8: &v0
        field_16: &v1
    };
    v6 = core::iter::traits::iterator::Iterator::filter_map(a1, a2, &v4);
    v5 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v6);
    v8 = *(&v2 as &i128);
    v9 = *(&v5.field_0 as &i128);
    return struct48 {
        field_0: v9
        field_16: v5.field_16
        field_24: v8
        field_40: *(&v3 as &i64)
    };
}
