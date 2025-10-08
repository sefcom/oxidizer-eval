fn ruff_python_formatter::string::docstring::CodeExampleKind::code(a0: i64) -> u64 {
    let v1: u64;  // rcx

    v1 = 0x8000000000000000 ^ *(a0 as &i64);
    if v1 && v1 == 1 {
        return ruff_python_formatter::string::docstring::CodeExampleRst::indented_code(a0);
    }
    return *((a0 + 16) as &i64);
}
