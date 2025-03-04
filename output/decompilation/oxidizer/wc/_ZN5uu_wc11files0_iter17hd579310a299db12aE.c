fn uu_wc::files0_iter(a0: &struct81, a1: u64, a2: u64, a3: u64) -> int {
    let v0: iNone;  // [sp-0x98]
    let v1: i64;  // [sp-0x88]
    let v2: iNone;  // [sp-0x80]
    let v3: iNone;  // [sp-0x70]
    let v4: iNone;  // [sp-0x60]
    let v5: i64;  // [sp-0x50]
    let v6: struct49;  // [sp-0x48]

    v6 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x2000, a1, a2 as u64);
    v5 = v6.field_0;
    v4 = *(&v6.field_32 as &i128);
    v3 = v6.field_16;
    v2 = *(&v6.field_0 as &i128);
    v1 = *((a3 + 16) as &i64);
    v0 = *(a3 as &i128);
    return struct81 {
        field_0: v0
        field_16: v1
        field_24: v2 as i64
        field_32: (&v2)[8] as i128
        field_48: (&v3)[8] as i128
        field_64: (&v4)[8] as i64
        field_72: v5
        field_80: 0
    };
}
