fn ruff_python_formatter::comments::map::PartIndex::from_len(a0: i64) -> u64 {
    let v0: u64;  // [bp-0x8]

    if a0 >= 4294967295 {
        v0 = 4294967295;
        core::panicking::panic("assertion failed: value < u32::MAX as usize"); /* do not return */
    }
    return a0 + 1;
}
