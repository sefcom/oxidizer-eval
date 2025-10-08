fn uu_stat::print_float(a0: i64, a1: u64, a2: u64, a3: u64, a4: u8) -> void {
    let v0: u128;  // [bp-0xb8]
    let v1: u64;  // [bp-0xa8]
    let v2: u64;  // [bp-0x80]
    let v3: i64;  // [bp-0x78]
    let v4: struct24;  // [bp-0x50]
    let v5: alloc::string::String;  // [bp-0x38]
    let v7: i64;  // rax
    let v8: u64;  // r8

    v7 = *((a0 + 3) as &i8);
    v2 = v8;
    v3 = v7;
    v4 = uu_stat::precision_trunc(a2, a3);
    v5 = format!("{}{}", &v2, &v4);
    v0 = *(&v5.vec.buf.inner.cap as &i128);
    v1 = v5.vec.len;
    uu_stat::pad_and_print(2, v5.vec.len, *((a0 + 2) as &i8), a1, a4);
    return;
}
