fn uu_env::variable_parser::VariableParser::skip_one(a0: i64, a1: i64) -> u64 {
    let v0: i136;  // [sp-0x20], Other Possible Types: Result<struct17, struct9>
    let v2: i64;  // rax
    let v3: i8;  // cl
    let v4: i64;  // rax

    v0 = uu_env::string_parser::StringParser::consume_chunk(a1);
    match v0 {
        Ok(_) => {
            v4 = 8;
        },
        Err(_) => {
            v2 = *((&v0 as &char + 8) as &i64);
            v3 = *((&v0 as &char + 16) as &i8);
            *((a0 + 8) as &i64) = v2;
            *((a0 + 16) as &i64) = v2;
            *((a0 + 24) as &i8) = v3;
            v4 = 5;
        },
    }
    return struct4 {
        field_0: v4 as i32
    };
}
