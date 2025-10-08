fn uu_sort::chunks::Chunk::recycle(a0: i64, a1: u64) -> int {
    let v0: iNone;  // [bp-0xa8]
    let v1: struct120;  // [bp-0x90]
    let v2: u64;  // [bp-0x80]
    let v3: u128;  // [bp-0x78]
    let v4: u64;  // [bp-0x68]
    let v5: u128;  // [bp-0x60]
    let v6: u64;  // [bp-0x50]
    let v7: u128;  // [bp-0x48]
    let v8: u64;  // [bp-0x38]
    let v9: iNone;  // [bp-0x30]
    let v11: u64;  // r15

    v1 = uu_sort::chunks::Chunk::recycle::{{closure}}(a1 + 24);
    v0 = v9;
    v11 = v1.field_112;
    return struct120 {
        field_0: v1.field_0
        field_16: v2
        field_24: v3
        field_40: v4
        field_48: v5
        field_64: v6
        field_72: v7
        field_88: v8
        field_96: v0
        field_112: v11
    };
}
