fn uu_pr::read_stream_and_create_pages(a0: &struct_1, a1: &struct_0) -> u64 {
    let v0: u64;  // [sp-0x120]
    let v1: void*;  // [sp-0x118]
    let v2: void*;  // [sp-0xf8]
    let v3: u128;  // [sp-0xd8]
    let v4: u128;  // [sp-0xc8]
    let v5: u128;  // [sp-0xb8]
    let v6: u64;  // [sp-0xa8]
    let v7: void*;  // [sp-0xa0]
    let v8: u64;  // [sp-0x98]
    let v9: u64;  // [sp-0x90]
    let v10: u64;  // [sp-0x88]
    let v11: void*;  // [sp-0x80]
    let v12: void*;  // [sp-0x60]
    let v13: void*;  // [sp-0x40]
    let v14: u64;  // [sp-0x38]
    let v15: u8;  // [sp-0x30]
    let v16: u128;  // [sp-0x28]
    let v17: u64;  // [sp-0x18]
    let v18: u8;  // [sp-0x10]
    let v21: u64;  // r10
    let v22: u64;  // r8
    let v25: u64;  // rdx
    let v26: u64;  // rax

    v21 = 1;
    v22 = 1;
    if a0->field_d8 != 0x8000000000000000 {
        v22 = a0->field_f8;
    }
    if a0->field_100 != 0x8000000000000000 {
        v21 = a0->field_120;
    }
    v0 = 1;
    v1 = 0;
    v2 = 0;
    v3 = a1->field_0;
    v4 = a1->field_10;
    v5 = a1->field_20;
    v6 = a1->field_30;
    v7 = 0;
    v8 = v22;
    v9 = v25;
    v10 = v21 * (a0->field_138 >> (a0->field_140 & 63));
    v11 = 0;
    v12 = 0;
    v13 = 0;
    v14 = a0->field_130;
    v15 = 0;
    v18 = 0;
    v16 = a0->field_0;
    v17 = v14;
    v26 = __rust_alloc(280, 8);
    memcpy(v26, &v0, 280);
    return v26;
}
