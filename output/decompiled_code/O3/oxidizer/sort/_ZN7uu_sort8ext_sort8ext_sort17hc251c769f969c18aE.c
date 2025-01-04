fn uu_sort::ext_sort::ext_sort(a0: &struct16, a1: void*, a2: &struct32, a3: u32) -> u64 {
    let v0: i64;  // [sp-0x218]
    let v1: i64;  // [sp-0x208]
    let v2: i64;  // [sp-0x1f8]
    let v3: i128;  // [sp-0x1e8]
    let v4: i64;  // [sp-0x1d8]
    let v5: i64;  // [sp-0x1d0]
    let v6: i64;  // [sp-0x1c8]
    let v7: i64;  // [sp-0x1c0]
    let v8: i64;  // [sp-0x1b8]
    let v9: i64;  // [sp-0x1b0]
    let v10: i128;  // [sp-0x1a8], Other Possible Types: struct32
    let v11: i64;  // [sp-0x1a0]
    let v12: i64;  // [sp-0x198]
    let v13: i64;  // [sp-0x190]
    let v14: i8;  // [bp-0x188]
    let v15: i192;  // [sp-0xe8], Other Possible Types: struct24
    let v16: struct8;  // [sp-0xd0], Other Possible Types: struct24, struct147, i1176
    let v17: i64;  // [sp-0xc0]
    let v19: i64;  // rdx
    let v20: i64;  // rcx
    let v21: i128;  // xmm0
    let v22: i64;  // rax
    let v23: i128;  // xmm0

    v10 = std::sync::mpmc::sync_channel(0x1, a2, a3);
    v2 = a0;
    v4 = v10;
    v5 = v11;
    v3 = *((&v10 as &char + 16) as &i128);
    v10 = std::sync::mpmc::sync_channel(0x1, v19, v20);
    v6 = v10;
    v1 = v11;
    v7 = v1;
    v8 = v10;
    v9 = v11;
    v16 = <uu_sort::GlobalSettings as core::clone::Clone>::clone(a1);
    v10 = v8;
    v11 = v9;
    v12 = v4;
    v13 = v5;
    memcpy(&v14, &v16, 160);
    v17 = 0x8000000000000000;
    v16 = struct8 {
        field_0: 0
    };
    v15 = std::thread::Builder::spawn_unchecked(&v16, &v10);
    v16 = core::result::Result<T,E>::expect(&v15);
    if *((a1 + 48) as &i64) != 0x8000000000000000 {
        v23 = *(a2 as &i128);
        v12 = *((a2 + 16) as &i128);
        v10 = v23;
        v0 = a3;
        v22 = uu_sort::ext_sort::reader_writer() as i64;
        return v22;
    }
    v21 = *(a2 as &i128);
    v12 = *((a2 + 16) as &i128);
    v10 = v21;
    v0 = a3;
    v22 = uu_sort::ext_sort::reader_writer() as i64;
    return v22;
}
