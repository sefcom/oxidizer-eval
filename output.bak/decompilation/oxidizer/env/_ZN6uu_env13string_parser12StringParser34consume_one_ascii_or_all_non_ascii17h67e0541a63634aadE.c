fn uu_env::string_parser::StringParser::consume_one_ascii_or_all_non_ascii(a0: &Result<struct24, struct9>, a1: u32) -> u64 {
    let v0: struct16;  // [sp-0x70], Other Possible Types: i64
    let v1: i64;  // [sp-0x68]
    let v2: i64;  // [sp-0x60]
    let v3: Option<struct16>;  // [sp-0x58], Other Possible Types: i144, Result<struct17, struct9>
    let v4: i8;  // [bp-0x44]
    let v5: i64;  // [sp-0x40]
    let v6: i8;  // [sp-0x38]
    let v7: i32;  // [bp-0x37]
    let v8: i32;  // [sp-0x34]
    let v10: i64;  // rax
    let v11: i8;  // cl

    v0 = 0;
    v1 = 8;
    v2 = 0;
    v3 = uu_env::string_parser::StringParser::consume_chunk(a1);
    v10 = *((&v3 as &char + 8) as &i64);
    v11 = *((&v3 as &char + 16) as &i8);
    match v3 {
        Err(_) => {
            return Err(struct9 {
                field_0: v5
                field_8: v6
            });
        },
        Ok(_) => {
            v8 = v4;
            v7 = v3;
            v5 = v10;
            v6 = v11;
            if v5 {
                v0 = alloc::vec::Vec<T,A>::push(&v5);
            } else {
                v0 = alloc::vec::Vec<T,A>::push(&v5);
                return Ok(struct24 {
                    field_0: v0
                    field_16: v2
                });
            }
            v3 = uu_env::string_parser::StringParser::peek_chunk(a1);
            return Ok(struct24 {
                field_0: v0
                field_16: v2
            });
        },
    }
}
