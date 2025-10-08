fn ruff_python_formatter::options::PyFormatOptions::from_extension(a1: i64, a2: i64) -> : struct15 {
    let a0: u64;  // rdi
    let v1: u8;  // al

    v1 = ruff_python_ast::PySourceType::try_from_path(a1, a2);
    ruff_python_formatter::options::PyFormatOptions::from_source_type(a0, (v1 == 3 ? 0 : v1));
    return;
}
