fn uu_sort::ext_sort::ext_sort(a0: u32, a1: void*, a2: &u64, a3: u32) -> u64 {
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
    let v10: i64;  // [sp-0x1a8], Other Possible Types: struct32
    let v11: i128;  // [bp-0x198]
    let v12: i8;  // [bp-0x188]
    let v13: i192;  // [sp-0xe8], Other Possible Types: struct24
    let v14: struct147;  // [sp-0xd0], Other Possible Types: struct24, i1176, struct8
    let v16: i64;  // rdx
    let v17: i64;  // rcx
    let v18: i128;  // xmm0
    let v19: i64;  // rax
    let v20: i128;  // xmm0

    v10 = std::sync::mpmc::sync_channel(1, a2, a3);
    v2 = a0;
    v4 = v10;
    v5 = v10.field_8;
    v3 = *((&v10 as &char + 16) as &i128);
    v10 = std::sync::mpmc::sync_channel(1, v16, v17);
    v6 = v10;
    v1 = v10.field_8;
    v7 = v1;
    v8 = v10;
    v9 = v10.field_8;
    v14 = <uu_sort::GlobalSettings as core::clone::Clone>::clone(a1);
    v10 = v8;
    v10.field_8 = vvar_160{stack -432};
    v10.field_16 = vvar_148{stack -472};
    v10.field_24 = vvar_149{stack -464};
    memcpy(&v12, &v14, 160);
    v14.field_16 = 0x8000000000000000;
    v14 = struct8 {
        field_0: 0
    };
    v13 = std::thread::Builder::spawn_unchecked(&v14, &v10);
    v14 = core::result::Result<T,E>::expect(&v13);
    if *((a1 + 48) as &i64) != 0x8000000000000000 {
        v20 = *(a2 as &i128);
        v11 = *((a2 + 16) as &i128);
        v10 = v20;
        v0 = a3;
        v19 = uu_sort::ext_sort::reader_writer() as i64;
        return v19;
    }
    v18 = *(a2 as &i128);
    v11 = *((a2 + 16) as &i128);
    v10 = v18;
    v0 = a3;
    v19 = uu_sort::ext_sort::reader_writer() as i64;
    return v19;
}
