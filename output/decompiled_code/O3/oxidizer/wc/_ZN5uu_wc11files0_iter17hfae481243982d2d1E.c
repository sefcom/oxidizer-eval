fn uu_wc::files0_iter(a0: u64, a1: u64, a2: u64, a3: u64) -> int {
    let v0: i128;  // [sp-0x98]
    let v1: i64;  // [sp-0x88]
    let v2: i128;  // [sp-0x80]
    let v3: i128;  // [sp-0x70]
    let v4: i128;  // [sp-0x60]
    let v5: i64;  // [sp-0x50]
    let v6: struct49;  // [sp-0x48], Other Possible Types: i392
    let v8: i128;  // xmm0
    let v9: i128;  // xmm0

    v6 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x2000, a1, a2);
    v5 = v6;
    v8 = v6;
    v4 = *((&v6 as &char + 32) as &i128);
    v3 = *((&v6 as &char + 16) as &i128);
    v2 = v8;
    v1 = *((a3 + 16) as &i64);
    v9 = *(a3 as &i128);
    v0 = v9;
    return struct81 {
        field_0: v0
        field_16: v1
        field_24: v2
        field_32: *((&v2 as &char + 8) as &i128)
        field_48: *((&v3 as &char + 8) as &i128)
        field_64: *((&v4 as &char + 8) as &i64)
        field_72: v5
        field_80: 0
    };
}
