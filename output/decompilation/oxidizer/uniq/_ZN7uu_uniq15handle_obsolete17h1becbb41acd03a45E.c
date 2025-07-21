fn uu_uniq::handle_obsolete(a0: i64, a1: u64, a2: u64) -> : struct56 {
    let v0: u8;  // [bp-0xc2]
    let <0x470230[is_4]|Stack bp-0xa0, 1 B>: i64;  // [bp-0xa0]
    let v1: u8;  // [bp-0xc1]
    let v2: u64;  // [bp-0xc0]
    let v3: struct40;  // [bp-0xc0]
    let v4: u128;  // [bp-0xb8]
    let v5: u64;  // [bp-0xa0]
    let v6: u128;  // [bp-0x98]
    let v7: u64;  // [bp-0x88]
    let v9: struct24;  // [bp-0x70]
    let v10: u64;  // [bp-0x60]
    let v11: struct48;  // [bp-0x58]
    let v13: void*;  // r14
    let v14: u64;  // rdx
    let v15: u64;  // r15
    let v16: void*;  // rax
    let v17: u64;  // rdx

    v7 = 0x8000000000000000;
    v0 = 0;
    v1 = 0;
    v3 = struct40 {
        field_0: &<0x470230[is_4]|Stack bp-0xa0, 1 B> as u64
        field_8: &v7
        field_16: &v0
        field_24: &v1
        field_32: 0x8000000000000000
    };
    v11 = core::iter::traits::iterator::Iterator::filter_map(a1, a2, &v3);
    v9 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v11);
    if v5 != 0x8000000000000000 {
        v4 = v6;
        v2 = v5;
        v13 = uu_uniq::handle_obsolete::{{closure}}(&v2);
        v15 = v14;
    }
    return struct56 {
        field_0: v13
        field_8: v15
        field_16: v9.field_0
        field_32: v10
        field_40: v16
        field_48: v17
    };
}
