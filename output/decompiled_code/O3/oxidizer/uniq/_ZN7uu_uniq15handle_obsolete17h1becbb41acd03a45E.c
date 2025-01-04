fn uu_uniq::handle_obsolete(a0: u64, a1: u64, a2: u64) -> int {
    let v0: i8;  // [sp-0xc2]
    let v1: i8;  // [sp-0xc1]
    let v2: i64;  // [sp-0xc0], Other Possible Types: struct24
    let v3: i128;  // [sp-0xb8]
    let v4: i64;  // [sp-0xb0]
    let v5: i64;  // [sp-0xa8]
    let v6: i64;  // [sp-0xa0]
    let v7: i8;  // [bp-0x98]
    let v8: i64;  // [sp-0x88]
    let v9: i8;  // [bp-0x80]
    let v10: i192;  // [sp-0x70], Other Possible Types: struct24
    let v11: struct48;  // [sp-0x58], Other Possible Types: i384
    let v13: i64;  // r14
    let v14: i128;  // xmm0
    let v15: i256;  // ymm0
    let v16: i256;  // ymm0
    let v19: i64;  // rax
    let v20: i256;  // ymm0
    let v23: i128;  // xmm0

    v6 = 0x8000000000000000;
    v8 = 0x8000000000000000;
    v0 = 0;
    v1 = 0;
    v2 = &v6;
    v3 = &v8;
    v4 = &v0;
    v5 = &v1;
    v11 = core::iter::traits::iterator::Iterator::filter_map(a1, a2, &v2);
    v10 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v11);
    if v2 != 0x8000000000000000 {
        v14 = v7;
        v16 = v15 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v14;
        v3 = v14;
        v2 = v6;
        v13 = uu_uniq::handle_obsolete::{{closure}}(&v2);
        if !(v8 == 0x8000000000000000) {
            goto LABEL_4702ee;
        }
LABEL_4702be:
        v19 = 0;
    } else {
        v13 = 0;
        if v8 == 0x8000000000000000 {
            goto LABEL_4702be;
        }
LABEL_4702ee:
        v16 = v20 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v9;
        *(&v2.field_0 as &struct24) = struct24 {
            field_0: v21
            field_8: v15 as u128
        };
        v19 = uu_uniq::handle_obsolete::{{closure}}(&v2);
    }
    v23 = v10;
    return struct56 {
        field_0: v13
        field_8: v17
        field_16: v23
        field_32: *((&v10 as &char + 16) as &i64)
        field_40: v19
        field_48: v22
    };
}
