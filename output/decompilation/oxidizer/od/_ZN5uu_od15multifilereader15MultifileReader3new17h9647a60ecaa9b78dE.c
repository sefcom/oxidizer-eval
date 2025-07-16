fn uu_od::multifilereader::MultifileReader::new(a1: i64) -> : struct48 {
    let a0: i64;  // rsi
    let v0: struct16;  // [bp-0x38]
    let v1: u64;  // [bp-0x28]
    let v2: &[u8];  // [bp-0x20]
    let v3: i8;  // [bp-0x18]
    let v4: u8;  // [bp-0x10]
    let v6: u128;  // xmm1
    let v7: i64;  // rdi
    let v8: u128;  // xmm0

    v1 = *((a0 + 16) as &i64);
    v2 = 0;
    v4 = 0;
    v0 = uu_od::multifilereader::MultifileReader::next_file();
    v6 = *(&v1 as &i128);
    *((v7 + 32) as &i128) = *(&v3 as &i128);
    *((v7 + 16) as &u128) = v6;
    *(v7 as &u128) = v8;
    return;
}
