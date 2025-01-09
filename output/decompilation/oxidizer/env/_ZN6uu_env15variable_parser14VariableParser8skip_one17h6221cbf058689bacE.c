fn uu_env::variable_parser::VariableParser::skip_one(a0: &struct21, a1: u32) -> u64 {
    let v0: i200;  // [sp-0x20], Other Possible Types: Result<struct17, struct9>
    let v2: i64;  // rax
    let v3: i8;  // cl

    v0 = uu_env::string_parser::StringParser::consume_chunk(a1);
    match v0 {
        Err(_) => {
            v2 = *((&v0 as &char + 8) as &i64);
            v3 = *((&v0 as &char + 16) as &i8);
            *((a0 + 8) as &i64) = v2;
            *((a0 + 16) as &i64) = v2;
            *((a0 + 24) as &i8) = v3;
        },
        Ok(_) => {
            return struct4 {
                field_0: v4 as i32
            };
        },
    }
}
