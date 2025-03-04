fn uu_uniq::handle_obsolete(a0: &struct56, a1: u64, a2: u64) -> int {
    let v0: i8;  // [sp-0xc2]
    let v1: i8;  // [sp-0xc1]
    let v2: i64;  // [sp-0xc0], Other Possible Types: struct40, struct24
    let v3: iNone;  // [bp-0xb8]
    let v4: i64;  // [sp-0xa0]
    let v5: i8;  // [bp-0x98]
    let v6: i64;  // [sp-0x88]
    let v8: struct24;  // [sp-0x70]
    let v9: struct48;  // [sp-0x58]

    v6 = 0x8000000000000000;
    v0 = 0;
    v1 = 0;
    v2 = struct40 {
        field_0: &<0x470230[is_5]|Stack bp-0xa0, 1 B>
        field_8: &v6
        field_16: &v0
        field_24: &v1
        field_32: 0x8000000000000000
    };
    v9 = core::iter::traits::iterator::Iterator::filter_map(a1, a2, &v2);
    v8 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v9);
    if v2 != 0x8000000000000000 {
        *(&v3 as &i128) = *(&v5 as &i128);
        v2 = v4;
        uu_uniq::handle_obsolete::{{closure}}(&v2);
        if !(v6 == 0x8000000000000000) {
            goto LABEL_4702ee;
        }
LABEL_4702be:
    } else {
        if v6 == 0x8000000000000000 {
            goto LABEL_4702be;
        }
LABEL_4702ee:
        *(&v2.field_0 as &struct24) = struct24 {
            field_0: v12
            field_8: v18
        };
        uu_uniq::handle_obsolete::{{closure}}(&v2);
    }
    return struct56 {
        field_0: v11
        field_8: v19
        field_16: v21
        field_32: v8.field_16
        field_40: v17
        field_48: v20
    };
}
