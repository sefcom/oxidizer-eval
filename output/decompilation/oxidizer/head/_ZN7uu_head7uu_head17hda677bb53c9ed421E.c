fn uu_head::uu_head(a0: &struct48) -> u64 {
    let v0: u8;  // [bp-0xd6]
    let v1: u8;  // [bp-0xd5]
    let v2: u8;  // [bp-0xd4]
    let v3: i64;  // [bp-0xd0]
    let v19: u64;  // rax
    let v20: core::fmt::rt::Argument;  // r14, Other Possible Types: struct_1 *
    let v21: u64;  // rbp

    v19 = *((a0 + 32) as &i64);
    if !v19 {
        return 0;
    }
    v20 = *((a0 + 24) as &i64);
    v21 = v20 + v19 * 24;
    v20 += 24;
    v1 = *((a0 + 42) as &i8);
    v0 = (*((a0 + 40) as &i8) ^ 1) & v19 != 1 | *((a0 + 41) as &i8);
    v3 = &v2;
}
