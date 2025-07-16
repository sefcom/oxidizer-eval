fn uu_sort::chunks::Chunk::recycle(a1: i64) -> : struct120 {
    let a0: u64;  // rsi
    let v0: u128;  // [bp-0x108]
    let v1: u64;  // [bp-0xf8]
    let v2: u128;  // [bp-0xe8]
    let v3: struct8;  // [bp-0xd8]
    let v4: struct8;  // [bp-0xc8]
    let v5: u64;  // [bp-0xb8]
    let v6: u128;  // [bp-0xa8]
    let v7: u64;  // [bp-0x98]
    let v8: struct24;  // [bp-0x88]
    let v9: u64;  // [bp-0x78]
    let v10: struct96;  // [bp-0x70]
    let v11: u64;  // [bp-0x60]
    let v12: struct8;  // [bp-0x48]
    let v13: struct8;  // [bp-0x40]
    let v14: &str;  // [bp-0x30]
    let v16: i64;  // rdi

    v10 = uu_sort::chunks::Chunk::recycle::{{closure}}(a0 + 24);
    v1 = v11;
    v0 = v10.field_0;
    v3 = v12;
    memcpy(&v2, &v10 as u128, 16);
    v5 = v14;
    v4 = v13;
    v7 = (&v10.field_64)[1];
    memcpy(&v6, &v10 as u128, 16);
    v8 = uu_sort::chunks::Chunk::into_owner(a0);
    *((v16 + 16) as &u64) = v1;
    *(v16 as &u128) = v0;
    *((v16 + 40) as &struct8) = v3;
    *((v16 + 24) as &u128) = v2;
    *((v16 + 64) as &u64) = v5;
    *((v16 + 48) as &struct8) = v4;
    *((v16 + 72) as &u128) = v6;
    *((v16 + 88) as &u64) = v7;
    *((v16 + 96) as &u128) = v8.field_0;
    *((v16 + 112) as &u64) = v9;
    return;
}
