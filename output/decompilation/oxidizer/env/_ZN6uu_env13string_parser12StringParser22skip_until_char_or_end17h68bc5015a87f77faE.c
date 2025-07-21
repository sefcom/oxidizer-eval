fn uu_env::string_parser::StringParser::skip_until_char_or_end(a1: i32) -> : struct16 {
    let a0: i64;  // rdi
    let v0: u32;  // [bp-0x1c]
    let v1: struct16;  // [bp-0x18]
    let v3: u64;  // rdx
    let v4: u64;  // rdx

    v0 = a1;
    if !(uu_env::native_int_str::get_single_native_int_value(&v0) & 1) {
        core::option::unwrap_failed(); /* do not return */
    }
    v4 = (<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::position(&v1 as u64, &vvar_22{reg 32}) == 1 ? v3 + *((a0 + 32) as &i64) : *((a0 + 8) as &i64));
    return uu_env::string_parser::StringParser::set_pointer(a0, v4);
}
