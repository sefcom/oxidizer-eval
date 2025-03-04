fn uu_env::string_parser::StringParser::consume_one_ascii_or_all_non_ascii(a0: &struct24, a1: u32) -> u64 {
    let v0: i64;  // [sp-0x70]
    let v1: struct16;  // [sp-0x70]
    let v2: i64;  // [sp-0x68]
    let v3: i64;  // [sp-0x60]
    let v4: Option<struct16>;  // [sp-0x58], Other Possible Types: Result<struct17, struct9>
    let v5: i64;  // [sp-0x40]
    let v6: i8;  // [sp-0x38]
    let v7: i32;  // [bp-0x37]
    let v8: i32;  // [sp-0x34]
    let v10: i64;  // rax
    let v11: i8;  // cl

    v0 = 0;
    v2 = 8;
    v3 = 0;
    loop {
        v4 = uu_env::string_parser::StringParser::consume_chunk(a1);
        v10 = *((&v4 as &char + 8) as &i64);
        v11 = *((&v4 as &char + 16) as &i8);
        v8 = *((&v4 as &char + 20) as &i32);
        *(&v7 as &i32) = *((&v4 as &char + 17) as &i32);
        v5 = v10;
        v6 = v11;
        if v5 {
            v1 = alloc::vec::Vec<T,A>::push(&v5);
        } else {
            v1 = alloc::vec::Vec<T,A>::push(&v5);
            if *(&v6 as &i32) < 128 {
                break;
            }
        }
        v4 = uu_env::string_parser::StringParser::peek_chunk(a1);
        if !(v4 as i64) || !(*((&v4 as &char + 8) as &i64)) && !(*((&v4 as &char + 16) as &i32) > 127) {
            break;
        }
        continue;
        if *((&v4 as &char + 16) as &i32) <= 127 {
            break;
        }
    }
    return struct24 {
        field_0: v1 as i128
        field_16: v3
    };
}
