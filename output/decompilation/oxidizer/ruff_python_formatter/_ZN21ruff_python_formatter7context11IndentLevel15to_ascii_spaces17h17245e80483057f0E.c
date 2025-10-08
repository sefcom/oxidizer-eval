fn ruff_python_formatter::context::IndentLevel::to_ascii_spaces(a0: u16, a1: u8) -> long long {
    let v1: u64;  // cc_ndep
    let v2: u32;  // edi

    if _ccall(0, 46, a1 as u64, (_ccall(2, 6, a0 as u64, 1, v1) as char ? 0 : (v2 & -0x10000 | (a0 - 1) as u32) as u64) & 65535, v1) as char {
        return a1 * (_ccall(2, 6, a0 as u64, 1, v1) as char ? 0 : v2 & -0x10000 | a0 - 1) & 0xffffffffffff0000 | 65535;
    }
    return a1 * (_ccall(2, 6, a0 as u64, 1, v1) as char ? 0 : v2 & -0x10000 | a0 - 1);
}
