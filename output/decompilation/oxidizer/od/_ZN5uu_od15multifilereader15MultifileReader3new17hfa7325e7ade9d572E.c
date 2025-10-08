fn uu_od::multifilereader::MultifileReader::new(a0: i64, a1: i64) -> double {
    let v0: struct16;  // [bp-0x38]
    let v1: u64;  // [bp-0x28]
    let v2: void*;  // [bp-0x20]
    let v3: i8;  // [bp-0x18]
    let v4: u8;  // [bp-0x10]
    let v6: iNone;  // xmm1
    let v7: u128;  // xmm0

    v1 = *((a1 + 16) as &i64);
    v2 = 0;
    v4 = 0;
    v0 = uu_od::multifilereader::MultifileReader::next_file();
    v6 = *(&v1 as &i128);
    return struct48 {
        field_0: v7
        field_16: v6
        field_32: *(&v3 as &i128)
    };
}
