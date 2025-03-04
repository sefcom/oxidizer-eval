fn uu_sort::ext_sort::ext_sort(a0: &struct16, a1: void*, a2: &struct32, a3: u32) -> u64 {
    let v0: i64;  // [sp-0x208]
    let v1: iNone;  // [sp-0x1e8]
    let v2: i64;  // [sp-0x1d8]
    let v3: i64;  // [sp-0x1d0]
    let v4: i64;  // [sp-0x1c8]
    let v5: i64;  // [sp-0x1c0]
    let v6: i64;  // [sp-0x1b8]
    let v7: i64;  // [sp-0x1b0]
    let v8: struct32;  // [sp-0x1a8], Other Possible Types: unsigned long
    let v9: i64;  // [sp-0x1a0]
    let v10: i64;  // [sp-0x198]
    let v11: i64;  // [sp-0x190]
    let v12: i8;  // [bp-0x188]
    let v13: struct24;  // [sp-0xe8]
    let v14: struct147;  // [sp-0xd0], Other Possible Types: struct24, struct8
    let v15: i64;  // [sp-0xc0]
    let v17: i64;  // rbp
    let v22: i64;  // rax

    v8 = std::sync::mpmc::sync_channel(0x1, a2, a3);
    v2 = v8;
    v3 = v9;
    v1 = *(&v8.field_16 as &i128);
    v8 = std::sync::mpmc::sync_channel(0x1, a2, a3);
    v17 = v8;
    v4 = v17;
    v0 = v9;
    v5 = v0;
    v6 = v8;
    v7 = v9;
    v14 = <uu_sort::GlobalSettings as core::clone::Clone>::clone(a1);
    v8 = v6;
    v9 = v7;
    v10 = v2;
    v11 = v3;
    memcpy(&v12, &v14, 160);
    v15 = 0x8000000000000000;
    v14 = struct8 {
        field_0: 0
    };
    v13 = std::thread::Builder::spawn_unchecked(&v14, &v8);
    v14 = core::result::Result<T,E>::expect(&v13);
    if *((a1 + 48) as &i64) != 0x8000000000000000 {
        *(&v8.field_0 as &struct32) = struct32 {
            field_0: v20
            field_16: *((a2 + 16) as &i128)
        };
        uu_sort::ext_sort::reader_writer(a0, a1, &v1, v17, v0, &v8, a3);
        return v22;
    }
    *(&v8.field_0 as &struct32) = struct32 {
        field_0: v18
        field_16: *((a2 + 16) as &i128)
    };
    uu_sort::ext_sort::reader_writer(a0, a1, &v1, v17, v0, &v8, a3);
    return v22;
}
