fn uu_od::multifilereader::MultifileReader::new(a0: &struct48, a1: u64) -> int {
    let v0: struct16;  // [sp-0x38]
    let v1: u64;  // [sp-0x28]
    let v2: void*;  // [sp-0x20]
    let v4: u8;  // [sp-0x10]
    let v6: u128;  // xmm0
    let v7: u128;  // xmm1

    v1 = a1->field_10;
    v6 = a1->field_0;
    v2 = 0;
    v4 = 0;
    v0 = uu_od::multifilereader::MultifileReader::next_file();
    v7 = *(&v1 as &i128);
    return struct48 {
        field_0: v8
        field_16: v7
        field_32: v3
    };
}
