fn flealib::fileencrypter::FileEncrypter::new(a0: i64, a1: i64) -> long long {
    let v0: u64;  // [bp-0x48]
    let v1: void*;  // [bp-0x40]
    let v3: u128;  // xmm0

    v0 = *((a1 + 16) as &i64);
    if *((a1 + 16) as &i64) != 32 {
        v1 = 0;
        core::panicking::assert_failed(0, &v0, &g_450fc0, &v1, "/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/generic-array-0.14.7/src/lib.rs"); /* do not return */
    }
    v3 = *(*((a1 + 8) as &i64) as &i128);
    return struct32 {
        field_0: v3
        field_16: *((*((a1 + 8) as &i64) + 16) as &i128)
    };
}
