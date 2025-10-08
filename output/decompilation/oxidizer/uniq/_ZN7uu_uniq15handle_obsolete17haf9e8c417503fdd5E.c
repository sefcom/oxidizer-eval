fn uu_uniq::handle_obsolete(a0: i64, a1: i64, a2: i64) -> double {
    let v0: u8;  // [bp-0xa2]
    let <0x45cc50[is_4]|Stack bp-0x80, 1 B>: i64;  // [bp-0x80]
    let v1: u8;  // [bp-0xa1]
    let v2: struct40;  // [bp-0xa0]
    let v3: u64;  // [bp-0x90]
    let v4: struct24;  // [bp-0x80], Other Possible Types: u64
    let v5: u64;  // [bp-0x68]
    let v7: struct24;  // [bp-0x50], Other Possible Types: struct48
    let v9: void*;  // r14
    let v10: u64;  // rdx
    let v11: u64;  // r15
    let v12: void*;  // rax
    let v14: u64;  // rdx

    v5 = 0x8000000000000000;
    v0 = 0;
    v1 = 0;
    v2 = struct40 {
        field_0: &<0x45cc50[is_4]|Stack bp-0x80, 1 B> as u64
        field_8: &v5
        field_16: &v0
        field_24: &v1
        field_32: 0x8000000000000000
    };
    v7 = core::iter::traits::iterator::Iterator::filter_map(a1, a2, &v2);
    core::iter::traits::iterator::Iterator::collect(&v2, &v7);
    if v4 != 0x8000000000000000 {
        v7 = v4;
        v9 = uu_uniq::handle_obsolete::{{closure}}(&v7);
        v11 = v10;
    }
    return struct56 {
        field_0: v9
        field_8: v11
        field_16: *(&v2.field_0 as &i128)
        field_32: v3
        field_40: v12
        field_48: v14
    };
}
