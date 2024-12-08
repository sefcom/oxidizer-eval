fn uu_split::handle_obsolete(a0: u64, a1: u64, a2: u64) -> int {
    let v0: i8;  // [sp-0x82]
    let v1: i8;  // [sp-0x81]
    let v2: i64;  // [sp-0x80]
    let v4: struct24;  // [bp-0x68]
    let v5: struct24;  // [sp-0x50], Other Possible Types: i192
    let v6: i320;  // [sp-0x38], Other Possible Types: struct40
    let v8: i128;  // xmm0
    let v9: i128;  // xmm0

    v2 = 0x8000000000000000;
    v0 = 0;
    v1 = 0;
    *(&v4.field_0 as &struct24) = struct24 {
        field_0: &v2
        field_8: &v0
        field_16: &v1
    };
    v6 = core::iter::traits::iterator::Iterator::filter_map(a1, a2, &v4);
    v5 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v6);
    v8 = v2;
    v9 = v5;
    return struct48 {
        field_0: v9
        field_16: *((&v5 as &char + 16) as &i64)
        field_24: v8
        field_40: v3
    };
}
