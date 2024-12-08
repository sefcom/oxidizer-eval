fn uu_env::string_parser::StringParser::consume_one_ascii_or_all_non_ascii(a0: i64, a1: i64) -> u64 {
    let v0: struct16;  // [sp-0x70], Other Possible Types: i64
    let v1: i64;  // [sp-0x68]
    let v2: i64;  // [sp-0x60]
    let v3: i128;  // [sp-0x58], Other Possible Types: Option<struct16>, Result<struct17, struct9>
    let v4: i8;  // [bp-0x47]
    let v5: i32;  // [bp-0x44]
    let v6: i64;  // [sp-0x40]
    let v7: i8;  // [sp-0x38]
    let v8: i32;  // [bp-0x37]
    let v9: i32;  // [sp-0x34]
    let v11: i64;  // rax
    let v12: i8;  // cl
    let v13: i32;  // edx
    let v15: i64;  // rbx

    v0 = 0;
    v1 = 8;
    v2 = 0;
    do {
        v3 = uu_env::string_parser::StringParser::consume_chunk(a1);
        v11 = *((&v3 as &char + 8) as &i64);
        v12 = *((&v3 as &char + 16) as &i8);
        match v3 {
            Err(_) => {
                v15 = a0;
                *((v15 + 8) as &i64) = v6;
                *((v15 + 16) as &i8) = v7;
                *(v15 as &i64) = 0x8000000000000000;
                return v15;
            },
            Ok(_) => {
                v13 = v4;
                v9 = v5;
                v8 = v13;
                v6 = v11;
                v7 = v12;
            },
        }
        if !v6 {
            v0 = alloc::vec::Vec<T,A>::push(&v6, v13);
            if v7 < 128 {
                break;
            }
        } else {
            v0 = alloc::vec::Vec<T,A>::push(&v6, v13);
        }
    } while ((v3 = uu_env::string_parser::StringParser::peek_chunk(a1), v3 && (*((&v3 as &char + 8) as &i64) || *((&v3 as &char + 16) as &i32) > 127)));
    v15 = a0;
    *((v15 + 16) as &i64) = v2;
    *(v15 as &i128) = v0;
    return v15;
}
