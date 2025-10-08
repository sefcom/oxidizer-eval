fn uu_od::open_input_peek_reader(a1: i64, a2: i64, a3: i64, a4: i64, a5: i64) -> : struct112 {
    let a0: i64;  // rdi
    let v0: struct16;  // [bp-0x88]
    let v1: struct48;  // [bp-0x78]
    let v2: u64;  // [bp-0x48]
    let v3: u8;  // [bp-0x40]

    core::iter::traits::iterator::Iterator::collect(&v3, a1, a1 + a2 * 24);
    v1 = uu_od::multifilereader::MultifileReader::new(&v3);
    v2 = a3;
    v0 = struct16 {
        field_0: a4
        field_8: a5
    };
    std::io::buffered::bufreader::BufReader<R>::with_capacity(a0, &v0);
    *((a0 + 112) as &i64) = 0;
    *((a0 + 120) as &i64) = 1;
    *((a0 + 128) as &i64) = 0;
    return;
}
