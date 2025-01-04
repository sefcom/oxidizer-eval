fn uu_env::string_parser::StringParser::skip_until_char_or_end(a0: &u64, a1: u32, a2: i64) -> u64 {
    let v0: u8;  // [sp-0x1d]
    let v1: u32;  // [sp-0x1c]
    let v2: u64;  // [sp-0x18]
    let v3: u64;  // [sp-0x10]
    let v5: u8;  // dl
    let v6: u64;  // rdx

    v1 = a1;
    if (uu_env::native_int_str::get_single_native_int_value(&v1) as i8 & 1) {
        v0 = v5;
        v2 = a0[2];
        v3 = a0[3] + v2;
        return uu_env::string_parser::StringParser::set_pointer(a0, (<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::position(&v2, &v0) == 1 ? v6 + a0[4] : a0[1]));
    }
    core::option::unwrap_failed(); /* do not return */
}
