fn uu_env::string_expander::StringExpander::put_one_char(a0: i64, a1: i32, a2: i64) -> u64 {
    let v0: i32;  // [sp-0x2c]
    let v1: struct24;  // [sp-0x28], Other Possible Types: i192
    let v3: i64;  // rdx

    v0 = 0;
    v1 = <T as alloc::slice::hack::ConvertVec>::to_vec(core::char::methods::encode_utf8_raw(a1, &v0), v3);
    return uu_env::string_expander::StringExpander::put_string(a0, &v1, v3);
}
