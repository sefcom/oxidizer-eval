fn uu_env::string_parser::StringParser::peek_char_at_pointer(a1: i64, a2: i64) -> : struct9 {
    let a0: i64;  // rdi
    let v0: struct32;  // [bp-0x30]
    let v1: i64;  // [bp-0x20]
    let v3: u32;  // eax

    if a2 > *((a1 + 8) as &i64) {
        panic!("mid > len");
    }
    v0 = core::slice::<impl [T]>::split_at_unchecked(*(a1 as &i64), *((a1 + 8) as &i64), a2);
    if !v0.field_24 {
        return struct16 {
            field_0: *((a1 + 32) as &i64)
            field_8: 0
        };
    }
    v3 = uu_env::native_int_str::get_char_from_native_int(*(v1 as &i8));
    if v3 != 0x110000 {
        return struct8 {
            field_0: v3
            field_8: <UNKNOWN>
        };
    }
    return struct4 {
        field_0: 65533
    };
}
