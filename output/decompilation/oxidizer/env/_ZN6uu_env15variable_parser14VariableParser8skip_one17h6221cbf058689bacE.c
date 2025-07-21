fn uu_env::variable_parser::VariableParser::skip_one(a1: i64) -> : struct21 {
    let a0: i64;  // rdi
    let v0: Option<struct25>;  // [bp-0x20]
    let v1: u64;  // [bp-0x18]
    let v4: u64;  // rax
    let v5: u64;  // rax

    v0 = uu_env::string_parser::StringParser::consume_chunk(a1);
    v4 = 5;
    return struct32 {
        field_0: v5 as u32
        padding_4: <UNKNOWN>
        field_8: v1
        field_16: v1
        field_24: *((&v0 as &char + 16) as &i8)
    };
}
