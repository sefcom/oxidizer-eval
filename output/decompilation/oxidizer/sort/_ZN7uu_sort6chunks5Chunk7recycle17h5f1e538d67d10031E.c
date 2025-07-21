fn uu_sort::chunks::Chunk::recycle(a1: i64) -> : struct120 {
    let a0: u64;  // rsi
    let v0: u128;  // [bp-0x108]
    let v1: u64;  // [bp-0xf8]
    let v2: struct16;  // [bp-0xe8]
    let v3: struct96;  // [bp-0xd8]
    let v4: struct48;  // [bp-0xc8]
    let v5: u64;  // [bp-0xb8]
    let v6: u128;  // [bp-0xa8]
    let v7: u64;  // [bp-0x98]
    let v8: struct24;  // [bp-0x88]
    let v9: u64;  // [bp-0x78]
    let v10: struct96;  // [bp-0x70]
    let v11: struct72;  // [bp-0x60]
    let v12: struct16;  // [bp-0x58]
    let v13: u64;  // [bp-0x48]
    let v14: struct48;  // [bp-0x40]
    let v15: &str;  // [bp-0x30]
    let v16: u128;  // [bp-0x28]
    let v18: i64;  // rdi

    v10 = uu_sort::chunks::Chunk::recycle::{{closure}}(a0 + 24);
    v1 = v11;
    v0 = v10.field_0;
    v3 = v13;
    v2 = v12;
    v5 = v15;
    v4 = v14;
    v7 = v10.field_88;
    v6 = v16;
    v8 = uu_sort::chunks::Chunk::into_owner(a0);
    *((v18 + 16) as &u64) = v1;
    *(v18 as &u128) = v0;
    *((v18 + 40) as &struct96) = v3;
    *((v18 + 24) as &struct16) = v2;
    *((v18 + 64) as &u64) = v5;
    *((v18 + 48) as &struct48) = v4;
    *((v18 + 72) as &u128) = v6;
    *((v18 + 88) as &u64) = v7;
    *((v18 + 96) as &u128) = v8.field_0;
    *((v18 + 112) as &u64) = v9;
    return;
}
