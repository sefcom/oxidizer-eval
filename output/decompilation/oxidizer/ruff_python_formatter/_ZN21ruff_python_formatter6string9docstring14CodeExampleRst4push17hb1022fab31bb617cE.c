fn ruff_python_formatter::string::docstring::CodeExampleRst::push(a1: i64) -> : struct16 {
    let a0: u64;  // rdi
    let v0: struct56;  // [bp-0x38]

    v0 = struct56 {
        field_0: *(a1 as &i128)
        field_16: *((a1 + 16) as &i128)
        field_32: *((a1 + 32) as &i64)
        field_40: *(a1 as &i128)
        field_48: <UNKNOWN>
    };
    alloc::vec::Vec<T,A>::push(a0, &v0, "crates/ruff_python_formatter/src/string/docstring.rs");
    return;
}
