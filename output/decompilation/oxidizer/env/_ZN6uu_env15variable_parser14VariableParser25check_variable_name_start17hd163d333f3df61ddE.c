fn uu_env::variable_parser::VariableParser::check_variable_name_start(a0: i64, a1: i64) -> long long {
    let v0: u32;  // [bp-0x2c]
    let v1: struct24;  // [bp-0x28]
    let v3: u64;  // rax
    let v6: u32;  // rdx
    let v7: struct32;  // rax
    let v8: core::fmt::Arguments;  // ecx
    let v9: u32;  // ecx
    let v10: &mut [u8];  // rax:rdx

    v3 = uu_env::variable_parser::VariableParser::get_current_char(a1);
    v0 = 0;
    v10 = core::char::methods::encode_utf8_raw(v3, &v0, v3 - 48);
    v1 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v10.data_ptr, v6);
    v7 = v1.field_16;
    v8 = 7;
    return struct40 {
        field_0: v9
        padding_4: <UNKNOWN>
        field_8: *((a1 + 32) as &i64)
        field_16: *(&v1.field_0 as &i128)
        field_32: v7
    };
}
