fn uu_sort::ext_sort::ext_sort(a0: &struct16, a1: i64, a2: &struct32, a3: i64) -> long long {
    let v0: u64;  // [bp-0x208]
    let v1: u8;  // [bp-0x1e8]
    let v2: u64;  // [bp-0x1d8]
    let v3: u64;  // [bp-0x1d0]
    let v4: u64;  // [bp-0x1c0]
    let v5: u64;  // [bp-0x1b8]
    let v6: u64;  // [bp-0x1b0]
    let v7: u64;  // [bp-0x1a8]
    let v8: u64;  // [bp-0x1a0], Other Possible Types: &str
    let v9: u64;  // [bp-0x198], Other Possible Types: core::str::pattern::CharSearcher
    let v10: u64;  // [bp-0x190]
    let v11: u8;  // [bp-0x188]
    let v12: struct24;  // [bp-0xe8]
    let v13: struct147;  // [bp-0xd0], Other Possible Types: struct24, void*
    let v14: u64;  // [bp-0xc0]
    let v16: u64;  // r8
    let v17: u32;  // ebp
    let v18: u128;  // xmm0
    let v19: struct24;  // rax
    let v20: u128;  // xmm0

    std::sync::mpmc::sync_channel(0x1, a2, a3, v16);
    v2 = v7;
    v3 = v8;
    memcpy(&v1, &v9, 16);
    std::sync::mpmc::sync_channel(0x1, a2, a3, v16);
    v17 = v7;
    v0 = v8;
    v4 = v0;
    v5 = v9;
    v6 = v10;
    v13 = <uu_sort::GlobalSettings as core::clone::Clone>::clone(a1);
    v7 = v5;
    v8 = v6;
    v9 = v2;
    v10 = v3;
    memcpy(&v11, &v13, 160);
    v14 = 0x8000000000000000;
    v13 = 0;
    v12 = std::thread::Builder::spawn_unchecked(&v13, &v7);
    v13 = core::result::Result<T,E>::expect(&v12);
    if *((a1 + 48) as &i64) == 0x8000000000000000 {
        v18 = *(a2 as &i128);
        v7 = struct32 {
            field_0: v18
            field_16: *((a2 + 16) as &i128)
        };
        v19 = uu_sort::ext_sort::reader_writer(a0, a1, &v1, v17, v0, &v7, a3);
    } else {
        v20 = *(a2 as &i128);
        v7 = struct32 {
            field_0: v20
            field_16: *((a2 + 16) as &i128)
        };
        v19 = uu_sort::ext_sort::reader_writer(a0, a1, &v1, v17, v0, &v7, a3);
    }
    return v19;
}
