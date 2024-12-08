fn uu_df::filesystem::Filesystem::new(a0: &u64, a1: void*, a2: void*) -> u64 {
    let v0: i128;  // [sp-0x1e8]
    let v1: i64;  // [sp-0x1d8]
    let v2: i192;  // [sp-0x1d0], Other Possible Types: struct24
    let v3: i392;  // [sp-0x1b8], Other Possible Types: struct49
    let v4: i8;  // [bp-0x180]
    let v13: i128;  // [sp-0xe8]
    let v14: i64;  // [sp-0xd8]
    let v15: i128;  // [sp-0xd0]
    let v16: i128;  // [sp-0xc0]
    let v17: i128;  // [sp-0xb0]
    let v18: i64;  // [sp-0xa0]
    let v19: struct120;  // [bp-0x98]
    let v23: i64;  // rax

    v2 = <alloc::string::String as core::clone::Clone>::clone(v23);
    v1 = *((&v2 as &char + 16) as &i64);
    v0 = v2;
    uucore::features::fsext::statfs();
    if v4 {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v19 = struct120 {
        field_0: v5
        field_16: v6
        field_32: v7
        field_48: v8
        field_64: v9
        field_80: v10
        field_96: v11
        field_112: v12
    };
    v3 = uucore::features::fsext::FsUsage::new(&v19);
    v14 = *((a2 + 16) as &i64);
    v13 = *(a2 as &i128);
    memcpy(&v4, a1, 152);
    v15 = v3;
    v16 = *((&v3 as &char + 16) as &i128);
    v17 = *((&v3 as &char + 32) as &i128);
    v18 = v3;
    memcpy(a0, &v4, 232);
    return struct8 {
        field_0: 0x8000000000000000
    };
}
