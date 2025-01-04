fn uu_df::filesystem::Filesystem::new(a0: &Option<struct232>, a1: void*, a2: &struct24) -> u64 {
    let v0: i192;  // [bp-0x1e8]
    let v1: i192;  // [sp-0x1d0], Other Possible Types: struct24
    let v2: struct49;  // [sp-0x1b8], Other Possible Types: i392
    let v3: i8;  // [bp-0x180]
    let v4: i8;  // [bp-0x178]
    let v5: i128;  // [sp-0xe8]
    let v6: i64;  // [sp-0xd8]
    let v7: i128;  // [sp-0xd0]
    let v8: i128;  // [sp-0xc0]
    let v9: i128;  // [sp-0xb0]
    let v10: i64;  // [sp-0xa0]
    let v11: i960;  // [bp-0x98]
    let v15: i64;  // rax

    if !*((a1 + 112) as &i64) {
        v15 = a1 + 24;
    } else {
        v15 = a1 + 96;
    }
    v1 = <alloc::string::String as core::clone::Clone>::clone(v15);
    v0 = v1;
    uucore::features::fsext::statfs();
    if v3 {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v11 = v4;
    v2 = uucore::features::fsext::FsUsage::new(&v11);
    v6 = *((a2 + 16) as &i64);
    v5 = *(a2 as &i128);
    memcpy(&v3, a1, 152);
    v7 = v2;
    v8 = *((&v2 as &char + 16) as &i128);
    v9 = *((&v2 as &char + 32) as &i128);
    v10 = v2;
    memcpy(a0, &v3, 232);
    return struct8 {
        field_0: 0x8000000000000000
    };
}
