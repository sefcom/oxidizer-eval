fn uu_wc::files0_iter(a1: i64, a2: &struct24) -> : struct73 {
    let a0: i64;  // rdi
    let v0: u64;  // [bp-0x78]
    let v1: u128;  // [bp-0x70]
    let v2: u128;  // [bp-0x60]
    let v3: u128;  // [bp-0x50]
    let v4: u64;  // [bp-0x48]
    let v5: struct44;  // [bp-0x40]
    let v6: u128;  // [bp-0x30]
    let v8: u128;  // xmm0

    v5 = std::io::buffered::bufreader::BufReader<R>::with_capacity(a1);
    v3 = *(&v5.field_32 as &i128);
    v2 = v6;
    v1 = *(&v5.field_0 as &i128);
    v0 = *((a2 + 16) as &i64);
    v8 = *(a2 as &i128);
    return struct80 {
        field_0: v8
        field_16: v0
        field_24: v1 as i64
        field_32: *((&v1 as &char + 8) as &i128)
        field_48: *((&v2 as &char + 8) as &i128)
        field_64: v4
        field_72: 0
    };
}
