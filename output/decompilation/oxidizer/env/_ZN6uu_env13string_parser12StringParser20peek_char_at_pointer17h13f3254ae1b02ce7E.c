fn uu_env::string_parser::StringParser::peek_char_at_pointer(a1: i64, a2: i64) -> : struct9 {
    let a0: i64;  // rsi
    let v0: struct40;  // [bp-0x60]
    let v1: struct32;  // [bp-0x30]
    let v2: i64;  // [bp-0x20]
    let v4: u32;  // eax
    let v5: i64;  // rdi, Other Possible Types: struct_3 *
    let v6: u8;  // al

    if *((a0 + 8) as &i64) < a1 {
        v0 = struct40 {
            field_0: "mid > len"
            field_8: 1
            field_16: 8
            field_24: 0
        };
        panic!("mid > len");
    }
    v1 = core::slice::<impl [T]>::split_at_unchecked(*(a0 as &i64), *((a0 + 8) as &i64), a1);
    if v1.field_24 {
        v4 = uu_env::native_int_str::get_char_from_native_int(*(v2 as &i8)) as i32;
        if v4 == 0x110000 {
            *(v5 as &i32) = 65533;
        } else {
            *(v5 as &u32) = v4;
        }
    } else {
        *(v5 as &i64) = *((a0 + 32) as &i64);
    }
    *((v5 + 8) as &u8) = v6;
    return;
}
