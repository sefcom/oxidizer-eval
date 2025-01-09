fn uu_pr::read_stream_and_create_pages(a0: void*, a1: void*, a2: u32) -> u64 {
    let v0: u64;  // [sp-0x140]
    let v1: void*;  // [sp-0x138]
    let v2: void*;  // [sp-0x118]
    let v3: u128;  // [sp-0xf8]
    let v4: u128;  // [sp-0xe8]
    let v5: u128;  // [sp-0xd8]
    let v6: u64;  // [sp-0xc8]
    let v7: void*;  // [sp-0xc0]
    let v8: u64;  // [sp-0xb8]
    let v9: u64;  // [sp-0xb0]
    let v10: u64;  // [sp-0xa8]
    let v11: void*;  // [sp-0xa0]
    let v12: void*;  // [sp-0x80]
    let v13: void*;  // [sp-0x60]
    let v14: u64;  // [sp-0x58]
    let v15: u8;  // [sp-0x50]
    let v16: u128;  // [sp-0x48]
    let v17: u64;  // [sp-0x38]
    let v18: u8;  // [sp-0x30]
    let v20: u64;  // r12
    let v21: u64;  // r13

    v20 = a0->field_130;
    v21 = 1;
    if a0->field_d8 != 0x8000000000000000 {
        v21 = a0->field_f8;
    }
    v6 = a1->field_30;
    v5 = a1->field_20;
    v4 = a1->field_10;
    v3 = a1->field_0;
    v0 = 1;
    v1 = 0;
    v2 = 0;
    v7 = 0;
    v8 = v21;
    v9 = a2;
    v10 = uu_pr::lines_to_read_for_page(a0);
    v11 = 0;
    v12 = 0;
    v13 = 0;
    v14 = v20;
    v15 = 0;
    v18 = 0;
    v16 = a0->field_0;
    v17 = v20;
    return alloc::boxed::Box<T>::new(&v0);
}
