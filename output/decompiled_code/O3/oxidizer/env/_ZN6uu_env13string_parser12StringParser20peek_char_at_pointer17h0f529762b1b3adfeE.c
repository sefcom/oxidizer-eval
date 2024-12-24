fn uu_env::string_parser::StringParser::peek_char_at_pointer(a0: void*, a1: void*, a2: u32) -> u64 {
    let v0: struct32;  // [sp-0x30], Other Possible Types: u256
    let v3: u64;  // rax
    let v4: u8;  // al

    if a1->field_8 < a2 {
        panic!("mid > len");
    }
    v0 = core::slice::<impl [T]>::split_at_unchecked(a1->field_0, a1->field_8, a2);
    if !*((&v0 as &char + 24) as &i64) {
        a0->field_0 = a1->field_20;
        v4 = 0;
    } else {
        v3 = uu_env::native_int_str::get_char_from_native_int(*(*((&v0 as &char + 16) as &i64) as &i8));
        if v3 == 0x110000 {
            a0->field_0 = 65533;
        } else {
            a0->field_0 = v3;
        }
        v4 = v3 | -0x100 | 2;
    }
    a0->field_8 = v4;
    return a0;
}
