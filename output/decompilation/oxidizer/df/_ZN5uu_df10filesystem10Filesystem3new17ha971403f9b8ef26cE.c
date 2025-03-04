fn uu_df::filesystem::Filesystem::new(a0: &struct232, a1: void*, a2: &struct24) -> u64 {
    let v0: struct24;  // [sp-0x1e8]
    let v1: struct24;  // [sp-0x1d0]
    let v2: struct49;  // [sp-0x1b8]
    let v3: struct128;  // [sp-0x180]
    let v4: iNone;  // [sp-0xe8]
    let v5: i64;  // [sp-0xd8]
    let v6: iNone;  // [sp-0xd0]
    let v7: iNone;  // [sp-0xc0]
    let v8: iNone;  // [sp-0xb0]
    let v9: i64;  // [sp-0xa0]
    let v10: iNone;  // [sp-0x98]
    let v12: i64;  // rsi

    v12 = a1 + 96;
    if !*((a1 + 112) as &i64) {
        v12 = a1 + 24;
    }
    v1 = <alloc::string::String as core::clone::Clone>::clone(v12);
    v0 = v1;
    v3 = uucore::features::fsext::statfs(&v0);
    if v3.field_0 {
        return a0;
    }
    v10 = *(&v3.field_8 as &i960);
    v2 = uucore::features::fsext::FsUsage::new(&v10);
    v5 = *((a2 + 16) as &i64);
    v4 = *(a2 as &i128);
    memcpy(&v3, a1, 152);
    v6 = v2.field_0;
    v7 = *(&v2.field_16 as &i128);
    v8 = *((&v2.field_24 as &char + 8) as &i128);
    v9 = v2.field_0 as i64;
    memcpy(a0, &v3, 232);
    return a0;
}
