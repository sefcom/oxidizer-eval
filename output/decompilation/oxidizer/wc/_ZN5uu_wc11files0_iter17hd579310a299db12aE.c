fn uu_wc::files0_iter(a1: i64, a2: i32, a3: i64) -> : struct81 {
    let a0: i64;  // rdi
    let v0: struct44;  // [bp-0x88]
    let v1: u128;  // [bp-0x80]
    let v2: u128;  // [bp-0x70]
    let v3: u128;  // [bp-0x68]
    let v4: u8;  // [bp-0x60]
    let v5: u64;  // [bp-0x58]
    let v6: u64;  // [bp-0x50]
    let v7: struct49;  // [bp-0x48]
    let v9: u128;  // xmm0
    let v10: u64;  // rax

    v7 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x2000, a1, a2);
    v6 = v7.field_0;
    memcpy(&v4, &v7 as u8, 16);
    v2 = v7.field_16;
    v1 = *(&v7.field_0 as &i128);
    v0 = *((a3 + 16) as &i64);
    v9 = *(a3 as &i128);
    v10 = v1;
    return struct82 {
        field_0: v9
        field_16: v0
        field_24: v10
        field_32: *((&v1 as &char + 8) as &i128)
        field_48: v3
        field_64: v5
        field_72: v6
        field_80: 0
    };
}
