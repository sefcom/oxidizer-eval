fn uu_dd::blocks::block(a0: &struct24, a1: u64, a2: u64, a3: u64, a4: u64, a5: u64) -> int {
    let v0: i64;  // [bp-0x78], Other Possible Types: struct24
    let v1: i64;  // [sp-0x70]
    let v2: struct24;  // [sp-0x60]
    let v3: i64;  // [sp-0x50]
    let v4: struct8;  // [bp-0x48]
    let v5: struct17;  // [bp-0x40]
    let v7: i64;  // r15
    let v8: i64;  // r14
    let v9: i64;  // r12

    v4 = struct8 {
        field_0: a3
    };
    v5 = struct17 {
        field_0: a1
        field_8: a2
        field_16: 0
    };
    v0 = struct24 {
        field_0: 0
        field_8: 8
        field_16: 0
    };
    v2 = core::iter::traits::iterator::Iterator::fold(&v5, &v0, &v4, a5 + 24);
    v7 = v3;
    if v7 && (!a4 || !*((a5 + 8) as &i64)) {
        v8 = v2.field_8;
        v9 = (v7 - 1) * 3;
        v0 = *((v8 + v9 * 8 + 8) as &i64);
        v1 = *((v8 + v9 * 8 + 16) as &i64) + v0;
    }
    return struct24 {
        field_0: v10
        field_16: v3
    };
}
