fn uu_wc::files0_iter(a1: i32, a2: i64) -> : struct73 {
    let a0: u32;  // esi
    let v0: u64;  // [bp-0x78]
    let v1: u128;  // [bp-0x70]
    let v2: u128;  // [bp-0x60]
    let v3: u128;  // [bp-0x58]
    let v4: u8;  // [bp-0x50]
    let v5: u64;  // [bp-0x48]
    let v6: struct44;  // [bp-0x40]
    let v8: i64;  // r14
    let v9: u128;  // xmm0
    let v10: i64;  // rdi

    v8 = a1;
    v6 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x2000, a0);
    memcpy(&v4, &v6 as u8, 16);
    v2 = v6.field_16;
    v1 = *(&v6.field_0 as &i128);
    v0 = *((v8 + 16) as &i64);
    v9 = *(v8 as &i128);
    *((v10 + 64) as &u64) = v5;
    *((v10 + 48) as &u128) = v3;
    *((v10 + 32) as &i128) = *((&v1 as &char + 8) as &i128);
    *(v10 as &u128) = v9;
    *((v10 + 16) as &u64) = v0;
    *((v10 + 24) as &i64) = v1;
    *((v10 + 72) as &i8) = 0;
    return;
}
