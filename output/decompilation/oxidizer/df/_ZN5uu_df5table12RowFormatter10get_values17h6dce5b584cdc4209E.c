fn uu_df::table::RowFormatter::get_values(a0: &struct24, a1: u64) -> int {
    let v0: u8;  // [sp-0x119]
    let v1: u64;  // [sp-0xd8]
    let v2: u64;  // [sp-0xd0]
    let v3: void*;  // [sp-0xa8]
    let v4: u64;  // [sp-0xa0]
    let v5: void*;  // [sp-0x98]
    let v6: u64;  // [sp-0x88]
    let v7: u64;  // [sp-0x80]
    let v8: u64;  // [sp-0x78]
    let v9: u64;  // [sp-0x70]
    let v10: u64;  // [sp-0x68]
    let v11: u64;  // [sp-0x60]
    let v12: u64;  // [sp-0x58]
    let v13: u64;  // [sp-0x50]
    let v14: u64;  // [sp-0x48]
    let v15: struct16;  // [bp-0x40]
    let v17: &u64;  // r14
    let v20: u64;  // rbp
    let v21: u128;  // xmm0

    v3 = 0;
    v4 = 8;
    v5 = 0;
    v17 = a1->field_8;
    v13 = v17[2];
    v14 = v17[1];
    v15 = struct16 {
        field_0: v18
        field_8: v13 + v18
    };
    if !<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v15) {
        v21 = *(&v3 as &i128);
        return struct24 {
            field_0: v21
            field_16: v5
        };
    }
    v20 = a1->field_0;
    v1 = v20 + 152;
    v12 = v20 + 16;
    v11 = v20 + 24;
    v10 = v20 + 64;
    v9 = v20 + 32;
    v0 = a1->field_10;
    v2 = v20 + 128;
    v8 = v20 + 192;
    v7 = v20 + 184;
    v6 = v20 + 80;
    goto *((4283040 + *(vvar_27{reg 16} as &i8) * 4) as &i32) + 4283040;
}
