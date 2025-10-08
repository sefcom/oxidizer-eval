fn forc_crypto::keys::vanity::HexMatcher::new(a1: &str, a2: &str) -> : struct48 {
    let a0: i64;  // rdi
    let v0: u64;  // [bp-0x78]
    let v1: u128;  // [bp-0x70]
    let v2: u64;  // [bp-0x68]
    let v3: u64;  // [bp-0x60]
    let v4: alloc::string::String;  // [bp-0x50]
    let v5: u64;  // [bp-0x40]
    let v6: alloc::string::String;  // [bp-0x38]
    let v8: u64;  // rsi
    let v9: u64;  // rdx

    v4 = alloc::str::<impl str>::to_lowercase(v8, v9);
    v6 = alloc::str::<impl str>::to_lowercase(a2);
    v0 = v5;
    v1 = *(&v6.vec.buf.inner.cap as &i128);
    v3 = v6.vec.len;
    return struct48 {
        field_0: *(&v4.vec.buf.inner.cap as &i128)
        field_16: v0
        field_24: v1 as i64
        field_32: v2
        field_40: v3
    };
}
