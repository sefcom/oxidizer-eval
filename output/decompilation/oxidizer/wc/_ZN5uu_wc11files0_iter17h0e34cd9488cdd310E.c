fn uu_wc::files0_iter(a0: &struct73, a1: u64, a2: &struct24) -> int {
    let v0: iNone;  // [sp-0x88]
    let v1: i64;  // [sp-0x78]
    let v2: iNone;  // [sp-0x70]
    let v3: iNone;  // [sp-0x60]
    let v4: iNone;  // [sp-0x50]
    let v5: struct44;  // [sp-0x40]

    v5 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x2000, a1 as u64);
    v4 = *(&v5.field_0 as &i128);
    v3 = v5.field_16;
    v2 = *(&v5.field_0 as &i128);
    v1 = *((a2 + 16) as &i64);
    v0 = *(a2 as &i128);
    return struct73 {
        field_0: v0
        field_16: v1
        field_24: v2 as i64
        field_32: (&v2)[8] as i128
        field_48: (&v3)[8] as i128
        field_64: (&v4)[8] as i64
        field_72: 0
    };
}
