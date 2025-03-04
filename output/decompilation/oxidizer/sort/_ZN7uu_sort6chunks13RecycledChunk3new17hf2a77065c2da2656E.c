fn uu_sort::chunks::RecycledChunk::new(a0: &struct120, a1: u64) -> int {
    let v0: i64;  // [sp-0x80]
    let v1: i64;  // [sp-0x78]
    let v2: i64;  // [sp-0x70]
    let v3: i64;  // [sp-0x68]
    let v4: i64;  // [sp-0x60]
    let v5: i64;  // [sp-0x58]
    let v6: i64;  // [sp-0x50]
    let v7: i64;  // [sp-0x48]
    let v8: i64;  // [sp-0x40]
    let v9: i64;  // [sp-0x38]
    let v10: i64;  // [sp-0x30]
    let v11: i64;  // [sp-0x28]
    let v12: struct24;  // [sp-0x20]
    let v14: iNone;  // xmm0
    let v15: iNone;  // xmm0
    let v16: iNone;  // xmm0
    let v17: iNone;  // xmm0
    let v18: iNone;  // xmm0

    v0 = 0;
    v1 = 8;
    v2 = 0;
    v3 = 0;
    v4 = 8;
    v5 = 0;
    v6 = 0;
    v7 = 8;
    v8 = 0;
    v9 = 0;
    v10 = 8;
    v11 = 0;
    v12 = <u8 as alloc::vec::spec_from_elem::SpecFromElem>::from_elem(a1);
    v14 = *(&v0 as &i128);
    v15 = *(&v3 as &i128);
    v16 = *(&v6 as &i128);
    v17 = *(&v9 as &i128);
    v18 = *(&v12.field_0 as &i128);
    return struct120 {
        field_0: v14
        field_16: v2
        field_24: v15
        field_40: v5
        field_48: v16
        field_64: v8
        field_72: v17
        field_88: v11
        field_96: v18
        field_112: v12.field_16
    };
}
