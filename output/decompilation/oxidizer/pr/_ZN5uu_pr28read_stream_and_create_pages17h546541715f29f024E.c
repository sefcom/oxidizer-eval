fn uu_pr::read_stream_and_create_pages(a0: i64, a1: i64, a2: i64) -> u64 {
    let v0: struct16;  // [bp-0x118]
    let v1: void*;  // [bp-0xf0]
    let v2: u128;  // [bp-0xd0]
    let v3: core::fmt::Arguments;  // [bp-0xc0]
    let v4: core::fmt::rt::Argument;  // [bp-0xb0]
    let v5: u64;  // [bp-0xa0]
    let v6: void*;  // [bp-0x98]
    let v7: u64;  // [bp-0x90]
    let v8: u64;  // [bp-0x88]
    let v9: u64;  // [bp-0x80]
    let v10: void*;  // [bp-0x78]
    let v11: void*;  // [bp-0x58]
    let v12: void*;  // [bp-0x38]
    let v13: u64;  // [bp-0x30]
    let v14: u8;  // [bp-0x28]
    let v15: u128;  // [bp-0x20]
    let v16: u64;  // [bp-0x10]
    let v17: u8;  // [bp-0x8]
    let v19: u64;  // r10
    let v20: u64;  // r8

    v19 = 1;
    v20 = 1;
    v0 = struct16 {
        field_0: ""
    };
    v1 = 0;
    v2 = *(a1 as &i128);
    v3 = *((a1 + 16) as &i128);
    v4 = *((a1 + 32) as &i128);
    v5 = *((a1 + 48) as &i64);
    v6 = 0;
    v7 = v20;
    v8 = a2;
    v9 = v19 * (*((a0 + 312) as &i64) >> (*((a0 + 320) as &i8) & 63));
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
