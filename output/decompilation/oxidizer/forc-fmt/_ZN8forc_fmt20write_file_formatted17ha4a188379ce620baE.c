fn forc_fmt::write_file_formatted(a0: i64, a1: i64, a2: i64, a3: i64) -> u64 {
    let v0: u64;  // [bp-0x8]
    let v2: u64;  // rax
    let v3: u64;  // rax

    v0 = v2;
    v3 = std::fs::write(a0, a1, a2, a3);
    if v3 {
        return anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(v3);
    }
    return 0;
}
