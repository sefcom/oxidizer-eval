fn uu_df::filesystem::Filesystem::new(a0: &Option<struct232>, a1: void*, a2: &struct24) -> u64 {
    let v0: struct24;  // [bp-0x1e8]
    let v1: struct24;  // [sp-0x1d0]
    let v2: i392;  // [sp-0x1b8], Other Possible Types: struct49
    let v3: Result<struct120, struct24>;  // [sp-0x180], Other Possible Types: i968
    let v4: i128;  // [sp-0xe8]
    let v5: i64;  // [sp-0xd8]
    let v6: i128;  // [sp-0xd0]
    let v7: i128;  // [sp-0xc0]
    let v8: i128;  // [sp-0xb0]
    let v9: i64;  // [sp-0xa0]
    let v10: struct120;  // [bp-0x98]
    let v14: i64;  // rax

    if !*((a1 + 112) as &i64) {
        v14 = a1 + 24;
    } else {
        v14 = a1 + 96;
    }
    v1 = <alloc::string::String as core::clone::Clone>::clone(v14);
    *(&v0.field_0 as &struct24) = struct24 {
        field_0: v1
        field_16: *((&v1 as &char + 16) as &i64)
    };
    v3 = uucore::features::fsext::statfs(&v0);
    return struct8 {
        field_0: 0x8000000000000000
    };
    v10 = struct120 {
        field_0: *((&v3 as &char + 8) as &i128)
        field_16: *((&v3 as &char + 24) as &i128)
        field_32: *((&v3 as &char + 40) as &i128)
        field_48: *((&v3 as &char + 56) as &i128)
        field_64: *((&v3 as &char + 72) as &i128)
        field_80: *((&v3 as &char + 88) as &i128)
        field_96: *((&v3 as &char + 104) as &i128)
        field_112: v3
    };
    v2 = uucore::features::fsext::FsUsage::new(&v10);
    v5 = *((a2 + 16) as &i64);
    v4 = *(a2 as &i128);
    memcpy(&v3, a1, 152);
    v6 = v2;
    v7 = *((&v2 as &char + 16) as &i128);
    v8 = *((&v2 as &char + 32) as &i128);
    v9 = v2;
    memcpy(a0, &v3, 232);
}
