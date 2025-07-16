fn uu_env::split_iterator::SplitIterator::skip_one(a1: i64) -> : struct21 {
    let a0: i64;  // rdi
    let v0: u64;  // [bp-0x38]
    let v1: u64;  // [bp-0x30]
    let v2: u8;  // [bp-0x28]
    let v3: u32;  // [bp-0x27]
    let v4: u32;  // [bp-0x24]
    let v5: u64;  // [bp-0x20]
    let v6: u64;  // [bp-0x18]
    let v7: u8;  // [bp-0x10]
    let v8: i8;  // [bp-0xf]
    let v9: i8;  // [bp-0xc]
    let v11: u64;  // rax
    let v12: u64;  // rax

    uu_env::string_parser::StringParser::consume_one_ascii_or_all_non_ascii(&v5, a1 + 24);
    if v5 != 0x8000000000000000 {
        v4 = *(&v9 as &i32);
        v3 = *(&v8 as &i32);
        v0 = v5;
        v1 = v6;
        v2 = v7;
    }
    v11 = 5;
    return struct25 {
        field_0: v12 as u32
        field_8: v6
        field_16: v6
        field_24: v7
    };
}
