fn uu_sort::ext_sort::ext_sort(a0: u64, a1: i64, a2: u64, a3: u64) -> long long {
    let v0: u64;  // [bp-0x210]
    let v1: u64;  // [bp-0x208]
    let v2: u64;  // [bp-0x200]
    let v3: u64;  // [bp-0x1e8]
    let v4: u64;  // [bp-0x1e0]
    let v5: u64;  // [bp-0x1d8]
    let v6: u64;  // [bp-0x1d0]
    let v7: u64;  // [bp-0x1c8]
    let v8: u64;  // [bp-0x1c0]
    let v9: u64;  // [bp-0x1b8]
    let v10: u64;  // [bp-0x1b0]
    let v11: struct32;  // [bp-0x1a8]
    let v12: u64;  // [bp-0x1a0]
    let v13: u64;  // [bp-0x198]
    let v14: u64;  // [bp-0x190]
    let v15: u8;  // [bp-0x188]
    let v16: struct24;  // [bp-0xe8]
    let v17: struct154;  // [bp-0xd0], Other Possible Types: struct24, struct48
    let v18: core::str::pattern::CharSearcher;  // [bp-0xc0]
    let v19: u8;  // [bp-0xa8]

    v11 = std::sync::mpmc::sync_channel(0x1, a2, a3);
    v5 = v11.field_0;
    v6 = v12;
    v1 = v13;
    v3 = v1;
    v2 = v14;
    v4 = v2;
    v11 = std::sync::mpmc::sync_channel(0x1, a2, v1);
    v7 = v11.field_0;
    v0 = v12;
    v8 = v0;
    v9 = v13;
    v10 = v14;
    v17 = <uu_sort::GlobalSettings as core::clone::Clone>::clone(a1);
    v11 = struct32 {
        field_0: v9
        field_8: v10
        field_16: v5
        field_24: v6
    };
    memcpy(&v15, &v17, 160);
    v18 = 0x8000000000000000;
    v17 = 0;
    v19 = 0;
    v16 = std::thread::Builder::spawn_unchecked(&v17, &v11);
    v17 = core::result::Result<T,E>::expect(&v16);
    return (*((a1 + 48) as &i64) == 0x8000000000000000 ? uu_sort::ext_sort::reader_writer(a0, a1, v1, v2, v7, v0, a2, a3) : uu_sort::ext_sort::reader_writer(a0, a1, v1, v2, v7, v0, a2, a3));
}
