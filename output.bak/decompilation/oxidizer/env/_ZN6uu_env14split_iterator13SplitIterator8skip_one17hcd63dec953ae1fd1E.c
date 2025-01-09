fn uu_env::split_iterator::SplitIterator::skip_one(a0: &struct21, a1: u32) -> u64 {
    let v0: i64;  // [sp-0x38]
    let v1: i64;  // [sp-0x30]
    let v2: i8;  // [sp-0x28]
    let v3: i32;  // [bp-0x27]
    let v4: i32;  // [sp-0x24]
    let v5: i200;  // [sp-0x20], Other Possible Types: Result<struct24, struct9>
    let v7: i64;  // rdx
    let v8: i64;  // rax
    let v9: i8;  // cl

    v5 = uu_env::string_parser::StringParser::consume_one_ascii_or_all_non_ascii(a1 + 24);
    v7 = v5;
    v8 = *((&v5 as &char + 8) as &i64);
    v9 = *((&v5 as &char + 16) as &i8);
    match v5 {
        Err(_) => {
            *((a0 + 8) as &i64) = v1;
            *((a0 + 16) as &i64) = v1;
            *((a0 + 24) as &i8) = v2;
        },
        Ok(_) => {
            v4 = *((&v5 as &char + 20) as &i32);
            v3 = *((&v5 as &char + 17) as &i32);
            v0 = v7;
            v1 = v8;
            v2 = v9;
        },
    }
    return struct4 {
        field_0: v10 as i32
    };
}
