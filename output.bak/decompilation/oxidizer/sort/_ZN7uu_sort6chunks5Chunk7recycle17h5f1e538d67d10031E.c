fn uu_sort::chunks::Chunk::recycle(a0: &struct120, a1: u64) -> int {
    let v0: i128;  // [sp-0x108]
    let v1: i64;  // [sp-0xf8]
    let v2: i128;  // [sp-0xe8]
    let v3: i64;  // [sp-0xd8]
    let v4: i128;  // [sp-0xc8]
    let v5: i64;  // [sp-0xb8]
    let v6: i128;  // [sp-0xa8]
    let v7: i64;  // [sp-0x98]
    let v8: i192;  // [sp-0x88], Other Possible Types: struct24
    let v9: struct96;  // [sp-0x70], Other Possible Types: i768
    let v15: i128;  // xmm0

    v9 = uu_sort::chunks::Chunk::recycle::{{closure}}(a1 + 24);
    v1 = *((&v9 as &char + 16) as &i64);
    v0 = v9;
    v3 = *((&v9 as &char + 40) as &i64);
    v2 = *((&v9 as &char + 24) as &i128);
    v5 = *((&v9 as &char + 64) as &i64);
    v4 = *((&v9 as &char + 48) as &i128);
    v7 = *((&v9 as &char + 88) as &i64);
    v6 = *((&v9 as &char + 72) as &i128);
    v8 = uu_sort::chunks::Chunk::into_owner(a1);
    v15 = v8;
    return struct120 {
        field_0: v0
        field_16: v1
        field_24: v2
        field_40: v3
        field_48: v4
        field_64: v5
        field_72: v6
        field_88: v7
        field_96: v15
        field_112: *((&v8 as &char + 16) as &i64)
    };
}
