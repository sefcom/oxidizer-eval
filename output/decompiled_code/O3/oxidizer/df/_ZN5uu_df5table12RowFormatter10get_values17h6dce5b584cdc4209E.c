fn uu_df::table::RowFormatter::get_values() -> u32 {
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
    let v17: &struct_1;  // rsi
    let v18: &u64;  // r14
    let v21: u64;  // rbp
    let v22: &struct_0;  // rdi

    v3 = 0;
    v4 = 8;
    v5 = 0;
    v18 = v17->field_8;
    v13 = v18[2];
    v14 = v18[1];
    v15 = struct16 {
        field_0: v19
        field_8: v13 + v19
    };
    if !<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v15) {
        v22->field_10 = v5;
        v22->field_0 = *(&v3 as &i128);
        return;
    }
    v21 = v17->field_0;
    v1 = v21 + 152;
    v12 = v21 + 16;
    v11 = v21 + 24;
    v10 = v21 + 64;
    v9 = v21 + 32;
    v0 = v17->field_10;
    v2 = v21 + 128;
    v8 = v21 + 192;
    v7 = v21 + 184;
    v6 = v21 + 80;
    goto *((4283040 + *(vvar_27{reg 16} as &i8) * 4) as &i32) + 4283040;
}
