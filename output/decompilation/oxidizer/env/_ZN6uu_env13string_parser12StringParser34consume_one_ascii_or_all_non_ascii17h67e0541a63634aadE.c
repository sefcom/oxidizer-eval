fn uu_env::string_parser::StringParser::consume_one_ascii_or_all_non_ascii(a0: i64, a1: i64) -> long long {
    let v0: i64;  // [bp-0x78]
    let v1: void*;  // [bp-0x70]
    let v2: u128;  // [bp-0x70], Other Possible Types: struct16
    let v3: u64;  // [bp-0x68]
    let v4: void*;  // [bp-0x60]
    let v5: u64;  // [bp-0x58]
    let v6: u64;  // [bp-0x50]
    let v7: u8;  // [bp-0x48]
    let v8: u24;  // [bp-0x47]
    let v9: u32;  // [bp-0x44]
    let v10: u64;  // [bp-0x40]
    let v11: u8;  // [bp-0x38]
    let v12: u32;  // [bp-0x37]
    let v13: u32;  // [bp-0x34]
    let v15: void*;  // rdx
    let v16: void*;  // rdx

    v1 = 0;
    v3 = 8;
    v4 = 0;
    do {
        uu_env::string_parser::StringParser::consume_chunk(a1, v15);
        if v5 {
            *((v0 + 8) as &u64) = v6;
            *((v0 + 16) as &u8) = v7;
            *(v0 as &i64) = 0x8000000000000000;
            return a0;
        }
        v13 = v9;
        v12 = *(&v8 as &i32);
        v10 = v6;
        v11 = v7;
        if v6 {
            v2 = alloc::vec::Vec<T,A>::push(&v10);
        } else {
            v2 = alloc::vec::Vec<T,A>::push(&v10);
            if *(&v11 as &i32) < 128 {
                break;
            }
        }
    } while ((uu_env::string_parser::StringParser::peek_chunk(a1, v16), v5 && (v6 || *(&v7 as &i32) > 127)));
    *((v0 + 16) as &i64) = 0;
    *(v0 as &u128) = v2;
    return a0;
}
