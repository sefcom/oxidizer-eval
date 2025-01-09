fn uu_sort::ext_sort::ext_sort(a0: &struct16, a1: void*, a2: &struct32, a3: u32) -> u64 {
    let v0: i64;  // [sp-0x218]
    let v1: i64;  // [sp-0x208]
    let v2: i128;  // [sp-0x1e8]
    let v3: i64;  // [sp-0x1d8]
    let v4: i64;  // [sp-0x1d0]
    let v5: i64;  // [sp-0x1c8]
    let v6: i64;  // [sp-0x1c0]
    let v7: i64;  // [sp-0x1b8]
    let v8: i64;  // [sp-0x1b0]
    let v9: i64;  // [sp-0x1a8], Other Possible Types: struct32
    let v10: i64;  // [sp-0x1a0]
    let v11: i64;  // [sp-0x198]
    let v12: i64;  // [sp-0x190]
    let v13: i8;  // [bp-0x188]
    let v14: i192;  // [sp-0xe8], Other Possible Types: struct24
    let v15: struct24;  // [sp-0xd0], Other Possible Types: struct8, struct147, i1176
    let v16: i64;  // [sp-0xc0]
    let v18: i64;  // rdx
    let v19: i64;  // rcx
    let v20: i64;  // rbp
    let v22: i64;  // rax

    v9 = std::sync::mpmc::sync_channel(0x1, a2, a3);
    v3 = v9;
    v4 = v10;
    v2 = *((&v9 as &char + 16) as &i128);
    v9 = std::sync::mpmc::sync_channel(0x1, v18, v19);
    v20 = v9;
    v5 = v20;
    v1 = v10;
    v6 = v1;
    v7 = v9;
    v8 = v10;
    v15 = <uu_sort::GlobalSettings as core::clone::Clone>::clone(a1);
    v9 = v7;
    v10 = v8;
    v11 = v3;
    v12 = v4;
    memcpy(&v13, &v15, 160);
    v16 = 0x8000000000000000;
    v15 = struct8 {
        field_0: 0
    };
    v14 = std::thread::Builder::spawn_unchecked(&v15, &v9);
    v15 = core::result::Result<T,E>::expect(&v14);
    if *((a1 + 48) as &i64) != 0x8000000000000000 {
        *(&v9.field_0 as &struct32) = struct32 {
            field_0: v23
            field_16: *((a2 + 16) as &i128)
        };
        v0 = a3;
        v22 = uu_sort::ext_sort::reader_writer(a0, a1, &v2, v20, v1, &v9);
        return v22;
    }
    *(&v9.field_0 as &struct32) = struct32 {
        field_0: v21
        field_16: *((a2 + 16) as &i128)
    };
    v0 = a3;
    v22 = uu_sort::ext_sort::reader_writer(a0, a1, &v2, v20, v1, &v9);
    return v22;
}
