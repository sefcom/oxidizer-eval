fn uu_env::string_parser::StringParser::consume_chunk(a1: i64) -> Option<struct25> {
    let a0: i64;  // rsi
    let v0: struct40;  // [bp-0x48]
    let v1: struct32;  // [bp-0x40]
    let v2: core::fmt::Arguments;  // [bp-0x38]
    let v3: i8;  // [bp-0x37]
    let v4: core::fmt::rt::Argument;  // [bp-0x34]
    let v5: u8;  // [bp-0x30]
    let v7: void*;  // r15
    let v8: u32;  // ecx
    let v9: u64;  // rax
    let v10: u32;  // eax
    let v11: i64;  // rdi

    v7 = *((a0 + 32) as &i64);
    uu_env::string_parser::StringParser::get_chunk_with_length_at(a0, v7, v8);
    if !v0 {
        v10 = *(&v3 as &i32);
        *((v11 + 20) as &core::fmt::rt::Argument) = v4;
        *((v11 + 17) as &u32) = v10;
        uu_env::string_parser::StringParser::set_pointer(a0, v7 + *(&v5 as &i64));
    }
    *((v11 + 8) as &struct32) = v1;
    *((v11 + 16) as &core::fmt::Arguments) = v2;
    *(v11 as &u64) = v9;
    return;
}
