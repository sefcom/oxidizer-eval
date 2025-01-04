fn uu_wc::files0_iter(a0: &struct73, a1: u64, a2: &struct24) -> int {
    let v0: i128;  // [sp-0x88]
    let v1: i64;  // [sp-0x78]
    let v2: i128;  // [sp-0x70]
    let v3: i128;  // [sp-0x60]
    let v4: i128;  // [sp-0x50]
    let v5: i352;  // [sp-0x40], Other Possible Types: struct44
    let v7: i128;  // xmm0
    let v8: i128;  // xmm0

    v5 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x2000, a1);
    v7 = v5;
    v4 = v5;
    v3 = *((&v5 as &char + 16) as &i128);
    v2 = v7;
    v1 = *((a2 + 16) as &i64);
    v8 = *(a2 as &i128);
    v0 = v8;
    return struct73 {
        field_0: v0
        field_16: v1
        field_24: v2
        field_32: *((&v2 as &char + 8) as &i128)
        field_48: *((&v3 as &char + 8) as &i128)
        field_64: *((&v4 as &char + 8) as &i64)
        field_72: 0
    };
}
