fn uu_wc::files0_iter(a1: i32, a2: &struct24) -> : struct73 {
    let a0: u32;  // esi
    let v0: u64;  // [bp-0x78]
    let v1: u128;  // [bp-0x70]
    let v2: u128;  // [bp-0x60]
    let v3: u128;  // [bp-0x50]
    let v4: u64;  // [bp-0x48]
    let v5: struct44;  // [bp-0x40]
    let v6: u128;  // [bp-0x30]
    let v8: i64;  // r14
    let v9: u128;  // xmm0
    let v10: i64;  // rdi

    v8 = a1;
    v5 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x2000, a0);
    v3 = *(&v5.field_32 as &i128);
    v2 = v6;
    v1 = *(&v5.field_0 as &i128);
    v0 = *((v8 + 16) as &i64);
    v9 = *(v8 as &i128);
    *((v10 + 64) as &u64) = v4;
    *((v10 + 48) as &i128) = *((&v2 as &char + 8) as &i128);
    *((v10 + 32) as &i128) = *((&v1 as &char + 8) as &i128);
    *(v10 as &u128) = v9;
    *((v10 + 16) as &u64) = v0;
    *((v10 + 24) as &i64) = v1;
    *((v10 + 72) as &i8) = 0;
    return;
}
