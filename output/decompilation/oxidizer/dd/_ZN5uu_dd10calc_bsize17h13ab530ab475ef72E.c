fn uu_dd::calc_bsize(a0: i64, a1: i64) -> long long {
    let v0: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0x18]
    let v2: u64;  // rax
    let v3: u64;  // rax
    let v4: u64;  // rcx

    v0 = v2;
    v3 = gcd::binary_usize(a0, a1);
    v4 = v3;
    return a1 * (!(v3 | a0) >> 32 ? ((0 CONCAT a0) % (v4 & 4294967295) CONCAT (0 CONCAT a0) / (v4 & 4294967295)) & 4294967295 : (0 CONCAT a0) % v4 CONCAT (0 CONCAT a0) / v4);
}
