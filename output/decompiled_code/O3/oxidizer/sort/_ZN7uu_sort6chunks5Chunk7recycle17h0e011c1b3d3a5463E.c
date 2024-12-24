fn uu_sort::chunks::Chunk::recycle(a0: u64, a1: u64) -> int {
    let v0: i128;  // [sp-0x98]
    let v1: i64;  // [sp-0x88]
    let v2: i128;  // [sp-0x78]
    let v3: i64;  // [sp-0x68]
    let v4: i128;  // [sp-0x58]
    let v5: i64;  // [sp-0x48]
    let v6: i128;  // [sp-0x38]
    let v7: i64;  // [sp-0x28]
    let v8: struct24;  // [sp-0x20], Other Possible Types: i192
    let v10: i128;  // xmm0
    let v11: i128;  // xmm0
    let v12: i128;  // xmm0
    let v13: i128;  // xmm0
    let v14: i128;  // xmm0

    *((a1 + 40) as &i64) = 0;
    *((a1 + 64) as &i64) = 0;
    *((a1 + 88) as &i64) = 0;
    *((a1 + 112) as &i64) = 0;
    v1 = *((a1 + 40) as &i64);
    v10 = *((a1 + 24) as &i128);
    v0 = v10;
    *((a1 + 24) as &i64) = 0;
    *((a1 + 32) as &i64) = 8;
    *((a1 + 40) as &i64) = 0;
    v3 = *((a1 + 64) as &i64);
    v11 = *((a1 + 48) as &i128);
    v2 = v11;
    *((a1 + 48) as &i64) = 0;
    *((a1 + 56) as &i64) = 8;
    *((a1 + 64) as &i64) = 0;
    v5 = *((a1 + 88) as &i64);
    v12 = *((a1 + 72) as &i128);
    v4 = v12;
    *((a1 + 72) as &i64) = 0;
    *((a1 + 80) as &i64) = 8;
    *((a1 + 88) as &i64) = 0;
    v7 = *((a1 + 112) as &i64);
    v13 = *((a1 + 96) as &i128);
    v6 = v13;
    *((a1 + 96) as &i64) = 0;
    *((a1 + 104) as &i64) = 8;
    *((a1 + 112) as &i64) = 0;
    v8 = uu_sort::chunks::Chunk::into_owner(a1);
    v14 = v8;
    return struct120 {
        field_0: v0
        field_16: v1
        field_24: v2
        field_40: v3
        field_48: v4
        field_64: v5
        field_72: v6
        field_88: v7
        field_96: v14
        field_112: *((&v8 as &char + 16) as &i64)
    };
}
