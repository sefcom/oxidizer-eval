fn ruff_python_formatter::string::normalize::QuoteMetadataKind::regular(a1: i192, a2: i64) -> : struct9 {
    let a0: i64;  // rdi
    let v0: struct16;  // [bp-0x30]
    let v2: u32;  // ebp
    let v3: core::option::Option<&str>;  // r15d
    let v6: core::option::Option<u32>;  // rax:rax

    v0 = struct16 {
        field_0: a1
        field_8: a2 + a1
    };
    v2 = 0;
    v3 = 0;
    do {
        v6 = core::str::validations::next_code_point(&v0) as u128;
    } while ((v6 as i8 & 1));
    return struct12 {
        field_0: 2
        padding_1: <UNKNOWN>
        field_4: v3
        field_8: v2
    };
}
