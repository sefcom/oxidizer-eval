fn uu_env::string_parser::StringParser::peek_char_at_pointer(a1: i64, a2: i64) -> : struct9 {
    let a0: i64;  // rsi
    let v0: struct32;  // [bp-0x30]
    let v1: i64;  // [bp-0x20]
    let v3: u32;  // eax
    let v4: i64;  // rdi, Other Possible Types: struct_2 *
    let v5: u8;  // al

    if *((a0 + 8) as &i64) < a1 {
        panic!("mid > len");
    }
    v0 = core::slice::<impl [T]>::split_at_unchecked(*(a0 as &i64), *((a0 + 8) as &i64), a1);
    if v0.field_24 {
        v3 = uu_env::native_int_str::get_char_from_native_int(*(v1 as &i8)) as i32;
        if v3 == 0x110000 {
            *(v4 as &i32) = 65533;
        } else {
            *(v4 as &u32) = v3;
        }
    } else {
        *(v4 as &i64) = *((a0 + 32) as &i64);
    }
    *((v4 + 8) as &u8) = v5;
    return;
}
