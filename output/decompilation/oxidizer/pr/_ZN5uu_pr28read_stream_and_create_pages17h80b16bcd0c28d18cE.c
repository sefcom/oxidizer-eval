fn uu_pr::read_stream_and_create_pages(a0: i64, a1: i64, a2: i64) -> long long {
    let v0: struct16;  // [bp-0x140]
    let v1: void*;  // [bp-0x118]
    let v2: u128;  // [bp-0xf8]
    let v3: u128;  // [bp-0xe8]
    let v4: u128;  // [bp-0xd8]
    let v5: u64;  // [bp-0xc8]
    let v6: void*;  // [bp-0xc0]
    let v7: u64;  // [bp-0xb8]
    let v8: u64;  // [bp-0xb0]
    let v9: u64;  // [bp-0xa8]
    let v10: void*;  // [bp-0xa0]
    let v11: void*;  // [bp-0x80]
    let v12: void*;  // [bp-0x60]
    let v13: u64;  // [bp-0x58]
    let v14: u8;  // [bp-0x50]
    let v15: u128;  // [bp-0x48]
    let v16: u64;  // [bp-0x38]
    let v17: u8;  // [bp-0x30]
    let v19: u64;  // r13
    let v20: u64;  // rax

    v19 = 1;
    v20 = uu_pr::lines_to_read_for_page(a0);
    v5 = *((a1 + 48) as &i64);
    v4 = *((a1 + 32) as &i128);
    v3 = *((a1 + 16) as &i128);
    v2 = *(a1 as &i128);
    v0 = struct16 {
        field_0: 1
        field_8: 0
    };
    v1 = 0;
    v6 = 0;
    v7 = v19;
    v8 = a2;
    v9 = v20;
    v10 = 0;
    v11 = 0;
    v12 = 0;
    v13 = *((a0 + 304) as &i64);
    v14 = 0;
    v17 = 0;
    v15 = *(a0 as &i128);
    v16 = *((a0 + 304) as &i64);
    return alloc::boxed::Box<T>::new(&v0);
}
