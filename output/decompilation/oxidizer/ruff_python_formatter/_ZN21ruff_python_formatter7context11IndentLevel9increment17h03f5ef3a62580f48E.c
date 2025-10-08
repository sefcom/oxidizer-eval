fn ruff_python_formatter::context::IndentLevel::increment(a0: u16) -> long long {
    let v1: u64;  // cc_op
    let v2: u64;  // cc_dep1
    let v3: u64;  // cc_dep2
    let v4: u64;  // cc_ndep
    let v5: u32;  // edi

    return (_ccall(5, 22, (a0 + 1) as u64, 0, _ccall(v1, v2, v3, v4)) as char ? v5 & -0x10000 | a0 + 1 : 65535);
}
