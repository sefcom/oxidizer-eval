fn uu_df::table::RowFormatter::get_values() -> u32 {
    let v0: u8;  // [sp-0x189]
    let v1: void*;  // [sp-0x158]
    let v2: u64;  // [sp-0x150]
    let v3: void*;  // [sp-0x148]
    let v4: u64;  // [sp-0xc0]
    let v5: u64;  // [sp-0xb8]
    let v6: u64;  // [sp-0xb0]
    let v7: u64;  // [sp-0xa0]
    let v8: u64;  // [sp-0x98]
    let v9: u64;  // [sp-0x90]
    let v10: u64;  // [sp-0x88]
    let v11: u64;  // [sp-0x80]
    let v12: u64;  // [sp-0x78]
    let v13: u64;  // [sp-0x70]
    let v14: u64;  // [sp-0x68]
    let v15: u64;  // [sp-0x60]
    let v16: u64;  // [sp-0x58]
    let v17: u64;  // [sp-0x50]
    let v18: u64;  // [sp-0x48]
    let v19: u64;  // [sp-0x40]
    let v20: u64;  // [sp-0x38]
    let v22: &struct_0;  // rsi
    let v23: &u64;  // rbp
    let v24: u64;  // r13
    let v25: u64;  // rcx
    let v26: u64;  // rdx
    let v27: &u64;  // rdi

    v1 = 0;
    v2 = 8;
    v3 = 0;
    v23 = v22->field_8;
    v24 = v23[2];
    if !v24 {
        v27[2] = v3;
        *(v27) = v1;
        v27[1] = v2;
        return;
    }
    v25 = v23[1];
    v20 = v25 + v24;
    v26 = v22->field_0;
    v5 = v26 + 152;
    v11 = v26 + 64;
    v10 = v26 + 48;
    v0 = v22->field_10;
    v4 = v26 + 128;
    v9 = v26 + 8;
    v8 = v26 + 192;
    v7 = v26 + 184;
    v12 = v26;
    v14 = v26 + 80;
    v13 = v25;
    v6 = v25 + 1;
    v15 = v26 + 176;
    v18 = v26 + 16;
    v17 = v26 + 24;
    v16 = v26 + 32;
    v19 = v26 + 104;
    goto *((4277648 + *(vvar_22{reg 24} as &i8) * 4) as &i32) + 4277648;
}
