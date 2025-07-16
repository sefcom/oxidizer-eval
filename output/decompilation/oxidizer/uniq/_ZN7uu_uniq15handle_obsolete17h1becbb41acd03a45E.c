fn uu_uniq::handle_obsolete(a0: i64, a1: u64, a2: u64) -> : struct56 {
    let v0: u8;  // [bp-0xc2]
    let <0x470230[is_4]|Stack bp-0xa0, 1 B>: i64;  // [bp-0xa0]
    let v1: u8;  // [bp-0xc1]
    let v2: u64;  // [bp-0xc0]
    let v3: u320;  // [bp-0xc0]
    let v4: u64;  // [bp-0xa0]
    let v5: u8;  // [bp-0x98]
    let v6: u64;  // [bp-0x88]
    let v8: Result<struct24, struct24>;  // [bp-0x70]
    let v9: u64;  // [bp-0x60]
    let v10: struct48;  // [bp-0x58]
    let v12: void*;  // r14
    let v13: u64;  // rdx
    let v14: u64;  // r15
    let v15: void*;  // rax
    let v16: u64;  // rdx

    v6 = 0x8000000000000000;
    v0 = 0;
    v1 = 0;
    v3 = struct40 {
        field_0: &<0x470230[is_4]|Stack bp-0xa0, 1 B> as u64
        field_8: &v6
        field_16: &v0
        field_24: &v1
        field_32: 0x8000000000000000
    };
    v10 = core::iter::traits::iterator::Iterator::filter_map(a1, a2, &v3);
    v8 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v10);
    if v4 != 0x8000000000000000 {
        memcpy(&v3, &v5, 16);
        v2 = v4;
        v12 = uu_uniq::handle_obsolete::{{closure}}(&v2);
        v14 = v13;
    }
    return struct56 {
        field_0: v12
        field_8: v14
        field_16: v8 as i128
        field_32: v9
        field_40: v15
        field_48: v16
    };
}
